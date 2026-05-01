/*
 * XREFs of HamPopulateActivityProperties @ 0x18000A7E0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x18001C1CE (memset_0.c)
 */

__int64 __fastcall HamPopulateActivityProperties(_WORD *a1, _WORD *a2, __int64 a3)
{
  __int64 v6; // rbx
  _WORD *v7; // rax
  __int64 v8; // r9
  __int64 v9; // rcx
  _WORD *v10; // rax
  __int64 result; // rax
  _WORD *v12; // rcx
  char *v13; // rdi
  __int64 v14; // rdx
  __int16 v15; // ax
  _WORD *v16; // rax
  _WORD *v17; // rcx
  char *v18; // rsi
  __int16 v19; // ax
  _WORD *v20; // rax

  if ( !a1 )
    return 3221225711LL;
  v6 = 64LL;
  v7 = a1;
  v8 = 64LL;
  do
  {
    if ( !*v7 )
      break;
    ++v7;
    --v8;
  }
  while ( v8 );
  if ( !v8 )
    return 3221225711LL;
  if ( !a2 )
    return 3221225712LL;
  v9 = 64LL;
  v10 = a2;
  do
  {
    if ( !*v10 )
      break;
    ++v10;
    --v9;
  }
  while ( v9 );
  if ( !v9 )
    return 3221225712LL;
  memset_0((void *)(a3 + 4), 0, 0x184uLL);
  v12 = (_WORD *)(a3 + 12);
  *(_DWORD *)a3 = 8397888;
  v13 = (char *)a1 - a3 - 12;
  v14 = 64LL;
  do
  {
    if ( v14 == -2147483582 )
      break;
    v15 = *(_WORD *)((char *)v12 + (_QWORD)v13);
    if ( !v15 )
      break;
    *v12++ = v15;
    --v14;
  }
  while ( v14 );
  v16 = v12 - 1;
  if ( v14 )
    v16 = v12;
  v17 = (_WORD *)(a3 + 140);
  v18 = (char *)a2 - a3 - 140;
  *v16 = 0;
  do
  {
    if ( v6 == -2147483582 )
      break;
    v19 = *(_WORD *)((char *)v17 + (_QWORD)v18);
    if ( !v19 )
      break;
    *v17++ = v19;
    --v6;
  }
  while ( v6 );
  v20 = v17 - 1;
  if ( v6 )
    v20 = v17;
  *v20 = 0;
  result = 0LL;
  *(_DWORD *)(a3 + 268) = 5;
  *(_DWORD *)(a3 + 276) = -1;
  *(_OWORD *)(a3 + 280) = 0LL;
  *(_OWORD *)(a3 + 296) = 0LL;
  *(_OWORD *)(a3 + 312) = 0LL;
  *(_OWORD *)(a3 + 328) = 0LL;
  *(_OWORD *)(a3 + 344) = 0LL;
  *(_OWORD *)(a3 + 360) = 0LL;
  *(_QWORD *)(a3 + 376) = 0LL;
  *(_DWORD *)(a3 + 312) = 0;
  *(_OWORD *)(a3 + 320) = 0LL;
  *(_OWORD *)(a3 + 336) = 0LL;
  *(_OWORD *)(a3 + 352) = 0LL;
  *(_QWORD *)(a3 + 368) = 0LL;
  *(_QWORD *)(a3 + 352) = -1LL;
  *(_QWORD *)(a3 + 344) = -1LL;
  *(_QWORD *)(a3 + 336) = -1LL;
  *(_QWORD *)(a3 + 328) = -1LL;
  *(_QWORD *)(a3 + 320) |= 0x80uLL;
  *(_DWORD *)(a3 + 368) = 33;
  return result;
}
