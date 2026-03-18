/*
 * XREFs of LinkNodepRestoreIrqRoutingWorker @ 0x140023F10
 * Callers:
 *     LinkNodeRestoreHardwareState @ 0x140023E3C (LinkNodeRestoreHardwareState.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x140010850 (AMLIDereferenceHandleEx.c)
 *     AMLIAsyncEvalObject @ 0x140010934 (AMLIAsyncEvalObject.c)
 *     AMLIGetNamedChild @ 0x14001D630 (AMLIGetNamedChild.c)
 *     LinkNodepRunSrsAsync @ 0x140055B10 (LinkNodepRunSrsAsync.c)
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 */

__int64 __fastcall LinkNodepRestoreIrqRoutingWorker(__int64 a1, unsigned int a2, __int64 a3, char *a4)
{
  KSPIN_LOCK *v7; // rsi
  __int64 v8; // rcx
  __int64 *v9; // rax
  __int64 v10; // rbp
  __int64 v11; // rax
  bool v12; // zf
  KIRQL v13; // dl
  __int64 v15; // rdx

  _InterlockedIncrement((volatile signed __int32 *)a4 + 7);
  v7 = (KSPIN_LOCK *)(a4 + 16);
  a4[24] = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a4 + 2);
  while ( 1 )
  {
    if ( a4[25] )
      goto LABEL_5;
    v8 = *(_QWORD *)a4;
    if ( *(_DWORD *)(*(_QWORD *)a4 + 24LL) )
    {
      v15 = *(unsigned int *)(v8 + 32);
      *((_DWORD *)a4 + 2) = v15;
      a2 = LinkNodepRunSrsAsync(*(_QWORD *)(v8 + 600), v15, LinkNodepRestoreIrqRoutingWorker, a4);
      v12 = a2 == 259;
    }
    else
    {
      v9 = AMLIGetNamedChild(*(__int64 **)(v8 + 600), 1397310559);
      v10 = (__int64)v9;
      if ( !v9 )
        goto LABEL_5;
      a2 = AMLIAsyncEvalObject(v9, 0LL, 0, 0LL, LinkNodepRestoreIrqRoutingWorker, (__int64)a4);
      AMLIDereferenceHandleEx(v10);
      v12 = a2 == 259;
    }
    if ( v12 )
    {
      v13 = a4[24];
      a4[25] = 1;
      KeReleaseSpinLock(v7, v13);
      return 259LL;
    }
LABEL_5:
    v11 = *(_QWORD *)a4;
    if ( *(__int64 **)(*(_QWORD *)a4 + 56LL) == &LinkNodeListHead )
      break;
    a4[25] = 0;
    *(_QWORD *)a4 = *(_QWORD *)(v11 + 56) - 56LL;
  }
  KeReleaseSpinLock(v7, a4[24]);
  (*(void (**)(void))(PmHalDispatchTable + 40))();
  if ( *((_DWORD *)a4 + 7) )
    (*((void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))a4 + 4))(a1, a2, 0LL, *((_QWORD *)a4 + 5));
  ExFreePoolWithTag(a4, 0);
  return a2;
}
