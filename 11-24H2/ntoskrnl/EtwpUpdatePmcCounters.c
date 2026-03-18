/*
 * XREFs of EtwpUpdatePmcCounters @ 0x140A9ED3C
 * Callers:
 *     EtwSetPerformanceTraceInformation @ 0x140A440A4 (EtwSetPerformanceTraceInformation.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     EtwpAllocatePmcData @ 0x1407A7064 (EtwpAllocatePmcData.c)
 */

__int64 __fastcall EtwpUpdatePmcCounters(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  unsigned int v7; // r12d
  __int64 result; // rax
  __int64 v9; // r14
  __int64 i; // r8
  unsigned int v11; // r15d
  __int64 j; // rbx
  _QWORD *v13; // rdi
  signed __int32 v14[8]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v15; // [rsp+20h] [rbp-48h]
  __int64 v16; // [rsp+28h] [rbp-40h]
  int v17; // [rsp+40h] [rbp-28h]
  int v18; // [rsp+80h] [rbp+18h] BYREF

  v7 = KeNumberProcessors_0;
  v18 = 0;
  if ( !a3 || a3 > EtwpMaxPmcCounter || *(_DWORD *)(a1 + 300) == 1 )
    return 3221225485LL;
  if ( *(_QWORD *)(a1 + 1064) || (result = EtwpAllocatePmcData(a1), !(_DWORD)result) )
  {
    v9 = *(_QWORD *)(a1 + 1064);
    if ( *(_DWORD *)(v9 + 20) )
    {
      return 3221226243LL;
    }
    else
    {
      for ( i = 0LL; ; i = (unsigned int)(i + 1) )
      {
        v17 = i;
        if ( (unsigned int)i >= a3 )
          break;
        *(_DWORD *)(*(_QWORD *)v9 + 4 * i) = *(_DWORD *)(a2 + 4 * i);
      }
      v11 = 0;
      v18 = 1886876741;
      for ( j = 0LL; (unsigned int)j < v7; j = (unsigned int)(j + 1) )
      {
        v16 = 0LL;
        v15 = v9 + 8 * ((unsigned int)j + 3LL);
        v11 = guard_dispatch_icall_no_overrides((unsigned int)j, *(_QWORD *)v9, a3, &v18);
        if ( v11 )
          break;
      }
      if ( v11 )
      {
        if ( (_DWORD)j )
        {
          v13 = (_QWORD *)(v9 + 24);
          do
          {
            guard_dispatch_icall_no_overrides(*v13, a2, i, a4);
            *v13++ = 0LL;
            --j;
          }
          while ( j );
        }
      }
      else
      {
        *(_DWORD *)(v9 + 20) = a3;
        _InterlockedOr(v14, 0);
        _InterlockedOr((volatile signed __int32 *)(a1 + 816), 0x800u);
      }
      return v11;
    }
  }
  return result;
}
