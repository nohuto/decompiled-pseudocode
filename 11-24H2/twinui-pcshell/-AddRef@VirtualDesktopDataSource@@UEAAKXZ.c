/*
 * XREFs of ?AddRef@VirtualDesktopDataSource@@UEAAKXZ @ 0x180195440
 * Callers:
 *     ?AddRef@VirtualDesktopDataSource@@W7EAAKXZ @ 0x180492120 (-AddRef@VirtualDesktopDataSource@@W7EAAKXZ.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVirtualDesktopDataSource@Multitasking@ComposableShell@Internal@Windows@@UIVirtualDesktopDataSource2@5678@UIDesktopVirtualDesktopDataSource@@UIVirtualDesktopDataSourceInternal@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@VFtmBase@23@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x180492130 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVirtualDesktopDat.c)
 *     ?AddRef@VirtualDesktopDataSource@@WBI@EAAKXZ @ 0x180492140 (-AddRef@VirtualDesktopDataSource@@WBI@EAAKXZ.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVirtualDesktopDataSource@Multitasking@ComposableShell@Internal@Windows@@UIVirtualDesktopDataSource2@5678@UIDesktopVirtualDesktopDataSource@@UIVirtualDesktopDataSourceInternal@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@VFtmBase@23@@Details@WRL@Microsoft@@WCA@EAAKXZ @ 0x180492150 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVirt_ea_180492150.c)
 *     ?AddRef@VirtualDesktopDataSource@@WCI@EAAKXZ @ 0x180492160 (-AddRef@VirtualDesktopDataSource@@WCI@EAAKXZ.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVirtualDesktopDataSource@Multitasking@ComposableShell@Internal@Windows@@UIVirtualDesktopDataSource2@5678@UIDesktopVirtualDesktopDataSource@@UIVirtualDesktopDataSourceInternal@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@VFtmBase@23@@Details@WRL@Microsoft@@WDA@EAAKXZ @ 0x180492170 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVirt_ea_180492170.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VirtualDesktopDataSource::AddRef(VirtualDesktopDataSource *this)
{
  signed __int64 v1; // rdx
  unsigned int v3; // r8d
  unsigned int v4; // ecx
  bool v5; // zf
  signed __int64 v6; // rax
  signed __int32 v8; // r9d

  v1 = *((_QWORD *)this + 11);
  v3 = 0x7FFFFFFF;
  while ( v1 >= 0 )
  {
    if ( (_DWORD)v1 == 0x7FFFFFFF )
      return v3;
    v4 = v1 + 1;
    v6 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 11, v1 + 1, v1);
    v5 = v1 == v6;
    v1 = v6;
    if ( v5 )
      return v4;
  }
  while ( 1 )
  {
    v8 = *(_DWORD *)(2 * v1 + 0x10);
    if ( v8 == 0x7FFFFFFF )
      break;
    if ( v8 == _InterlockedCompareExchange((volatile signed __int32 *)(2 * v1 + 16), v8 + 1, v8) )
      return (unsigned int)(v8 + 1);
  }
  return v3;
}
