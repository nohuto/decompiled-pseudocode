/*
 * XREFs of ?Channel_RoundTripRequest@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_ROUNDTRIPREQUEST@@@Z @ 0x1801D8084
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18001C330 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     McTemplateU0qqx_EventWriteTransfer @ 0x1801D815C (McTemplateU0qqx_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 */

__int64 __fastcall CComposition::Channel_RoundTripRequest(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct tagMILCMD_CHANNEL_ROUNDTRIPREQUEST *a4)
{
  unsigned int v4; // eax
  unsigned int v5; // edx
  int v6; // ebx
  int v8; // r9d
  unsigned int v9; // eax
  __int128 v10; // [rsp+30h] [rbp-28h] BYREF

  v10 = *((unsigned int *)a4 + 1) | 0x100000000uLL;
  v4 = *((_DWORD *)this + 248);
  v5 = v4 + 1;
  if ( v4 + 1 < v4 )
  {
    v6 = -2147024362;
    v9 = 181;
    v8 = -2147024362;
    goto LABEL_10;
  }
  v6 = 0;
  if ( v5 <= *((_DWORD *)this + 247) )
  {
    *(_OWORD *)(*((_QWORD *)this + 121) + 16LL * v4) = v10;
    *((_DWORD *)this + 248) = v5;
    goto LABEL_4;
  }
  v6 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 968, 16, 1, &v10);
  v8 = v6;
  if ( v6 < 0 )
  {
    v9 = 192;
LABEL_10:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, v9, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x588u, 0LL);
    return (unsigned int)v6;
  }
LABEL_4:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0qqx_EventWriteTransfer(DWORD2(v10), v5, DWORD1(v10), v10, SBYTE8(v10));
  return (unsigned int)v6;
}
