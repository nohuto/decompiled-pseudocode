/*
 * XREFs of ?Create@CAccentAcrylicBlurBehind@@SAJPEAPEAV1@@Z @ 0x18006BCB4
 * Callers:
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z @ 0x18002FAE8 (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z.c)
 *     ?EnsureBackgroundEffects@CAcrylicSheet@@AEAAJXZ @ 0x18006B8EC (-EnsureBackgroundEffects@CAcrylicSheet@@AEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CAccentAcrylicBlurBehind@@QEAA@XZ @ 0x18006BD98 (--0CAccentAcrylicBlurBehind@@QEAA@XZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180094C28 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x18009C4E0 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAccentAcrylicBlurBehind::Create(struct CAccentAcrylicBlurBehind **a1)
{
  struct CAccentAcrylicBlurBehind *v2; // rax
  struct CAccentAcrylicBlurBehind *v3; // rbx
  int v4; // edi
  CAccentAcrylicBlurBehind *v6; // rax

  if ( !a1 )
  {
    v4 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0xEBu, 0LL);
    return (unsigned int)v4;
  }
  v2 = (struct CAccentAcrylicBlurBehind *)DefaultHeap::AllocClear(0x158uLL);
  v3 = v2;
  if ( v2 && (memset_0(v2, 0, 0x158uLL), v6 = CAccentAcrylicBlurBehind::CAccentAcrylicBlurBehind(v3), (v3 = v6) != 0LL) )
  {
    v4 = (*(__int64 (__fastcall **)(CAccentAcrylicBlurBehind *))(*(_QWORD *)v6 + 8LL))(v6);
    if ( v4 >= 0 )
    {
      *a1 = v3;
      return 0;
    }
  }
  else
  {
    v4 = -2147024882;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0xEBu, 0LL);
  *a1 = 0LL;
  if ( v3 )
    CBaseObject::Release(v3);
  return (unsigned int)v4;
}
