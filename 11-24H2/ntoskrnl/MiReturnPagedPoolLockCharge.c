/*
 * XREFs of MiReturnPagedPoolLockCharge @ 0x140286EA0
 * Callers:
 *     MiDecommitHandleTransitionPte @ 0x140286C5C (MiDecommitHandleTransitionPte.c)
 *     MiDecommitHandleValidPte @ 0x140288180 (MiDecommitHandleValidPte.c)
 *     MiDecommitPages @ 0x140288300 (MiDecommitPages.c)
 *     MiDeleteVa @ 0x1402DB780 (MiDeleteVa.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1403F9C60 (KeYieldProcessorEx.c)
 *     MiIsPfnSystemCharged @ 0x140437E10 (MiIsPfnSystemCharged.c)
 */

__int64 __fastcall MiReturnPagedPoolLockCharge(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // rdi
  __int64 result; // rax
  volatile signed __int32 *v6; // rbx
  __int64 v7; // r14
  int v8; // [rsp+48h] [rbp+10h] BYREF

  v3 = a2 & 1;
  if ( (a2 & 1) == 0 && qword_140E2DB80 && (a2 & 0x10) == 0 )
    a2 &= ~qword_140E2DB80;
  v4 = 48 * ((a2 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  result = MiIsPfnSystemCharged(v4);
  if ( (_DWORD)result )
  {
    v6 = (volatile signed __int32 *)(v4 + 24);
    result = (*(_QWORD *)(v4 + 40) >> 43) & 0x3FFLL;
    v7 = *((_QWORD *)qword_140E2FF88 + result);
    if ( v3 )
    {
      v8 = 0;
      while ( _interlockedbittestandset64(v6, 0x3FuLL) )
      {
        do
        {
          KeYieldProcessorEx(&v8);
          result = *(_QWORD *)v6;
        }
        while ( *(__int64 *)v6 < 0 );
      }
    }
    *(_BYTE *)(v4 + 35) &= ~0x20u;
    if ( v3 )
    {
      result = 0x7FFFFFFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)v6, 0x7FFFFFFFFFFFFFFFuLL);
    }
    if ( v7 == *(_QWORD *)(a1 + 8) )
    {
      result = *(_QWORD *)(a1 + 24);
      ++*(_QWORD *)(result + 8);
    }
  }
  return result;
}
