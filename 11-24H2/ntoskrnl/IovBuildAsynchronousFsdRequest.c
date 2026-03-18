/*
 * XREFs of IovBuildAsynchronousFsdRequest @ 0x140B82540
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     XdvIopBuildAsynchronousFsdRequest @ 0x140612240 (XdvIopBuildAsynchronousFsdRequest.c)
 */

__int64 __fastcall IovBuildAsynchronousFsdRequest(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return XdvIopBuildAsynchronousFsdRequest(a1, a2, a3, a4);
}
