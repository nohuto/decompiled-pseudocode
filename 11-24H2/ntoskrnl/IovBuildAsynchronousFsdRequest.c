/*
 * XREFs of IovBuildAsynchronousFsdRequest @ 0x140B84540
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     XdvIopBuildAsynchronousFsdRequest @ 0x140610800 (XdvIopBuildAsynchronousFsdRequest.c)
 */

__int64 __fastcall IovBuildAsynchronousFsdRequest(__int64 a1, __int64 a2)
{
  return XdvIopBuildAsynchronousFsdRequest(a1, a2);
}
