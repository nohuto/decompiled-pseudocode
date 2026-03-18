/*
 * XREFs of ?OnThreadExit@InkProcessor@@QEAAXPEBUtagTHREADINFO@@@Z @ 0x14019E2E8
 * Callers:
 *     InkProcessorOnThreadExit @ 0x14019E2B0 (InkProcessorOnThreadExit.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

void __fastcall InkProcessor::OnThreadExit(InkProcessor **this, const struct tagTHREADINFO *a2)
{
  InkProcessor *i; // rdi

  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(this, 0LL);
  if ( *((_BYTE *)this + 8) )
  {
    for ( i = this[12]; i != (InkProcessor *)(this + 12); i = *(InkProcessor **)i )
      (*(void (__fastcall **)(__int64, _QWORD))(*((_QWORD *)i - 1) + 24LL))((__int64)i - 8, *(_QWORD *)a2);
  }
  ExReleasePushLockExclusiveEx(this, 0LL);
  KeLeaveCriticalRegion();
}
