/*
 * XREFs of VidSchiProcessSuspendContextCompletedDpc @ 0x14001DD28
 * Callers:
 *     VidSchDdiNotifyDpcWorker @ 0x14000779C (VidSchDdiNotifyDpcWorker.c)
 *     VidSchDdiNotifyDpc @ 0x1400079E0 (VidSchDdiNotifyDpc.c)
 * Callees:
 *     ?VidSchiUpdateHwSchRunningTime@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x14000D5E0 (-VidSchiUpdateHwSchRunningTime@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 *     VidSchiSignalRegisteredEvent @ 0x14001DB80 (VidSchiSignalRegisteredEvent.c)
 *     ?VidSchiCheckHwSchNodeProgress@@YAEPEAU_VIDSCH_NODE@@_N@Z @ 0x14001DC70 (-VidSchiCheckHwSchNodeProgress@@YAEPEAU_VIDSCH_NODE@@_N@Z.c)
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x14001FB70 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x14001FEE0 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     memset @ 0x140056340 (memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VidSchiProcessSuspendContextCompletedDpc(PSLIST_ENTRY ListEntry)
{
  struct _SLIST_ENTRY *Next; // rbp
  struct _SLIST_ENTRY *v2; // rsi
  struct _SLIST_ENTRY *v3; // rdi
  __int64 v4; // r15
  __int64 v5; // r14
  _DWORD *v6; // rbx
  struct _SLIST_ENTRY *v7; // rdx
  struct _SLIST_ENTRY *v8; // rcx
  _QWORD v9[4]; // [rsp+30h] [rbp-48h] BYREF
  __int16 v10; // [rsp+50h] [rbp-28h]

  Next = ListEntry[2].Next;
  v2 = (struct _SLIST_ENTRY *)*((_QWORD *)&ListEntry[2].Next + 1);
  v3 = Next[1].Next;
  v4 = *((_QWORD *)&Next->Next + 1);
  v5 = *((_QWORD *)&v3[1].Next + 1);
  ExpInterlockedPushEntrySList((PSLIST_HEADER)&v3[833], ListEntry);
  v10 = 256;
  v9[0] = v5 + 1984;
  AcquireSpinLock::Acquire((AcquireSpinLock *)v9);
  v6 = (_DWORD *)(*((_QWORD *)&v3[11].Next + 1) + 112LL * HIDWORD(v3[12].Next));
  memset(v6, 0, 0x70uLL);
  HIDWORD(v3[12].Next) = (HIDWORD(v3[12].Next) + 1) & (LODWORD(v3[12].Next) - 1);
  *((LARGE_INTEGER *)v6 + 1) = KeQueryPerformanceCounter(0LL);
  *v6 = 12;
  *((_QWORD *)v6 + 2) = Next;
  *(struct _SLIST_ENTRY *)(v6 + 6) = Next[14];
  *((_QWORD *)v6 + 5) = v2;
  v7 = (struct _SLIST_ENTRY *)*((_QWORD *)&Next[14].Next + 1);
  if ( v2 != v7 )
  {
    v8 = Next[14].Next;
    if ( v2 > v8 )
    {
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 281LL, 17LL, v2, v7, v8);
      WdLogGlobalForLineNumber = 906;
      JUMPOUT(0x14001DEC2LL);
    }
    if ( v2 >= v7 )
    {
      _InterlockedExchange((volatile __int32 *)&v3[31].Next + 2, 1);
      _InterlockedIncrement64((volatile signed __int64 *)&v3[109]);
      *((_QWORD *)&Next[14].Next + 1) = v2;
      if ( v2 == Next[14].Next )
      {
        --*(_DWORD *)(v5 + 72);
        --*((_DWORD *)&v3[108].Next + 2);
        VidSchiCheckHwSchNodeProgress((struct _VIDSCH_NODE *)v3, 0);
        VidSchiSignalRegisteredEvent(v5, (struct _KEVENT **)(v4 + 168));
      }
    }
  }
  VidSchiUpdateHwSchRunningTime((struct _VIDSCH_NODE *)v3);
  AcquireSpinLock::Release((AcquireSpinLock *)v9);
}
