/*
 * XREFs of GreOffsetClipRgn @ 0x1C00958C4
 * Callers:
 *     xxxInternalPaintDesktop @ 0x1C0095728 (xxxInternalPaintDesktop.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011C090 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C011C72C (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreOffsetClipRgn(HDC a1, LONG a2, LONG a3)
{
  __int64 v5; // rcx
  unsigned int v6; // ebx
  unsigned int v7; // eax
  __int64 v9; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v10[2]; // [rsp+28h] [rbp-40h] BYREF
  _BYTE v11[48]; // [rsp+38h] [rbp-30h] BYREF
  struct _POINTL v12; // [rsp+88h] [rbp+20h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v10, a1);
  v5 = v10[0];
  v6 = 0;
  if ( v10[0] )
  {
    v12.x = a2;
    v12.y = a3;
    v9 = *(_QWORD *)(v10[0] + 160LL);
    if ( v9 )
    {
      v7 = RGNOBJ::bOffset((RGNOBJ *)&v9, &v12);
      v5 = v10[0];
      v6 = v7;
    }
    else
    {
      v6 = 1;
    }
    if ( v5 )
      XDCOBJ::vUnlockFast((XDCOBJ *)v10);
  }
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v11);
  return v6;
}
