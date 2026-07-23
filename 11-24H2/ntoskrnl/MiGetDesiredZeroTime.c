/*
 * XREFs of MiGetDesiredZeroTime @ 0x140413BA4
 * Callers:
 *     MiReassessZeroThreads @ 0x1404125C0 (MiReassessZeroThreads.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiGetDesiredZeroTime(__int64 a1, int a2, unsigned int a3)
{
  __int64 v3; // rdx
  __int64 v4; // r9

  v3 = 168LL * a2;
  v4 = *(_QWORD *)(v3 + a1 + 176);
  if ( v4 )
    return (*(_QWORD *)(v4 + 16LL * (a3 - 1) + 8) << 21)
         / (*(_QWORD *)(v3 + a1 + 136)
          * (unsigned __int64)*(unsigned int *)(v3 + a1 + 128)
          / a3);
  else
    return 1216LL;
}
