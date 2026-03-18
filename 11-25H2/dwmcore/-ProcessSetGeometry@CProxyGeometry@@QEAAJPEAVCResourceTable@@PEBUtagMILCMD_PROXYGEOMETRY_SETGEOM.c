/*
 * XREFs of ?ProcessSetGeometry@CProxyGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROXYGEOMETRY_SETGEOMETRY@@@Z @ 0x1801312EC
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?NotifyOnChanged@CGeometry@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800231F0 (-NotifyOnChanged@CGeometry@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180023388 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180131C1C (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CProxyGeometry::ProcessSetGeometry(
        struct CResource **this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PROXYGEOMETRY_SETGEOMETRY *a3)
{
  unsigned int v3; // r9d
  unsigned int v4; // edi
  __int64 v6; // rax
  struct CResource *v7; // rbx
  int v8; // eax

  v3 = *((_DWORD *)a3 + 2);
  v4 = 0;
  if ( v3 && v3 < *((_DWORD *)a2 + 7) && (v6 = *((_QWORD *)a2 + 5), *(_DWORD *)(*((_DWORD *)a2 + 6) * v3 + v6)) )
    v7 = *(struct CResource **)(*((_DWORD *)a2 + 6) * v3 + v6 + 8);
  else
    v7 = 0LL;
  if ( v7 != this[17] )
  {
    if ( v7 && !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)v7 + 64LL))(v7, 66LL) )
    {
      v4 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0x4Eu, 0LL);
    }
    else
    {
      v8 = CResource::RegisterNotifier((CResource *)this, v7);
      v4 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x51u, 0LL);
      }
      else
      {
        CResource::UnRegisterNotifierInternal((CResource *)this, this[17]);
        this[17] = v7;
        CGeometry::NotifyOnChanged(this, 4u, (CMaskBrush *)this);
      }
    }
  }
  return v4;
}
