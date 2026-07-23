/*
 * XREFs of HalpSignalRAS @ 0x14055217C
 * Callers:
 *     HalpCheckAndReportGhes @ 0x14049A84C (HalpCheckAndReportGhes.c)
 * Callees:
 *     MmMapIoSpaceEx @ 0x14034B090 (MmMapIoSpaceEx.c)
 */

__int64 __fastcall HalpSignalRAS(__int64 a1)
{
  _DWORD *v2; // rcx
  _DWORD *v3; // rdi
  __int64 v4; // rax
  __int64 v6; // rdx
  __int64 v7; // r8

  if ( *(_DWORD *)(a1 + 96) != 12 || **(_QWORD **)(a1 + 64) == -1LL )
    return 3221226021LL;
  v2 = *(_DWORD **)(a1 + 80);
  v3 = (_DWORD *)(a1 + 72);
  if ( !v2 )
  {
    v4 = MmMapIoSpaceEx(*(_QWORD *)(a1 + 184), (unsigned int)*v3, 516LL);
    *(_QWORD *)(a1 + 80) = v4;
    v2 = (_DWORD *)v4;
    if ( !v4 )
      return 3221225701LL;
  }
  v6 = *(_QWORD *)(a1 + 192);
  v7 = *(_QWORD *)(a1 + 200);
  if ( *v3 == 4 )
    *v2 = v7 | v6 & *v2;
  else
    *(_QWORD *)v2 = v7 | v6 & *(_QWORD *)v2;
  return 0LL;
}
