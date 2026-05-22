/*
 * XREFs of ??1SipcPrivateNamespace@@QEAA@XZ @ 0x18010AF30
 * Callers:
 *     ?AcceptClientConnection@AlpcPort@@UEAAJIPEAXPEAPEAX1PEAPEAVSipcPort@@@Z @ 0x18010B120 (-AcceptClientConnection@AlpcPort@@UEAAJIPEAXPEAPEAX1PEAPEAVSipcPort@@@Z.c)
 *     ?Reconnect@SipcEndpoint@@UEAAJ_K@Z @ 0x18010E020 (-Reconnect@SipcEndpoint@@UEAAJ_K@Z.c)
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
