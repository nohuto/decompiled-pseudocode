/*
 * XREFs of DxgkEngAccumD3DPresentBounds @ 0x1C026E910
 * Callers:
 *     <none>
 * Callees:
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C004DD9C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C0083A90 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C00C3A60 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ?bOffsetSubtract@ERECTL@@QEAAHAEBU_POINTL@@H@Z @ 0x1C0265C84 (-bOffsetSubtract@ERECTL@@QEAAHAEBU_POINTL@@H@Z.c)
 */

__int64 __fastcall DxgkEngAccumD3DPresentBounds(HDC a1, _DWORD *a2)
{
  __int64 *v3; // r8
  __int64 v4; // rbx
  _DWORD v6[4]; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v7[2]; // [rsp+30h] [rbp-30h] BYREF
  _BYTE v8[32]; // [rsp+40h] [rbp-20h] BYREF
  int v9; // [rsp+80h] [rbp+20h] BYREF

  DCOBJA::DCOBJA((DCOBJA *)v7, a1);
  if ( v7[0] )
  {
    v6[0] = *a2;
    v6[1] = a2[1];
    v6[2] = a2[2];
    v6[3] = a2[3];
    if ( !ERECTL::bEmpty((ERECTL *)v6) && (*((_DWORD *)v3 + 9) & 0xE0) != 0 )
    {
      ERECTL::bOffsetSubtract((ERECTL *)v6, (const struct _POINTL *)&v3[((_DWORD)v3[5] & 1) + 127], 0);
      XDCOBJ::vAccumulate((XDCOBJ *)v7, (struct ERECTL *)v6);
      v3 = (__int64 *)v7[0];
    }
    if ( v3 )
    {
      v9 = 0;
      v4 = *v3;
      HmgDecrementShareReferenceCountEx(v3, &v9);
      if ( v9 )
        GrepDeleteDC(v4, 0x2000000LL);
    }
  }
  return UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v8);
}
