/*
 * XREFs of HalpDmaControllerInterruptRoutine @ 0x1404B3FC0
 * Callers:
 *     <none>
 * Callees:
 *     KeInsertQueueDpc @ 0x1402542F0 (KeInsertQueueDpc.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall HalpDmaControllerInterruptRoutine(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v5; // bl
  __int64 v7; // rcx
  bool v8; // zf
  unsigned int v9; // [rsp+38h] [rbp+10h] BYREF
  int v10; // [rsp+40h] [rbp+18h] BYREF

  v9 = 0;
  v10 = 0;
  v5 = 0;
  while ( (unsigned __int8)guard_dispatch_icall_no_overrides(*(_QWORD *)(a2 + 64), &v9, &v10, a4) )
  {
    v5 = 1;
    v7 = *(_QWORD *)(a2 + 56) + 160LL * v9;
    v8 = *(_QWORD *)(v7 + 8) == 0LL;
    *(_DWORD *)(v7 + 32) = v10;
    *(_BYTE *)(v7 + 6) = 1;
    if ( !v8 )
      KeInsertQueueDpc((PRKDPC)(v7 + 40), 0LL, 0LL);
  }
  return v5;
}
