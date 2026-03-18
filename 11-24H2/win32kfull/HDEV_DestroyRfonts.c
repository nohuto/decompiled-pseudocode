/*
 * XREFs of HDEV_DestroyRfonts @ 0x1401FB9D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

_QWORD *__fastcall HDEV_DestroyRfonts(__int64 a1)
{
  void (__fastcall *v1)(_QWORD *); // rbp
  int v2; // edi
  __int64 v4; // rax
  _QWORD *i; // r14
  __int64 v6; // rcx
  _QWORD *v7; // rcx
  __int64 v8; // rax
  _QWORD *j; // r14
  __int64 v10; // rax
  _QWORD *result; // rax

  v1 = *(void (__fastcall **)(_QWORD *))(a1 + 3024);
  v2 = 0;
  if ( (*(_DWORD *)(a1 + 40) & 0x800000) != 0 )
  {
    v4 = *(_QWORD *)(a1 + 3512);
    v2 = 1;
  }
  else
  {
    v4 = a1;
  }
  if ( (v2 & 1) != 0 )
    v2 &= ~1u;
  for ( i = *(_QWORD **)(v4 + 1536); ; i = (_QWORD *)*i )
  {
    if ( (*(_DWORD *)(a1 + 40) & 0x800000) != 0 )
    {
      v6 = *(_QWORD *)(a1 + 3512);
      v2 |= 2u;
    }
    else
    {
      v6 = a1;
    }
    v7 = (_QWORD *)(v6 + 1536);
    if ( (v2 & 2) != 0 )
      v2 &= ~2u;
    if ( i == v7 )
      break;
    v1(i - 84);
    *(i - 78) = 0LL;
  }
  if ( (*(_DWORD *)(a1 + 40) & 0x800000) != 0 )
  {
    v8 = *(_QWORD *)(a1 + 3512);
    v2 |= 4u;
  }
  else
  {
    v8 = a1;
  }
  if ( (v2 & 4) != 0 )
    v2 &= ~4u;
  for ( j = *(_QWORD **)(v8 + 1520); ; j = (_QWORD *)*j )
  {
    if ( (*(_DWORD *)(a1 + 40) & 0x800000) != 0 )
    {
      v10 = *(_QWORD *)(a1 + 3512);
      v2 |= 8u;
    }
    else
    {
      v10 = a1;
    }
    result = (_QWORD *)(v10 + 1520);
    if ( (v2 & 8) != 0 )
      v2 &= ~8u;
    if ( j == result )
      break;
    v1(j - 84);
    *(j - 78) = 0LL;
  }
  return result;
}
