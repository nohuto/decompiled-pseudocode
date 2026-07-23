/*
 * XREFs of HalpDmaControllerInterruptRoutine @ 0x1404AE7E0
 * Callers:
 *     <none>
 * Callees:
 *     KeInsertQueueDpc @ 0x140284900 (KeInsertQueueDpc.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall HalpDmaControllerInterruptRoutine(__int64 a1, __int64 a2)
{
  char v3; // bl
  __int64 v5; // rcx
  bool v6; // zf
  unsigned int v7; // [rsp+38h] [rbp+10h] BYREF
  int v8; // [rsp+40h] [rbp+18h]

  v7 = 0;
  v8 = 0;
  v3 = 0;
  while ( (unsigned __int8)guard_dispatch_icall_no_overrides(*(_QWORD *)(a2 + 64), &v7) )
  {
    v3 = 1;
    v5 = *(_QWORD *)(a2 + 56) + 160LL * v7;
    v6 = *(_QWORD *)(v5 + 8) == 0LL;
    *(_DWORD *)(v5 + 32) = v8;
    *(_BYTE *)(v5 + 6) = 1;
    if ( !v6 )
      KeInsertQueueDpc((PRKDPC)(v5 + 40), 0LL, 0LL);
  }
  return v3;
}
