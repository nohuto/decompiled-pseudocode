/*
 * XREFs of RtlGetSystemTimeAndBias @ 0x1800DEA00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

KSYSTEM_TIME *__cdecl RtlGetSystemTimeAndBias(
        KSYSTEM_TIME *__return_ptr retstr,
        KSYSTEM_TIME *TimeZoneBias,
        PLARGE_INTEGER TimeZoneBiasEffectiveStart,
        PLARGE_INTEGER TimeZoneBiasEffectiveEnd)
{
  _DWORD *SharedData; // r9
  __int64 v6; // rsi
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // r14
  int v10; // edi
  unsigned int v11; // edx
  unsigned int j; // r9d
  void *v14; // r9
  __int64 i; // [rsp+30h] [rbp+8h]

  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
  {
    v14 = NtCurrentPeb()->SharedData;
    v7 = (__int64)v14 + 588;
    v8 = (__int64)v14 + 592;
    v6 = (__int64)v14 + 608;
    v9 = (__int64)v14 + 616;
  }
  else
  {
    v6 = 2147353544LL;
    v7 = 2147353180LL;
    v8 = 2147352608LL;
    v9 = 2147353552LL;
  }
  while ( 1 )
  {
    v10 = *(_DWORD *)v7;
    if ( (*(_DWORD *)v7 & 1) == 0 )
    {
      for ( i = *(_QWORD *)v8; HIDWORD(*(_QWORD *)v8) != *(_DWORD *)(v8 + 8); i = *(_QWORD *)v8 )
        _mm_pause();
      *(_QWORD *)&retstr->LowPart = i;
      if ( TimeZoneBias )
        *(_QWORD *)&TimeZoneBias->LowPart = *(_QWORD *)v6;
      if ( TimeZoneBiasEffectiveStart )
        *TimeZoneBiasEffectiveStart = *(PLARGE_INTEGER)v9;
      v11 = MEMORY[0x7FFE0018];
      for ( j = MEMORY[0x7FFE0014]; MEMORY[0x7FFE0018] != MEMORY[0x7FFE001C]; j = MEMORY[0x7FFE0014] )
      {
        _mm_pause();
        v11 = MEMORY[0x7FFE0018];
      }
      if ( v10 == *(_DWORD *)v7 )
        break;
    }
    _mm_pause();
  }
  return (KSYSTEM_TIME *)(j | ((unsigned __int64)v11 << 32));
}
