/*
 * XREFs of SmEtwEnableCallback @ 0x14079B9C0
 * Callers:
 *     <none>
 * Callees:
 *     SmKmStoreDereference @ 0x14022FA28 (SmKmStoreDereference.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     SmKmStoreReferenceEx @ 0x1402F5F30 (SmKmStoreReferenceEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     SmEtwEnabled @ 0x140380D60 (SmEtwEnabled.c)
 *     ?SmStoreContentsRundown@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@@Z @ 0x14060D08C (-SmStoreContentsRundown@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@@.c)
 *     SmKmEtwLogStoreChange @ 0x140799AD8 (SmKmEtwLogStoreChange.c)
 *     SmKmEtwLogStoreStats @ 0x140799BF0 (SmKmEtwLogStoreStats.c)
 */

void __fastcall SmEtwEnableCallback(LPCGUID SourceId, ULONG ControlCode, UCHAR Level, ULONGLONG MatchAnyKeyword)
{
  struct _KTHREAD *CurrentThread; // rax
  char *v5; // rbx
  __int64 *i; // rbx
  unsigned int j; // edi
  __int64 v8; // rax
  __int64 v9; // rbp
  unsigned int k; // edi
  __int64 v11; // rax

  if ( ControlCode <= 1 && (dword_140E2891C = MatchAnyKeyword | 0x40, ControlCode == 1) || ControlCode == 2 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v5 = (char *)KeAbPreAcquire((__int64)&qword_140E28908, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140E28908, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)&qword_140E28908, 0, v5, (__int64)&qword_140E28908);
    if ( v5 )
      v5[10] = 1;
    for ( i = (__int64 *)qword_140E288F8; i != &qword_140E288F8; i = (__int64 *)*i )
    {
      for ( j = 0; j < 0x400; ++j )
      {
        v8 = SmKmStoreReferenceEx((__int64)(i - 265), j);
        v9 = v8;
        if ( v8 )
        {
          SmKmEtwLogStoreStats(&qword_140E28910, v8);
          SmKmEtwLogStoreChange(&qword_140E28910, v9, SmEventStoreRundown);
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
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140E28908, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_140E28908);
    KeAbPostRelease((ULONG_PTR)&qword_140E28908);
    KeLeaveCriticalRegion();
  }
}
