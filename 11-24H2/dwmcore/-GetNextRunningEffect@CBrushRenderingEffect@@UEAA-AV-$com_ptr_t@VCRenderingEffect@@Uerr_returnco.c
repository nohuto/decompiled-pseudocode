/*
 * XREFs of ?GetNextRunningEffect@CBrushRenderingEffect@@UEAA?AV?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@PEAVCRenderingEffect@@PEA_N@Z @ 0x1800D81C0
 * Callers:
 *     ?MatchEffectToHomogeneousLayer@CBatchOptimizer@@CA?AV?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@AEBUSharedStateLayer@@PEAVCRenderingEffect@@@Z @ 0x1800D8400 (-MatchEffectToHomogeneousLayer@CBatchOptimizer@@CA-AV-$com_ptr_t@VCRenderingEffect@@Uerr_returnc.c)
 *     ?GetCommonSuperset@CRenderingEffect@@SA?AV?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@PEAV1@0@Z @ 0x1800D8530 (-GetCommonSuperset@CRenderingEffect@@SA-AV-$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@.c)
 * Callees:
 *     ??0?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCRenderingEffect@@@Z @ 0x1801C36F0 (--0-$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCRenderingEffect@@@.c)
 *     ??9CDrawListBitmap@@QEBA_NAEBV0@@Z @ 0x1801CB560 (--9CDrawListBitmap@@QEBA_NAEBV0@@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180249CC0 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

unsigned int (__fastcall ****__fastcall CBrushRenderingEffect::GetNextRunningEffect(
        unsigned int (__fastcall ***a1)(CMILRefCountImpl *__hidden this),
        unsigned int (__fastcall ****a2)(CMILRefCountImpl *__hidden this),
        unsigned int (__fastcall ***a3)(CMILRefCountImpl *__hidden this),
        _BYTE *a4))(CMILRefCountImpl *__hidden this)
{
  unsigned int (__fastcall *v8)(CMILRefCountImpl *__hidden); // rax
  __int16 v9; // ax
  unsigned int (__fastcall **v10)(CMILRefCountImpl *__hidden); // rax
  unsigned int (__fastcall *v11)(CMILRefCountImpl *__hidden); // rdx
  int v12; // et0
  int v14; // et0
  int v15; // et0
  unsigned int v16; // r10d
  __int64 i; // r8
  __int64 v18; // rax
  unsigned int (__fastcall ***v19)(CMILRefCountImpl *__hidden); // rdx
  __int64 v20; // r8
  __int64 v21; // rcx
  unsigned int (__fastcall ***v22)(CMILRefCountImpl *__hidden); // rcx
  int v23; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a4 = 0;
  v8 = (*a3)[8];
  if ( (char *)v8 == (char *)&CCommonRenderingEffect::GetEffectTypeWithAttributes )
  {
    v9 = 1;
    if ( !*((_BYTE *)a3 + 70) )
      v9 = 1;
  }
  else
  {
    v9 = v8((CMILRefCountImpl *)a3);
  }
  if ( v9 != 3 )
  {
    *a2 = a3;
    v11 = **a3;
    if ( v11 == CMILRefCountImpl::AddReference )
    {
      v14 = _InterlockedAdd((volatile signed __int32 *)a3, 1u);
      if ( !((v14 < 0) ^ __OFSUB__(v11, CMILRefCountImpl::AddReference) | (v14 == 0)) )
        return a2;
      goto LABEL_16;
    }
    goto LABEL_34;
  }
  if ( a3 == a1 )
  {
    *a4 = 1;
    *a2 = a1;
    if ( !a1 )
      return a2;
    v11 = **a1;
    if ( v11 == CMILRefCountImpl::AddReference )
    {
      v15 = _InterlockedAdd((volatile signed __int32 *)a1, 1u);
      if ( !((v15 < 0) ^ __OFSUB__(v11, CMILRefCountImpl::AddReference) | (v15 == 0)) )
        return a2;
      goto LABEL_16;
    }
    v22 = a1;
LABEL_35:
    v11((CMILRefCountImpl *)v22);
    return a2;
  }
  v10 = a1[2];
  if ( v10 != a3[2] )
  {
    *a2 = a3;
    v11 = **a3;
    if ( v11 == CMILRefCountImpl::AddReference )
    {
      v12 = _InterlockedAdd((volatile signed __int32 *)a3, 1u);
      if ( !((v12 < 0) ^ __OFSUB__(v11, CMILRefCountImpl::AddReference) | (v12 == 0)) )
        return a2;
LABEL_16:
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x18,
        (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
        (const char *)0x8007029CLL,
        v23);
      return a2;
    }
LABEL_34:
    v22 = a3;
    goto LABEL_35;
  }
  v16 = *((_DWORD *)v10 + 65);
  for ( i = 0LL; (unsigned int)i < v16; i = (unsigned int)(v20 + 1) )
  {
    v18 = 4LL * (unsigned int)i;
    if ( *((float *)&a1[v18 + 16] + 1) == *((float *)&a3[v18 + 16] + 1)
      && *(float *)&a1[v18 + 17] == *(float *)&a3[v18 + 17]
      && *((float *)&a1[v18 + 17] + 1) == *((float *)&a3[v18 + 17] + 1)
      && *(float *)&a1[v18 + 18] == *(float *)&a3[v18 + 18]
      && !(unsigned __int8)CDrawListBitmap::operator!=(&a1[3 * i + 3], &a3[3 * i + 3]) )
    {
      v21 = 3 * v20;
      if ( *((_BYTE *)a1 + 3 * v20 + 120) == *((_BYTE *)a3 + 3 * v20 + 120)
        && *((_BYTE *)a1 + v21 + 121) == *((_BYTE *)a3 + v21 + 121)
        && *((_BYTE *)a1 + v21 + 122) == *((_BYTE *)a3 + v21 + 122)
        && *((_BYTE *)a1 + v20 + 260) == *((_BYTE *)a3 + v20 + 260) )
      {
        continue;
      }
    }
    v19 = a3;
    goto LABEL_24;
  }
  *a4 = 1;
  v19 = a1;
LABEL_24:
  wil::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>(
    a2,
    v19);
  return a2;
}
