/*
 * XREFs of DwmSyncHitTestQuery @ 0x14010B378
 * Callers:
 *     ?xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x14003F500 (-xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_.c)
 *     xxxDCETrackCaptionButton @ 0x140109CAC (xxxDCETrackCaptionButton.c)
 *     ?xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z @ 0x1401B703C (-xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z.c)
 * Callees:
 *     ?DwmSyncLPCAllowed@@YAJXZ @ 0x14010B4C0 (-DwmSyncLPCAllowed@@YAJXZ.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall DwmSyncHitTestQuery(
        PVOID Object,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        _DWORD *a8,
        _DWORD *a9)
{
  int v13; // edi
  int v14; // eax
  __int64 v16; // [rsp+30h] [rbp-81h] BYREF
  int v17; // [rsp+40h] [rbp-71h] BYREF
  __int16 v18; // [rsp+44h] [rbp-6Dh]
  int v19; // [rsp+68h] [rbp-49h]
  __int64 v20; // [rsp+6Ch] [rbp-45h]
  int v21; // [rsp+74h] [rbp-3Dh]
  __int64 v22; // [rsp+78h] [rbp-39h]
  __int64 v23; // [rsp+80h] [rbp-31h]
  __int64 v24; // [rsp+88h] [rbp-29h]
  int v25; // [rsp+90h] [rbp-21h]
  int v26; // [rsp+94h] [rbp-1Dh]
  int v27; // [rsp+98h] [rbp-19h]

  v13 = -1073741823;
  if ( Object )
  {
    v13 = DwmSyncLPCAllowed();
    if ( v13 >= 0 )
    {
      memset_0(&v17, 0, 0x5CuLL);
      v17 = 6029364;
      v18 = 0x8000;
      v23 = a5;
      v24 = a6;
      v25 = a7;
      v19 = 1073741848;
      v20 = a2;
      v21 = a3;
      v22 = a4;
      v16 = 92LL;
      v14 = LpcSendWaitReceivePort(Object, 0x20000LL, &v17, &v17, &v16, 0LL);
      v13 = v14;
      if ( v14 >= 0 )
      {
        if ( v14 == 192 || v14 == 258 || (unsigned __int8)v18 != 2 )
        {
          v13 = -1073741823;
        }
        else
        {
          *a8 = v26;
          *a9 = v27;
        }
      }
    }
    ObfDereferenceObject(Object);
  }
  return (unsigned int)v13;
}
