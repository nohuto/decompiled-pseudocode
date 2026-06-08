/*
 * XREFs of sub_14000A9B8 @ 0x14000A9B8
 * Callers:
 *     sub_14002ED8C @ 0x14002ED8C (sub_14002ED8C.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_14000A9B8(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        const wchar_t *a6,
        const wchar_t *a7,
        char a8,
        __int64 a9)
{
  const wchar_t *v9; // r14
  const wchar_t *v10; // rsi
  __int64 v11; // rbx
  __int64 v13; // r15
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rax
  const wchar_t *v17; // rcx
  __int64 v18; // rbp
  __int64 v19; // rax
  bool v20; // zf
  int v22; // [rsp+20h] [rbp-78h]

  v9 = a6;
  v10 = a7;
  v11 = -1LL;
  v13 = 10LL;
  if ( (HIDWORD(off_140018050->Timer) & 1) != 0 && BYTE1(off_140018050->Timer) >= 2u )
  {
    if ( a9 )
    {
      v14 = -1LL;
      do
        ++v14;
      while ( *(_BYTE *)(a9 + v14) );
    }
    if ( a7 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( a7[v15] );
    }
    if ( a6 )
    {
      v16 = -1LL;
      do
        ++v16;
      while ( a6[v16] );
    }
    WORD1(v17) = WORD1(a6);
    if ( !a6 )
      v17 = L"NULL";
    HIWORD(v22) = WORD1(v17);
    ((void (__fastcall *)(struct _DEVICE_OBJECT *, __int64, void *))qword_140018EE0)(
      off_140018050->AttachedDevice,
      43LL,
      &unk_1400145E8);
  }
  if ( a9 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( *(_BYTE *)(a9 + v18) );
  }
  if ( a7 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( a7[v19] );
  }
  if ( !a7 )
    v10 = L"NULL";
  v20 = a6 == 0LL;
  if ( a6 )
  {
    do
      ++v11;
    while ( a6[v11] );
    v13 = 2 * v11 + 2;
    v20 = a6 == 0LL;
  }
  if ( v20 )
    v9 = L"NULL";
  LOWORD(v22) = 86;
  return WppAutoLogTrace(a1, 2LL, 1LL, &unk_1400145E8, v22, v9, v13, v10);
}
