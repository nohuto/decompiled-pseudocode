/*
 * XREFs of sub_14000D180 @ 0x14000D180
 * Callers:
 *     sub_140028380 @ 0x140028380 (sub_140028380.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 */

__int64 sub_14000D180(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, const char *a6, ...)
{
  const char *v6; // rdi
  __int64 v7; // rbx
  __int64 v9; // rdx
  __int64 v10; // rdx
  const char *v11; // rcx
  __int64 v12; // rbx
  int v14; // [rsp+20h] [rbp-38h]
  va_list va; // [rsp+90h] [rbp+38h] BYREF

  va_start(va, a6);
  v6 = a6;
  v7 = -1LL;
  if ( (HIDWORD(off_140018050->Timer) & 2) != 0 && BYTE1(off_140018050->Timer) >= 5u )
  {
    if ( a6 )
    {
      v9 = -1LL;
      do
        ++v9;
      while ( a6[v9] );
      v10 = v9 + 1;
    }
    else
    {
      v10 = 5LL;
    }
    v11 = a6;
    if ( !a6 )
      v11 = "NULL";
    qword_140018EE0(off_140018050->AttachedDevice, 43LL, &unk_140012FE8, 167LL, v11, v10, va);
  }
  if ( a6 )
  {
    do
      ++v7;
    while ( a6[v7] );
    v12 = v7 + 1;
  }
  else
  {
    v12 = 5LL;
  }
  if ( !a6 )
    v6 = "NULL";
  LOWORD(v14) = 167;
  return WppAutoLogTrace(a1, 5LL, 2LL, &unk_140012FE8, v14, v6, v12, va);
}
