/*
 * XREFs of PspGetStandardHandleList @ 0x140A7C9A4
 * Callers:
 *     PspSetupUserProcessAddressSpace @ 0x1408DF5FC (PspSetupUserProcessAddressSpace.c)
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PspGetStandardHandleList(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 *v3; // r9
  __int64 v4; // rax
  __int64 v5; // rax
  unsigned int i; // ecx
  __int64 v8; // [rsp+28h] [rbp-20h]
  __int64 v9; // [rsp+30h] [rbp-18h]
  __int64 v10; // [rsp+68h] [rbp+20h]

  v9 = 0LL;
  v2 = 0LL;
  v3 = *(__int64 **)(a1 + 784);
  if ( v3 )
    v2 = *v3;
  v10 = v2;
  if ( v2 )
  {
    v8 = 0LL;
    v4 = *(unsigned int *)(v2 + 16) + 24LL;
    v9 = v4;
  }
  else
  {
    v4 = *(_QWORD *)(*(_QWORD *)(a1 + 736) + 32LL) + 32LL;
    v8 = v4;
  }
  if ( (v4 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  for ( i = 0; i < 3; ++i )
  {
    if ( v10 )
      v5 = *(unsigned int *)(v9 + 4LL * i);
    else
      v5 = *(_QWORD *)(v8 + 8LL * i);
    *(_QWORD *)(a2 + 8LL * i) = v5;
  }
  return 0LL;
}
