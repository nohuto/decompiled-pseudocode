/*
 * XREFs of ?Create@CDisplayDuplicateToExtendAnimatedVisual@@SAJPEAPEAV1@@Z @ 0x1800BCB04
 * Callers:
 *     ?CreateDisplayAnimatedVisual@CDisplayModeChangeHelper@@SAJW4DisplayModeChangeResult@@PEAPEAVCDisplayAnimatedVisual@@@Z @ 0x1800208C4 (-CreateDisplayAnimatedVisual@CDisplayModeChangeHelper@@SAJW4DisplayModeChangeResult@@PEAPEAVCDis.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CDisplayDuplicateToExtendAnimatedVisual@@IEAA@XZ @ 0x1800B946C (--0CDisplayDuplicateToExtendAnimatedVisual@@IEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDisplayDuplicateToExtendAnimatedVisual::Create(struct CDisplayDuplicateToExtendAnimatedVisual **a1)
{
  int v2; // ebx
  CDisplayDuplicateToExtendAnimatedVisual *v3; // rax
  struct CDisplayDuplicateToExtendAnimatedVisual *v4; // rdi
  int v5; // r10d

  if ( a1 )
  {
    v3 = (CDisplayDuplicateToExtendAnimatedVisual *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                                                      WPF::g_pProcessHeap,
                                                      544LL);
    if ( v3 )
      v4 = CDisplayDuplicateToExtendAnimatedVisual::CDisplayDuplicateToExtendAnimatedVisual(v3);
    else
      v4 = 0LL;
    if ( v4 )
    {
      v2 = (*(__int64 (__fastcall **)(struct CDisplayDuplicateToExtendAnimatedVisual *))(*(_QWORD *)v4 + 8LL))(v4);
      v5 = v2;
      if ( v2 >= 0 )
      {
        *a1 = v4;
        return 0;
      }
    }
    else
    {
      v2 = -2147024882;
      v5 = -2147024882;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x11u);
    *a1 = 0LL;
    if ( v4 )
      CBaseObject::Release(v4);
  }
  else
  {
    v2 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x11u);
  }
  return (unsigned int)v2;
}
