/*
 * XREFs of ?GrowBuffer@?$CAtlArray@V?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V?$CAutoPtrElementTraits@VCAccessAce@CDacl@ATL@@@2@@ATL@@AEAA_N_K@Z @ 0x180017940
 * Callers:
 *     ?Add@?$CAtlArray@V?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V?$CAutoPtrElementTraits@VCAccessAce@CDacl@ATL@@@2@@ATL@@QEAA_KAEAV?$CAutoPtr@VCAccessAce@CDacl@ATL@@@2@@Z @ 0x180049334 (-Add@-$CAtlArray@V-$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V-$CAutoPtrElementTraits@VCAccessAce@C.c)
 * Callees:
 *     ?AtlCrtErrorCheck@ATL@@YAHH@Z @ 0x18001E980 (-AtlCrtErrorCheck@ATL@@YAHH@Z.c)
 *     _invalid_parameter_noinfo @ 0x180021136 (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x18004B3CC (memcpy_0.c)
 */

char __fastcall ATL::CAtlArray<ATL::CAutoPtr<ATL::CDacl::CAccessAce>,ATL::CAutoPtrElementTraits<ATL::CDacl::CAccessAce>>::GrowBuffer(
        __int64 a1,
        size_t a2)
{
  size_t v4; // rdx
  size_t v5; // rcx
  void *v6; // rax
  void *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  void *v10; // rsi
  size_t v12; // r8
  int v13; // ebp

  v4 = *(_QWORD *)(a1 + 16);
  if ( a2 <= v4 )
    return 1;
  v5 = *(int *)(a1 + 24);
  if ( !*(_QWORD *)a1 )
  {
    if ( v5 > a2 )
      a2 = v5;
    v6 = calloc(a2, 8uLL);
    *(_QWORD *)a1 = v6;
    if ( !v6 )
      return 0;
    goto LABEL_20;
  }
  if ( !v5 )
  {
    v5 = v4 >> 1;
    if ( a2 - v4 > v4 >> 1 )
      v5 = a2 - v4;
  }
  if ( a2 < v4 + v5 )
    a2 = v4 + v5;
  v7 = calloc(a2, 8uLL);
  v10 = v7;
  if ( !v7 )
    return 0;
  v12 = 8LL * *(_QWORD *)(a1 + 8);
  if ( !v12 )
    goto LABEL_18;
  if ( *(_QWORD *)a1 )
  {
    memcpy_0(v7, *(const void **)a1, v12);
LABEL_18:
    v13 = 0;
    goto LABEL_19;
  }
  v13 = 22;
  *(_DWORD *)_o__errno(v9, v8, v12) = 22;
  invalid_parameter_noinfo();
LABEL_19:
  ATL::AtlCrtErrorCheck(v13);
  free(*(void **)a1);
  *(_QWORD *)a1 = v10;
LABEL_20:
  *(_QWORD *)(a1 + 16) = a2;
  return 1;
}
