/*
 * XREFs of PerfControlPTStatesHidden @ 0x14000B7D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14000E3B0 (_guard_dispatch_icall.c)
 */

_UNKNOWN **__fastcall PerfControlPTStatesHidden(__int64 a1, __int64 a2, char a3, char a4)
{
  _UNKNOWN **result; // rax
  __int64 v6; // rbx
  _QWORD *v7; // rsi
  _QWORD *v8; // r8
  int v9; // ebp
  unsigned int v10; // ebp
  __int64 v11; // rcx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  if ( a4 )
  {
    result = &retaddr;
    if ( a3 )
    {
      v6 = *(_QWORD *)(a1 + 56);
      v7 = (_QWORD *)(v6 + 56);
      if ( *(_DWORD *)(v6 + 72) )
      {
        v8 = (_QWORD *)(*v7 + 32LL * *(unsigned int *)(v6 + 68));
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD))(v6 + 16))(
          *(unsigned int *)(*(_QWORD *)a1 + 84LL),
          *(_QWORD *)(v6 + 48),
          *v8,
          v8[1],
          0);
      }
      v9 = *(_DWORD *)(v6 + 68);
      if ( v9 )
      {
        v10 = v9 - 1;
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD))(v6 + 24))(
          *(unsigned int *)(*(_QWORD *)a1 + 84LL),
          *(_QWORD *)(v6 + 40),
          *(_QWORD *)(*v7 + 32LL * v10),
          *(_QWORD *)(*v7 + 32LL * v10 + 8),
          0);
      }
      else
      {
        v10 = 0;
      }
      v11 = *v7 + 32LL * v10;
      *(_DWORD *)(a1 + 48) = v10;
      *(_DWORD *)(a1 + 40) = *(unsigned __int8 *)(v11 + 25);
      result = (_UNKNOWN **)*(unsigned __int8 *)(v11 + 24);
      *(_DWORD *)(a1 + 44) = (_DWORD)result;
    }
  }
  return result;
}
