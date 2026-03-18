/*
 * XREFs of EtwpFreePmcData @ 0x140798AA8
 * Callers:
 *     EtwpFreeLoggerContext @ 0x14098EB6C (EtwpFreeLoggerContext.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpFreePmcData(__int64 a1)
{
  PVOID *v1; // rbx
  _QWORD *v2; // rdi
  __int64 v3; // rsi

  v1 = *(PVOID **)(a1 + 1064);
  if ( (_DWORD)KeNumberProcessors_0 )
  {
    v2 = v1 + 3;
    v3 = (unsigned int)KeNumberProcessors_0;
    do
    {
      if ( *v2 )
        guard_dispatch_icall_no_overrides(*v2);
      ++v2;
      --v3;
    }
    while ( v3 );
  }
  if ( *v1 )
    ExFreePoolWithTag(*v1, 0);
  ExFreePoolWithTag(v1, 0);
}
