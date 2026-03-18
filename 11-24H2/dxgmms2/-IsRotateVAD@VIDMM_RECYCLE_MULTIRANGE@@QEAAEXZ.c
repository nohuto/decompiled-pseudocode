/*
 * XREFs of ?IsRotateVAD@VIDMM_RECYCLE_MULTIRANGE@@QEAAEXZ @ 0x1400F6370
 * Callers:
 *     ?Rotate@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAVVIDMM_GLOBAL@@W4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ22PEAX@Z4TVIDMM_ROTATE_FLAGS@@@Z @ 0x1400F5C14 (-Rotate@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAVVIDMM_GLOBAL@@W4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6A.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall VIDMM_RECYCLE_MULTIRANGE::IsRotateVAD(VIDMM_RECYCLE_MULTIRANGE *this)
{
  __int64 v1; // rdx
  char v2; // r8
  __int64 v3; // r9
  __int64 v5; // rdx

  v1 = *((_QWORD *)this + 8);
  v2 = 0;
  while ( !v2 )
  {
    v3 = *(_QWORD *)(v1 + 72);
    if ( (*(_BYTE *)(v3 + 132) & 1) == 0 )
      return 0;
    if ( v1 == *((_QWORD *)this + 9) )
    {
      v2 = 1;
    }
    else
    {
      v5 = *(_QWORD *)(v1 + 120);
      if ( v5 == v3 + 72 )
        v1 = 0LL;
      else
        v1 = v5 - 120;
    }
  }
  return 1;
}
