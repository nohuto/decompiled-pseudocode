/*
 * XREFs of MmSecureVirtualMemoryAgainstWrites @ 0x1408F87C4
 * Callers:
 *     AlpcpExposeViewAttributeInSenderContext @ 0x1408AA7F0 (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcpPrepareViewForDelivery @ 0x1408AF1C8 (AlpcpPrepareViewForDelivery.c)
 * Callees:
 *     MiVadSupportsPrivateCommit @ 0x140239D80 (MiVadSupportsPrivateCommit.c)
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     MiObtainReferencedVadEx @ 0x1402A7A60 (MiObtainReferencedVadEx.c)
 *     MiUnlockAndDereferenceVad @ 0x1403205C0 (MiUnlockAndDereferenceVad.c)
 *     KeStackAttachProcess @ 0x140348CD0 (KeStackAttachProcess.c)
 *     MiSetReadOnlyOnSectionView @ 0x14037D0D8 (MiSetReadOnlyOnSectionView.c)
 *     MiVadMapsLargeImage @ 0x1403D9300 (MiVadMapsLargeImage.c)
 *     MiReadVadFlags2 @ 0x140455FA8 (MiReadVadFlags2.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     MiIsRangeFullyCommitted @ 0x1408F8634 (MiIsRangeFullyCommitted.c)
 *     MiCheckSecuredVad @ 0x1408F8A18 (MiCheckSecuredVad.c)
 *     MiAddSecureEntry @ 0x1408F8CA0 (MiAddSecureEntry.c)
 *     MiUnsecureVirtualMemoryAgainstWrites @ 0x140A14A8C (MiUnsecureVirtualMemoryAgainstWrites.c)
 */

__int64 __fastcall MmSecureVirtualMemoryAgainstWrites(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // r13d
  unsigned __int64 v4; // rbp
  int v5; // r12d
  __int64 v7; // rdi
  unsigned __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rcx
  int OnlyOnSectionView; // [rsp+30h] [rbp-88h] BYREF
  _KPROCESS *Process; // [rsp+38h] [rbp-80h]
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-78h] BYREF

  OnlyOnSectionView = 0;
  v3 = a3;
  v4 = a2 & 0xFFFFFFFFFFFFF000uLL;
  v5 = a2;
  memset(&ApcState, 0, sizeof(ApcState));
  if ( (a2 & 0xFFFFFFFFFFFFF000uLL) != a2 || (a3 & 0xFFF) != 0 )
    return 0LL;
  v7 = 0LL;
  v8 = (a2 + a3 - 1) | 0xFFF;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( Process == (_KPROCESS *)a1 )
    Process = 0LL;
  else
    KeStackAttachProcess((PRKPROCESS)a1, &ApcState);
  v9 = MiObtainReferencedVadEx(v4, 0, &OnlyOnSectionView);
  v10 = v9;
  if ( v9 )
  {
    if ( v8 >> 12 <= (*(unsigned int *)(v9 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v9 + 33) << 32)) )
    {
      if ( (unsigned int)MiVadSupportsPrivateCommit(v9) )
      {
        if ( (*(_DWORD *)(v10 + 48) & 8) == 0
          || (OnlyOnSectionView = MiCheckSecuredVad(v10, v5, v3, 1, 0, 0LL), OnlyOnSectionView >= 0) )
        {
          if ( (*(_DWORD *)(v10 + 48) & 0x200000) == 0
            && (MiReadVadFlags2(v10) & 4) == 0
            && (MmCompatibleProtectionMask[(*(_DWORD *)(v10 + 48) >> 7) & 7] | 0x702) == (MmCompatibleProtectionMask[(*(_DWORD *)(v10 + 48) >> 7) & 7] | 0x700)
            && ((*(_DWORD *)(**(_QWORD **)(v10 + 72) + 56LL) & 0xA0) == 0x80
             || !(unsigned int)MiVadMapsLargeImage(v10) && (unsigned int)MiIsRangeFullyCommitted(v11, v4, v8)) )
          {
            OnlyOnSectionView = MiSetReadOnlyOnSectionView(a1, v10, v4, v8);
            if ( OnlyOnSectionView >= 0 )
            {
              v7 = MiAddSecureEntry(v10, v4, v8, -1073741823, 0);
              if ( !v7 )
                MiUnsecureVirtualMemoryAgainstWrites(v10, v4, v8);
            }
          }
        }
      }
    }
    MiUnlockAndDereferenceVad((char *)v10);
  }
  if ( Process )
    KiUnstackDetachProcess((__int64)&ApcState, 0LL);
  if ( v7 )
    return qword_140E2D840 ^ a1 ^ v7;
  return v7;
}
