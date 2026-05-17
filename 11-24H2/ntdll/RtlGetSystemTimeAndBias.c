/*
 * XREFs of RtlGetSystemTimeAndBias @ 0x1800E1480
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RtlGetSystemTimeAndBias(_QWORD *a1, _QWORD *a2, _QWORD *a3)
{
  _DWORD *SharedData; // r9
  __int64 v5; // rsi
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // r14
  int v9; // edi
  unsigned int v10; // edx
  unsigned int j; // r9d
  void *v13; // r9
  __int64 i; // [rsp+30h] [rbp+8h]

  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
  {
    v13 = NtCurrentPeb()->SharedData;
    v6 = (__int64)v13 + 588;
    v7 = (__int64)v13 + 592;
    v5 = (__int64)v13 + 608;
    v8 = (__int64)v13 + 616;
  }
  else
  {
    v5 = 2147353544LL;
    v6 = 2147353180LL;
    v7 = 2147352608LL;
    v8 = 2147353552LL;
  }
  while ( 1 )
  {
    v9 = *(_DWORD *)v6;
    if ( (*(_DWORD *)v6 & 1) == 0 )
    {
      for ( i = *(_QWORD *)v7; HIDWORD(*(_QWORD *)v7) != *(_DWORD *)(v7 + 8); i = *(_QWORD *)v7 )
        _mm_pause();
      *a1 = i;
      if ( a2 )
        *a2 = *(_QWORD *)v5;
      if ( a3 )
        *a3 = *(_QWORD *)v8;
      v10 = MEMORY[0x7FFE0018];
      for ( j = MEMORY[0x7FFE0014]; MEMORY[0x7FFE0018] != MEMORY[0x7FFE001C]; j = MEMORY[0x7FFE0014] )
      {
        _mm_pause();
        v10 = MEMORY[0x7FFE0018];
      }
      if ( v9 == *(_DWORD *)v6 )
        break;
    }
    _mm_pause();
  }
  return j | ((unsigned __int64)v10 << 32);
}
