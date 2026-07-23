/*
 * XREFs of EtwpFreePmcData @ 0x1407A7FB8
 * Callers:
 *     EtwpFreeLoggerContext @ 0x140A48E90 (EtwpFreeLoggerContext.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpFreePmcData(__int64 a1, __int64 a2)
{
  PVOID *v2; // rbx
  _QWORD *v3; // rdi
  __int64 v4; // rsi

  v2 = *(PVOID **)(a1 + 1064);
  if ( (_DWORD)KeNumberProcessors_0 )
  {
    v3 = v2 + 3;
    v4 = (unsigned int)KeNumberProcessors_0;
    do
    {
      if ( *v3 )
        guard_dispatch_icall_no_overrides(*v3, a2);
      ++v3;
      --v4;
    }
    while ( v4 );
  }
  if ( *v2 )
    ExFreePoolWithTag(*v2, 0);
  ExFreePoolWithTag(v2, 0);
}
