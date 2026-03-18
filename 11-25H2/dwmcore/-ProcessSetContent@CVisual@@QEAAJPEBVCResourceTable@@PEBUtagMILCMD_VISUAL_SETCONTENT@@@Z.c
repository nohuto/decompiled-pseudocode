/*
 * XREFs of ?ProcessSetContent@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETCONTENT@@@Z @ 0x18012E1C8
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetContent@CVisual@@MEAAJPEAVCContent@@@Z @ 0x18012DD40 (-SetContent@CVisual@@MEAAJPEAVCContent@@@Z.c)
 *     ?IsOfType@CKeyframeAnimation@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18012E8D0 (-IsOfType@CKeyframeAnimation@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18012E8F0 (-IsOfType@CVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CSharedSection@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18012E910 (-IsOfType@CSharedSection@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisual::ProcessSetContent(
        CVisual *this,
        const struct CResourceTable *a2,
        const struct tagMILCMD_VISUAL_SETCONTENT *a3)
{
  unsigned int v3; // r9d
  struct CContent *v5; // rdx
  __int64 (__fastcall *v7)(CVisual *, struct CContent *); // rax
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rcx
  __int64 (__fastcall *v14)(__int64, __int64); // rax
  char v15; // al

  v3 = *((_DWORD *)a3 + 2);
  v5 = 0LL;
  if ( !v3
    || v3 < *((_DWORD *)a2 + 7)
    && (v11 = *((_QWORD *)a2 + 5), *(_DWORD *)(*((_DWORD *)a2 + 6) * v3 + v11))
    && (v12 = v11 + *((_DWORD *)a2 + 6) * v3, (v13 = *(_QWORD *)(v12 + 8)) != 0)
    && ((v14 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 64LL), v14 == CKeyframeAnimation::IsOfType)
      ? (v15 = CKeyframeAnimation::IsOfType(v13, 46LL))
      : v14 != CVisual::IsOfType
      ? (v14 != CSharedSection::IsOfType
       ? (v15 = v14(v13, 46LL))
       : (v15 = CSharedSection::IsOfType(v13, 46LL)))
      : (v15 = CVisual::IsOfType(v13, 46LL)),
        v15 && (v5 = *(struct CContent **)(v12 + 8)) != 0LL) )
  {
    v7 = *(__int64 (__fastcall **)(CVisual *, struct CContent *))(*(_QWORD *)this + 328LL);
    if ( v7 == CVisual::SetContent )
      v8 = CVisual::SetContent(this, v5);
    else
      v8 = v7(this, v5);
    v9 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0xB51u, 0LL);
  }
  else
  {
    v9 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0xB4Du, 0LL);
  }
  return v9;
}
