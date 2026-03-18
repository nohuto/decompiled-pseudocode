/*
 * XREFs of ?ProcessSetInput@CEffectBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_EFFECTBRUSH_SETINPUT@@@Z @ 0x1800E9A28
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x1800E9B3C (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?IsValidInputResource@CEffectBrush@@CA_NPEBVCResource@@@Z @ 0x1800E9DDC (-IsValidInputResource@CEffectBrush@@CA_NPEBVCResource@@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180134248 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180134738 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CEffectBrush::ProcessSetInput(
        CEffectBrush *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_EFFECTBRUSH_SETINPUT *a3)
{
  const struct CResource *ResourceWithoutType; // rax
  struct CResource *v6; // rdi
  __int64 v7; // rax
  __int64 v8; // r14
  __int64 v9; // rbp
  struct CResource *v10; // rdx
  unsigned int v11; // ebx
  unsigned int v13; // [rsp+20h] [rbp-18h]

  if ( *((_QWORD *)this + 14) )
  {
    ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, *((_DWORD *)a3 + 3));
    v6 = ResourceWithoutType;
    if ( ResourceWithoutType && !CEffectBrush::IsValidInputResource(ResourceWithoutType) )
    {
      v13 = 270;
LABEL_13:
      v11 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, v13, 0LL);
      return v11;
    }
    v7 = *((unsigned int *)a3 + 2);
    if ( (unsigned int)v7 >= *((_DWORD *)this + 40) )
    {
      v13 = 275;
      goto LABEL_13;
    }
    v8 = *((_QWORD *)this + 17);
    v9 = (unsigned int)v7;
    v10 = *(struct CResource **)(v8 + 8 * v7);
    if ( v10 )
    {
      CResource::UnRegisterNotifierInternal(this, v10);
      *(_QWORD *)(v8 + 8 * v9) = 0LL;
    }
    if ( v6 )
    {
      *(_QWORD *)(*((_QWORD *)this + 17) + 8LL * *((unsigned int *)a3 + 2)) = v6;
      CResource::RegisterNotifier(this, v6);
    }
    (*(void (__fastcall **)(CEffectBrush *, __int64))(*(_QWORD *)this + 80LL))(this, 14LL);
  }
  return 0;
}
