/*
 * XREFs of ?Reset@CPathData@@AEAAXXZ @ 0x1802575BC
 * Callers:
 *     ?Open@CPathData@@QEAAJPEAPEAUID2D1SimplifiedGeometrySink@@@Z @ 0x1801A86FC (-Open@CPathData@@QEAAJPEAPEAUID2D1SimplifiedGeometrySink@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x18013A67C (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CPathData::Reset(CPathData *this)
{
  __int64 v1; // rax
  CGlobalDrawingContext *v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = (CGlobalDrawingContext *)_InterlockedExchange64((volatile __int64 *)this + 7, 0LL);
  v1 = *((_QWORD *)this + 2);
  if ( v1 != *((_QWORD *)this + 3) )
    *((_QWORD *)this + 3) = v1;
  *((_QWORD *)this + 6) = 0LL;
  *((_BYTE *)this + 66) = 0;
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v2);
}
