/*
 * XREFs of EtwpFreePmcData @ 0x1407A7E78
 * Callers:
 *     EtwpFreeLoggerContext @ 0x1409D77E0 (EtwpFreeLoggerContext.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpFreePmcData(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  PVOID *v4; // rbx
  _QWORD *v5; // rdi
  __int64 v6; // rsi

  v4 = *(PVOID **)(a1 + 1064);
  if ( (_DWORD)KeNumberProcessors_0 )
  {
    v5 = v4 + 3;
    v6 = (unsigned int)KeNumberProcessors_0;
    do
    {
      if ( *v5 )
        guard_dispatch_icall_no_overrides(*v5, a2, a3, a4);
      ++v5;
      --v6;
    }
    while ( v6 );
  }
  if ( *v4 )
    ExFreePoolWithTag(*v4, 0);
  ExFreePoolWithTag(v4, 0);
}
