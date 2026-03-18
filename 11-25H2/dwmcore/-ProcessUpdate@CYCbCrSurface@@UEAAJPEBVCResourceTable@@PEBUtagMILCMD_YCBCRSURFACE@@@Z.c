/*
 * XREFs of ?ProcessUpdate@CYCbCrSurface@@UEAAJPEBVCResourceTable@@PEBUtagMILCMD_YCBCRSURFACE@@@Z @ 0x18029E620
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180023388 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800B80C0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180131C1C (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 */

__int64 __fastcall CYCbCrSurface::ProcessUpdate(
        struct CResource **this,
        const struct CResourceTable *a2,
        const struct tagMILCMD_YCBCRSURFACE *a3)
{
  char v6; // r14
  char v7; // bp
  struct CResource *Resource; // r15
  __int64 v9; // rax
  int v10; // edi
  struct CResource *v11; // r12
  unsigned int v12; // ebx
  int v13; // eax
  int v14; // eax

  v6 = 0;
  v7 = 0;
  Resource = (struct CResource *)CResourceTable::GetResource((__int64)a2, *((_DWORD *)a3 + 2), 0x29u);
  v9 = CResourceTable::GetResource((__int64)a2, *((_DWORD *)a3 + 3), 0x29u);
  v10 = *((_DWORD *)a3 + 4);
  v11 = (struct CResource *)v9;
  if ( (v9 == 0) != (Resource == 0LL) )
  {
    v12 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0x1Eu, 0LL);
    return v12;
  }
  v12 = 0;
  if ( Resource != this[9] )
  {
    v13 = CResource::RegisterNotifier((CResource *)this, Resource);
    v12 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0x23u, 0LL);
      return v12;
    }
    v6 = 1;
  }
  if ( v11 != this[10] )
  {
    v14 = CResource::RegisterNotifier((CResource *)this, v11);
    v12 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0x29u, 0LL);
LABEL_15:
      if ( v6 )
        CResource::UnRegisterNotifierInternal((CResource *)this, Resource);
      if ( v7 )
        CResource::UnRegisterNotifierInternal((CResource *)this, v11);
      return v12;
    }
    v7 = 1;
  }
  if ( v6 )
  {
    CResource::UnRegisterNotifierInternal((CResource *)this, this[9]);
    this[9] = Resource;
  }
  if ( v7 )
  {
    CResource::UnRegisterNotifierInternal((CResource *)this, this[10]);
    this[10] = v11;
  }
  *((_DWORD *)this + 22) = v10;
  if ( (v12 & 0x80000000) != 0 )
    goto LABEL_15;
  return v12;
}
