/*
 * XREFs of ?hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ @ 0x14001DD50
 * Callers:
 *     GreExtCreateRegion @ 0x140066D70 (GreExtCreateRegion.c)
 *     GreCreatePolyPolygonRgnInternal @ 0x14006AC5C (GreCreatePolyPolygonRgnInternal.c)
 * Callees:
 *     ??1HmgInsertObjectHelper@@QEAA@XZ @ 0x14001DDB4 (--1HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ??0HmgInsertObjectHelper@@QEAA@XZ @ 0x14001DDE0 (--0HmgInsertObjectHelper@@QEAA@XZ.c)
 *     HmgInsertObjectInternal @ 0x14001E500 (HmgInsertObjectInternal.c)
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
