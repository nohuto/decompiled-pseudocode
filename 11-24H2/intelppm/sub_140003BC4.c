/*
 * XREFs of sub_140003BC4 @ 0x140003BC4
 * Callers:
 *     sub_1400279B4 @ 0x1400279B4 (sub_1400279B4.c)
 *     sub_140028380 @ 0x140028380 (sub_140028380.c)
 *     sub_1400319F0 @ 0x1400319F0 (sub_1400319F0.c)
 *     sub_140033F84 @ 0x140033F84 (sub_140033F84.c)
 *     sub_140034144 @ 0x140034144 (sub_140034144.c)
 *     sub_1400347CC @ 0x1400347CC (sub_1400347CC.c)
 *     sub_140034C30 @ 0x140034C30 (sub_140034C30.c)
 *     sub_14003E4A0 @ 0x14003E4A0 (sub_14003E4A0.c)
 *     sub_14004599C @ 0x14004599C (sub_14004599C.c)
 *     sub_140047274 @ 0x140047274 (sub_140047274.c)
 *     sub_140049BE4 @ 0x140049BE4 (sub_140049BE4.c)
 *     sub_14004A99C @ 0x14004A99C (sub_14004A99C.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_140003BC4(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        __int64 a5,
        const char *a6)
{
  const char *v6; // rbx
  __int64 v9; // rdi
  unsigned __int64 v10; // rsi
  unsigned int v12; // ebp
  int v13; // eax
  __int64 v14; // rdi
  __int64 v16; // rdx
  __int64 v17; // rdx
  const char *v18; // rcx
  int v19; // [rsp+20h] [rbp-38h]

  v6 = a6;
  v9 = -1LL;
  v10 = (unsigned __int64)a3 >> 16;
  v12 = a2;
  v13 = *((_DWORD *)&off_140018050->Timer + 20 * v10 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v13, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)&off_140018050->Timer + 80 * v10 + 1) >= a2 )
  {
    if ( a6 )
    {
      v16 = -1LL;
      do
        ++v16;
      while ( a6[v16] );
      v17 = v16 + 1;
    }
    else
    {
      v17 = 5LL;
    }
    v18 = a6;
    if ( !a6 )
      v18 = "NULL";
    qword_140018EE0(*((_QWORD *)&off_140018050->AttachedDevice + 10 * v10), 43LL, a5, a4, v18, v17, 0LL);
  }
  if ( a6 )
  {
    do
      ++v9;
    while ( a6[v9] );
    v14 = v9 + 1;
  }
  else
  {
    v14 = 5LL;
  }
  if ( !a6 )
    v6 = "NULL";
  LOWORD(v19) = a4;
  return WppAutoLogTrace(a1, v12, a3, a5, v19, v6, v14, 0LL);
}
