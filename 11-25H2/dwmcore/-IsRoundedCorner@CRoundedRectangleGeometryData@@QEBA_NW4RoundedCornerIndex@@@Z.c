/*
 * XREFs of ?IsRoundedCorner@CRoundedRectangleGeometryData@@QEBA_NW4RoundedCornerIndex@@@Z @ 0x1801B50A0
 * Callers:
 *     ?Create@SharedData@CRoundedRectangleShape@@SAPEAV12@AEBUCRoundedRectangleGeometryData@@@Z @ 0x18005A1B0 (-Create@SharedData@CRoundedRectangleShape@@SAPEAV12@AEBUCRoundedRectangleGeometryData@@@Z.c)
 *     ?FromData@CCornerRects@@QEAAXAEBUCRoundedRectangleGeometryData@@AEBVCMILMatrix@@@Z @ 0x18027205C (-FromData@CCornerRects@@QEAAXAEBUCRoundedRectangleGeometryData@@AEBVCMILMatrix@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CRoundedRectangleGeometryData::IsRoundedCorner(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax

  if ( *(_BYTE *)(a1 + 52) )
    v2 = 16LL;
  else
    v2 = 8LL * a2 + 16;
  return *(float *)(v2 + a1) > 0.0 && *(float *)(v2 + a1 + 4) > 0.0;
}
