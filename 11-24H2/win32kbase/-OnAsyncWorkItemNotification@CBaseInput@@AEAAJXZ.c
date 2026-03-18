/*
 * XREFs of ?OnAsyncWorkItemNotification@CBaseInput@@AEAAJXZ @ 0x140197260
 * Callers:
 *     <none>
 * Callees:
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x140060B94 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ?Cleanup@ThreadLockedPerfRegion@InputTraceLogging@@AEAAXXZ @ 0x1400626B8 (-Cleanup@ThreadLockedPerfRegion@InputTraceLogging@@AEAAXXZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     RIMOnAsyncWorkItemNotification @ 0x1401972C4 (RIMOnAsyncWorkItemNotification.c)
 */

__int64 __fastcall CBaseInput::OnAsyncWorkItemNotification(CBaseInput *this)
{
  unsigned int v2; // eax
  __int64 v3; // rcx
  __int64 *v4; // rbx
  unsigned int v5; // edi
  __int64 *v7; // [rsp+30h] [rbp+8h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v7, "OnAsyncWorkItemNotification", 0LL);
  v2 = RIMOnAsyncWorkItemNotification(*((_QWORD *)this + 1));
  v4 = v7;
  v5 = v2;
  if ( v7 )
  {
    *((_QWORD *)PtiCurrent(v3) + 48) = v4[6];
    InputTraceLogging::ThreadLockedPerfRegion::Cleanup((char **)&v7);
  }
  return v5;
}
