/*
 * XREFs of PepPerfControlHandler @ 0x14000C400
 * Callers:
 *     <none>
 * Callees:
 *     PepNotifyPerfSet @ 0x14000C33C (PepNotifyPerfSet.c)
 *     PepPerformanceFromPercentage @ 0x14000C784 (PepPerformanceFromPercentage.c)
 */

void __fastcall PepPerfControlHandler(__int64 a1, __int64 a2, char a3, char a4)
{
  unsigned int v6; // r10d
  unsigned int v7; // ebp
  int v8; // esi
  int v9; // eax
  char v10; // r9
  int v11; // r10d
  int v12; // r11d

  if ( a3 && !a4 )
  {
    v6 = *(_DWORD *)(a2 + 28);
    v7 = *(_DWORD *)(a2 + 24);
    if ( *(_BYTE *)(a2 + 48) )
      v8 = 0;
    else
      v8 = PepPerformanceFromPercentage(a1, *(unsigned int *)(a2 + 32));
    PepPerformanceFromPercentage(a1, v6);
    v9 = PepPerformanceFromPercentage(a1, v7);
    PepNotifyPerfSet(*(_QWORD *)(a1 + 48), v9, v11, *(_DWORD *)a2, v8, v12, v10);
  }
}
