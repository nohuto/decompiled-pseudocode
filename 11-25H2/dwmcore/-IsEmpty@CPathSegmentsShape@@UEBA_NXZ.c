/*
 * XREFs of ?IsEmpty@CPathSegmentsShape@@UEBA_NXZ @ 0x18005C870
 * Callers:
 *     <none>
 * Callees:
 *     ??Econst_iterator@ControlPointCollection@Path@@QEAAAEAV012@XZ @ 0x18005C8F0 (--Econst_iterator@ControlPointCollection@Path@@QEAAAEAV012@XZ.c)
 *     ??Dconst_iterator@ControlPointCollection@Path@@QEBAAEBUD2D_POINT_2F@@XZ @ 0x18005C9E8 (--Dconst_iterator@ControlPointCollection@Path@@QEBAAEBUD2D_POINT_2F@@XZ.c)
 */

bool __fastcall CPathSegmentsShape::IsEmpty(CPathSegmentsShape *this)
{
  __int64 v1; // rsi
  int v2; // edi
  bool v3; // zf
  __int64 v5; // rax
  int v6; // edi
  __int64 v7; // rbx
  int v8; // ecx
  _QWORD v9[2]; // [rsp+20h] [rbp-28h] BYREF
  int v10; // [rsp+30h] [rbp-18h]

  v1 = *((_QWORD *)this + 2);
  v2 = *(_DWORD *)(v1 + 52);
  v3 = v2 == 0;
  if ( !v2 )
  {
    v5 = *(_QWORD *)(v1 + 16);
    v6 = 0;
    v7 = *(_QWORD *)(v1 + 24);
    v8 = 0;
    v10 = 0;
    v9[0] = v5;
    v9[1] = v7;
    while ( v5 != v7 || v8 )
    {
      Path::ControlPointCollection::const_iterator::operator*(v9);
      ++v6;
      Path::ControlPointCollection::const_iterator::operator++(v9);
      v8 = v10;
      v5 = v9[0];
    }
    *(_DWORD *)(v1 + 52) = v6;
    return v6 == 0;
  }
  return v3;
}
