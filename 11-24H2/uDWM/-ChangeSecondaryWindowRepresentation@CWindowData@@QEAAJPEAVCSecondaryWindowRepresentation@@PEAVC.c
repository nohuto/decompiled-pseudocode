/*
 * XREFs of ?ChangeSecondaryWindowRepresentation@CWindowData@@QEAAJPEAVCSecondaryWindowRepresentation@@PEAVCWindowRepresentation@@@Z @ 0x18003D6BC
 * Callers:
 *     ?OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18003D11C (-OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddSecondaryWindowRepresentation@CWindowData@@AEAAJPEAVCSecondaryWindowRepresentation@@W4WindowRepresentationType@@_N@Z @ 0x18003DB18 (-AddSecondaryWindowRepresentation@CWindowData@@AEAAJPEAVCSecondaryWindowRepresentation@@W4Window.c)
 *     ?RemoveSecondaryWindowRepresentation@CWindowData@@AEAAXPEAVCSecondaryWindowRepresentation@@W4WindowRepresentationType@@_N@Z @ 0x18003F1DC (-RemoveSecondaryWindowRepresentation@CWindowData@@AEAAXPEAVCSecondaryWindowRepresentation@@W4Win.c)
 */

__int64 __fastcall CWindowData::ChangeSecondaryWindowRepresentation(
        CWindowData *this,
        __m128i *a2,
        CWindowData **a3,
        __int64 a4)
{
  CWindowData *v5; // rcx
  __m128i v7; // xmm6
  char v8; // bl
  CWindowData *v9; // rbp
  bool v10; // si
  int v11; // eax
  unsigned int v12; // ebx

  v5 = *a3;
  v7 = a2[4];
  v8 = 1;
  v9 = (CWindowData *)a2[4].m128i_i64[0];
  v10 = *a3 != v9;
  if ( *a3 )
  {
    if ( *a3 == v9 || v5 == this )
      a4 = 0LL;
    else
      LOBYTE(a4) = 1;
    CWindowData::RemoveSecondaryWindowRepresentation(v5, a2, *((unsigned int *)a3 + 2), a4);
  }
  if ( !v10 || v9 == this )
    v8 = 0;
  LOBYTE(a4) = v8;
  v11 = CWindowData::AddSecondaryWindowRepresentation(
          v9,
          a2,
          (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v7, 8)),
          a4);
  v12 = v11;
  if ( v11 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x3F5u, 0LL);
  return v12;
}
