/*
 * XREFs of ?AddSource@DXGPORTDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRESENTSOURCESET__@@PEBU_D3DKMDT_VIDEO_PRESENT_SOURCE@@@Z @ 0x140260020
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??1?$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ @ 0x14004A948 (--1-$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDEOPRESENTSOURCESET@@PEAUD3DKMDT_HVIDEOPRESENTSOURCESET__@@@@SAPEAVDMMVIDEOPRESENTSOURCESET@@PEAUD3DKMDT_HVIDEOPRESENTSOURCESET__@@@Z @ 0x14008E78C (-GetFromHandle@-$ExposedViaHandle@VDMMVIDEOPRESENTSOURCESET@@PEAUD3DKMDT_HVIDEOPRESENTSOURCESET_.c)
 *     ??0DMMVIDEOPRESENTSOURCE@@QEAA@QEAVDMMVIDEOPRESENTSOURCESET@@I@Z @ 0x14008F3B4 (--0DMMVIDEOPRESENTSOURCE@@QEAA@QEAVDMMVIDEOPRESENTSOURCESET@@I@Z.c)
 *     ?AddSource@DMMVIDEOPRESENTSOURCESET@@QEAAJV?$auto_ptr@VDMMVIDEOPRESENTSOURCE@@@@@Z @ 0x14026083C (-AddSource@DMMVIDEOPRESENTSOURCESET@@QEAAJV-$auto_ptr@VDMMVIDEOPRESENTSOURCE@@@@@Z.c)
 *     ?ReleaseDdiEnumerator@DMMVIDEOPRESENTSOURCESET@@QEAAJPEBU_D3DKMDT_VIDEO_PRESENT_SOURCE@@@Z @ 0x140260914 (-ReleaseDdiEnumerator@DMMVIDEOPRESENTSOURCESET@@QEAAJPEBU_D3DKMDT_VIDEO_PRESENT_SOURCE@@@Z.c)
 */

__int64 __fastcall DXGPORTDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL::AddSource(
        DXGPORTDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL *this,
        const struct _D3DKMDT_VIDEO_PRESENT_SOURCE *a2,
        const struct _D3DKMDT_VIDEO_PRESENT_SOURCE *a3,
        __int64 a4)
{
  __int64 v6; // rax
  __int64 result; // rax
  struct DMMVIDEOPRESENTSOURCESET *v8; // rbx
  __int64 v9; // r9
  DMMVIDEOPRESENTSOURCE *v10; // rax
  __int64 v11; // rdi
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  _QWORD *v17; // rax
  DMMVIDEOPRESENTSOURCE *v18; // [rsp+30h] [rbp+8h] BYREF
  DMMVIDEOPRESENTSOURCE *v19; // [rsp+38h] [rbp+10h] BYREF

  v6 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  *(_QWORD *)(v6 + 24) = a2;
  *(_QWORD *)(v6 + 32) = this;
  WdLogGlobalForLineNumber = 141;
  if ( !a2 )
  {
    WdLogSingleEntry2(2LL, 0LL, this);
    result = 3223192324LL;
    WdLogGlobalForLineNumber = 147;
    return result;
  }
  v8 = (struct DMMVIDEOPRESENTSOURCESET *)ExposedViaHandle<DMMVIDEOPRESENTSOURCESET,D3DKMDT_HVIDEOPRESENTSOURCESET__ *>::GetFromHandle((__int64)this);
  if ( !v8 )
  {
    WdLogSingleEntry1(2LL, this);
    result = 3223192341LL;
    WdLogGlobalForLineNumber = 161;
    return result;
  }
  v10 = (DMMVIDEOPRESENTSOURCE *)operator new(0x88uLL, 0x4E506456u, 256LL, v9);
  if ( v10 )
    v10 = DMMVIDEOPRESENTSOURCE::DMMVIDEOPRESENTSOURCE(v10, v8, a2->Id);
  v18 = v10;
  if ( !v10 )
  {
    WdLogSingleEntry1(6LL, v8);
    WdLogGlobalForLineNumber = 180;
    LODWORD(v11) = -1073741801;
LABEL_11:
    auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>((__int64 (__fastcall ****)(_QWORD, __int64))&v18);
    return (unsigned int)v11;
  }
  v18 = 0LL;
  v19 = v10;
  v12 = DMMVIDEOPRESENTSOURCESET::AddSource(v8, &v19);
  v11 = v12;
  if ( v12 < 0 )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdTrace(v14, v13, v15, v16);
    v17[3] = 0LL;
    v17[4] = v8;
    v17[5] = v11;
    WdLogGlobalForLineNumber = 194;
    goto LABEL_11;
  }
  auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>((__int64 (__fastcall ****)(_QWORD, __int64))&v18);
  return DMMVIDEOPRESENTSOURCESET::ReleaseDdiEnumerator(v8, a2);
}
