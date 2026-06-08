/*
 * XREFs of sub_14000D03C @ 0x14000D03C
 * Callers:
 *     sub_1400319F0 @ 0x1400319F0 (sub_1400319F0.c)
 *     sub_14003F9A0 @ 0x14003F9A0 (sub_14003F9A0.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 */

__int64 sub_14000D03C(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4, int a5, const char *a6, ...)
{
  const char *v6; // rdi
  __int64 v7; // rbx
  __int64 v10; // rdx
  __int64 v11; // rdx
  const char *v12; // rcx
  __int64 v13; // rbx
  int v15; // [rsp+20h] [rbp-38h]
  va_list va; // [rsp+90h] [rbp+38h] BYREF

  va_start(va, a6);
  v6 = a6;
  v7 = -1LL;
  if ( (HIDWORD(off_140018050->Timer) & 1) != 0 && BYTE1(off_140018050->Timer) >= 2u )
  {
    if ( a6 )
    {
      v10 = -1LL;
      do
        ++v10;
      while ( a6[v10] );
      v11 = v10 + 1;
    }
    else
    {
      v11 = 5LL;
    }
    v12 = a6;
    if ( !a6 )
      v12 = "NULL";
    qword_140018EE0(off_140018050->AttachedDevice, 43LL, &unk_140012FE8, a4, v12, v11, va);
  }
  if ( a6 )
  {
    do
      ++v7;
    while ( a6[v7] );
    v13 = v7 + 1;
  }
  else
  {
    v13 = 5LL;
  }
  if ( !a6 )
    v6 = "NULL";
  LOWORD(v15) = a4;
  return WppAutoLogTrace(a1, 2LL, 1LL, &unk_140012FE8, v15, v6, v13, va);
}
