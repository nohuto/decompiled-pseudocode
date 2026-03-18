/*
 * XREFs of ?ProcessSetClip@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETCLIP@@@Z @ 0x180133364
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?IsOfType@CKeyframeAnimation@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800368D0 (-IsOfType@CKeyframeAnimation@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800370D0 (-IsOfType@CVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CSharedSection@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800373C0 (-IsOfType@CSharedSection@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetClip@CVisual@@QEAAJPEAVCGeometry@@@Z @ 0x180133470 (-SetClip@CVisual@@QEAAJPEAVCGeometry@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisual::ProcessSetClip(
        CVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VISUAL_SETCLIP *a3)
{
  unsigned int v3; // r9d
  struct CGeometry *v4; // rax
  __int64 v6; // rax
  unsigned int v7; // ebx
  bool v8; // al
  int v9; // eax
  __int64 v11; // rbx
  __int64 v12; // rcx
  bool (__fastcall *v13)(__int64, int); // rax

  v3 = *((_DWORD *)a3 + 2);
  v4 = 0LL;
  if ( !v3
    || v3 < *((_DWORD *)a2 + 7)
    && (v6 = *((_QWORD *)a2 + 5), *(_DWORD *)(*((_DWORD *)a2 + 6) * v3 + v6))
    && (v11 = v6 + *((_DWORD *)a2 + 6) * v3, (v12 = *(_QWORD *)(v11 + 8)) != 0)
    && ((v13 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v12 + 64LL), v13 == CKeyframeAnimation::IsOfType)
      ? (v8 = CKeyframeAnimation::IsOfType(v12, 67))
      : v13 != CVisual::IsOfType
      ? (v13 != CSharedSection::IsOfType
       ? (v8 = v13(v12, 67))
       : (v8 = CSharedSection::IsOfType(v12, 67)))
      : (v8 = CVisual::IsOfType(v12, 67)),
        v8 && (v4 = *(struct CGeometry **)(v11 + 8)) != 0LL) )
  {
    v9 = CVisual::SetClip(this, v4);
    v7 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0xA82u, 0LL);
  }
  else
  {
    v7 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0xA7Eu, 0LL);
  }
  return v7;
}
