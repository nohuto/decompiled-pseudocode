/*
 * XREFs of ?ProcessUpdate@CVisualCapture@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUALCAPTURE@@@Z @ 0x180227C70
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?IsOfType@CKeyframeAnimation@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800368D0 (-IsOfType@CKeyframeAnimation@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x180036D70 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800370D0 (-IsOfType@CVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CSharedSection@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800373C0 (-IsOfType@CSharedSection@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ValidEntry@HANDLE_TABLE@@QEBAHI@Z @ 0x180180980 (-ValidEntry@HANDLE_TABLE@@QEBAHI@Z.c)
 *     ?RegisterNotifiers@CVisualCapture@@QEAAJPEAVCResourceTable@@@Z @ 0x180294C28 (-RegisterNotifiers@CVisualCapture@@QEAAJPEAVCResourceTable@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisualCapture::ProcessUpdate(
        CVisualCapture *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VISUALCAPTURE *a3)
{
  unsigned int v6; // r8d
  int v7; // r8d
  __int64 v8; // rbp
  __int64 v9; // rcx
  bool (__fastcall *v10)(__int64, int); // rax
  bool v11; // al
  __int64 v12; // rax
  int v13; // esi
  unsigned int v14; // eax
  unsigned int v15; // edx
  __int64 Resource; // rax
  struct CResourceTable *v17; // rdx
  __int64 v18; // rax

  (*(void (__fastcall **)(CVisualCapture *))(*(_QWORD *)this + 72LL))(this);
  v6 = *((_DWORD *)a3 + 2);
  if ( v6 )
  {
    if ( HANDLE_TABLE::ValidEntry((struct CResourceTable *)((char *)a2 + 16), v6)
      && (v8 = *((_QWORD *)a2 + 5) + (unsigned int)(*((_DWORD *)a2 + 6) * v7), (v9 = *(_QWORD *)(v8 + 8)) != 0)
      && ((v10 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v9 + 64LL), v10 != CKeyframeAnimation::IsOfType)
        ? (v10 != CVisual::IsOfType
         ? (v10 != CSharedSection::IsOfType
          ? (v11 = v10(v9, 184))
          : (v11 = CSharedSection::IsOfType(v9, 184)))
         : (v11 = CVisual::IsOfType(v9, 184)))
        : (v11 = CKeyframeAnimation::IsOfType(v9, 184)),
          v11) )
    {
      v12 = *(_QWORD *)(v8 + 8);
    }
    else
    {
      v12 = 0LL;
    }
    *((_QWORD *)this + 342) = v12;
    if ( !v12 )
    {
      v13 = -2003303421;
      v14 = 558;
LABEL_27:
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, v14, 0LL);
      (*(void (__fastcall **)(CVisualCapture *))(*(_QWORD *)this + 72LL))(this);
      goto LABEL_28;
    }
  }
  else
  {
    *((_QWORD *)this + 342) = 0LL;
  }
  v15 = *((_DWORD *)a3 + 3);
  if ( v15 )
  {
    Resource = CResourceTable::GetResource((__int64)a2, v15, 0xB8u);
    *((_QWORD *)this + 343) = Resource;
    if ( !Resource )
    {
      v13 = -2003303421;
      v14 = 576;
      goto LABEL_27;
    }
  }
  else
  {
    *((_QWORD *)this + 343) = 0LL;
  }
  v17 = (struct CResourceTable *)*((unsigned int *)a3 + 4);
  if ( (_DWORD)v17 )
  {
    v18 = CResourceTable::GetResource((__int64)a2, (unsigned int)v17, 0x2Au);
    *((_QWORD *)this + 344) = v18;
    if ( !v18 )
    {
      v13 = -2003303421;
      v14 = 594;
      goto LABEL_27;
    }
  }
  else
  {
    *((_QWORD *)this + 344) = 0LL;
  }
  *((_DWORD *)this + 690) = *((_DWORD *)a3 + 5);
  *((_DWORD *)this + 691) = *((_DWORD *)a3 + 6);
  *((_DWORD *)this + 692) = *((_DWORD *)a3 + 7);
  *((_BYTE *)this + 2772) = *((_BYTE *)a3 + 32);
  v13 = CVisualCapture::RegisterNotifiers(this, v17);
  if ( v13 < 0 )
  {
    v14 = 608;
    goto LABEL_27;
  }
LABEL_28:
  (*(void (__fastcall **)(CVisualCapture *, _QWORD, _QWORD))(*(_QWORD *)this + 80LL))(this, 0LL, 0LL);
  return (unsigned int)v13;
}
