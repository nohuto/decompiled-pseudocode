/*
 * XREFs of IovBuildAsynchronousFsdRequest @ 0x140B72540
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     XdvIopBuildAsynchronousFsdRequest @ 0x140606280 (XdvIopBuildAsynchronousFsdRequest.c)
 */

__int64 __fastcall IovBuildAsynchronousFsdRequest(__int64 a1)
{
  return XdvIopBuildAsynchronousFsdRequest(a1);
}
