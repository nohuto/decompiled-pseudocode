/*
 * XREFs of MmSecureVirtualMemoryAgainstWrites @ 0x1408DBBC8
 * Callers:
 *     AlpcpPrepareViewForDelivery @ 0x140896848 (AlpcpPrepareViewForDelivery.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x14089BCC0 (AlpcpExposeViewAttributeInSenderContext.c)
 * Callees:
 *     MiSetReadOnlyOnSectionView @ 0x140202E14 (MiSetReadOnlyOnSectionView.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     KeStackAttachProcess @ 0x1402E1C90 (KeStackAttachProcess.c)
 *     MiObtainReferencedVadEx @ 0x140344D30 (MiObtainReferencedVadEx.c)
 *     MiVadSupportsPrivateCommit @ 0x1403455B0 (MiVadSupportsPrivateCommit.c)
 *     MiUnlockAndDereferenceVad @ 0x1403626E0 (MiUnlockAndDereferenceVad.c)
 *     MiVadMapsLargeImage @ 0x1403C7440 (MiVadMapsLargeImage.c)
 *     MiReadVadFlags2 @ 0x14044307C (MiReadVadFlags2.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     MiIsRangeFullyCommitted @ 0x1408DBA3C (MiIsRangeFullyCommitted.c)
 *     MiCheckSecuredVad @ 0x1408DBE18 (MiCheckSecuredVad.c)
 *     MiAddSecureEntry @ 0x1408DC0A0 (MiAddSecureEntry.c)
 *     MiUnsecureVirtualMemoryAgainstWrites @ 0x140A133BC (MiUnsecureVirtualMemoryAgainstWrites.c)
 */

__int64 __fastcall MmSecureVirtualMemoryAgainstWrites(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // r13d
  unsigned __int64 v5; // rbp
  int v6; // r12d
  __int64 v8; // rdi
  unsigned __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rbx
  __int64 v14; // rcx
  int OnlyOnSectionView; // [rsp+30h] [rbp-88h] BYREF
  _KPROCESS *Process; // [rsp+38h] [rbp-80h]
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-78h] BYREF

  OnlyOnSectionView = 0;
  v4 = a3;
  v5 = a2 & 0xFFFFFFFFFFFFF000uLL;
  v6 = a2;
  memset(&ApcState, 0, sizeof(ApcState));
  if ( (a2 & 0xFFFFFFFFFFFFF000uLL) != a2 || (a3 & 0xFFF) != 0 )
    return 0LL;
  v8 = 0LL;
  v9 = (a2 + a3 - 1) | 0xFFF;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( Process == (_KPROCESS *)a1 )
    Process = 0LL;
  else
    KeStackAttachProcess((PRKPROCESS)a1, &ApcState);
  v10 = MiObtainReferencedVadEx(v5, 0LL, &OnlyOnSectionView, a4);
  v13 = v10;
  if ( v10 )
  {
    if ( v9 >> 12 <= (*(unsigned int *)(v10 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v10 + 33) << 32)) )
    {
      if ( (unsigned int)MiVadSupportsPrivateCommit(v10) )
      {
        if ( (*(_DWORD *)(v13 + 48) & 8) == 0
          || (OnlyOnSectionView = MiCheckSecuredVad(v13, v6, v4, 1, 0, 0LL), OnlyOnSectionView >= 0) )
        {
          if ( (*(_DWORD *)(v13 + 48) & 0x200000) == 0
            && (MiReadVadFlags2(v13) & 4) == 0
            && (MmCompatibleProtectionMask[(*(_DWORD *)(v13 + 48) >> 7) & 7] | 0x702) == (MmCompatibleProtectionMask[(*(_DWORD *)(v13 + 48) >> 7) & 7] | 0x700)
            && ((*(_DWORD *)(**(_QWORD **)(v13 + 72) + 56LL) & 0xA0) == 0x80
             || !(unsigned int)MiVadMapsLargeImage(v13) && (unsigned int)MiIsRangeFullyCommitted(v14, v5, v9)) )
          {
            OnlyOnSectionView = MiSetReadOnlyOnSectionView(a1, v13, v5, v9);
            if ( OnlyOnSectionView >= 0 )
            {
              v8 = MiAddSecureEntry(v13, v5, v9, -1073741823, 0);
              if ( !v8 )
                MiUnsecureVirtualMemoryAgainstWrites(v13, v5, v9);
            }
          }
        }
      }
    }
    MiUnlockAndDereferenceVad((PVOID)v13);
  }
  if ( Process )
    KiUnstackDetachProcess((__int64)&ApcState, 0, v11, v12);
  if ( v8 )
    return qword_140E2DBC0 ^ a1 ^ v8;
  return v8;
}
