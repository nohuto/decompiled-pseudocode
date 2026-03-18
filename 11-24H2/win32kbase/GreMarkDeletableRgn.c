/*
 * XREFs of GreMarkDeletableRgn @ 0x1401077C0
 * Callers:
 *     DestroyCacheDC @ 0x1401689F0 (DestroyCacheDC.c)
 * Callees:
 *     HmgMarkDeletable @ 0x1401077F0 (HmgMarkDeletable.c)
 */

__int64 __fastcall GreMarkDeletableRgn(__int64 a1)
{
  __int64 v2; // rdx

  PsGetCurrentProcessId();
  LOBYTE(v2) = 4;
  return HmgMarkDeletable(a1, v2);
}
