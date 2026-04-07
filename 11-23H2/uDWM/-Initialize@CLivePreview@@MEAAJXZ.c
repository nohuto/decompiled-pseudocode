/*
 * XREFs of ?Initialize@CLivePreview@@MEAAJXZ @ 0x180027900
 * Callers:
 *     ?Create@CLivePreview@@SAJPEAPEAV1@@Z @ 0x18002773C (-Create@CLivePreview@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CLivePreviewTimeline@@QEAA@XZ @ 0x18002798C (--0CLivePreviewTimeline@@QEAA@XZ.c)
 *     ?_EnsureResources@CLivePreview@@AEAAJXZ @ 0x180027A44 (-_EnsureResources@CLivePreview@@AEAAJXZ.c)
 *     ?Initialize@CVisual@@MEAAJXZ @ 0x180035BC0 (-Initialize@CVisual@@MEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CLivePreview::Initialize(CLivePreview *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  CLivePreviewTimeline *v4; // rax
  unsigned int v6; // [rsp+20h] [rbp-18h]

  v2 = CVisual::Initialize(this);
  v3 = v2;
  if ( v2 < 0 )
  {
    v6 = 76;
LABEL_10:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, v6, 0LL);
    return v3;
  }
  v4 = (CLivePreviewTimeline *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                   + 16LL))(
                                 WPF::g_pProcessHeap,
                                 136LL);
  if ( v4 )
    v4 = CLivePreviewTimeline::CLivePreviewTimeline(v4);
  *((_QWORD *)this + 55) = v4;
  if ( !v4 )
  {
    v3 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x4Fu, 0LL);
    return v3;
  }
  v2 = CLivePreview::_EnsureResources(this);
  v3 = v2;
  if ( v2 < 0 )
  {
    v6 = 81;
    goto LABEL_10;
  }
  return v3;
}
