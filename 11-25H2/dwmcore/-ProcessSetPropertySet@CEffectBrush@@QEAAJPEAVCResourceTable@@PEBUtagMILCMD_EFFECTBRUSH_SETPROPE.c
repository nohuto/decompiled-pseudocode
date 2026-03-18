/*
 * XREFs of ?ProcessSetPropertySet@CEffectBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_EFFECTBRUSH_SETPROPERTYSET@@@Z @ 0x180070F8C
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?HasValidTemplate@CEffectBrush@@AEBA_NXZ @ 0x180071220 (-HasValidTemplate@CEffectBrush@@AEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsOfType@CKeyframeAnimation@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18012E8D0 (-IsOfType@CKeyframeAnimation@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18012E8F0 (-IsOfType@CVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CSharedSection@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18012E910 (-IsOfType@CSharedSection@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CEffectBrush::ProcessSetPropertySet(
        CEffectBrush *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_EFFECTBRUSH_SETPROPERTYSET *a3)
{
  char *v3; // rsi
  unsigned int v6; // edx
  __int64 v7; // rax
  unsigned int v8; // ebx
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 (__fastcall *v12)(__int64, __int64); // rax
  char v13; // al
  __int64 v14; // rbx
  __int64 v15; // rcx

  v3 = (char *)this + 120;
  if ( *((_QWORD *)this + 15) )
  {
    v8 = -2003303422;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303422, 0x8Fu, 0LL);
  }
  else
  {
    v6 = *((_DWORD *)a3 + 2);
    if ( v6
      && v6 < *((_DWORD *)a2 + 7)
      && (v7 = *((_QWORD *)a2 + 5), *(_DWORD *)(*((_DWORD *)a2 + 6) * v6 + v7))
      && (v10 = v7 + *((_DWORD *)a2 + 6) * v6, (v11 = *(_QWORD *)(v10 + 8)) != 0)
      && ((v12 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 64LL), v12 == CKeyframeAnimation::IsOfType)
        ? (v13 = CKeyframeAnimation::IsOfType(v11, 123LL))
        : v12 != CVisual::IsOfType
        ? (v12 != CSharedSection::IsOfType
         ? (v13 = v12(v11, 123LL))
         : (v13 = CSharedSection::IsOfType(v11, 123LL)))
        : (v13 = CVisual::IsOfType(v11, 123LL)),
          v13 && (v14 = *(_QWORD *)(v10 + 8)) != 0) )
    {
      if ( *(_QWORD *)v3 != v14 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
        v15 = *(_QWORD *)v3;
        *(_QWORD *)v3 = v14;
        if ( v15 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      }
      if ( CEffectBrush::HasValidTemplate(this) )
        *(_QWORD *)(*(_QWORD *)v3 + 80LL) = ((unsigned __int64)this + 104) & -(__int64)(this != 0LL);
      return 0;
    }
    else
    {
      v8 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x95u, 0LL);
    }
  }
  return v8;
}
