/*
 * XREFs of RtlEnumerateGenericTableLikeADirectory @ 0x180144670
 * Callers:
 *     <none>
 * Callees:
 *     FindNodeOrParent @ 0x180071E50 (FindNodeOrParent.c)
 *     RealSuccessor @ 0x1800E9D90 (RealSuccessor.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180172020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall RtlEnumerateGenericTableLikeADirectory(
        __int64 a1,
        __int64 (*a2)(),
        __int64 a3,
        int a4,
        _QWORD *a5,
        _DWORD *a6,
        unsigned __int16 *a7)
{
  _QWORD *v7; // r14
  _QWORD *v8; // rdi
  _QWORD *v12; // rbx
  _DWORD *v14; // r15
  __int64 (*v15)(); // r12
  int NodeOrParent; // eax
  _QWORD *i; // rcx
  int v18; // eax

  v7 = a5;
  v8 = 0LL;
  v12 = (_QWORD *)*a5;
  a5 = (_QWORD *)*a5;
  if ( !*(_DWORD *)(a1 + 44) )
  {
    *v7 = 0LL;
    return 0LL;
  }
  v14 = a6;
  v15 = WinSqmCheckEscalationSetString;
  if ( a2 )
    v15 = a2;
  if ( *a6 == *(_DWORD *)(a1 + 64) )
  {
    if ( v12 )
      goto LABEL_14;
  }
  else
  {
    a5 = 0LL;
  }
  NodeOrParent = FindNodeOrParent((unsigned __int16 *)a1, a7, &a5);
  if ( NodeOrParent == 1 )
  {
    v12 = a5;
LABEL_14:
    if ( !a4 )
      goto LABEL_17;
    goto LABEL_15;
  }
  if ( NodeOrParent != 3 )
  {
    v12 = a5;
    goto LABEL_17;
  }
  for ( i = a5; ; i = v12 )
  {
    v12 = RealSuccessor(i);
LABEL_17:
    if ( !v12 )
      break;
    v18 = ((__int64 (__fastcall *)(__int64, _QWORD *, __int64))v15)(a1, v12 + 4, a3);
    if ( v18 != -1073741198 )
    {
      *v7 = v12;
      if ( !v18 )
        v8 = v12 + 4;
      *v14 = *(_DWORD *)(a1 + 64);
      return v8;
    }
LABEL_15:
    ;
  }
  return 0LL;
}
