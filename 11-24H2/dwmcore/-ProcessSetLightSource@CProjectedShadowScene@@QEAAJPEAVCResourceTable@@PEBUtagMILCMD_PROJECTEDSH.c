/*
 * XREFs of ?ProcessSetLightSource@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWSCENE_SETLIGHTSOURCE@@@Z @ 0x1802A224C
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x180036D70 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RequestRedrawAll@CProjectedShadowScene@@QEAAXXZ @ 0x1800E7EBC (-RequestRedrawAll@CProjectedShadowScene@@QEAAXXZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180134248 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180134738 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CProjectedShadowScene::ProcessSetLightSource(
        struct CResource **this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PROJECTEDSHADOWSCENE_SETLIGHTSOURCE *a3)
{
  unsigned int v4; // ebx
  unsigned int v5; // edx
  struct CResource *v6; // rsi
  __int64 Resource; // rax
  int v9; // eax

  v4 = 0;
  v5 = *((_DWORD *)a3 + 2);
  v6 = 0LL;
  if ( !v5
    || (Resource = CResourceTable::GetResource((__int64)a2, v5, 0x24u), (v6 = (struct CResource *)Resource) != 0LL)
    && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)Resource + 64LL))(Resource, 33LL) )
  {
    if ( v6 != this[13] )
    {
      v9 = CResource::RegisterNotifier((CResource *)this, v6);
      v4 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x14Fu, 0LL);
      }
      else
      {
        CResource::UnRegisterNotifierInternal((CResource *)this, this[13]);
        this[14] = 0LL;
        this[13] = v6;
        CProjectedShadowScene::RequestRedrawAll((CProjectedShadowScene *)this);
      }
    }
  }
  else
  {
    v4 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0x149u, 0LL);
  }
  return v4;
}
