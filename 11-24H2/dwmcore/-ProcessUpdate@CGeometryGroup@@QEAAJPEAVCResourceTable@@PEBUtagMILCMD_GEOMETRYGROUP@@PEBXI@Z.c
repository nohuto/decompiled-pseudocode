/*
 * XREFs of ?ProcessUpdate@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GEOMETRYGROUP@@PEBXI@Z @ 0x1802948EC
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?UnmarshalResourceArray@CResource@@SAJPEBXIIW4MIL_RESOURCE_TYPE@@PEAIPEAPEAPEAV1@PEAVCResourceTable@@_N@Z @ 0x180036228 (-UnmarshalResourceArray@CResource@@SAJPEBXIIW4MIL_RESOURCE_TYPE@@PEAIPEAPEAPEAV1@PEAVCResourceTa.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@_K@Z @ 0x180131E90 (-RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@_K@Z.c)
 *     ?NotifyOnChanged@CGeometry@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1801821D0 (-NotifyOnChanged@CGeometry@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?ProcessAppend@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GEOMETRYGROUP@@PEBXI@Z @ 0x180294510 (-ProcessAppend@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GEOMETRYGROUP@@PEBXI@Z.c)
 *     ?UnRegisterNotifiers@CGeometryGroup@@UEAAXXZ @ 0x180294CD0 (-UnRegisterNotifiers@CGeometryGroup@@UEAAXXZ.c)
 */

__int64 __fastcall CGeometryGroup::ProcessUpdate(
        CGeometryGroup *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_GEOMETRYGROUP *a3,
        unsigned int *a4,
        unsigned int a5)
{
  unsigned int v9; // r8d
  int v10; // eax
  struct CResource **v11; // rdx
  int v12; // edi
  int v13; // eax
  unsigned int v14; // eax
  struct CResource **v16; // [rsp+70h] [rbp+18h] BYREF

  if ( *((_DWORD *)a3 + 3) )
  {
    v12 = CGeometryGroup::ProcessAppend(this, a2, a3, a4, a5);
    if ( v12 < 0 )
    {
      v14 = 244;
      goto LABEL_8;
    }
  }
  else
  {
    CGeometryGroup::UnRegisterNotifiers(this);
    v9 = *((_DWORD *)a3 + 2);
    v16 = 0LL;
    v10 = CResource::UnmarshalResourceArray(a4, a5, v9, 0x43u, (unsigned int *)this + 40, (void **)&v16, (__int64)a2, 0);
    v11 = v16;
    v12 = v10;
    *((_QWORD *)this + 21) = v16;
    if ( v10 < 0 )
    {
      v14 = 237;
      goto LABEL_8;
    }
    v13 = CResource::RegisterNNotifiersInternal(this, v11, *((unsigned int *)this + 40));
    v12 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0x168u, 0LL);
      v14 = 240;
LABEL_8:
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, v14, 0LL);
      CGeometryGroup::UnRegisterNotifiers(this);
    }
  }
  CGeometry::NotifyOnChanged(this, 0LL, 0LL);
  return (unsigned int)v12;
}
