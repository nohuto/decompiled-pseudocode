/*
 * XREFs of RtlpApplyLengthFunction @ 0x1800F0850
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180171020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlpApplyLengthFunction(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 (__fastcall *a4)(__int64, __int64, unsigned int *))
{
  __int64 v5; // rdi
  __int64 result; // rax
  unsigned __int16 v7; // ax
  unsigned int v8; // [rsp+40h] [rbp+18h] BYREF

  v8 = 0;
  v5 = 0LL;
  if ( !a3 || !a4 || (_DWORD)a1 )
    return 3221225485LL;
  if ( a2 == 16 )
    goto LABEL_9;
  if ( a2 != 56 )
    return 3221225485LL;
  v5 = a3;
LABEL_9:
  result = a4(a1, a3, &v8);
  if ( (int)result >= 0 )
  {
    if ( v8 > 0x7FFF )
    {
      return 3221225734LL;
    }
    else
    {
      v7 = 2 * v8;
      *(_WORD *)a3 = 2 * v8;
      if ( v5 )
        *(_WORD *)(*(_QWORD *)(a3 + 8) + 2 * ((unsigned __int64)v7 >> 1)) = 0;
      return 0LL;
    }
  }
  return result;
}
