/*
 * XREFs of HalpDpGetInterruptReplayState @ 0x140B4F720
 * Callers:
 *     <none>
 * Callees:
 *     HalpInterruptSetProblemEx @ 0x1403BC82C (HalpInterruptSetProblemEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpDpGetInterruptReplayState(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  unsigned __int32 v5; // eax
  unsigned int v6; // ebx
  __int64 v8; // rsi
  int v9; // r8d
  unsigned int v10; // r10d

  v5 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 4), 1u);
  v6 = 0;
  if ( v5 < *(_DWORD *)a1 )
  {
    v8 = *(_QWORD *)(a1 + 32) + *(_DWORD *)(a1 + 40) * v5;
    if ( *(_QWORD *)(HalpInterruptController + 152) )
    {
      v9 = guard_dispatch_icall_no_overrides(*(_QWORD *)(HalpInterruptController + 16), v8, a3, a4);
      if ( v9 >= 0 )
      {
        *a2 = v8;
        return v6;
      }
    }
    else
    {
      v9 = -1073741637;
    }
    HalpInterruptSetProblemEx(
      HalpInterruptController,
      28,
      v9,
      (__int64)"minkernel\\hals\\lib\\interrupts\\common\\replace.c",
      0x330u);
    return v10;
  }
  if ( a2 )
    *a2 = 0LL;
  return 3221225626LL;
}
