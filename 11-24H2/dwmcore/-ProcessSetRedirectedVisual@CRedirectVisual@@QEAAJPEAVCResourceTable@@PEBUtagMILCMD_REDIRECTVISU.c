/*
 * XREFs of ?ProcessSetRedirectedVisual@CRedirectVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REDIRECTVISUAL_SETREDIRECTEDVISUAL@@@Z @ 0x18018CC20
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?IsOfType@CKeyframeAnimation@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800368D0 (-IsOfType@CKeyframeAnimation@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800370D0 (-IsOfType@CVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CSharedSection@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800373C0 (-IsOfType@CSharedSection@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ValidEntry@HANDLE_TABLE@@QEBAHI@Z @ 0x180180980 (-ValidEntry@HANDLE_TABLE@@QEBAHI@Z.c)
 *     ?Create@CRedirectedVisualContent@@SAJPEAVCVisual@@PEAPEAV1@@Z @ 0x18018CDA4 (-Create@CRedirectedVisualContent@@SAJPEAVCVisual@@PEAPEAV1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  bool (__fastcall *v11)(__int64, int); // rax
  bool v12; // al
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
    if ( !HANDLE_TABLE::ValidEntry((struct CResourceTable *)((char *)a2 + 16), v3)
      || (v9 = *(_QWORD *)(v8 + 40) + (unsigned int)(*(_DWORD *)(v8 + 24) * v7), (v10 = *(_QWORD *)(v9 + 8)) == 0)
      || ((v11 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v10 + 64LL), v11 != CKeyframeAnimation::IsOfType)
        ? (v11 != CVisual::IsOfType
         ? (v11 != CSharedSection::IsOfType
          ? (v12 = v11(v10, 184))
          : (v12 = CSharedSection::IsOfType(v10, 184)))
         : (v12 = CVisual::IsOfType(v10, 184)))
        : (v12 = CKeyframeAnimation::IsOfType(v10, 184)),
          !v12 || (v5 = *(struct CVisual **)(v9 + 8)) == 0LL) )
    {
      v6 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0x18u, 0LL);
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
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v16, 0x2Au, 0LL);
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
