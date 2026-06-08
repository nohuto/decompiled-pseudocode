/*
 * XREFs of sub_14000BA5C @ 0x14000BA5C
 * Callers:
 *     sub_14002FC44 @ 0x14002FC44 (sub_14002FC44.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_14000BA5C(
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
  __int64 v10; // rbx
  __int64 v12; // r15
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rax
  const wchar_t *v16; // rcx
  __int64 v17; // rbp
  __int64 v18; // rax
  bool v19; // zf
  int v21; // [rsp+20h] [rbp-98h]

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
      while ( *(_BYTE *)(a8 + v13) );
    }
    if ( a7 )
    {
      v14 = -1LL;
      do
        ++v14;
      while ( a7[v14] );
    }
    if ( a6 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( a6[v15] );
    }
    WORD1(v16) = WORD1(a6);
    if ( !a6 )
      v16 = L"NULL";
    HIWORD(v21) = WORD1(v16);
    ((void (__fastcall *)(struct _DEVICE_OBJECT *, __int64, void *))qword_140018EE0)(
      off_140018050->AttachedDevice,
      43LL,
      &unk_1400145E8);
  }
  if ( a8 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( *(_BYTE *)(a8 + v17) );
  }
  if ( a7 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( a7[v18] );
  }
  if ( !a7 )
    v9 = L"NULL";
  v19 = a6 == 0LL;
  if ( a6 )
  {
    do
      ++v10;
    while ( a6[v10] );
    v12 = 2 * v10 + 2;
    v19 = a6 == 0LL;
  }
  if ( v19 )
    v8 = L"NULL";
  LOWORD(v21) = 72;
  return WppAutoLogTrace(a1, 2LL, 1LL, &unk_1400145E8, v21, v8, v12, v9);
}
