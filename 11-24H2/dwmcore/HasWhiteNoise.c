/*
 * XREFs of HasWhiteNoise @ 0x1801C24EC
 * Callers:
 *     ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x1801C0E50 (-LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V-$span@PEBUShaderLinkingBody@@$.c)
 * Callees:
 *     ??$?9$$CBW4ShaderLinkingArgument@@$0A@@?$span_iterator@$$CBW4ShaderLinkingArgument@@@details@gsl@@QEBA_NAEBV012@@Z @ 0x1801C256C (--$-9$$CBW4ShaderLinkingArgument@@$0A@@-$span_iterator@$$CBW4ShaderLinkingArgument@@@details@gsl.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall HasWhiteNoise(__int64 *a1)
{
  _WORD *v1; // rdx
  __int64 v2; // rax
  _WORD *v3; // rcx
  _WORD *i; // rax
  unsigned __int128 v5; // xmm0
  unsigned __int128 v7; // [rsp+20h] [rbp-40h] BYREF
  _WORD *v8; // [rsp+30h] [rbp-30h]
  unsigned __int128 v9; // [rsp+40h] [rbp-20h] BYREF
  _WORD *v10; // [rsp+50h] [rbp-10h]

  v1 = (_WORD *)a1[1];
  v2 = *a1;
  *(_QWORD *)&v7 = v1;
  v3 = &v1[v2];
  *((_QWORD *)&v7 + 1) = v3;
  if ( v1 > v3 )
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
  for ( i = v1; i != v3; ++i )
  {
    if ( *i == 12 )
      break;
  }
  v5 = v7;
  v8 = v3;
  v7 = __PAIR128__((unsigned __int64)v3, (unsigned __int64)v1);
  v9 = v5;
  v10 = i;
  return gsl::details::span_iterator<enum ShaderLinkingArgument const>::operator!=<enum ShaderLinkingArgument const,0>(
           &v9,
           &v7);
}
