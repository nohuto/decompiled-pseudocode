/*
 * XREFs of ?_Tidy@?$deque@UGetInputReportResult@@V?$allocator@UGetInputReportResult@@@std@@@std@@AEAAXXZ @ 0x1800DDCDC
 * Callers:
 *     ??1?$deque@UGetInputReportResult@@V?$allocator@UGetInputReportResult@@@std@@@std@@QEAA@XZ @ 0x1800DD138 (--1-$deque@UGetInputReportResult@@V-$allocator@UGetInputReportResult@@@std@@@std@@QEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001B0D0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ @ 0x180030A30 (--1-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ.c)
 */

void __fastcall std::deque<GetInputReportResult>::_Tidy(__int64 a1, const struct std::nothrow_t *a2)
{
  __int64 v3; // rcx
  __int64 v5; // rdi
  char *v6; // rcx

  while ( 1 )
  {
    v3 = *(_QWORD *)(a1 + 32);
    if ( !v3 )
      break;
    VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>(
      (void **)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * ((*(_QWORD *)(a1 + 16) - 1LL) & (*(_QWORD *)(a1 + 24) - 1LL + v3)))
              + 8LL),
      a2);
    if ( (*(_QWORD *)(a1 + 32))-- == 1LL )
      *(_QWORD *)(a1 + 24) = 0LL;
  }
  if ( *(_QWORD *)(a1 + 8) )
  {
    v5 = *(_QWORD *)(a1 + 16);
    while ( v5 )
    {
      --v5;
      v6 = *(char **)(*(_QWORD *)(a1 + 8) + 8 * v5);
      if ( v6 )
        std::_Deallocate<16,0>(v6, (const struct std::nothrow_t *)0x18);
    }
    std::_Deallocate<16,0>(*(char **)(a1 + 8), (const struct std::nothrow_t *)(8LL * *(_QWORD *)(a1 + 16)));
  }
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
}
