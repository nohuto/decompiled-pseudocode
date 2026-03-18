/*
 * XREFs of ?IsSimpleGeometry@CPathData@@QEBA_NXZ @ 0x18005CEE8
 * Callers:
 *     ?Trim@CTrimPathOperation@@QEAAJPEBVCPathData@@MMMPEAPEAV2@@Z @ 0x18005C390 (-Trim@CTrimPathOperation@@QEAAJPEBVCPathData@@MMMPEAPEAV2@@Z.c)
 *     ?GetLength@CPathLengthOperation@@QEAAMPEBVCPathData@@@Z @ 0x18005D8D8 (-GetLength@CPathLengthOperation@@QEAAMPEBVCPathData@@@Z.c)
 *     ?GetSimplifiedPathDataInternal@CPathSegmentsShape@@MEBAJPEAPEAVCPathData@@@Z @ 0x18022D470 (-GetSimplifiedPathDataInternal@CPathSegmentsShape@@MEBAJPEAPEAVCPathData@@@Z.c)
 * Callees:
 *     ??Econst_iterator@SegmentCollection@Path@@QEAAAEAV012@XZ @ 0x18005CA74 (--Econst_iterator@SegmentCollection@Path@@QEAAAEAV012@XZ.c)
 */

bool __fastcall CPathData::IsSimpleGeometry(CPathData *this)
{
  char v1; // al
  _BYTE *v4; // rax
  _BYTE *v5; // rbx
  _BYTE *v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_BYTE *)this + 66);
  if ( !v1 )
  {
    v4 = (_BYTE *)*((_QWORD *)this + 2);
    v5 = (_BYTE *)*((_QWORD *)this + 3);
    v6 = v4;
    while ( v4 != v5 )
    {
      if ( (unsigned __int8)(*v4 - 3) <= 1u )
      {
        v1 = -1;
        goto LABEL_8;
      }
      Path::SegmentCollection::const_iterator::operator++(&v6);
      v4 = v6;
    }
    v1 = 1;
LABEL_8:
    *((_BYTE *)this + 66) = v1;
  }
  return v1 == 1;
}
