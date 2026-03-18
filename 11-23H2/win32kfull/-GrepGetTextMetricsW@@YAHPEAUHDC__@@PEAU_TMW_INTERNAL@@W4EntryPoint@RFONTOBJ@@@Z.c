/*
 * XREFs of ?GrepGetTextMetricsW@@YAHPEAUHDC__@@PEAU_TMW_INTERNAL@@W4EntryPoint@RFONTOBJ@@@Z @ 0x1C00C7144
 * Callers:
 *     NtGdiGetTextMetricsW @ 0x1C00C50D0 (NtGdiGetTextMetricsW.c)
 *     GetCharDimensions @ 0x1C00CD400 (GetCharDimensions.c)
 *     xxxDrawCaptionTemp @ 0x1C022B7E4 (xxxDrawCaptionTemp.c)
 *     xxxPSMTextOut @ 0x1C0240F14 (xxxPSMTextOut.c)
 *     ?DT_InitDrawTextInfo@@YAHPEAUHDC__@@PEAUtagRECT@@IPEAUDRAWTEXTDATA@@PEAUtagDRAWTEXTPARAMS@@@Z @ 0x1C024C5A8 (-DT_InitDrawTextInfo@@YAHPEAUHDC__@@PEAUtagRECT@@IPEAUDRAWTEXTDATA@@PEAUtagDRAWTEXTPARAMS@@@Z.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C00C8860 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vGetTextMetrics@@YAXAEAVRFONTOBJ@@AEAVDCOBJ@@PEAU_TMW_INTERNAL@@@Z @ 0x1C00CA1C0 (-vGetTextMetrics@@YAXAEAVRFONTOBJ@@AEAVDCOBJ@@PEAU_TMW_INTERNAL@@@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z @ 0x1C010D900 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011C090 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C011C72C (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

__int64 __fastcall GrepGetTextMetricsW(HDC a1, struct _TMW_INTERNAL *a2, int a3)
{
  unsigned int v5; // ebx
  int v6; // eax
  _DWORD v8[2]; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v9[2]; // [rsp+38h] [rbp-38h] BYREF
  _BYTE v10[40]; // [rsp+48h] [rbp-28h] BYREF
  __int64 v11; // [rsp+98h] [rbp+28h] BYREF

  v5 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v9, a1);
  if ( v9[0] )
  {
    v6 = *(unsigned __int16 *)(v9[0] + 12LL);
    v11 = 0LL;
    v8[1] = v6;
    v8[0] = a3;
    if ( (unsigned int)RFONTOBJ::bInit((RFONTOBJ *)&v11, (struct XDCOBJ *)v9, 0, 2u, (const struct RFONTOBJ::Tag *)v8) )
      GreAcquireSemaphore(*(_QWORD *)(v11 + 504));
    if ( v11 )
    {
      vGetTextMetrics((struct RFONTOBJ *)&v11, (struct DCOBJ *)v9, a2);
      v5 = 1;
    }
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v11);
    if ( v9[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v9);
  }
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v10);
  return v5;
}
