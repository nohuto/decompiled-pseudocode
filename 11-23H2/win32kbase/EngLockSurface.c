/*
 * XREFs of EngLockSurface @ 0x1C003D970
 * Callers:
 *     ?EngCreateLockedBitmap@@YAPEAU_SURFOBJ@@UtagSIZE@@JKKPEAX@Z @ 0x1C000BB40 (-EngCreateLockedBitmap@@YAPEAU_SURFOBJ@@UtagSIZE@@JKKPEAX@Z.c)
 *     ?MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x1C015EE40 (-MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z.c)
 * Callees:
 *     ??1SURFREF@@QEAA@XZ @ 0x1C003F8A0 (--1SURFREF@@QEAA@XZ.c)
 *     INC_SHARE_REF_CNT @ 0x1C00417D0 (INC_SHARE_REF_CNT.c)
 *     HmgShareLockCheckIgnoreStockBit @ 0x1C008B660 (HmgShareLockCheckIgnoreStockBit.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x1C00D1560 (--0-$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ.c)
 */

SURFOBJ *__stdcall EngLockSurface(HSURF hsurf)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v4; // rdx
  SURFOBJ *v5; // rbx
  _BYTE v7[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v8; // [rsp+40h] [rbp-18h]

  UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>(v7);
  LOBYTE(v2) = 5;
  v8 = 0LL;
  v3 = HmgShareLockCheckIgnoreStockBit(hsurf, v2);
  v8 = v3;
  if ( v3 )
  {
    INC_SHARE_REF_CNT(v3, v4);
    v5 = (SURFOBJ *)(v8 + 24);
    if ( !v8 )
      v5 = 0LL;
  }
  else
  {
    v5 = 0LL;
  }
  SURFREF::~SURFREF((SURFREF *)v7);
  return v5;
}
