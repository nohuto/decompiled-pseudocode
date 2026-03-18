/*
 * XREFs of NVMeHwInitialize @ 0x140018530
 * Callers:
 *     <none>
 * Callees:
 *     NVMeControllerInitPart2 @ 0x140007440 (NVMeControllerInitPart2.c)
 *     NVMeControllerInitPart3 @ 0x14000FB50 (NVMeControllerInitPart3.c)
 */

char __fastcall NVMeHwInitialize(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // bl

  v4 = 0;
  if ( *(_BYTE *)(a1 + 20) )
  {
    LOBYTE(a3) = 1;
    LOBYTE(a2) = 1;
    if ( !(unsigned int)NVMeControllerInitPart2(a1, a2, a3, a4) )
      return NVMeControllerInitPart3(a1, 1u);
  }
  else
  {
    StorPortNotification(4096LL, a1, NVMeHwPassiveInitialize);
    return 0;
  }
  return v4;
}
