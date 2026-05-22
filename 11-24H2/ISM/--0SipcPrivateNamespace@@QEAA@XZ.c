/*
 * XREFs of ??0SipcPrivateNamespace@@QEAA@XZ @ 0x18010CC44
 * Callers:
 *     ?AcceptClientConnection@AlpcPort@@UEAAJIPEAXPEAPEAX1PEAPEAVSipcPort@@@Z @ 0x18010D030 (-AcceptClientConnection@AlpcPort@@UEAAJIPEAXPEAPEAX1PEAPEAVSipcPort@@@Z.c)
 *     ?Reconnect@SipcEndpoint@@UEAAJ_K@Z @ 0x18010FF30 (-Reconnect@SipcEndpoint@@UEAAJ_K@Z.c)
 * Callees:
 *     memset_0 @ 0x18009D598 (memset_0.c)
 */

SipcPrivateNamespace *__fastcall SipcPrivateNamespace::SipcPrivateNamespace(SipcPrivateNamespace *this)
{
  *(_QWORD *)this = 0LL;
  memset_0((char *)this + 8, 0, 0x4CuLL);
  *(_OWORD *)((char *)this + 84) = 0LL;
  memset_0((char *)this + 100, 0, 0x44uLL);
  memset_0((char *)this + 168, 0, 0x44uLL);
  return this;
}
