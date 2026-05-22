/*
 * XREFs of ??1SipcPrivateNamespace@@QEAA@XZ @ 0x18010CE40
 * Callers:
 *     ?AcceptClientConnection@AlpcPort@@UEAAJIPEAXPEAPEAX1PEAPEAVSipcPort@@@Z @ 0x18010D030 (-AcceptClientConnection@AlpcPort@@UEAAJIPEAXPEAPEAX1PEAPEAVSipcPort@@@Z.c)
 *     ?Reconnect@SipcEndpoint@@UEAAJ_K@Z @ 0x18010FF30 (-Reconnect@SipcEndpoint@@UEAAJ_K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SipcPrivateNamespace::~SipcPrivateNamespace(void **this)
{
  void *v1; // rcx

  v1 = *this;
  if ( v1 )
    ClosePrivateNamespace(v1, 1u);
}
