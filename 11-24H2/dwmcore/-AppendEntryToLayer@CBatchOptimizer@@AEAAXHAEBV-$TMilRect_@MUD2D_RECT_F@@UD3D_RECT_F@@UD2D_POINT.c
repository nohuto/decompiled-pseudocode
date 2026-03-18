/*
 * XREFs of ?AppendEntryToLayer@CBatchOptimizer@@AEAAXHAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@$$QEAV?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x180054510
 * Callers:
 *     ?AddRenderingCommand@CBatchOptimizer@@QEAA_N$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@@Z @ 0x180289FB8 (-AddRenderingCommand@CBatchOptimizer@@QEAA_N$$QEAV-$unique_ptr@VCBatchCommand@@U-$default_delete.c)
 * Callees:
 *     ?FlushBottomLayer@CBatchOptimizer@@AEAAXXZ @ 0x180054000 (-FlushBottomLayer@CBatchOptimizer@@AEAAXXZ.c)
 *     ??4?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV01@@Z @ 0x1800547B0 (--4-$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180249CC0 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBatchOptimizer::AppendEntryToLayer(
        CBatchOptimizer *this,
        int a2,
        _OWORD *a3,
        __int64 *a4,
        _BYTE **a5)
{
  int v5; // r15d
  __int64 v9; // rdi
  __int64 v10; // rdx
  char *v11; // rbx
  _BYTE *v12; // rcx
  __int64 v13; // rdx
  int v14; // eax
  char *v15; // rbx
  volatile signed __int32 **v16; // r15
  volatile signed __int32 *v17; // rbx
  volatile signed __int32 *v18; // r12
  unsigned int (__fastcall *v19)(CMILRefCountImpl *__hidden); // rax
  int v20; // et0
  __int64 v21; // r9
  __int64 v22; // rax
  __int64 v23; // r8
  __int64 result; // rax
  __int64 v25; // rdx
  __int64 (__fastcall *v26)(_BYTE *, __int64); // rax
  __int64 v27; // rax
  __int64 v28; // rax
  _DWORD *v29; // rbp
  int v30; // r8d
  __int64 v31; // rdx
  _BYTE *v32; // rax
  __int64 v33; // rcx
  int v34; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v9 = a2;
  v34 = v5;
  v10 = v9;
  v11 = (char *)this + 520 * *((int *)this + v9 + 12);
  v12 = *a5;
  if ( *a5 )
  {
    if ( *((_DWORD *)v11 + 25) )
    {
      *a5 = 0LL;
      v13 = *((_QWORD *)v11 + 14);
      *((_QWORD *)v11 + 14) = v12;
      if ( v13 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
      goto LABEL_5;
    }
    if ( !*((_QWORD *)v11 + 14) )
    {
      v26 = *(__int64 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v12 + 64LL);
      if ( (char *)v26 == (char *)&CCommonRenderingEffect::GetEffectTypeWithAttributes )
      {
        LODWORD(v27) = 65537;
        if ( !v12[70] )
          LODWORD(v27) = 1;
      }
      else
      {
        v27 = v26(v12, v9);
        v10 = v9;
      }
      if ( (v27 & 0x10000) != 0 )
      {
        v32 = *a5;
        *a5 = 0LL;
        v33 = *((_QWORD *)v11 + 14);
        *((_QWORD *)v11 + 14) = v32;
        if ( v33 )
        {
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v33 + 8LL))(v33, v10);
LABEL_5:
          v10 = v9;
        }
      }
      else if ( (_DWORD)v9 && !*((_DWORD *)this + 130 * *((int *)this + v10 + 11) + 26) )
      {
        *((_BYTE *)this + 4240) = 1;
        v14 = *((_DWORD *)v11 + 24);
LABEL_7:
        if ( *((_DWORD *)v11 + 25) == 20 )
          goto LABEL_9;
        goto LABEL_8;
      }
    }
  }
  v14 = *((_DWORD *)v11 + 24);
  if ( (_DWORD)v9 )
    goto LABEL_7;
LABEL_8:
  if ( v14 != 20 )
  {
LABEL_18:
    v21 = v9;
    goto LABEL_19;
  }
LABEL_9:
  v15 = (char *)this + 520 * *((int *)this + v10 + 12);
  if ( *((_DWORD *)v15 + 25) )
    *((_DWORD *)v15 + 26) = 1;
  v16 = (volatile signed __int32 **)(v15 + 112);
  if ( !(_DWORD)v9 )
  {
    v17 = *v16;
    CBatchOptimizer::FlushBottomLayer(this);
    v18 = *v16;
    *v16 = v17;
    if ( v17 )
    {
      v19 = **(unsigned int (__fastcall ***)(CMILRefCountImpl *__hidden))v17;
      if ( v19 == CMILRefCountImpl::AddReference )
      {
        v20 = _InterlockedAdd(v17, 1u);
        if ( (v20 < 0) ^ __OFSUB__(v19, CMILRefCountImpl::AddReference) | (v20 == 0) )
          wil::details::in1diag3::Log_Hr(
            retaddr,
            (void *)0x18,
            (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
            (const char *)0x8007029CLL,
            v34);
      }
      else
      {
        v19((CMILRefCountImpl *)v17);
      }
    }
    if ( v18 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
    goto LABEL_18;
  }
  CBatchOptimizer::FlushBottomLayer(this);
  v28 = *((int *)this + 12);
  v29 = (_DWORD *)((char *)this + 48);
  *(_OWORD *)((char *)this + 520 * v28 + 80) = *((_OWORD *)v15 + 5);
  wil::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>::operator=((char *)this + 520 * v28 + 112, v15 + 112);
  v30 = *((_DWORD *)this + 12);
  v31 = 0LL;
  v21 = v9;
  do
  {
    ++v31;
    *v29 = v29[1];
    ++v29;
  }
  while ( v31 != v9 );
  *((_DWORD *)this + v9 + 12) = v30;
LABEL_19:
  v22 = *((int *)this + v21 + 12);
  v23 = *a4;
  *a4 = 0LL;
  result = (__int64)this + 520 * v22;
  v25 = *(unsigned int *)(result + 96);
  *(_DWORD *)(result + 96) = v25 + 1;
  *(_QWORD *)(result + 8 * v25 + 120) = v23;
  if ( (_DWORD)v9 )
    *(_OWORD *)(result + 16LL * *(unsigned int *)(result + 100) + 280) = *a3;
  ++*(_DWORD *)(result + 100);
  return result;
}
