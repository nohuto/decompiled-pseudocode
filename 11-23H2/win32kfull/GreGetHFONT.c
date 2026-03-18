/*
 * XREFs of GreGetHFONT @ 0x1C02A9AB4
 * Callers:
 *     xxxDrawState @ 0x1C023EE40 (xxxDrawState.c)
 *     IsSysFontAndDefaultMode @ 0x1C024CCAC (IsSysFontAndDefaultMode.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011C090 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C011C72C (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetHFONT(HDC a1)
{
  __int64 v1; // rbx
  _QWORD v3[2]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v4[40]; // [rsp+30h] [rbp-28h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v3, a1);
  v1 = 0LL;
  if ( v3[0] )
  {
    v1 = *(_QWORD *)(*(_QWORD *)(v3[0] + 976LL) + 296LL);
    XDCOBJ::vUnlockFast((XDCOBJ *)v3);
  }
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v4);
  return v1;
}
