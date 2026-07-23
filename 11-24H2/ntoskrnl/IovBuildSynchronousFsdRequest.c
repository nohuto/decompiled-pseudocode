/*
 * XREFs of IovBuildSynchronousFsdRequest @ 0x140B84670
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     XdvIoBuildSynchronousFsdRequest @ 0x1406107B0 (XdvIoBuildSynchronousFsdRequest.c)
 */

__int64 __fastcall IovBuildSynchronousFsdRequest(__int64 a1, __int64 a2)
{
  return XdvIoBuildSynchronousFsdRequest(a1, a2);
}
