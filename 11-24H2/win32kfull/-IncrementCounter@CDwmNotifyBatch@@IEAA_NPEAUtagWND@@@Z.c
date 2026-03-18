/*
 * XREFs of ?IncrementCounter@CDwmNotifyBatch@@IEAA_NPEAUtagWND@@@Z @ 0x1402D1B38
 * Callers:
 *     ??0CDwmWindowNotifyBatch@@QEAA@PEAUtagWND@@@Z @ 0x140088668 (--0CDwmWindowNotifyBatch@@QEAA@PEAUtagWND@@@Z.c)
 *     ??0CDwmSwpNotifyBatch@@QEAA@PEAUtagSMWP@@@Z @ 0x1400886D8 (--0CDwmSwpNotifyBatch@@QEAA@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x1400312D0 (-SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z.c)
 *     ??$GetProp@VCDwmWindowNotifyBatchProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCDwmWindowNotifyBatchProp@@@Z @ 0x1402D1A2C (--$GetProp@VCDwmWindowNotifyBatchProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCDwmWindowNotifyBatch.c)
 *     DwmAsyncWindowNotifyBatchStart @ 0x14032433C (DwmAsyncWindowNotifyBatchStart.c)
 */

char __fastcall CDwmNotifyBatch::IncrementCounter(CDwmNotifyBatch *this, struct tagWND *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  _QWORD *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int16 v9; // dx
  void *v11; // rax
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  v12 = 0LL;
  if ( CWindowProp::GetProp<CDwmWindowNotifyBatchProp>((__int64)a2, &v12) )
  {
    v8 = v12;
  }
  else
  {
    v5 = (_QWORD *)Win32AllocPoolZInit(40LL, 1651405653LL);
    v8 = (__int64)v5;
    if ( !v5 )
      return 0;
    v5[1] = 0LL;
    v5[2] = 0LL;
    v5[3] = 0LL;
    v5[4] = 0LL;
    *v5 = &CDwmWindowNotifyBatchProp::`vftable';
    v9 = *(_WORD *)(W32GetUserSessionState(v7, v6) + 42326);
    *(_DWORD *)(v8 + 28) = 0;
    *(_DWORD *)(v8 + 32) = 0;
    *(_DWORD *)(v8 + 36) = 0;
    *(_WORD *)(v8 + 24) = v9;
    if ( !(unsigned int)CWindowProp::SetProp((CWindowProp *)v8, (unsigned __int64)a2) )
    {
      Win32FreePool((void *)v8);
      return 0;
    }
  }
  if ( !*(_DWORD *)(v8 + 28) )
  {
    v11 = (void *)ReferenceDwmApiPort(v4, v3);
    DwmAsyncWindowNotifyBatchStart(v11);
  }
  ++*(_DWORD *)(v8 + 28);
  return 1;
}
