/*
 * XREFs of ?Reset@SipcWin32Handle@@QEAAXXZ @ 0x180094EA0
 * Callers:
 *     ??1AlpcPort@@UEAA@XZ @ 0x180084A30 (--1AlpcPort@@UEAA@XZ.c)
 *     ??1SipcPort@@UEAA@XZ @ 0x180094E28 (--1SipcPort@@UEAA@XZ.c)
 *     ?Attach@SipcWin32Handle@@QEAAXPEAX@Z @ 0x180096D04 (-Attach@SipcWin32Handle@@QEAAXPEAX@Z.c)
 *     ??1AlpcSection@@UEAA@XZ @ 0x18010CCFC (--1AlpcSection@@UEAA@XZ.c)
 *     ??1SipcEndpoint@@EEAA@XZ @ 0x18010CDE8 (--1SipcEndpoint@@EEAA@XZ.c)
 *     ?AcceptClientConnection@AlpcPort@@UEAAJIPEAXPEAPEAX1PEAPEAVSipcPort@@@Z @ 0x18010D030 (-AcceptClientConnection@AlpcPort@@UEAAJIPEAXPEAPEAX1PEAPEAVSipcPort@@@Z.c)
 *     ?Attach@AlpcSection@@CAJPEBVAlpcPort@@PEAX_K12AEAVSipcSectionId@@PEAPEAV1@@Z @ 0x18010D654 (-Attach@AlpcSection@@CAJPEBVAlpcPort@@PEAX_K12AEAVSipcSectionId@@PEAPEAV1@@Z.c)
 *     ?Create@AlpcSection@@SAJPEBVAlpcPort@@_KAEBVSipcSectionId@@PEAXPEAPEAV1@@Z @ 0x18010DA34 (-Create@AlpcSection@@SAJPEBVAlpcPort@@_KAEBVSipcSectionId@@PEAXPEAPEAV1@@Z.c)
 *     ?CreateClientEvents@SipcSignalFactory@@SAJAEBVSipcPrivateNamespace@@PEAPEAX1@Z @ 0x18010DFE8 (-CreateClientEvents@SipcSignalFactory@@SAJAEBVSipcPrivateNamespace@@PEAPEAX1@Z.c)
 *     ?Disconnect@AlpcPort@@UEAAXXZ @ 0x18010EB60 (-Disconnect@AlpcPort@@UEAAXXZ.c)
 *     ?Disconnect@SipcEndpoint@@UEAAXXZ @ 0x18010EC70 (-Disconnect@SipcEndpoint@@UEAAXXZ.c)
 *     ?OpenServerEvents@SipcSignalFactory@@SAJGAEBVSipcPrivateNamespace@@PEAPEAX1@Z @ 0x18010FA10 (-OpenServerEvents@SipcSignalFactory@@SAJGAEBVSipcPrivateNamespace@@PEAPEAX1@Z.c)
 *     ?Reconnect@SipcEndpoint@@UEAAJ_K@Z @ 0x18010FF30 (-Reconnect@SipcEndpoint@@UEAAJ_K@Z.c)
 *     ?RejectClientConnection@AlpcPort@@UEAAJXZ @ 0x1801101A0 (-RejectClientConnection@AlpcPort@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall SipcWin32Handle::Reset(void **this)
{
  void *v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    CloseHandle(v2);
    *this = 0LL;
  }
}
