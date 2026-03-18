/*
 * XREFs of ?Reset@CPathData@@AEAAXXZ @ 0x18024C1EC
 * Callers:
 *     ?Open@CPathData@@QEAAJPEAPEAUID2D1SimplifiedGeometrySink@@@Z @ 0x1801AD654 (-Open@CPathData@@QEAAJPEAPEAUID2D1SimplifiedGeometrySink@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800956F8 (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CPathData::Reset(CPathData *this, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  CGlobalDrawingContext *v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = (CGlobalDrawingContext *)_InterlockedExchange64((volatile __int64 *)this + 7, 0LL);
  v3 = *((_QWORD *)this + 2);
  if ( v3 != *((_QWORD *)this + 3) )
    *((_QWORD *)this + 3) = v3;
  *((_QWORD *)this + 6) = 0LL;
  *((_BYTE *)this + 66) = 0;
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v4, 0LL, a3);
}
