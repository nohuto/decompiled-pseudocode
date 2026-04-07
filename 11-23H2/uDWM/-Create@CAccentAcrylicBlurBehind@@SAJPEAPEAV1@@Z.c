/*
 * XREFs of ?Create@CAccentAcrylicBlurBehind@@SAJPEAPEAV1@@Z @ 0x18009EA5C
 * Callers:
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z @ 0x180019294 (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z.c)
 *     ?EnsureBackgroundEffects@CAcrylicSheet@@AEAAJXZ @ 0x1800A2B40 (-EnsureBackgroundEffects@CAcrylicSheet@@AEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     memset_0 @ 0x18005D520 (memset_0.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CAccentAcrylicBlurBehind@@QEAA@XZ @ 0x18009E748 (--0CAccentAcrylicBlurBehind@@QEAA@XZ.c)
 */

__int64 __fastcall CAccentAcrylicBlurBehind::Create(struct CAccentAcrylicBlurBehind **a1)
{
  int v2; // ebx
  CAccentAcrylicBlurBehind *v3; // rax
  CAccentAcrylicBlurBehind *v4; // rbx
  CAccentAcrylicBlurBehind *v5; // rax
  struct CAccentAcrylicBlurBehind *v6; // rdi

  if ( !a1 )
  {
    v2 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0xE3u);
    return (unsigned int)v2;
  }
  v3 = (CAccentAcrylicBlurBehind *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                       + 16LL))(
                                     WPF::g_pProcessHeap,
                                     392LL);
  v4 = v3;
  if ( v3 )
  {
    memset_0(v3, 0, 0x188uLL);
    v5 = CAccentAcrylicBlurBehind::CAccentAcrylicBlurBehind(v4);
    v6 = v5;
    if ( v5 )
    {
      v2 = (*(__int64 (__fastcall **)(CAccentAcrylicBlurBehind *))(*(_QWORD *)v5 + 8LL))(v5);
      if ( v2 >= 0 )
      {
        *a1 = v6;
        return 0;
      }
      goto LABEL_9;
    }
  }
  else
  {
    v6 = 0LL;
  }
  v2 = -2147024882;
LABEL_9:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0xE3u);
  *a1 = 0LL;
  if ( v6 )
    CBaseObject::Release(v6);
  return (unsigned int)v2;
}
