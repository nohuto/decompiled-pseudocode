/*
 * XREFs of ?ProcessSetRedirectedVisual@CRedirectVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REDIRECTVISUAL_SETREDIRECTEDVISUAL@@@Z @ 0x1800C0750
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?Create@CRedirectedVisualContent@@SAJPEAVCVisual@@PEAPEAV1@@Z @ 0x1800C08D4 (-Create@CRedirectedVisualContent@@SAJPEAVCVisual@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsOfType@CKeyframeAnimation@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18012E8D0 (-IsOfType@CKeyframeAnimation@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18012E8F0 (-IsOfType@CVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CSharedSection@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18012E910 (-IsOfType@CSharedSection@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?ValidEntry@HANDLE_TABLE@@QEBAHI@Z @ 0x18013A3B0 (-ValidEntry@HANDLE_TABLE@@QEBAHI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CRedirectVisual::ProcessSetRedirectedVisual(
        CRedirectVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_REDIRECTVISUAL_SETREDIRECTEDVISUAL *a3)
{
  unsigned int v3; // r9d
  struct CVisual *v5; // rcx
  unsigned int v6; // edi
  int v7; // r9d
  __int64 v8; // r10
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 (__fastcall *v11)(__int64, __int64); // rax
  char v12; // al
  __int64 v13; // rdx
  struct CVisual *v14; // rax
  struct CRedirectedVisualContent *v15; // rbx
  int v16; // eax
  struct CRedirectedVisualContent *v18; // [rsp+50h] [rbp+18h] BYREF

  v3 = *((_DWORD *)a3 + 2);
  v5 = 0LL;
  v6 = 0;
  if ( v3 )
  {
    if ( !(unsigned int)HANDLE_TABLE::ValidEntry((struct CResourceTable *)((char *)a2 + 16), v3)
      || (v9 = *(_QWORD *)(v8 + 40) + (unsigned int)(*(_DWORD *)(v8 + 24) * v7), (v10 = *(_QWORD *)(v9 + 8)) == 0)
      || ((v11 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 64LL), v11 != CKeyframeAnimation::IsOfType)
        ? (v11 != CVisual::IsOfType
         ? (v11 != CSharedSection::IsOfType
          ? (v12 = v11(v10, 182LL))
          : (v12 = CSharedSection::IsOfType(v10, 182LL)))
         : (v12 = CVisual::IsOfType(v10, 182LL)))
        : (v12 = CKeyframeAnimation::IsOfType(v10, 182LL)),
          !v12 || (v5 = *(struct CVisual **)(v9 + 8)) == 0LL) )
    {
      v6 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x18u, 0LL);
      return v6;
    }
  }
  v13 = *((_QWORD *)this + 32);
  v14 = 0LL;
  if ( v13 )
    v14 = *(struct CVisual **)(v13 + 72);
  if ( v5 != v14 )
  {
    v15 = 0LL;
    v18 = 0LL;
    if ( v5 )
    {
      v16 = CRedirectedVisualContent::Create(v5, &v18);
      v6 = v16;
      if ( v16 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x2Au, 0LL);
        return v6;
      }
      v15 = v18;
    }
    (*(void (__fastcall **)(CRedirectVisual *, struct CRedirectedVisualContent *))(*(_QWORD *)this + 328LL))(this, v15);
    if ( v15 )
      (*(void (__fastcall **)(struct CRedirectedVisualContent *))(*(_QWORD *)v15 + 16LL))(v15);
  }
  return v6;
}
