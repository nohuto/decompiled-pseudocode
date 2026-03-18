/*
 * XREFs of ?ProcessUpdate@CVisualReferenceController@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUALREFERENCECONTROLLER@@@Z @ 0x180095ED8
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?IsOfType@CKeyframeAnimation@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800368D0 (-IsOfType@CKeyframeAnimation@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800370D0 (-IsOfType@CVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CSharedSection@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800373C0 (-IsOfType@CSharedSection@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18007FB20 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RegisterNotifiers@CVisualReferenceController@@QEAAJPEAVCResourceTable@@@Z @ 0x180095FF4 (-RegisterNotifiers@CVisualReferenceController@@QEAAJPEAVCResourceTable@@@Z.c)
 *     ?UnRegisterNotifiers@CVisualReferenceController@@UEAAXXZ @ 0x180096050 (-UnRegisterNotifiers@CVisualReferenceController@@UEAAXXZ.c)
 *     ?ValidEntry@HANDLE_TABLE@@QEBAHI@Z @ 0x180180980 (-ValidEntry@HANDLE_TABLE@@QEBAHI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisualReferenceController::ProcessUpdate(
        CVisualReferenceController *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VISUALREFERENCECONTROLLER *a3)
{
  struct CResourceTable *v6; // rdx
  unsigned int v7; // r8d
  int v8; // r8d
  __int64 v9; // rsi
  __int64 v10; // rcx
  bool (__fastcall *v11)(__int64, int); // rax
  bool v12; // al
  __int64 v13; // rax
  int v14; // esi
  unsigned int v16; // eax

  CVisualReferenceController::UnRegisterNotifiers(this);
  v7 = *((_DWORD *)a3 + 2);
  if ( v7 )
  {
    if ( (unsigned int)HANDLE_TABLE::ValidEntry((struct CResourceTable *)((char *)a2 + 16), v7)
      && (v9 = *((_QWORD *)a2 + 5) + (unsigned int)(*((_DWORD *)a2 + 6) * v8), (v10 = *(_QWORD *)(v9 + 8)) != 0)
      && ((v11 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v10 + 64LL), v11 == CKeyframeAnimation::IsOfType)
        ? (v12 = CKeyframeAnimation::IsOfType(v10, 184))
        : v11 != CVisual::IsOfType
        ? (v11 != CSharedSection::IsOfType
         ? (v12 = v11(v10, 184))
         : (v12 = CSharedSection::IsOfType(v10, 184)))
        : (v12 = CVisual::IsOfType(v10, 184)),
          v12) )
    {
      v13 = *(_QWORD *)(v9 + 8);
    }
    else
    {
      v13 = 0LL;
    }
    *((_QWORD *)this + 9) = v13;
    if ( !v13 )
    {
      v14 = -2003303421;
      v16 = 661;
LABEL_20:
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, v16, 0LL);
      CVisualReferenceController::UnRegisterNotifiers(this);
      goto LABEL_13;
    }
  }
  else
  {
    *((_QWORD *)this + 9) = 0LL;
  }
  v14 = CVisualReferenceController::RegisterNotifiers(this, v6);
  if ( v14 < 0 )
  {
    v16 = 670;
    goto LABEL_20;
  }
LABEL_13:
  CResource::NotifyOnChanged(this, 0LL, (__int64)this);
  return (unsigned int)v14;
}
