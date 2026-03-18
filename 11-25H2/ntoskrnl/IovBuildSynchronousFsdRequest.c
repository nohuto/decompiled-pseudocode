/*
 * XREFs of IovBuildSynchronousFsdRequest @ 0x140B72670
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     XdvIoBuildSynchronousFsdRequest @ 0x140606230 (XdvIoBuildSynchronousFsdRequest.c)
 */

__int64 __fastcall IovBuildSynchronousFsdRequest(__int64 a1)
{
  return XdvIoBuildSynchronousFsdRequest(a1);
}
