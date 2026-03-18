/*
 * XREFs of ?GlobalVmBusStatChangeCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x140217BD0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14001C140 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x14001F610 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ?NotifyGlobalVmBusStatusChange@DXGDODPRESENT@@QEAAXE@Z @ 0x14027B920 (-NotifyGlobalVmBusStatusChange@DXGDODPRESENT@@QEAAXE@Z.c)
 */

__int64 __fastcall GlobalVmBusStatChangeCallback(struct DXGADAPTER *a1, unsigned __int8 *a2)
{
  DXGDODPRESENT *v4; // rcx
  _BYTE v6[40]; // [rsp+50h] [rbp-28h] BYREF

  if ( !a1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 13393;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"pDxgAdapter != NULL", 13393LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v6, a1, 1);
  if ( *((_DWORD *)a1 + 50) == 1 && !*((_QWORD *)a1 + 391) )
  {
    v4 = *(DXGDODPRESENT **)(*((_QWORD *)a1 + 390) + 456LL);
    if ( v4 )
      DXGDODPRESENT::NotifyGlobalVmBusStatusChange(v4, *a2);
  }
  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v6);
  return 0LL;
}
