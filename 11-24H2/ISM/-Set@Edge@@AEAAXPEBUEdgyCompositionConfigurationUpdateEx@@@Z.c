/*
 * XREFs of ?Set@Edge@@AEAAXPEBUEdgyCompositionConfigurationUpdateEx@@@Z @ 0x1801AA77C
 * Callers:
 *     ?AddOrUpdate@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdateEx@@@Z @ 0x1801A97A4 (-AddOrUpdate@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdateEx@@@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008E73C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800B586C (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?IsEdge@Edge@@QEBA_NPEBG@Z @ 0x1801AA0AC (-IsEdge@Edge@@QEBA_NPEBG@Z.c)
 */

void __fastcall Edge::Set(Edge *this, const struct EdgyCompositionConfigurationUpdateEx *a2)
{
  __int64 v2; // rax
  const unsigned __int16 *v4; // rdx
  unsigned __int64 v6; // r8
  const char *v7; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *(_QWORD *)a2;
  v4 = (const unsigned __int16 *)((char *)a2 + 24);
  *(_QWORD *)this = v2;
  if ( *((_QWORD *)this + 3) )
  {
    if ( !Edge::IsEdge(this, v4) )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x2A,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgylegacy\\processor\\edges.cpp",
        v7);
  }
  else
  {
    v6 = -1LL;
    do
      ++v6;
    while ( v4[v6] );
    std::wstring::assign((char *)this + 8, v4, v6);
  }
  *((_DWORD *)this + 16) = *((_DWORD *)a2 + 4);
}
