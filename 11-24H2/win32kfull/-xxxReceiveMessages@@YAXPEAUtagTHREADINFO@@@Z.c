/*
 * XREFs of ?xxxReceiveMessages@@YAXPEAUtagTHREADINFO@@@Z @ 0x140167D6C
 * Callers:
 *     ?xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z @ 0x14003D46C (-xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z.c)
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x140063D90 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     xxxRealInternalGetMessage @ 0x140107DFC (xxxRealInternalGetMessage.c)
 *     xxxWaitForDITMouseInjectionFlush @ 0x1401C8EA8 (xxxWaitForDITMouseInjectionFlush.c)
 * Callees:
 *     ?xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z @ 0x140167DA8 (-xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ??BINTERLOCKEDINT@@QEBAHXZ @ 0x140272AEC (--BINTERLOCKEDINT@@QEBAHXZ.c)
 */

void __fastcall xxxReceiveMessages(struct tagTHREADINFO *a1)
{
  __int64 i; // rcx

  for ( i = *((_QWORD *)a1 + 61); (INTERLOCKEDINT::operator int(i + 8) & 0x40) != 0; i = *((_QWORD *)a1 + 61) )
    xxxReceiveMessage(a1);
}
