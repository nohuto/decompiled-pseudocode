/*
 * XREFs of ?Create@CSpriteVisual@@SAJPEAPEAV1@@Z @ 0x1800D8C10
 * Callers:
 *     ?UpdateCaptionAccentColor@CTopLevelWindow@@AEAAJXZ @ 0x18003B810 (-UpdateCaptionAccentColor@CTopLevelWindow@@AEAAJXZ.c)
 *     ?CloneVisualTree@CSpriteVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x1800D8B60 (-CloneVisualTree@CSpriteVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 * Callees:
 *     ??0CSpriteVisual@@QEAA@XZ @ 0x180031D30 (--0CSpriteVisual@@QEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     memset_0 @ 0x18005D520 (memset_0.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CSpriteVisual::Create(struct CSpriteVisual **a1)
{
  int v2; // ebx
  CSpriteVisual *v3; // rax
  CSpriteVisual *v4; // rbx
  CSpriteVisual *v5; // rax
  struct CSpriteVisual *v6; // rdi

  if ( !a1 )
  {
    v2 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0xCu);
    return (unsigned int)v2;
  }
  v3 = (CSpriteVisual *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                          WPF::g_pProcessHeap,
                          272LL);
  v4 = v3;
  if ( v3 )
  {
    memset_0(v3, 0, 0x110uLL);
    v5 = CSpriteVisual::CSpriteVisual(v4);
    v6 = v5;
    if ( v5 )
    {
      v2 = (*(__int64 (__fastcall **)(CSpriteVisual *))(*(_QWORD *)v5 + 8LL))(v5);
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
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0xCu);
  *a1 = 0LL;
  if ( v6 )
    CBaseObject::Release(v6);
  return (unsigned int)v2;
}
