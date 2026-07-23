/*
 * XREFs of MiCompactServiceTable @ 0x1407EB3AC
 * Callers:
 *     MmCompactServiceTable @ 0x1407EB558 (MmCompactServiceTable.c)
 *     MmLoadSystemImageEx @ 0x1409B0468 (MmLoadSystemImageEx.c)
 * Callees:
 *     MiSectionControlArea @ 0x1403B4FE0 (MiSectionControlArea.c)
 *     MiSetImageProtection @ 0x1403F3430 (MiSetImageProtection.c)
 *     KeCompactServiceTable @ 0x1405B169C (KeCompactServiceTable.c)
 *     RtlFindExportedRoutineByName @ 0x1408E85B0 (RtlFindExportedRoutineByName.c)
 */

__int64 __fastcall MiCompactServiceTable(__int64 a1)
{
  int *ExportedRoutineByName; // rbp
  unsigned int *v3; // r14
  unsigned __int8 *v4; // r15
  int *v5; // rsi
  unsigned int *v6; // rdi
  unsigned __int8 *v7; // r12
  int v8; // r13d
  __int64 v9; // rcx
  int v11; // [rsp+60h] [rbp+8h]

  ExportedRoutineByName = (int *)RtlFindExportedRoutineByName(*(PVOID *)(a1 + 48), "W32pServiceTable");
  if ( !ExportedRoutineByName )
    return 3221225594LL;
  v3 = (unsigned int *)RtlFindExportedRoutineByName(*(PVOID *)(a1 + 48), "W32pServiceLimit");
  if ( !v3 )
    return 3221225594LL;
  v4 = (unsigned __int8 *)RtlFindExportedRoutineByName(*(PVOID *)(a1 + 48), "W32pArgumentTable");
  if ( !v4 )
    return 3221225594LL;
  v5 = (int *)RtlFindExportedRoutineByName(*(PVOID *)(a1 + 48), "W32pServiceTableFilter");
  if ( !v5 )
    return 3221225594LL;
  v6 = (unsigned int *)RtlFindExportedRoutineByName(*(PVOID *)(a1 + 48), "W32pServiceLimitFilter");
  if ( !v6 )
    return 3221225594LL;
  v7 = (unsigned __int8 *)RtlFindExportedRoutineByName(*(PVOID *)(a1 + 48), "W32pArgumentTableFilter");
  if ( !v7 )
    return 3221225594LL;
  v8 = 4 * *v3;
  MiSetImageProtection(a1, (unsigned __int64)ExportedRoutineByName, v8);
  v11 = 4 * *v6;
  MiSetImageProtection(a1, (unsigned __int64)v5, v11);
  KeCompactServiceTable(v5, v7, *v6, 3LL, *(_QWORD *)(a1 + 48));
  KeCompactServiceTable(ExportedRoutineByName, v4, *v3, 1LL, *(_QWORD *)(a1 + 48));
  v9 = *(_QWORD *)(a1 + 112);
  if ( v9 )
    MiSectionControlArea(v9);
  MiSetImageProtection(a1, (unsigned __int64)ExportedRoutineByName, v8);
  MiSetImageProtection(a1, (unsigned __int64)v5, v11);
  return 0LL;
}
