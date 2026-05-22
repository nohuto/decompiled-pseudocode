/*
 * XREFs of ?Reset@SipcWin32Handle@@QEAAXXZ @ 0x180094CA0
 * Callers:
 *     ??1AlpcPort@@UEAA@XZ @ 0x180084A10 (--1AlpcPort@@UEAA@XZ.c)
 *     ??1SipcPort@@UEAA@XZ @ 0x180094C28 (--1SipcPort@@UEAA@XZ.c)
 *     ?Attach@SipcWin32Handle@@QEAAXPEAX@Z @ 0x180096BF4 (-Attach@SipcWin32Handle@@QEAAXPEAX@Z.c)
 *     ??1AlpcSection@@UEAA@XZ @ 0x18010ADEC (--1AlpcSection@@UEAA@XZ.c)
 *     ??1SipcEndpoint@@EEAA@XZ @ 0x18010AED8 (--1SipcEndpoint@@EEAA@XZ.c)
 *     ?AcceptClientConnection@AlpcPort@@UEAAJIPEAXPEAPEAX1PEAPEAVSipcPort@@@Z @ 0x18010B120 (-AcceptClientConnection@AlpcPort@@UEAAJIPEAXPEAPEAX1PEAPEAVSipcPort@@@Z.c)
 *     ?Attach@AlpcSection@@CAJPEBVAlpcPort@@PEAX_K12AEAVSipcSectionId@@PEAPEAV1@@Z @ 0x18010B744 (-Attach@AlpcSection@@CAJPEBVAlpcPort@@PEAX_K12AEAVSipcSectionId@@PEAPEAV1@@Z.c)
 *     ?Create@AlpcSection@@SAJPEBVAlpcPort@@_KAEBVSipcSectionId@@PEAXPEAPEAV1@@Z @ 0x18010BB24 (-Create@AlpcSection@@SAJPEBVAlpcPort@@_KAEBVSipcSectionId@@PEAXPEAPEAV1@@Z.c)
 *     ?CreateClientEvents@SipcSignalFactory@@SAJAEBVSipcPrivateNamespace@@PEAPEAX1@Z @ 0x18010C0D8 (-CreateClientEvents@SipcSignalFactory@@SAJAEBVSipcPrivateNamespace@@PEAPEAX1@Z.c)
 *     ?Disconnect@AlpcPort@@UEAAXXZ @ 0x18010CC50 (-Disconnect@AlpcPort@@UEAAXXZ.c)
 *     ?Disconnect@SipcEndpoint@@UEAAXXZ @ 0x18010CD60 (-Disconnect@SipcEndpoint@@UEAAXXZ.c)
 *     ?OpenServerEvents@SipcSignalFactory@@SAJGAEBVSipcPrivateNamespace@@PEAPEAX1@Z @ 0x18010DB00 (-OpenServerEvents@SipcSignalFactory@@SAJGAEBVSipcPrivateNamespace@@PEAPEAX1@Z.c)
 *     ?Reconnect@SipcEndpoint@@UEAAJ_K@Z @ 0x18010E020 (-Reconnect@SipcEndpoint@@UEAAJ_K@Z.c)
 *     ?RejectClientConnection@AlpcPort@@UEAAJXZ @ 0x18010E290 (-RejectClientConnection@AlpcPort@@UEAAJXZ.c)
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
