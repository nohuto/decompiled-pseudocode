/*
 * XREFs of ?AddStaticTarget@DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRESENTTARGETSET__@@PEBU_D3DKMDT_VIDEO_PRESENT_TARGET@@@Z @ 0x140267090
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14000BE00 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002D590 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0DMMVIDEOPRESENTTARGET@@QEAA@QEAVDMMVIDEOPRESENTTARGETSET@@IW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@W4_DXGK_CHILD_DEVICE_HPD_AWARENESS@@W4_D3DKMDT_MONITOR_ORIENTATION_AWARENESS@@E@Z @ 0x14008F25C (--0DMMVIDEOPRESENTTARGET@@QEAA@QEAVDMMVIDEOPRESENTTARGETSET@@IW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDEOPRESENTTARGETSET@@PEAUD3DKMDT_HVIDEOPRESENTTARGETSET__@@@@SAPEAVDMMVIDEOPRESENTTARGETSET@@PEAUD3DKMDT_HVIDEOPRESENTTARGETSET__@@@Z @ 0x14008FA38 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDEOPRESENTTARGETSET@@PEAUD3DKMDT_HVIDEOPRESENTTARGETSET_.c)
 *     ?AddTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJPEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x14025E950 (-AddTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJPEAVDMMVIDEOPRESENTTARGET@@@Z.c)
 *     ?Initialize@DMMVIDEOPRESENTTARGET@@QEAAJXZ @ 0x14025F22C (-Initialize@DMMVIDEOPRESENTTARGET@@QEAAJXZ.c)
 *     ?ReleaseDdiEnumerator@DMMVIDEOPRESENTTARGETSET@@QEAAJPEBU_D3DKMDT_VIDEO_PRESENT_TARGET@@@Z @ 0x14025F684 (-ReleaseDdiEnumerator@DMMVIDEOPRESENTTARGETSET@@QEAAJPEBU_D3DKMDT_VIDEO_PRESENT_TARGET@@@Z.c)
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
  DMMVIDEOPRESENTTARGET *v9; // rax
  DMMVIDEOPRESENTTARGET *v10; // rax
  DMMVIDEOPRESENTTARGET *v11; // rbp
  int v12; // eax
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  _QWORD *v18; // rax

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
  v9 = (DMMVIDEOPRESENTTARGET *)operator new(0x270uLL, 0x4E506456u, 256LL);
  if ( v9
    && (v10 = DMMVIDEOPRESENTTARGET::DMMVIDEOPRESENTTARGET(
                v9,
                v8,
                a2->Id,
                a2->VideoOutputTechnology,
                a2->VideoOutputHpdAwareness,
                a2->MonitorOrientationAwareness,
                a2->SupportsSdtvModes),
        (v11 = v10) != 0LL) )
  {
    v12 = DMMVIDEOPRESENTTARGET::Initialize(v10);
    LODWORD(v13) = v12;
    if ( v12 < 0 )
    {
      WdLogSingleEntry2(2LL, a2->Id, v12);
      WdLogGlobalForLineNumber = 474;
      ReferenceCounted::Release((DMMVIDEOPRESENTTARGET *)((char *)v11 + 64));
      return (unsigned int)v13;
    }
    v13 = (int)DMMVIDEOPRESENTTARGETSET::AddTarget(v8, v11);
    ReferenceCounted::Release((DMMVIDEOPRESENTTARGET *)((char *)v11 + 64));
    if ( (int)v13 < 0 )
    {
      v18 = (_QWORD *)WdLogNewEntry5_WdTrace(v15, v14, v16, v17);
      v18[3] = a2->Id;
      v18[4] = v8;
      v18[5] = v13;
      WdLogGlobalForLineNumber = 493;
      return (unsigned int)v13;
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
