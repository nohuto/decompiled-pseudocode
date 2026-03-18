/*
 * XREFs of AppendCustomSamplerShaderBody @ 0x1801BEFD4
 * Callers:
 *     AppendShaderBody @ 0x1801BFDD8 (AppendShaderBody.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reserve_region@?$vector_facade@DV?$buffer_impl@D$0DA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAD_K0@Z @ 0x1801BED10 (-reserve_region@-$vector_facade@DV-$buffer_impl@D$0DA@$00Vliberal_expansion_policy@detail@@@deta.c)
 *     ?clear_region@?$vector_facade@DV?$buffer_impl@D$0DA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801BEEB0 (-clear_region@-$vector_facade@DV-$buffer_impl@D$0DA@$00Vliberal_expansion_policy@detail@@@detail.c)
 *     ??1?$vector_facade@_NV?$buffer_impl@_N$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x1801BEF78 (--1-$vector_facade@_NV-$buffer_impl@_N$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail.c)
 *     AppendColorModifications @ 0x1801BF6A0 (AppendColorModifications.c)
 *     ?AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@@Z @ 0x1801C0850 (-AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V-$.c)
 *     GetExtendModeDecoration @ 0x180224C50 (GetExtendModeDecoration.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 *     memcpy_0 @ 0x1802DF6D4 (memcpy_0.c)
 */

__int64 __fastcall AppendCustomSamplerShaderBody(
        __int64 a1,
        unsigned __int16 a2,
        __int128 *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v11; // rbx
  unsigned __int64 v12; // r8
  char *v13; // rax
  _BYTE *v14; // rdi
  int appended; // eax
  unsigned int v16; // ebx
  __int64 v17; // rdx
  char v19; // al
  void *v20; // rcx
  unsigned __int8 ExtendModeDecoration; // al
  __int128 v22; // [rsp+50h] [rbp-71h] BYREF
  void *v23[3]; // [rsp+60h] [rbp-61h] BYREF
  _BYTE v24[48]; // [rsp+78h] [rbp-49h] BYREF
  char v25; // [rsp+A8h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+47h]

  v11 = -1LL;
  v23[0] = v24;
  v23[1] = v24;
  v23[2] = &v25;
  do
    ++v11;
  while ( *(_BYTE *)(*((_QWORD *)a3 + 4) + v11) );
  v12 = v11 + 3;
  if ( v11 == -3 )
  {
    detail::vector_facade<char,detail::buffer_impl<char,48,1,detail::liberal_expansion_policy>>::clear_region(
      (__int64 *)v23,
      0LL,
      -(__int64)v12);
  }
  else
  {
    v13 = detail::vector_facade<char,detail::buffer_impl<char,48,1,detail::liberal_expansion_policy>>::reserve_region(
            (detail::liberal_expansion_policy *)v23,
            0LL,
            v12);
    memset_0(v13, 0, v11 + 3);
  }
  memcpy_0(v23[0], *((const void **)a3 + 4), v11 + 1);
  v14 = (_BYTE *)(a4 + 32LL * (unsigned __int8)*((_WORD *)a3 + 22));
  if ( v14[18] && v14[16] )
  {
    v19 = ((__int64 (*)(void))GetExtendModeDecoration)();
    v20 = v23[0];
    *((_BYTE *)v23[0] + v11) = v19;
    LOBYTE(v20) = v14[17];
    ExtendModeDecoration = GetExtendModeDecoration(v20);
    *(_WORD *)((char *)v23[0] + v11 + 1) = ExtendModeDecoration;
  }
  v22 = *a3;
  appended = CShaderLinkingGraphBuilder::AppendNode(a1, a2, a5, a6, (__int64)v23[0], (__int64)&v22);
  v16 = appended;
  if ( appended >= 0 )
  {
    appended = AppendColorModifications(a1, v14, a2, a7);
    v16 = appended;
    if ( appended >= 0 )
    {
      v16 = 0;
      goto LABEL_9;
    }
    v17 = 1125LL;
  }
  else
  {
    v17 = 1116LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v17,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\shaderlinking.cpp",
    (const char *)(unsigned int)appended);
LABEL_9:
  detail::vector_facade<bool,detail::buffer_impl<bool,40,1,detail::liberal_expansion_policy>>::~vector_facade<bool,detail::buffer_impl<bool,40,1,detail::liberal_expansion_policy>>((__int64)v23);
  return v16;
}
