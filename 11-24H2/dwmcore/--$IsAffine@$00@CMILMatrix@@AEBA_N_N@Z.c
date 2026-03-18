/*
 * XREFs of ??$IsAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x180167650
 * Callers:
 *     ?Transform4DVector@CMILMatrix@@QEBA?AUD2D_VECTOR_4F@@AEBU2@@Z @ 0x1801667A0 (-Transform4DVector@CMILMatrix@@QEBA-AUD2D_VECTOR_4F@@AEBU2@@Z.c)
 *     ?TransformIgnoreZW@CMILMatrix@@QEBAXPEBUD2D_POINT_2F@@PEAUD2D_POINT_4F@@I@Z @ 0x180166F10 (-TransformIgnoreZW@CMILMatrix@@QEBAXPEBUD2D_POINT_2F@@PEAUD2D_POINT_4F@@I@Z.c)
 *     ?Transform@CMILMatrix@@QEBAXPEBUD2D_POINT_4F@@PEAU2@I@Z @ 0x1801674F8 (-Transform@CMILMatrix@@QEBAXPEBUD2D_POINT_4F@@PEAU2@I@Z.c)
 *     ?PrependTranslate@CMILMatrix@@QEAAXMM@Z @ 0x1802ADDFC (-PrependTranslate@CMILMatrix@@QEAAXMM@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CMILMatrix::IsAffine<1>(__int64 a1, char a2)
{
  char v2; // r8
  bool v4; // r9

  v2 = *(_BYTE *)(a1 + 65);
  if ( (char)(4 * v2) >> 6 == 1 )
    return 0;
  if ( (char)(4 * v2) >> 6 >= 0 )
  {
    v4 = COERCE_FLOAT(COERCE_UNSIGNED_INT(
                        (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(a1 + 28) & _xmm) * 61440.0)
                                      + (float)(COERCE_FLOAT(*(_DWORD *)(a1 + 12) & _xmm) * 61440.0))
                              + COERCE_FLOAT(*(_DWORD *)(a1 + 60) & _xmm))
                      - 1.0) & _xmm) < 0.000081380211;
    *(_BYTE *)(a1 + 65) = v2 & 0xCF | (32 * v4 + 16);
    if ( !a2
      && COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(*(_DWORD *)(a1 + 44) & _xmm) * 61440.0) - 0.0) & _xmm) >= 0.000081380211 )
    {
      return 0;
    }
    return v4;
  }
  else
  {
    return a2
        || COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(*(_DWORD *)(a1 + 44) & _xmm) * 61440.0) - 0.0) & _xmm) < 0.000081380211;
  }
}
