/*
 * XREFs of ?Reset@HidLampMultiUpdateReportBuilder@@QEAAXXZ @ 0x180039D58
 * Callers:
 *     ?Initialize@HidLampMultiUpdateReportBuilder@@AEAAJPEAVHidLampArrayDevice@@H@Z @ 0x180038E0C (-Initialize@HidLampMultiUpdateReportBuilder@@AEAAJPEAVHidLampArrayDevice@@H@Z.c)
 *     ?ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z @ 0x180086910 (-ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z.c)
 * Callees:
 *     memset_0 @ 0x18009D3C8 (memset_0.c)
 */

void __fastcall HidLampMultiUpdateReportBuilder::Reset(HidLampMultiUpdateReportBuilder *this)
{
  __int64 v1; // r8

  v1 = *((int *)this + 4);
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  memset_0(*((void **)this + 4), 0, 4 * v1);
  memset_0(*((void **)this + 5), 0, *((int *)this + 4));
  memset_0(*((void **)this + 6), 0, *((int *)this + 4));
  memset_0(*((void **)this + 7), 0, *((int *)this + 4));
  memset_0(*((void **)this + 8), 0, *((int *)this + 4));
}
