/*
 * XREFs of ?AddData@?$CAggregateTelemetryClustered@W4CpGlitchEvent@@PEAI$0A@$0A@@@UEAAXW4CpGlitchEvent@@PEAI@Z @ 0x1400303A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
ULONGLONG __fastcall CAggregateTelemetryClustered<enum CpGlitchEvent,unsigned int *,0,0>::AddData(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  ULONGLONG result; // rax
  __int64 v7; // rdx
  ULONGLONG v8; // rdi
  __int64 v9; // rcx

  result = GetTickCount64();
  v8 = result;
  if ( *(_BYTE *)(a1 + 32) )
  {
    if ( result - *(_QWORD *)(a1 + 72) > *(_QWORD *)(a1 + 56) )
    {
      *(_BYTE *)(a1 + 32) = 0;
      result -= *(_QWORD *)(a1 + 48);
      if ( result > *(_QWORD *)(a1 + 40) )
      {
        LOBYTE(v7) = 1;
        result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 8LL))(a1, v7);
        *(_QWORD *)(a1 + 48) = v8;
      }
    }
  }
  if ( a3 )
  {
    if ( !*(_BYTE *)(a1 + 32) )
    {
      *(_BYTE *)(a1 + 32) = 1;
      *(_QWORD *)(a1 + 64) = v8;
      *(_QWORD *)(a1 + 88) = v8;
    }
    *(_QWORD *)(a1 + 72) = v8;
    v9 = *(_QWORD *)(a1 + 8);
    if ( v9 )
    {
      (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v9 + 8LL))(v9, a2, a3);
      *(_BYTE *)(a1 + 16) = 1;
    }
    result = v8 - *(_QWORD *)(a1 + 88);
    if ( result > *(_QWORD *)(a1 + 80) )
    {
      result = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 8LL))(a1, 0LL);
      *(_QWORD *)(a1 + 88) = v8;
    }
  }
  return result;
}
