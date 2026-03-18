/*
 * XREFs of ?hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ @ 0x140024FE0
 * Callers:
 *     ?GrepSfmGetDirtyRgn@@YAJPEAVSFMLOGICALSURFACE@@_KPEAPEAUHRGN__@@222PEAU_POINTL@@PEAH4@Z @ 0x140024C24 (-GrepSfmGetDirtyRgn@@YAJPEAVSFMLOGICALSURFACE@@_KPEAPEAUHRGN__@@222PEAU_POINTL@@PEAH4@Z.c)
 *     NtGdiCreateEllipticRgn @ 0x1400E59A0 (NtGdiCreateEllipticRgn.c)
 *     NtGdiPathToRegion @ 0x1400E5CE0 (NtGdiPathToRegion.c)
 *     NtGdiCreateRoundRectRgn @ 0x1400E8050 (NtGdiCreateRoundRectRgn.c)
 * Callees:
 *     ??1HmgInsertObjectHelper@@QEAA@XZ @ 0x14002504C (--1HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ??0HmgInsertObjectHelper@@QEAA@XZ @ 0x1400252C0 (--0HmgInsertObjectHelper@@QEAA@XZ.c)
 */

__int64 __fastcall RGNOBJ::hrgnAssociate(RGNOBJ *this)
{
  __int64 v2; // r8
  __int64 v3; // rdi
  __int64 v4; // rbx
  __int64 inserted; // rax
  __int64 v6; // rcx
  _BYTE v8[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v9; // [rsp+40h] [rbp-18h]

  HmgInsertObjectHelper::HmgInsertObjectHelper((HmgInsertObjectHelper *)v8);
  v3 = *(_QWORD *)this;
  v4 = 0LL;
  if ( !v9 )
  {
    LOBYTE(v2) = 4;
    inserted = HmgInsertObjectInternal(v3, 1LL, v2);
    v6 = v9;
    v4 = inserted;
    if ( inserted )
      v6 = v3;
    v9 = v6;
  }
  HmgInsertObjectHelper::~HmgInsertObjectHelper((HmgInsertObjectHelper *)v8);
  return v4;
}
