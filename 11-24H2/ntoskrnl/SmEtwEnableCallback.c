/*
 * XREFs of SmEtwEnableCallback @ 0x14079B8B0
 * Callers:
 *     <none>
 * Callees:
 *     SmKmStoreReferenceEx @ 0x140246C10 (SmKmStoreReferenceEx.c)
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     SmKmStoreDereference @ 0x14027A498 (SmKmStoreDereference.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     SmEtwEnabled @ 0x140387420 (SmEtwEnabled.c)
 *     ?SmStoreContentsRundown@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@@Z @ 0x14060EACC (-SmStoreContentsRundown@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@@.c)
 *     SmKmEtwLogStoreChange @ 0x1407999C8 (SmKmEtwLogStoreChange.c)
 *     SmKmEtwLogStoreStats @ 0x140799AE0 (SmKmEtwLogStoreStats.c)
 */

void __fastcall SmEtwEnableCallback(LPCGUID SourceId, ULONG ControlCode, UCHAR Level, ULONGLONG MatchAnyKeyword)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v5; // rbx
  __int64 *i; // rbx
  unsigned int j; // edi
  __int64 v8; // rax
  __int64 v9; // rbp
  unsigned int k; // edi
  __int64 v11; // rax

  if ( ControlCode <= 1 && (dword_140E287DC = MatchAnyKeyword | 0x40, ControlCode == 1) || ControlCode == 2 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v5 = KeAbPreAcquire((__int64)&qword_140E287C8, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140E287C8, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)&qword_140E287C8, 0, v5, (__int64)&qword_140E287C8);
    if ( v5 )
      *((_BYTE *)v5 + 10) = 1;
    for ( i = (__int64 *)qword_140E287B8; i != &qword_140E287B8; i = (__int64 *)*i )
    {
      for ( j = 0; j < 0x400; ++j )
      {
        v8 = SmKmStoreReferenceEx((__int64)(i - 265), j);
        v9 = v8;
        if ( v8 )
        {
          SmKmEtwLogStoreStats(&qword_140E287D0, v8);
          SmKmEtwLogStoreChange(&qword_140E287D0, v9, SmEventStoreRundown);
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
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140E287C8, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_140E287C8);
    KeAbPostRelease((ULONG_PTR)&qword_140E287C8);
    KeLeaveCriticalRegion();
  }
}
