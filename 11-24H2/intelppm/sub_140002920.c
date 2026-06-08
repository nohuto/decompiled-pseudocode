/*
 * XREFs of sub_140002920 @ 0x140002920
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_140002920(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        int a6,
        int a7,
        unsigned int a8,
        _DWORD *a9,
        _QWORD *a10,
        _QWORD *a11)
{
  __int64 v12; // rsi
  unsigned int v13; // r11d
  __int64 v14; // rdx
  unsigned int i; // ecx
  __int64 v16; // rbx
  __int64 (__fastcall *v18)(_QWORD, _QWORD); // rax
  __int64 v20; // [rsp+78h] [rbp+50h]

  v12 = *(_QWORD *)(a1 + 56);
  if ( (a8 & 1) != 0 )
  {
    v13 = *(_DWORD *)(v12 + 64);
  }
  else
  {
    v13 = *(_DWORD *)(v12 + 68);
    if ( !v13 )
      v13 = 1;
  }
  v14 = *(_QWORD *)(v12 + 56);
  if ( (a8 & 2) != 0 )
  {
    v16 = *(_QWORD *)(v12 + 56);
    for ( i = 0; i < v13; v14 += 32LL )
    {
      v16 = v14;
      if ( *(unsigned __int8 *)(v14 + 24) <= a2 )
        break;
      ++i;
    }
    if ( i == v13 )
      i = v13 - 1;
  }
  else
  {
    i = v13;
    do
      v16 = v14 + 32LL * --i;
    while ( *(unsigned __int8 *)(v16 + 24) < a2 && i );
  }
  for ( ; *(unsigned __int8 *)(v16 + 24) < a3; v16 = *(_QWORD *)(v12 + 56) + 32LL * --i )
  {
    if ( !i )
      break;
  }
  for ( ; *(unsigned __int8 *)(v16 + 24) > a4; v16 = *(_QWORD *)(v12 + 56) + 32LL * ++i )
  {
    if ( i == *(_DWORD *)(v12 + 64) - 1 )
      break;
  }
  if ( a10 )
  {
    v18 = *(__int64 (__fastcall **)(_QWORD, _QWORD))(v12 + 32);
    v20 = i;
    if ( v18 )
      HIDWORD(v20) = v18(a5, a8);
    *a10 = v20;
  }
  if ( a11 )
    *a11 = 0LL;
  if ( a9 )
    *a9 = *(_DWORD *)(v16 + 16);
  return *(unsigned __int8 *)(v16 + 24);
}
