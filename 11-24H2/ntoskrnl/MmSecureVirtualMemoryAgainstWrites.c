/*
 * XREFs of MmSecureVirtualMemoryAgainstWrites @ 0x140893DD8
 * Callers:
 *     AlpcpExposeViewAttributeInSenderContext @ 0x1408926D0 (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcpPrepareViewForDelivery @ 0x140894200 (AlpcpPrepareViewForDelivery.c)
 * Callees:
 *     MiSetReadOnlyOnSectionView @ 0x140232BB8 (MiSetReadOnlyOnSectionView.c)
 *     KeStackAttachProcess @ 0x1402473F0 (KeStackAttachProcess.c)
 *     MiUnlockAndDereferenceVad @ 0x1402BAFA0 (MiUnlockAndDereferenceVad.c)
 *     MiVadSupportsPrivateCommit @ 0x1402FBA00 (MiVadSupportsPrivateCommit.c)
 *     MiObtainReferencedVadEx @ 0x1402FBE30 (MiObtainReferencedVadEx.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     MiVadMapsLargeImage @ 0x140404B60 (MiVadMapsLargeImage.c)
 *     MiReadVadFlags2 @ 0x14044BF3C (MiReadVadFlags2.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     MiIsRangeFullyCommitted @ 0x1408DD80C (MiIsRangeFullyCommitted.c)
 *     MiCheckSecuredVad @ 0x1408DD998 (MiCheckSecuredVad.c)
 *     MiAddSecureEntry @ 0x1409C3F30 (MiAddSecureEntry.c)
 *     MiUnsecureVirtualMemoryAgainstWrites @ 0x140A1AB7C (MiUnsecureVirtualMemoryAgainstWrites.c)
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
  v9 = MiObtainReferencedVadEx(v4, 0LL, &OnlyOnSectionView);
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
    MiUnlockAndDereferenceVad((PVOID)v10);
  }
  if ( Process )
    KiUnstackDetachProcess((__int64)&ApcState, 0);
  if ( v7 )
    return qword_140E2DA80 ^ a1 ^ v7;
  return v7;
}
