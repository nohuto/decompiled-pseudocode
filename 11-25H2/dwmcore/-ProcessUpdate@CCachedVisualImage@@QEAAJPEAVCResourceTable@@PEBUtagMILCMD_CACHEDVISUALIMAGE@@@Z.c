/*
 * XREFs of ?ProcessUpdate@CCachedVisualImage@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CACHEDVISUALIMAGE@@@Z @ 0x180007BDC
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?RegisterNotifiers@CCachedVisualImage@@IEAAJPEAVCResourceTable@@@Z @ 0x180007E78 (-RegisterNotifiers@CCachedVisualImage@@IEAAJPEAVCResourceTable@@@Z.c)
 *     ?ChoosePixelFormat@CCachedVisualImage@@IEAAXXZ @ 0x1800080D0 (-ChoosePixelFormat@CCachedVisualImage@@IEAAXXZ.c)
 *     ?MarkAllTargetsDirty@CCachedVisualImage@@QEAAXXZ @ 0x18009C400 (-MarkAllTargetsDirty@CCachedVisualImage@@QEAAXXZ.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800B80C0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsOfType@CKeyframeAnimation@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18012E8D0 (-IsOfType@CKeyframeAnimation@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18012E8F0 (-IsOfType@CVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CSharedSection@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18012E910 (-IsOfType@CSharedSection@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?ValidEntry@HANDLE_TABLE@@QEBAHI@Z @ 0x18013A3B0 (-ValidEntry@HANDLE_TABLE@@QEBAHI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCachedVisualImage::ProcessUpdate(
        CCachedVisualImage *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_CACHEDVISUALIMAGE *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rdx
  unsigned int v8; // r8d
  int v9; // r8d
  __int64 v10; // r14
  __int64 v11; // rcx
  __int64 (__fastcall *v12)(__int64, __int64); // rax
  char v13; // al
  __int64 v14; // rax
  struct CResourceTable *v15; // rdx
  int v16; // esi
  unsigned int v17; // eax
  __int64 Resource; // rax
  __int64 v20; // rax

  (*(void (__fastcall **)(CCachedVisualImage *))(*(_QWORD *)this + 72LL))(this);
  *((_OWORD *)this + 6) = *(_OWORD *)((char *)a3 + 8);
  v6 = *((unsigned int *)a3 + 8);
  if ( (_DWORD)v6 )
  {
    Resource = CResourceTable::GetResource(a2, v6, 127LL);
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
  v7 = *((unsigned int *)a3 + 9);
  if ( (_DWORD)v7 )
  {
    v20 = CResourceTable::GetResource(a2, v7, 159LL);
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
      && ((v12 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 64LL), v12 == CKeyframeAnimation::IsOfType)
        ? (v13 = CKeyframeAnimation::IsOfType(v11, 182LL))
        : v12 != CVisual::IsOfType
        ? (v12 != CSharedSection::IsOfType
         ? (v13 = v12(v11, 182LL))
         : (v13 = CSharedSection::IsOfType(v11, 182LL)))
        : (v13 = CVisual::IsOfType(v11, 182LL)),
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
