/*
 * XREFs of ?ProcessUpdate@CCachedVisualImage@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CACHEDVISUALIMAGE@@@Z @ 0x18006D1FC
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?MarkAllTargetsDirty@CCachedVisualImage@@QEAAXXZ @ 0x18000C2D4 (-MarkAllTargetsDirty@CCachedVisualImage@@QEAAXXZ.c)
 *     ?IsOfType@CKeyframeAnimation@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800368D0 (-IsOfType@CKeyframeAnimation@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x180036D70 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800370D0 (-IsOfType@CVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CSharedSection@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800373C0 (-IsOfType@CSharedSection@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?RegisterNotifiers@CCachedVisualImage@@IEAAJPEAVCResourceTable@@@Z @ 0x18006D498 (-RegisterNotifiers@CCachedVisualImage@@IEAAJPEAVCResourceTable@@@Z.c)
 *     ?ChoosePixelFormat@CCachedVisualImage@@IEAAXXZ @ 0x18006D978 (-ChoosePixelFormat@CCachedVisualImage@@IEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ValidEntry@HANDLE_TABLE@@QEBAHI@Z @ 0x180180980 (-ValidEntry@HANDLE_TABLE@@QEBAHI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCachedVisualImage::ProcessUpdate(
        CCachedVisualImage *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_CACHEDVISUALIMAGE *a3)
{
  unsigned int v6; // edx
  unsigned int v7; // edx
  unsigned int v8; // r8d
  int v9; // r8d
  __int64 v10; // r14
  __int64 v11; // rcx
  bool (__fastcall *v12)(__int64, int); // rax
  bool v13; // al
  __int64 v14; // rax
  struct CResourceTable *v15; // rdx
  int v16; // esi
  unsigned int v17; // eax
  __int64 Resource; // rax
  __int64 v20; // rax

  (*(void (__fastcall **)(CCachedVisualImage *))(*(_QWORD *)this + 72LL))(this);
  *((_OWORD *)this + 6) = *(_OWORD *)((char *)a3 + 8);
  v6 = *((_DWORD *)a3 + 8);
  if ( v6 )
  {
    Resource = CResourceTable::GetResource((__int64)a2, v6, 0x80u);
    *((_QWORD *)this + 14) = Resource;
    if ( !Resource )
    {
      v16 = -2003303421;
      v17 = 254;
      goto LABEL_21;
    }
  }
  else
  {
    *((_QWORD *)this + 14) = 0LL;
  }
  *((_QWORD *)this + 15) = *((_QWORD *)a3 + 3);
  v7 = *((_DWORD *)a3 + 9);
  if ( v7 )
  {
    v20 = CResourceTable::GetResource((__int64)a2, v7, 0xA0u);
    *((_QWORD *)this + 16) = v20;
    if ( !v20 )
    {
      v16 = -2003303421;
      v17 = 271;
      goto LABEL_21;
    }
  }
  else
  {
    *((_QWORD *)this + 16) = 0LL;
  }
  v8 = *((_DWORD *)a3 + 10);
  if ( v8 )
  {
    if ( (unsigned int)HANDLE_TABLE::ValidEntry((struct CResourceTable *)((char *)a2 + 16), v8)
      && (v10 = *((_QWORD *)a2 + 5) + (unsigned int)(*((_DWORD *)a2 + 6) * v9), (v11 = *(_QWORD *)(v10 + 8)) != 0)
      && ((v12 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v11 + 64LL), v12 == CKeyframeAnimation::IsOfType)
        ? (v13 = CKeyframeAnimation::IsOfType(v11, 184))
        : v12 != CVisual::IsOfType
        ? (v12 != CSharedSection::IsOfType
         ? (v13 = v12(v11, 184))
         : (v13 = CSharedSection::IsOfType(v11, 184)))
        : (v13 = CVisual::IsOfType(v11, 184)),
          v13) )
    {
      v14 = *(_QWORD *)(v10 + 8);
    }
    else
    {
      v14 = 0LL;
    }
    *((_QWORD *)this + 17) = v14;
    if ( !v14 )
    {
      v16 = -2003303421;
      v17 = 287;
      goto LABEL_21;
    }
    if ( *((_BYTE *)this + 2057) )
    {
      *((_BYTE *)this + 2057) = 0;
      CCachedVisualImage::MarkAllTargetsDirty(this);
    }
    if ( *((_BYTE *)this + 2056) )
    {
      *((_BYTE *)this + 2056) = 0;
      CCachedVisualImage::MarkAllTargetsDirty(this);
    }
  }
  else
  {
    *((_QWORD *)this + 17) = 0LL;
  }
  *((_DWORD *)this + 36) = *((_DWORD *)a3 + 11);
  *((_DWORD *)this + 37) = *((_DWORD *)a3 + 12);
  *((_DWORD *)this + 38) = *((unsigned __int8 *)a3 + 52);
  *((_DWORD *)this + 39) = *((_DWORD *)a3 + 14);
  *((_DWORD *)this + 42) = *((_DWORD *)a3 + 15);
  CCachedVisualImage::ChoosePixelFormat(this);
  v16 = CCachedVisualImage::RegisterNotifiers(this, v15);
  if ( v16 >= 0 )
  {
    v16 = (*(__int64 (__fastcall **)(CCachedVisualImage *))(*(_QWORD *)this + 224LL))(this);
    if ( v16 >= 0 )
      goto LABEL_22;
    v17 = 322;
  }
  else
  {
    v17 = 320;
  }
LABEL_21:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, v17, 0LL);
  (*(void (__fastcall **)(CCachedVisualImage *))(*(_QWORD *)this + 72LL))(this);
LABEL_22:
  (*(void (__fastcall **)(CCachedVisualImage *, _QWORD, _QWORD))(*(_QWORD *)this + 80LL))(this, 0LL, 0LL);
  return (unsigned int)v16;
}
