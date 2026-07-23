/*
 * XREFs of DbgkpSuppressDbgMsg @ 0x140AA5C70
 * Callers:
 *     DbgkMapViewOfSection @ 0x1408A05A8 (DbgkMapViewOfSection.c)
 *     DbgkUnMapViewOfSection @ 0x140A25518 (DbgkUnMapViewOfSection.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DbgkpSuppressDbgMsg(__int64 a1)
{
  _KPROCESS *Process; // rax
  __int16 v2; // ax
  unsigned int v5; // [rsp+0h] [rbp-18h]

  v5 = 0;
  if ( *(char *)(a1 + 6126) >= 0 )
  {
    if ( KeGetCurrentThread()->ApcState.Process[1].ReadyTime )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process[1].ReadyTime )
      {
        v2 = WORD2(Process[3].PerProcessorCycleTimes);
        if ( v2 == 332 || v2 == 452 )
          return *(char *)(a1 + 12234) < 0;
      }
    }
  }
  else
  {
    return 1;
  }
  return v5;
}
