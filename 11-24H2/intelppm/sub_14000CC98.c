/*
 * XREFs of sub_14000CC98 @ 0x14000CC98
 * Callers:
 *     sub_140028A34 @ 0x140028A34 (sub_140028A34.c)
 *     sub_140033F84 @ 0x140033F84 (sub_140033F84.c)
 *     sub_140034C30 @ 0x140034C30 (sub_140034C30.c)
 *     sub_140045EF0 @ 0x140045EF0 (sub_140045EF0.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_14000CC98(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 a4,
        int a5,
        char a6,
        const char *a7)
{
  const char *v7; // rbx
  __int64 v8; // rdi
  __int64 v11; // rdx
  const char *v12; // rcx
  int v14; // [rsp+20h] [rbp-38h]

  v7 = a7;
  v8 = -1LL;
  if ( (HIDWORD(off_140018050->Timer) & 2) != 0 && BYTE1(off_140018050->Timer) >= 5u )
  {
    if ( a7 )
    {
      v11 = -1LL;
      do
        ++v11;
      while ( a7[v11] );
    }
    v12 = a7;
    if ( !a7 )
      v12 = "NULL";
    qword_140018EE0(off_140018050->AttachedDevice, 43LL, &unk_140012FE8, a4, &a6, 4LL, v12);
  }
  if ( v7 )
  {
    do
      ++v8;
    while ( v7[v8] );
  }
  if ( !v7 )
    v7 = "NULL";
  LOWORD(v14) = a4;
  return WppAutoLogTrace(a1, 5LL, 2LL, &unk_140012FE8, v14, &a6, 4LL, v7);
}
