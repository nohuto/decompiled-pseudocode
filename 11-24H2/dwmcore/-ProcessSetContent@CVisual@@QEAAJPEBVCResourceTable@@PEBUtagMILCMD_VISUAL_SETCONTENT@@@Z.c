/*
 * XREFs of ?ProcessSetContent@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETCONTENT@@@Z @ 0x180037760
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?IsOfType@CKeyframeAnimation@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800368D0 (-IsOfType@CKeyframeAnimation@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800370D0 (-IsOfType@CVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CSharedSection@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800373C0 (-IsOfType@CSharedSection@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?SetContent@CVisual@@MEAAJPEAVCContent@@@Z @ 0x180037BE0 (-SetContent@CVisual@@MEAAJPEAVCContent@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisual::ProcessSetContent(
        CVisual *this,
        const struct CResourceTable *a2,
        const struct tagMILCMD_VISUAL_SETCONTENT *a3)
{
  unsigned int v3; // r9d
  struct CContent *v5; // rdx
  __int64 (__fastcall *v7)(CVisual *__hidden, struct CContent *); // rax
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rcx
  bool (__fastcall *v14)(__int64, int); // rax
  bool v15; // al

  v3 = *((_DWORD *)a3 + 2);
  v5 = 0LL;
  if ( !v3
    || v3 < *((_DWORD *)a2 + 7)
    && (v11 = *((_QWORD *)a2 + 5), *(_DWORD *)(*((_DWORD *)a2 + 6) * v3 + v11))
    && (v12 = v11 + *((_DWORD *)a2 + 6) * v3, (v13 = *(_QWORD *)(v12 + 8)) != 0)
    && ((v14 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v13 + 64LL), v14 == CKeyframeAnimation::IsOfType)
      ? (v15 = CKeyframeAnimation::IsOfType(v13, 47))
      : v14 != CVisual::IsOfType
      ? (v14 != CSharedSection::IsOfType
       ? (v15 = v14(v13, 47))
       : (v15 = CSharedSection::IsOfType(v13, 47)))
      : (v15 = CVisual::IsOfType(v13, 47)),
        v15 && (v5 = *(struct CContent **)(v12 + 8)) != 0LL) )
  {
    v7 = *(__int64 (__fastcall **)(CVisual *__hidden, struct CContent *))(*(_QWORD *)this + 328LL);
    if ( v7 == CVisual::SetContent )
      v8 = CVisual::SetContent(this, v5);
    else
      v8 = v7(this, v5);
    v9 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0xB6Bu, 0LL);
  }
  else
  {
    v9 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0xB67u, 0LL);
  }
  return v9;
}
