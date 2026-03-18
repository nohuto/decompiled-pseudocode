/*
 * XREFs of ?ProcessSetGeometry@CSpriteVectorShape@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SPRITEVECTORSHAPE_SETGEOMETRY@@@Z @ 0x1801F72F0
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18007FB20 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180134248 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180134738 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSpriteVectorShape::ProcessSetGeometry(
        struct CResource **this,
        struct CResourceTable *a2,
        const struct tagMILCMD_SPRITEVECTORSHAPE_SETGEOMETRY *a3)
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
  if ( v7 != this[15] )
  {
    if ( v7 && !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)v7 + 64LL))(v7, 67LL) )
    {
      v4 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0x9Bu, 0LL);
    }
    else
    {
      v8 = CResource::RegisterNotifier((CResource *)this, v7);
      v4 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x9Eu, 0LL);
      }
      else
      {
        CResource::UnRegisterNotifierInternal((CResource *)this, this[15]);
        this[15] = v7;
        CResource::NotifyOnChanged(this, 0LL, 0LL);
      }
    }
  }
  return v4;
}
