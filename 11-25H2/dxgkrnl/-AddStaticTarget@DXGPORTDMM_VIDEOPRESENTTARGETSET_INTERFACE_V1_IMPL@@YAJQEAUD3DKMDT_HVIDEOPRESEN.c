/*
 * XREFs of ?AddStaticTarget@DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRESENTTARGETSET__@@PEBU_D3DKMDT_VIDEO_PRESENT_TARGET@@@Z @ 0x140260190
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14001B3E0 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0DMMVIDEOPRESENTTARGET@@QEAA@QEAVDMMVIDEOPRESENTTARGETSET@@IW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@W4_DXGK_CHILD_DEVICE_HPD_AWARENESS@@W4_D3DKMDT_MONITOR_ORIENTATION_AWARENESS@@E@Z @ 0x14008DFE0 (--0DMMVIDEOPRESENTTARGET@@QEAA@QEAVDMMVIDEOPRESENTTARGETSET@@IW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDEOPRESENTTARGETSET@@PEAUD3DKMDT_HVIDEOPRESENTTARGETSET__@@@@SAPEAVDMMVIDEOPRESENTTARGETSET@@PEAUD3DKMDT_HVIDEOPRESENTTARGETSET__@@@Z @ 0x14008E7A8 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDEOPRESENTTARGETSET@@PEAUD3DKMDT_HVIDEOPRESENTTARGETSET_.c)
 *     ?AddTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJPEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x140257A30 (-AddTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJPEAVDMMVIDEOPRESENTTARGET@@@Z.c)
 *     ?Initialize@DMMVIDEOPRESENTTARGET@@QEAAJXZ @ 0x140258334 (-Initialize@DMMVIDEOPRESENTTARGET@@QEAAJXZ.c)
 *     ?ReleaseDdiEnumerator@DMMVIDEOPRESENTTARGETSET@@QEAAJPEBU_D3DKMDT_VIDEO_PRESENT_TARGET@@@Z @ 0x140258784 (-ReleaseDdiEnumerator@DMMVIDEOPRESENTTARGETSET@@QEAAJPEBU_D3DKMDT_VIDEO_PRESENT_TARGET@@@Z.c)
 */

__int64 __fastcall DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL::AddStaticTarget(
        DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL *this,
        const struct _D3DKMDT_VIDEO_PRESENT_TARGET *a2,
        const struct _D3DKMDT_VIDEO_PRESENT_TARGET *a3,
        __int64 a4)
{
  __int64 v6; // rax
  __int64 result; // rax
  DMMVIDEOPRESENTTARGETSET *v8; // rdi
  __int64 v9; // r9
  DMMVIDEOPRESENTTARGET *v10; // rax
  DMMVIDEOPRESENTTARGET *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  DMMVIDEOPRESENTTARGET *v15; // rbp
  int v16; // eax
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  _QWORD *v22; // rax

  v6 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  *(_QWORD *)(v6 + 24) = a2;
  *(_QWORD *)(v6 + 32) = this;
  WdLogGlobalForLineNumber = 420;
  if ( !a2 )
  {
    WdLogSingleEntry2(2LL, 0LL, this);
    result = 3223192325LL;
    WdLogGlobalForLineNumber = 426;
    return result;
  }
  v8 = (DMMVIDEOPRESENTTARGETSET *)ExposedViaHandle<DMMVIDEOPRESENTTARGETSET,D3DKMDT_HVIDEOPRESENTTARGETSET__ *>::GetFromHandle((__int64)this);
  if ( !v8 )
  {
    WdLogSingleEntry1(2LL, this);
    result = 3223192342LL;
    WdLogGlobalForLineNumber = 440;
    return result;
  }
  v10 = (DMMVIDEOPRESENTTARGET *)operator new(0x268uLL, 0x4E506456u, 256LL, v9);
  if ( v10
    && (v11 = DMMVIDEOPRESENTTARGET::DMMVIDEOPRESENTTARGET(
                v10,
                v8,
                a2->Id,
                a2->VideoOutputTechnology,
                a2->VideoOutputHpdAwareness,
                a2->MonitorOrientationAwareness,
                a2->SupportsSdtvModes),
        (v15 = v11) != 0LL) )
  {
    v16 = DMMVIDEOPRESENTTARGET::Initialize(v11, v12, v13, v14);
    LODWORD(v17) = v16;
    if ( v16 < 0 )
    {
      WdLogSingleEntry2(2LL, a2->Id, v16);
      WdLogGlobalForLineNumber = 474;
      ReferenceCounted::Release((DMMVIDEOPRESENTTARGET *)((char *)v15 + 64));
      return (unsigned int)v17;
    }
    v17 = (int)DMMVIDEOPRESENTTARGETSET::AddTarget(v8, v15);
    ReferenceCounted::Release((DMMVIDEOPRESENTTARGET *)((char *)v15 + 64));
    if ( (int)v17 < 0 )
    {
      v22 = (_QWORD *)WdLogNewEntry5_WdTrace(v19, v18, v20, v21);
      v22[3] = a2->Id;
      v22[4] = v8;
      v22[5] = v17;
      WdLogGlobalForLineNumber = 493;
      return (unsigned int)v17;
    }
    return DMMVIDEOPRESENTTARGETSET::ReleaseDdiEnumerator(v8, a2);
  }
  else
  {
    WdLogSingleEntry1(6LL, v8);
    result = 3221225495LL;
    WdLogGlobalForLineNumber = 462;
  }
  return result;
}
