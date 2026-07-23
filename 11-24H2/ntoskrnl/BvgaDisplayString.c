/*
 * XREFs of BvgaDisplayString @ 0x14058D5B0
 * Callers:
 *     <none>
 * Callees:
 *     BvgaAcquireLock @ 0x14058D4C0 (BvgaAcquireLock.c)
 *     BvgaReleaseLock @ 0x14058D7B0 (BvgaReleaseLock.c)
 *     HeadlessDispatch @ 0x1406523F0 (HeadlessDispatch.c)
 */

char __fastcall BvgaDisplayString(__int64 a1)
{
  __int64 v2; // r8
  __int64 v3; // rcx

  if ( BvgaDisplayState )
    return 0;
  BvgaAcquireLock();
  if ( BvgaBootDriverInstalled )
    VidDisplayString(a1);
  v2 = -1LL;
  do
    ++v2;
  while ( *(_BYTE *)(a1 + v2) );
  HeadlessDispatch(3LL, a1, v2 + 1);
  BvgaReleaseLock(v3);
  return 1;
}
