/*
 * XREFs of StorExtReleaseMSISpinLock @ 0x140073650
 * Callers:
 *     <none>
 * Callees:
 *     RaidpPortGetAdapter @ 0x1400255D0 (RaidpPortGetAdapter.c)
 */

void __fastcall StorExtReleaseMSISpinLock(__int64 a1)
{
  KIRQL v1; // r10
  __int64 v2; // r11
  int *v3; // [rsp+20h] [rbp-18h] BYREF
  int *v4; // [rsp+58h] [rbp+20h] BYREF

  v4 = 0LL;
  RaidpPortGetAdapter(a1, &v4, &v3);
  if ( v4 )
    KeReleaseInterruptSpinLock(*(PKINTERRUPT *)(*((_QWORD *)v4 + 544) + 48 * v2 + 24), v1);
}
