/*
 * XREFs of RtlStackDbContextCleanup @ 0x18011DC58
 * Callers:
 *     RtlpHpStackTraceDisable @ 0x18014A0F0 (RtlpHpStackTraceDisable.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180171020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlStackDbContextCleanup(__int64 a1)
{
  _QWORD **v1; // rsi
  _QWORD *v3; // rbx
  _QWORD *v4; // r8
  _QWORD *i; // rcx
  _QWORD **v6; // rsi
  _QWORD *v7; // rbx
  __int64 result; // rax
  _QWORD *v9; // r8
  _QWORD *j; // rcx
  __int64 v11; // rcx
  __int64 v12; // rbx

  v1 = *(_QWORD ***)(a1 + 24);
  v3 = v1;
  while ( v3 )
  {
    v3 = (_QWORD *)*v3;
    if ( ((unsigned __int8)v3 & 1) != 0 )
      break;
LABEL_8:
    if ( !v3 )
      goto LABEL_16;
    v4 = v3;
    for ( i = v1; (*i & 1) == 0; i = (_QWORD *)*i )
    {
      if ( (_QWORD *)*i == v3 )
      {
        *i = *v3;
        --*(_DWORD *)(a1 + 16);
        *v3 |= 0x8000000000000002uLL;
        v3 = i;
        goto LABEL_15;
      }
    }
    v4 = 0LL;
LABEL_15:
    (*(void (__fastcall **)(_QWORD *, _QWORD))(a1 + 56))(v4, *(_QWORD *)(a1 + 64));
  }
  for ( ++v1; (unsigned __int64)v1 < *(_QWORD *)(a1 + 24) + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 20) >> 5); ++v1 )
  {
    v3 = *v1;
    if ( ((unsigned __int8)*v1 & 1) == 0 )
      goto LABEL_8;
  }
LABEL_16:
  v6 = *(_QWORD ***)(a1 + 8);
  v7 = v6;
  while ( v7 )
  {
    v7 = (_QWORD *)*v7;
    if ( ((unsigned __int8)v7 & 1) != 0 )
      break;
LABEL_23:
    result = (__int64)v7;
    if ( !v7 )
      goto LABEL_31;
    v9 = v7;
    for ( j = v6; (*j & 1) == 0; j = (_QWORD *)*j )
    {
      if ( (_QWORD *)*j == v7 )
      {
        *j = *v7;
        --*(_DWORD *)a1;
        *v7 |= 0x8000000000000002uLL;
        v7 = j;
        goto LABEL_30;
      }
    }
    v9 = 0LL;
LABEL_30:
    (*(void (__fastcall **)(_QWORD *, _QWORD))(a1 + 56))(v9, *(_QWORD *)(a1 + 64));
  }
  ++v6;
  result = *(_QWORD *)(a1 + 8);
  while ( (unsigned __int64)v6 < result + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 4) >> 5) )
  {
    v7 = *v6;
    if ( ((unsigned __int8)*v6 & 1) == 0 )
      goto LABEL_23;
    ++v6;
  }
LABEL_31:
  v11 = *(_QWORD *)(a1 + 8);
  v12 = *(_QWORD *)(a1 + 24);
  if ( v11 )
    result = (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 56))(v11, *(_QWORD *)(a1 + 64));
  if ( v12 )
    return (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 56))(v12, *(_QWORD *)(a1 + 64));
  return result;
}
