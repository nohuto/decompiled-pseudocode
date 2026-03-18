/*
 * XREFs of ?clear_region@?$vector_facade@W4D2D1_EDGE_FLAGS@@V?$buffer_impl@W4D2D1_EDGE_FLAGS@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180191A40
 * Callers:
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x18008B5B0 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 *     ?resize@?$vector_facade@W4D2D1_EDGE_FLAGS@@V?$buffer_impl@W4D2D1_EDGE_FLAGS@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX_KAEBW4D2D1_EDGE_FLAGS@@@Z @ 0x1801917E8 (-resize@-$vector_facade@W4D2D1_EDGE_FLAGS@@V-$buffer_impl@W4D2D1_EDGE_FLAGS@@$0CI@$00Vliberal_ex.c)
 * Callees:
 *     memmove_0 @ 0x1802E8980 (memmove_0.c)
 */

__int64 __fastcall detail::vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,40,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r11
  _QWORD *v4; // rbx
  __int64 v5; // rdi
  unsigned __int64 v7; // r10
  __int64 v8; // r9
  bool v10; // zf
  _QWORD *v11; // rdx
  signed __int64 v12; // r8
  unsigned __int64 v13; // rax
  __int64 result; // rax

  v3 = *a1;
  v4 = a1 + 1;
  v5 = a2 + a3;
  v7 = (a1[1] - *a1) >> 2;
  v8 = a2;
  v10 = a2 + a3 == v7;
  if ( a2 + a3 > v7 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
  }
  v11 = v4;
  if ( !v10 )
  {
    if ( !v8 || v3 && v8 >= 0 && v7 >= v8 )
    {
      v12 = 4 * v7 - 4 * v5;
      v13 = v12 >> 2;
      if ( v12 >> 2 >= 0 )
      {
        if ( v12 >> 2 <= 0 || v7 - v8 >= v13 )
          goto LABEL_10;
      }
      else if ( v8 >= (unsigned __int64)-(__int64)v13 )
      {
LABEL_10:
        memmove_0((void *)(v3 + 4 * v8), (const void *)(v3 + 4 * v5), v12);
        v11 = a1 + 1;
        goto LABEL_11;
      }
    }
    _invalid_parameter_noinfo_noreturn();
  }
LABEL_11:
  result = 4 * a3;
  *v11 = *v4 - 4 * a3;
  return result;
}
