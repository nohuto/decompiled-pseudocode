/*
 * XREFs of HvlpComputeLpComparisonMetrics @ 0x140583FA4
 * Callers:
 *     HvlpSelectLpSet @ 0x1405849F0 (HvlpSelectLpSet.c)
 *     HvlpSelectVpSet @ 0x140584E2C (HvlpSelectVpSet.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HvlpComputeLpComparisonMetrics(unsigned int a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v5; // r14
  unsigned int v7; // ebp
  __int64 v8; // rdi
  unsigned int v9; // r13d
  __int64 result; // rax
  unsigned int v11; // r15d
  unsigned int v12; // r12d
  int v13; // edx
  int v14; // ecx
  int v15; // r13d
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // eax
  int v21; // [rsp+78h] [rbp+10h]
  int v22; // [rsp+80h] [rbp+18h]
  unsigned int v23; // [rsp+88h] [rbp+20h] BYREF

  v5 = a3;
  v23 = 0;
  v7 = 0;
  v8 = 5LL * a3;
  *(_DWORD *)(a2 + 8 * v8 + 20) = -1;
  *(_DWORD *)(a2 + 8 * v8 + 16) = 0;
  *(_QWORD *)(a2 + 8 * v8 + 24) = 0LL;
  *(_QWORD *)(a2 + 8 * v8 + 32) = 0LL;
  v9 = *(_DWORD *)(a2 + 40LL * a3 + 4);
  result = v9 >> 4;
  v11 = ~(KeGetCurrentPrcb()->LogicalProcessorsPerCore * KeGetCurrentPrcb()->CoresPerPhysicalProcessor - 1);
  v12 = ~(KeGetCurrentPrcb()->LogicalProcessorsPerCore - 1);
  v13 = (unsigned __int16)result;
  v14 = v12 & v9;
  v21 = (unsigned __int16)result;
  v15 = v11 & v9;
  v22 = v14;
  if ( a1 )
  {
    result = a1;
    v16 = a2 + 4;
    do
    {
      if ( v7 != (_DWORD)v5 )
      {
        if ( *(_WORD *)(v16 + 4) == *(_WORD *)(a2 + 40 * v5 + 8) && v7 < (unsigned int)v5 )
          ++*(_DWORD *)(a2 + 40 * v5 + 36);
        if ( *(_BYTE *)(v16 - 3) )
        {
          if ( *(_WORD *)(v16 + 8) == *(_WORD *)(a2 + 40 * v5 + 12) )
            ++*(_DWORD *)(a2 + 40 * v5 + 16);
          if ( (*(_DWORD *)v16 & v11) == v15 )
            ++*(_DWORD *)(a2 + 40 * v5 + 24);
          if ( (*(_DWORD *)v16 & v12) == v14 )
            ++*(_DWORD *)(a2 + 40 * v5 + 28);
          if ( (unsigned __int16)(*(_DWORD *)v16 >> 4) == v13 )
            ++*(_DWORD *)(a2 + 40 * v5 + 32);
          v17 = *(unsigned __int16 *)(v16 + 6);
          v18 = *(unsigned __int16 *)(a2 + 40 * v5 + 10);
          if ( (_WORD)v17 == (_WORD)v18 || !HvlpQueryNodeDistance )
          {
            v14 = v22;
            v13 = v21;
          }
          else
          {
            v19 = guard_dispatch_icall_no_overrides(v18, v17, &v23, a4);
            v14 = v22;
            v13 = v21;
            if ( v19 >= 0 && v23 < *(_DWORD *)(a2 + 40 * v5 + 20) )
              *(_DWORD *)(a2 + 40 * v5 + 20) = v23;
          }
        }
        result = a1;
      }
      ++v7;
      v16 += 40LL;
    }
    while ( v7 < (unsigned int)result );
  }
  return result;
}
