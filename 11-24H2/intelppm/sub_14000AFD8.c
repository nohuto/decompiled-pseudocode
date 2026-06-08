/*
 * XREFs of sub_14000AFD8 @ 0x14000AFD8
 * Callers:
 *     sub_14002EF8C @ 0x14002EF8C (sub_14002EF8C.c)
 *     sub_14002FD80 @ 0x14002FD80 (sub_14002FD80.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_14000AFD8(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 a4,
        int a5,
        const wchar_t *a6,
        const wchar_t *a7)
{
  const wchar_t *v7; // rsi
  const wchar_t *v8; // rbx
  __int64 v9; // rdi
  __int64 v12; // rbp
  __int64 v13; // rax
  const wchar_t *v14; // rdx
  __int64 v15; // rax
  __int64 v16; // r8
  const wchar_t *v17; // rcx
  __int64 v18; // rax
  bool v19; // zf
  int v21; // [rsp+20h] [rbp-78h]

  v7 = a6;
  v8 = a7;
  v9 = -1LL;
  v12 = 10LL;
  if ( (HIDWORD(off_140018050->Timer) & 1) != 0 && BYTE1(off_140018050->Timer) >= 2u )
  {
    if ( a7 )
    {
      v13 = -1LL;
      do
        ++v13;
      while ( a7[v13] );
    }
    v14 = a7;
    if ( !a7 )
      v14 = L"NULL";
    if ( a6 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( a6[v15] );
      v16 = 2 * v15 + 2;
    }
    else
    {
      v16 = 10LL;
    }
    v17 = a6;
    if ( !a6 )
      v17 = L"NULL";
    qword_140018EE0(off_140018050->AttachedDevice, 43LL, &unk_1400145E8, a4, v17, v16, v14);
  }
  if ( a7 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( a7[v18] );
  }
  if ( !a7 )
    v8 = L"NULL";
  v19 = a6 == 0LL;
  if ( a6 )
  {
    do
      ++v9;
    while ( a6[v9] );
    v12 = 2 * v9 + 2;
    v19 = a6 == 0LL;
  }
  if ( v19 )
    v7 = L"NULL";
  LOWORD(v21) = a4;
  return WppAutoLogTrace(a1, 2LL, 1LL, &unk_1400145E8, v21, v7, v12, v8);
}
