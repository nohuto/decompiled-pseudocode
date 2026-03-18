/*
 * XREFs of AcpiPortarbBacktrackAllocation @ 0x1400A2820
 * Callers:
 *     <none>
 * Callees:
 *     RtlDeleteRange_0 @ 0x14005679D (RtlDeleteRange_0.c)
 *     AcpiArblibGetNextAlias @ 0x14009B0F0 (AcpiArblibGetNextAlias.c)
 */

NTSTATUS __fastcall AcpiPortarbBacktrackAllocation(__int64 a1, ULONGLONG *a2)
{
  ULONGLONG v4; // rdx
  int v5; // r14d
  ULONGLONG v6; // rbx
  char NextAlias; // al
  struct _RTL_RANGE_LIST *v8; // rcx
  void *v9; // r9
  ULONGLONG Start; // [rsp+40h] [rbp+8h] BYREF

  v4 = *a2;
  Start = v4;
  v5 = *(_DWORD *)(a2[5] + 36);
  while ( 1 )
  {
    NextAlias = AcpiArblibGetNextAlias(v5, v4, &Start);
    v8 = *(struct _RTL_RANGE_LIST **)(a1 + 48);
    v9 = *(void **)(a2[4] + 32);
    if ( !NextAlias )
      break;
    v6 = Start;
    RtlDeleteRange(v8, Start, *(_QWORD *)(a2[5] + 16) + Start - 1, v9);
    v4 = v6;
  }
  return RtlDeleteRange_0(v8, *a2, a2[1], v9);
}
