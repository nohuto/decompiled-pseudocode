/*
 * XREFs of EtwpUpdatePmcCounters @ 0x140A9A104
 * Callers:
 *     EtwSetPerformanceTraceInformation @ 0x140A39934 (EtwSetPerformanceTraceInformation.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     EtwpAllocatePmcData @ 0x1407A71A4 (EtwpAllocatePmcData.c)
 */

__int64 __fastcall EtwpUpdatePmcCounters(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v6; // r12d
  __int64 result; // rax
  __int64 v8; // r14
  __int64 i; // r8
  unsigned int v10; // r15d
  __int64 j; // rbx
  _QWORD *v12; // rdi
  signed __int32 v13[8]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v14; // [rsp+20h] [rbp-48h]
  __int64 v15; // [rsp+28h] [rbp-40h]
  int v16; // [rsp+40h] [rbp-28h]

  v6 = KeNumberProcessors_0;
  if ( !a3 || a3 > EtwpMaxPmcCounter || *(_DWORD *)(a1 + 300) == 1 )
    return 3221225485LL;
  if ( *(_QWORD *)(a1 + 1064) || (result = EtwpAllocatePmcData(a1), !(_DWORD)result) )
  {
    v8 = *(_QWORD *)(a1 + 1064);
    if ( *(_DWORD *)(v8 + 20) )
    {
      return 3221226243LL;
    }
    else
    {
      for ( i = 0LL; ; i = (unsigned int)(i + 1) )
      {
        v16 = i;
        if ( (unsigned int)i >= a3 )
          break;
        *(_DWORD *)(*(_QWORD *)v8 + 4 * i) = *(_DWORD *)(a2 + 4 * i);
      }
      v10 = 0;
      for ( j = 0LL; (unsigned int)j < v6; j = (unsigned int)(j + 1) )
      {
        v15 = 0LL;
        v14 = v8 + 8 * ((unsigned int)j + 3LL);
        v10 = guard_dispatch_icall_no_overrides((unsigned int)j, *(_QWORD *)v8);
        if ( v10 )
          break;
      }
      if ( v10 )
      {
        if ( (_DWORD)j )
        {
          v12 = (_QWORD *)(v8 + 24);
          do
          {
            guard_dispatch_icall_no_overrides(*v12, a2);
            *v12++ = 0LL;
            --j;
          }
          while ( j );
        }
      }
      else
      {
        *(_DWORD *)(v8 + 20) = a3;
        _InterlockedOr(v13, 0);
        _InterlockedOr((volatile signed __int32 *)(a1 + 816), 0x800u);
      }
      return v10;
    }
  }
  return result;
}
