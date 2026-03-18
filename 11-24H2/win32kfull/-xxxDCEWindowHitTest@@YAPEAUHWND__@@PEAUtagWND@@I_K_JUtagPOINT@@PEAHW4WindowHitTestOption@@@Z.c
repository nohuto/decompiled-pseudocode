/*
 * XREFs of ?xxxDCEWindowHitTest@@YAPEAUHWND__@@PEAUtagWND@@I_K_JUtagPOINT@@PEAHW4WindowHitTestOption@@@Z @ 0x14003F498
 * Callers:
 *     ?xxxWindowHitTestWithoutTargeting@@YAPEAUHWND__@@PEAUtagTHREADINFO@@PEAUtagWND@@I_K_JUtagPOINT@@PEAHW4WindowHitTestOption@@PEBUtagPOINTEREVENTINT@@PEAU4@@Z @ 0x14003E0C0 (-xxxWindowHitTestWithoutTargeting@@YAPEAUHWND__@@PEAUtagTHREADINFO@@PEAUtagWND@@I_K_JUtagPOINT@@.c)
 *     xxxWindowFromPoint @ 0x140040384 (xxxWindowFromPoint.c)
 *     ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x1401B5748 (-xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHU.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x14027AA48 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     ?xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x14003F500 (-xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_.c)
 */

HWND __fastcall xxxDCEWindowHitTest(
        struct tagWND *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        struct tagPOINT a5,
        __int64 a6,
        int a7)
{
  _DWORD v8[2]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v9; // [rsp+28h] [rbp-38h]
  __int64 v10; // [rsp+30h] [rbp-30h]
  __int64 v11; // [rsp+38h] [rbp-28h]
  int v12; // [rsp+40h] [rbp-20h]
  char v13; // [rsp+44h] [rbp-1Ch]
  __int16 v14; // [rsp+45h] [rbp-1Bh]
  char v15; // [rsp+47h] [rbp-19h]
  __int64 v16; // [rsp+48h] [rbp-18h]
  char v17; // [rsp+50h] [rbp-10h]
  int v18; // [rsp+51h] [rbp-Fh]
  __int16 v19; // [rsp+55h] [rbp-Bh]
  char v20; // [rsp+57h] [rbp-9h]
  __int64 v21; // [rsp+58h] [rbp-8h]

  v8[0] = a2;
  v8[1] = 0;
  v11 = a6;
  v12 = a7;
  v9 = a3;
  v10 = a4;
  v13 = 0;
  v16 = 0LL;
  v17 = 0;
  v21 = 0LL;
  v14 = 0;
  v15 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  return xxxDCEWindowHitTestIndirect(a1, a5, 0, (struct tagDCE_WINDOW_HIT_TEST_ARGS *)v8);
}
