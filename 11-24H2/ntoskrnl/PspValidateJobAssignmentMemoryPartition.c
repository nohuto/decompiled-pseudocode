/*
 * XREFs of PspValidateJobAssignmentMemoryPartition @ 0x140A47E70
 * Callers:
 *     PspAssignProcessToJob @ 0x140A105B0 (PspAssignProcessToJob.c)
 * Callees:
 *     <none>
 */

bool __fastcall PspValidateJobAssignmentMemoryPartition(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v5; // rcx

  switch ( a4 )
  {
    case 4:
      if ( *(_QWORD *)(a1 + 1288) == a1 + 1288
        && !*(_QWORD *)(a1 + 1792)
        && *(_QWORD *)(a3 + 672)
        && *(_QWORD *)(*(_QWORD *)(a3 + 672) + 1792LL)
        && *(_QWORD *)(*(_QWORD *)(a3 + 672) + 1792LL) != -1LL
        && *(_QWORD *)(*(_QWORD *)(a3 + 672) + 1792LL) != *(_QWORD *)(a3 + 1880) )
      {
        return 0;
      }
      break;
    case 6:
      return 1;
    case 7:
LABEL_7:
      if ( *(_QWORD *)(a1 + 1792) )
        return *(_QWORD *)(a2 + 1792) == 0LL;
      return 1;
  }
  v5 = *(_QWORD *)(a1 + 1792);
  if ( (unsigned __int64)(v5 - 1) > 0xFFFFFFFFFFFFFFFDuLL || *(_QWORD *)(a3 + 1880) == v5 || a3 == *(_QWORD *)(v5 + 120) )
  {
    if ( ((a4 - 4) & 0xFFFFFFFC) != 0 )
      return 1;
    goto LABEL_7;
  }
  return 0;
}
