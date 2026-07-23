/*
 * XREFs of KiGetComparisonRanks @ 0x1404869F0
 * Callers:
 *     KiEvaluateGroupSchedulingPreemption @ 0x1402A9340 (KiEvaluateGroupSchedulingPreemption.c)
 *     KiDirectSwitchThread @ 0x14041E720 (KiDirectSwitchThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiGetComparisonRanks(__int64 a1, __int64 a2, _DWORD *a3, unsigned int *a4)
{
  __int64 v5; // r10
  unsigned __int8 v6; // bl
  char v7; // r9
  unsigned __int8 v8; // r11
  unsigned int v9; // ecx
  __int64 result; // rax
  __int64 v11; // rax
  __int64 i; // rcx
  unsigned int v13; // eax
  unsigned int v14; // eax

  v5 = a1;
  if ( a1 == a2 )
  {
    v9 = *(_DWORD *)(a1 + 124);
    result = v9;
    goto LABEL_8;
  }
  v6 = *(_BYTE *)(a1 + 114);
  v7 = 0;
  v8 = *(_BYTE *)(a2 + 114);
  v9 = 0;
  if ( v6 < v8 )
  {
    v7 = -1;
    do
    {
      v13 = *(_DWORD *)(a2 + 124);
      a2 = *(_QWORD *)(a2 + 416);
      if ( v13 <= v9 )
        v13 = v9;
      v9 = v13;
    }
    while ( v6 < *(_BYTE *)(a2 + 114) );
  }
  else if ( v6 > v8 )
  {
    v7 = 1;
    do
    {
      v14 = *(_DWORD *)(v5 + 124);
      v5 = *(_QWORD *)(v5 + 416);
      if ( v14 <= v9 )
        v14 = v9;
      v9 = v14;
    }
    while ( *(_BYTE *)(v5 + 114) > v8 );
  }
  result = v9;
  if ( v5 != a2 )
  {
    v11 = *(_QWORD *)(v5 + 416);
    for ( i = *(_QWORD *)(a2 + 416); v11 != i; i = *(_QWORD *)(i + 416) )
    {
      v5 = v11;
      a2 = i;
      v11 = *(_QWORD *)(v11 + 416);
    }
    goto LABEL_7;
  }
  if ( !v7 )
  {
LABEL_7:
    v9 = *(_DWORD *)(a2 + 124);
    result = *(unsigned int *)(v5 + 124);
    goto LABEL_8;
  }
  if ( v7 > 0 )
    v9 = 0;
  else
    result = 0LL;
LABEL_8:
  *a3 = result;
  *a4 = v9;
  return result;
}
