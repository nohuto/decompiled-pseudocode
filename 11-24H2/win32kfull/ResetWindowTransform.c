/*
 * XREFs of ResetWindowTransform @ 0x14019BB70
 * Callers:
 *     ?FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU?$Win32HMOptionalThreadLockAlways@UtagWND@@@@@Z @ 0x14002E8AC (-FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU-$Win32HMOptionalThreadLockAlways@Utag.c)
 *     UpdateWindowMonitor @ 0x140045CB0 (UpdateWindowMonitor.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x140088950 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     UpdateTopLevelWindowDPITransform @ 0x14019BAB8 (UpdateTopLevelWindowDPITransform.c)
 * Callees:
 *     <none>
 */

void __fastcall ResetWindowTransform(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 216);
  if ( v2 )
  {
    Win32FreePool(v2);
    *(_QWORD *)(a1 + 216) = 0LL;
  }
}
