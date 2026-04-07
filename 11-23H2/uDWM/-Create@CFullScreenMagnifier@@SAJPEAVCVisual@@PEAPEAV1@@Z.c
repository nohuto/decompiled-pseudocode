/*
 * XREFs of ?Create@CFullScreenMagnifier@@SAJPEAVCVisual@@PEAPEAV1@@Z @ 0x18002BED4
 * Callers:
 *     ?Create@CMagnifierControl@@SAJPEAVCVisual@@0PEAPEAV1@@Z @ 0x18002BD18 (-Create@CMagnifierControl@@SAJPEAVCVisual@@0PEAPEAV1@@Z.c)
 * Callees:
 *     ?UpdateSettings@CFullScreenMagnifier@@AEAAJNNN@Z @ 0x18001DE20 (-UpdateSettings@CFullScreenMagnifier@@AEAAJNNN@Z.c)
 *     ??0CFullScreenMagnifier@@AEAA@PEAVCVisual@@@Z @ 0x18002BF74 (--0CFullScreenMagnifier@@AEAA@PEAVCVisual@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CFullScreenMagnifier::Create(struct CVisual *a1, struct CFullScreenMagnifier **a2)
{
  CFullScreenMagnifier *v4; // rax
  CFullScreenMagnifier *v5; // rax
  volatile signed __int32 *v6; // rbx
  unsigned int v7; // edi

  v4 = (CFullScreenMagnifier *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                   + 16LL))(
                                 WPF::g_pProcessHeap,
                                 256LL);
  if ( v4 && (v5 = CFullScreenMagnifier::CFullScreenMagnifier(v4, a1), (v6 = (volatile signed __int32 *)v5) != 0LL) )
  {
    CFullScreenMagnifier::UpdateSettings(v5, 1.0, 0.0, 0.0);
    v7 = 0;
    *a2 = (struct CFullScreenMagnifier *)v6;
    _InterlockedIncrement(v6 + 2);
    CBaseObject::Release((CBaseObject *)v6);
  }
  else
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x59u, 0LL);
  }
  return v7;
}
