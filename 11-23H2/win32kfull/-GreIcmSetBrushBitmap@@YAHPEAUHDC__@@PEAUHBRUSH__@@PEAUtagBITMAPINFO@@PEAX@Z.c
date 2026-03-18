/*
 * XREFs of ?GreIcmSetBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAX@Z @ 0x1C02CDF60
 * Callers:
 *     NtGdiIcmBrushInfo @ 0x1C02CE930 (NtGdiIcmBrushInfo.c)
 * Callees:
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C00D5DB4 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C00D5E54 (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011C090 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C011C72C (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     GreCreateDIBitmapReal @ 0x1C02DDA3C (GreCreateDIBitmapReal.c)
 */

__int64 __fastcall GreIcmSetBrushBitmap(HDC a1, HBRUSH a2, struct tagBITMAPINFO *a3, void *a4)
{
  int v5; // esi
  int v6; // ebp
  int v7; // r14d
  unsigned int v8; // edi
  __int64 v9; // r10
  BRUSH *v10; // rbx
  HBITMAP DIBitmapReal; // r8
  _QWORD v13[2]; // [rsp+70h] [rbp-68h] BYREF
  _BYTE v14[32]; // [rsp+80h] [rbp-58h] BYREF
  _QWORD v15[6]; // [rsp+A0h] [rbp-38h] BYREF

  v5 = (int)a1;
  v6 = (int)a4;
  v7 = (int)a3;
  v8 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v13, a1);
  v9 = v13[0];
  if ( v13[0] )
  {
    if ( (*(_DWORD *)(v13[0] + 120LL) & 1) != 0 )
    {
      BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v15, a2);
      v10 = (BRUSH *)v15[0];
      if ( v15[0] )
      {
        if ( (*(_DWORD *)(v15[0] + 40LL) & 0x80u) != 0 )
        {
          DIBitmapReal = (HBITMAP)GreCreateDIBitmapReal(v5, 6, v6, v7, 0, 1064, 0x7FFFFF, 0LL, 0, 0LL, 1, 0LL, 0LL);
          if ( DIBitmapReal )
            v8 = BRUSH::bAddIcmDIB(v10, *(void **)(*(_QWORD *)(v13[0] + 976LL) + 248LL), DIBitmapReal);
        }
      }
      BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v15);
      v9 = v13[0];
    }
    if ( v9 )
      XDCOBJ::vUnlockFast((XDCOBJ *)v13);
  }
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v14);
  return v8;
}
