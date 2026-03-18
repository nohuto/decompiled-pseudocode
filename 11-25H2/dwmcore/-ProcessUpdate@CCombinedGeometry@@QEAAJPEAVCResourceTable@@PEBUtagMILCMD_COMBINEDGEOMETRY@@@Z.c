/*
 * XREFs of ?ProcessUpdate@CCombinedGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMBINEDGEOMETRY@@@Z @ 0x1801F7C08
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?NotifyOnChanged@CGeometry@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800231F0 (-NotifyOnChanged@CGeometry@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800B80C0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RegisterNotifiers@CCombinedGeometry@@QEAAJPEAVCResourceTable@@@Z @ 0x1801F7D0C (-RegisterNotifiers@CCombinedGeometry@@QEAAJPEAVCResourceTable@@@Z.c)
 *     ?UnRegisterNotifiers@CCombinedGeometry@@UEAAXXZ @ 0x1801F7F90 (-UnRegisterNotifiers@CCombinedGeometry@@UEAAXXZ.c)
 */

__int64 __fastcall CCombinedGeometry::ProcessUpdate(
        CCombinedGeometry *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMBINEDGEOMETRY *a3)
{
  unsigned int v6; // edx
  __int64 Resource; // rax
  struct CResourceTable *v8; // rdx
  __int64 v9; // rax
  int v10; // esi
  unsigned int v12; // eax

  CCombinedGeometry::UnRegisterNotifiers(this);
  *((_DWORD *)this + 40) = *((_DWORD *)a3 + 2);
  v6 = *((_DWORD *)a3 + 3);
  if ( v6 )
  {
    Resource = CResourceTable::GetResource((__int64)a2, v6, 0x42u);
    *((_QWORD *)this + 21) = Resource;
    if ( !Resource )
    {
      v10 = -2003303421;
      v12 = 97;
      goto LABEL_9;
    }
  }
  else
  {
    *((_QWORD *)this + 21) = 0LL;
  }
  v8 = (struct CResourceTable *)*((unsigned int *)a3 + 4);
  if ( (_DWORD)v8 )
  {
    v9 = CResourceTable::GetResource((__int64)a2, (unsigned int)v8, 0x42u);
    *((_QWORD *)this + 22) = v9;
    if ( v9 )
      goto LABEL_5;
    v10 = -2003303421;
    v12 = 115;
LABEL_9:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, v12, 0LL);
    CCombinedGeometry::UnRegisterNotifiers(this);
    goto LABEL_6;
  }
  *((_QWORD *)this + 22) = 0LL;
LABEL_5:
  v10 = CCombinedGeometry::RegisterNotifiers(this, v8);
  if ( v10 < 0 )
  {
    v12 = 124;
    goto LABEL_9;
  }
LABEL_6:
  CGeometry::NotifyOnChanged(this, 0, 0LL);
  return (unsigned int)v10;
}
