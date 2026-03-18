/*
 * XREFs of SmEtwEnableCallback @ 0x14078C4F0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     SmKmStoreReferenceEx @ 0x1402082A0 (SmKmStoreReferenceEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     SmKmStoreDereference @ 0x14034AECC (SmKmStoreDereference.c)
 *     SmEtwEnabled @ 0x14039E900 (SmEtwEnabled.c)
 *     ?SmStoreContentsRundown@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@@Z @ 0x140602B0C (-SmStoreContentsRundown@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@@.c)
 *     SmKmEtwLogStoreChange @ 0x14078A600 (SmKmEtwLogStoreChange.c)
 *     SmKmEtwLogStoreStats @ 0x14078A718 (SmKmEtwLogStoreStats.c)
 */

void __fastcall SmEtwEnableCallback(LPCGUID SourceId, ULONG ControlCode, UCHAR Level, ULONGLONG MatchAnyKeyword)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v5; // rbx
  __int64 *i; // rbx
  unsigned int j; // edi
  __int64 v8; // rax
  __int64 v9; // rbp
  unsigned int k; // edi
  __int64 v11; // rax

  if ( ControlCode <= 1 && (dword_140E2859C = MatchAnyKeyword | 0x40, ControlCode == 1) || ControlCode == 2 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v5 = KeAbPreAcquire((__int64)&qword_140E28588, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140E28588, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)&qword_140E28588, 0, v5, (unsigned __int64)&qword_140E28588);
    if ( v5 )
      *((_BYTE *)v5 + 10) = 1;
    for ( i = (__int64 *)qword_140E28578; i != &qword_140E28578; i = (__int64 *)*i )
    {
      for ( j = 0; j < 0x400; ++j )
      {
        v8 = SmKmStoreReferenceEx((__int64)(i - 265), j);
        v9 = v8;
        if ( v8 )
        {
          SmKmEtwLogStoreStats(&qword_140E28590, v8);
          SmKmEtwLogStoreChange(&qword_140E28590, v9, SmEventStoreRundown);
          SmKmStoreDereference((__int64)(i - 265), j);
        }
      }
      if ( SmEtwEnabled(3) )
      {
        for ( k = 0; k < 0x400; ++k )
        {
          v11 = SmKmStoreReferenceEx((__int64)(i - 265), k);
          if ( v11 )
            SMKM_STORE_MGR<SM_TRAITS>::SmStoreContentsRundown((__int64)(i - 265), v11);
        }
      }
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140E28588, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_140E28588);
    KeAbPostRelease((ULONG_PTR)&qword_140E28588);
    KeLeaveCriticalRegion();
  }
}
