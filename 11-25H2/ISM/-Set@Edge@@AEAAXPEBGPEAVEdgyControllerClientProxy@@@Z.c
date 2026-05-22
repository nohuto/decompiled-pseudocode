/*
 * XREFs of ?Set@Edge@@AEAAXPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x1801A3078
 * Callers:
 *     ?AddOrUpdate@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x1801A2070 (-AddOrUpdate@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180079864 (-InternalRelease@-$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008DFDC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800B7AAC (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?InternalAddRef@?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x180154528 (-InternalAddRef@-$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$_Emplace_reallocate@AEAPEAVEdgyControllerClientProxy@@@?$vector@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@std@@@std@@AEAAPEAV?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@QEAV234@AEAPEAVEdgyControllerClientProxy@@@Z @ 0x1801A1804 (--$_Emplace_reallocate@AEAPEAVEdgyControllerClientProxy@@@-$vector@V-$ComPtr@VEdgyControllerClie.c)
 *     ?IsEdge@Edge@@QEBA_NPEAVEdgyControllerClientProxy@@@Z @ 0x1801A2A84 (-IsEdge@Edge@@QEBA_NPEAVEdgyControllerClientProxy@@@Z.c)
 *     ?IsEdge@Edge@@QEBA_NPEBG@Z @ 0x1801A2A9C (-IsEdge@Edge@@QEBA_NPEBG@Z.c)
 */

void __fastcall Edge::Set(Edge *this, const unsigned __int16 *a2, struct EdgyControllerClientProxy *a3)
{
  unsigned __int64 v5; // r8
  const char *v6; // r9
  __int64 *v7; // rcx
  struct EdgyControllerClientProxy **i; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct EdgyControllerClientProxy *v10; // [rsp+30h] [rbp+8h] BYREF
  struct EdgyControllerClientProxy *v11; // [rsp+40h] [rbp+18h] BYREF

  v11 = a3;
  if ( *((_QWORD *)this + 3) )
  {
    if ( !Edge::IsEdge(this, a2) )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x46,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgylegacy\\processor\\edges.cpp",
        v6);
  }
  else
  {
    v5 = -1LL;
    do
      ++v5;
    while ( a2[v5] );
    std::wstring::assign((char *)this + 8, a2, v5);
  }
  if ( *((_QWORD *)this + 5) )
  {
    if ( !Edge::IsEdge((struct EdgyControllerClientProxy **)this, a3) )
    {
      v7 = (__int64 *)*((_QWORD *)this + 14);
      for ( i = (struct EdgyControllerClientProxy **)*((_QWORD *)this + 13);
            i != (struct EdgyControllerClientProxy **)v7;
            ++i )
      {
        if ( *i == a3 )
          return;
      }
      if ( v7 == *((__int64 **)this + 15) )
      {
        std::vector<Microsoft::WRL::ComPtr<EdgyControllerClientProxy>>::_Emplace_reallocate<EdgyControllerClientProxy * &>(
          (__int64 **)this + 13,
          *((__int64 **)this + 14),
          (__int64 *)&v11);
      }
      else
      {
        *v7 = (__int64)a3;
        Microsoft::WRL::ComPtr<EdgyControllerClientProxy>::InternalAddRef(v7);
        *((_QWORD *)this + 14) += 8LL;
      }
    }
  }
  else if ( a3 )
  {
    v10 = a3;
    Microsoft::WRL::ComPtr<EdgyControllerClientProxy>::InternalAddRef((__int64 *)&v10);
    v10 = (struct EdgyControllerClientProxy *)*((_QWORD *)this + 5);
    *((_QWORD *)this + 5) = a3;
    Microsoft::WRL::ComPtr<ShellGesturesClientProxy>::InternalRelease((__int64 *)&v10);
  }
}
