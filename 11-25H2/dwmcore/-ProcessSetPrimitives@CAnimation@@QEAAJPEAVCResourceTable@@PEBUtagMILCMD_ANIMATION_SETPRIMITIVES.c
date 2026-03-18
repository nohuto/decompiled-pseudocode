/*
 * XREFs of ?ProcessSetPrimitives@CAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATION_SETPRIMITIVES@@@Z @ 0x18013B1C0
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ??$ReleaseInterface@VCPolygon@@@@YAXAEAPEAVCPolygon@@@Z @ 0x180097BD8 (--$ReleaseInterface@VCPolygon@@@@YAXAEAPEAVCPolygon@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsOfType@CKeyframeAnimation@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18012E8D0 (-IsOfType@CKeyframeAnimation@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18012E8F0 (-IsOfType@CVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CSharedSection@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18012E910 (-IsOfType@CSharedSection@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?ValidEntry@HANDLE_TABLE@@QEBAHI@Z @ 0x18013A3B0 (-ValidEntry@HANDLE_TABLE@@QEBAHI@Z.c)
 *     ?Create@CSharedSectionAnimationPrimitiveBuffer@@SAJPEAVCSharedSection@@IIPEAPEAV1@@Z @ 0x18013B318 (-Create@CSharedSectionAnimationPrimitiveBuffer@@SAJPEAVCSharedSection@@IIPEAPEAV1@@Z.c)
 *     ?RegisterAnimateResource@CBaseAnimation@@QEAAJXZ @ 0x18013C460 (-RegisterAnimateResource@CBaseAnimation@@QEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAnimation::ProcessSetPrimitives(
        CAnimation *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_ANIMATION_SETPRIMITIVES *a3)
{
  int v5; // r9d
  __int64 v6; // r10
  __int64 v7; // rbx
  __int64 v8; // rcx
  bool (__fastcall *v9)(__int64, int); // rax
  bool v10; // al
  struct CSharedSection *v11; // rcx
  unsigned int v12; // r8d
  unsigned int v13; // edx
  int v14; // eax
  unsigned int v15; // edi
  __int64 v16; // rax
  int v18; // eax
  struct CSharedSectionAnimationPrimitiveBuffer *v19; // [rsp+48h] [rbp+10h] BYREF

  if ( HANDLE_TABLE::ValidEntry((struct CResourceTable *)((char *)a2 + 16), *((_DWORD *)a3 + 2))
    && (v7 = *(_QWORD *)(v6 + 40) + (unsigned int)(*(_DWORD *)(v6 + 24) * v5), (v8 = *(_QWORD *)(v7 + 8)) != 0)
    && ((v9 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v8 + 64LL), v9 == CKeyframeAnimation::IsOfType)
      ? (v10 = CKeyframeAnimation::IsOfType(v8, 156))
      : v9 != CVisual::IsOfType
      ? (v9 != CSharedSection::IsOfType
       ? (v10 = v9(v8, 156))
       : (v10 = CSharedSection::IsOfType(v8, 156)))
      : (v10 = CVisual::IsOfType(v8, 156)),
        v10) )
  {
    v11 = *(struct CSharedSection **)(v7 + 8);
  }
  else
  {
    v11 = 0LL;
  }
  v12 = *((_DWORD *)a3 + 3);
  v13 = *((_DWORD *)a3 + 4);
  v19 = 0LL;
  v14 = CSharedSectionAnimationPrimitiveBuffer::Create(v11, v13, v12, &v19);
  v15 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0x135u, 0LL);
  }
  else
  {
    ReleaseInterface<CPolygon>((__int64 *)this + 16);
    v16 = *((_QWORD *)this + 18);
    *((_QWORD *)this + 16) = v19;
    if ( !v16 || *(_QWORD *)(v16 + 104) )
    {
      v18 = CBaseAnimation::RegisterAnimateResource(this);
      v15 = v18;
      if ( v18 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v18, 0x13Fu, 0LL);
    }
  }
  return v15;
}
