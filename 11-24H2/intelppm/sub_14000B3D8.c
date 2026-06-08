/*
 * XREFs of sub_14000B3D8 @ 0x14000B3D8
 * Callers:
 *     sub_14002F738 @ 0x14002F738 (sub_14002F738.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_14000B3D8(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        const wchar_t *a6,
        const wchar_t *a7)
{
  const wchar_t *v7; // rsi
  const wchar_t *v8; // rbx
  __int64 v9; // rdi
  __int64 v11; // rbp
  __int64 v12; // rax
  const wchar_t *v13; // rdx
  __int64 v14; // rax
  __int64 v15; // r8
  const wchar_t *v16; // rcx
  __int64 v17; // rax
  bool v18; // zf
  int v20; // [rsp+20h] [rbp-78h]

  v7 = a6;
  v8 = a7;
  v9 = -1LL;
  v11 = 10LL;
  if ( (HIDWORD(off_140018050->Timer) & 1) != 0 && BYTE1(off_140018050->Timer) >= 2u )
  {
    if ( a7 )
    {
      v12 = -1LL;
      do
        ++v12;
      while ( a7[v12] );
    }
    v13 = a7;
    if ( !a7 )
      v13 = L"NULL";
    if ( a6 )
    {
      v14 = -1LL;
      do
        ++v14;
      while ( a6[v14] );
      v15 = 2 * v14 + 2;
    }
    else
    {
      v15 = 10LL;
    }
    v16 = a6;
    if ( !a6 )
      v16 = L"NULL";
    qword_140018EE0(off_140018050->AttachedDevice, 43LL, &unk_1400145E8, 70LL, v16, v15, v13);
  }
  if ( a7 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( a7[v17] );
  }
  if ( !a7 )
    v8 = L"NULL";
  v18 = a6 == 0LL;
  if ( a6 )
  {
    do
      ++v9;
    while ( a6[v9] );
    v11 = 2 * v9 + 2;
    v18 = a6 == 0LL;
  }
  if ( v18 )
    v7 = L"NULL";
  LOWORD(v20) = 70;
  return WppAutoLogTrace(a1, 2LL, 1LL, &unk_1400145E8, v20, v7, v11, v8);
}
