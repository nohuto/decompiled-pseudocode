/*
 * XREFs of NtGdiEngMarkBandingSurface @ 0x1C02C9C70
 * Callers:
 *     <none>
 * Callees:
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C004CC34 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C0264500 (--0SURFREF@@QEAA@XZ.c)
 *     EngMarkBandingSurface @ 0x1C028DFD0 (EngMarkBandingSurface.c)
 */

__int64 __fastcall NtGdiEngMarkBandingSurface(HSURF a1)
{
  __int64 v2; // rdx
  unsigned int v3; // ebx
  BOOL v4; // edi
  _BYTE v6[32]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v7; // [rsp+40h] [rbp-38h]
  _BYTE v8[32]; // [rsp+48h] [rbp-30h] BYREF
  __int64 v9; // [rsp+68h] [rbp-10h]

  SURFREF::SURFREF((SURFREF *)v6);
  LOBYTE(v2) = 5;
  v7 = HmgShareLockCheckIgnoreStockBit(a1, v2);
  SURFREF::SURFREF((SURFREF *)v8, a1);
  v3 = 1;
  v4 = v9 && (*(_DWORD *)(v9 + 112) & 0x40000) != 0;
  if ( v9 )
    DEC_SHARE_REF_CNT(v9);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v8);
  if ( !v4 || !EngMarkBandingSurface(a1) )
    v3 = 0;
  if ( v7 )
    DEC_SHARE_REF_CNT(v7);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v6);
  return v3;
}
