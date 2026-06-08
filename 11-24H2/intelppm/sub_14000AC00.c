/*
 * XREFs of sub_14000AC00 @ 0x14000AC00
 * Callers:
 *     sub_14002E7F4 @ 0x14002E7F4 (sub_14002E7F4.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_14000AC00(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        const wchar_t *a6,
        const wchar_t *a7,
        __int64 a8)
{
  const wchar_t *v8; // r14
  const wchar_t *v9; // rsi
  __int64 v10; // rdi
  __int64 v12; // rbp
  __int64 v13; // rax
  __int64 v14; // rax
  const wchar_t *v15; // r8
  __int64 v16; // rax
  __int64 v17; // rdx
  const wchar_t *v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  bool v21; // zf
  int v23; // [rsp+20h] [rbp-68h]

  v8 = a6;
  v9 = a7;
  v10 = -1LL;
  v12 = 10LL;
  if ( (HIDWORD(off_140018050->Timer) & 1) != 0 && BYTE1(off_140018050->Timer) >= 2u )
  {
    if ( a8 )
    {
      v13 = -1LL;
      do
        ++v13;
      while ( *(_WORD *)(a8 + 2 * v13) );
    }
    if ( a7 )
    {
      v14 = -1LL;
      do
        ++v14;
      while ( a7[v14] );
    }
    v15 = a7;
    if ( !a7 )
      v15 = L"NULL";
    if ( a6 )
    {
      v16 = -1LL;
      do
        ++v16;
      while ( a6[v16] );
      v17 = 2 * v16 + 2;
    }
    else
    {
      v17 = 10LL;
    }
    v18 = a6;
    if ( !a6 )
      v18 = L"NULL";
    qword_140018EE0(off_140018050->AttachedDevice, 43LL, &unk_1400145E8, 110LL, v18, v17, v15);
  }
  if ( a8 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( *(_WORD *)(a8 + 2 * v19) );
  }
  if ( a7 )
  {
    v20 = -1LL;
    do
      ++v20;
    while ( a7[v20] );
  }
  if ( !a7 )
    v9 = L"NULL";
  v21 = a6 == 0LL;
  if ( a6 )
  {
    do
      ++v10;
    while ( a6[v10] );
    v12 = 2 * v10 + 2;
    v21 = a6 == 0LL;
  }
  if ( v21 )
    v8 = L"NULL";
  LOWORD(v23) = 110;
  return WppAutoLogTrace(a1, 2LL, 1LL, &unk_1400145E8, v23, v8, v12, v9);
}
