/*
 * XREFs of IovBuildSynchronousFsdRequest @ 0x140B82670
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     XdvIoBuildSynchronousFsdRequest @ 0x1406121F0 (XdvIoBuildSynchronousFsdRequest.c)
 */

__int64 __fastcall IovBuildSynchronousFsdRequest(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return XdvIoBuildSynchronousFsdRequest(a1, a2, a3, a4);
}
