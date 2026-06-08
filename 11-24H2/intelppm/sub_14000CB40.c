/*
 * XREFs of sub_14000CB40 @ 0x14000CB40
 * Callers:
 *     sub_140034388 @ 0x140034388 (sub_140034388.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_14000CB40(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, char a6, const wchar_t *a7)
{
  const wchar_t *v7; // rbx
  __int64 v8; // rdi
  __int64 v10; // rax
  const wchar_t *v11; // rcx
  bool v12; // zf
  int v14; // [rsp+20h] [rbp-48h]

  v7 = a7;
  v8 = -1LL;
  if ( (HIDWORD(off_140018050->Timer) & 2) != 0 && BYTE1(off_140018050->Timer) >= 5u )
  {
    if ( a7 )
    {
      v10 = -1LL;
      do
        ++v10;
      while ( a7[v10] );
    }
    v11 = a7;
    if ( !a7 )
      v11 = L"NULL";
    qword_140018EE0(off_140018050->AttachedDevice, 43LL, &unk_140012FE8, 174LL, &a6, 4LL, v11);
  }
  v12 = v7 == 0LL;
  if ( v7 )
  {
    do
      ++v8;
    while ( v7[v8] );
    v12 = v7 == 0LL;
  }
  if ( v12 )
    v7 = L"NULL";
  LOWORD(v14) = 174;
  return WppAutoLogTrace(a1, 5LL, 2LL, &unk_140012FE8, v14, &a6, 4LL, v7);
}
