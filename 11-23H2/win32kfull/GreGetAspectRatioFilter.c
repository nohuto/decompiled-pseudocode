/*
 * XREFs of GreGetAspectRatioFilter @ 0x1C028DBC0
 * Callers:
 *     <none>
 * Callees:
 *     ?ulLogPixelsX@PDEVOBJ@@QEAAKXZ @ 0x1C0114ADC (-ulLogPixelsX@PDEVOBJ@@QEAAKXZ.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEAAKXZ @ 0x1C0114B20 (-ulLogPixelsY@PDEVOBJ@@QEAAKXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011C090 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C011C700 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C011C72C (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetAspectRatioFilter(HDC a1, _DWORD *a2)
{
  __int64 v4; // rdx
  int v5; // eax
  _QWORD v6[2]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v7[40]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v8; // [rsp+68h] [rbp+10h] BYREF

  if ( !a2 )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  DCOBJ::DCOBJ((DCOBJ *)v6, a1);
  v4 = v6[0];
  if ( !v6[0] )
  {
    EngSetLastError(6u);
    DCOBJ::~DCOBJ((DCOBJ *)v6);
    return 0LL;
  }
  v8 = *(_QWORD *)(v6[0] + 48LL);
  if ( (*(_DWORD *)(*(_QWORD *)(v6[0] + 976LL) + 236LL) & 1) != 0 )
  {
    *a2 = PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v8);
    v5 = PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v8);
    v4 = v6[0];
  }
  else
  {
    *a2 = 0;
    v5 = 0;
  }
  a2[1] = v5;
  if ( v4 )
    XDCOBJ::vUnlockFast((XDCOBJ *)v6);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v7);
  return 1LL;
}
