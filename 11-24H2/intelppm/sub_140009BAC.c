/*
 * XREFs of sub_140009BAC @ 0x140009BAC
 * Callers:
 *     sub_140028380 @ 0x140028380 (sub_140028380.c)
 *     sub_140031D38 @ 0x140031D38 (sub_140031D38.c)
 *     sub_140033B80 @ 0x140033B80 (sub_140033B80.c)
 *     sub_14004599C @ 0x14004599C (sub_14004599C.c)
 *     sub_140047274 @ 0x140047274 (sub_140047274.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 */

__int64 sub_140009BAC(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        __int64 a5,
        const char *a6,
        ...)
{
  const char *v6; // rbx
  __int64 v9; // rdi
  unsigned __int64 v10; // rsi
  unsigned int v12; // ebp
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rdx
  const char *v16; // rcx
  __int64 v17; // rdi
  int v19; // [rsp+20h] [rbp-48h]
  va_list va; // [rsp+A0h] [rbp+38h] BYREF

  va_start(va, a6);
  v6 = a6;
  v9 = -1LL;
  v10 = (unsigned __int64)a3 >> 16;
  v12 = a2;
  v13 = *((_DWORD *)&off_140018050->Timer + 20 * v10 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v13, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)&off_140018050->Timer + 80 * v10 + 1) >= a2 )
  {
    if ( a6 )
    {
      v14 = -1LL;
      do
        ++v14;
      while ( a6[v14] );
      v15 = v14 + 1;
    }
    else
    {
      v15 = 5LL;
    }
    v16 = a6;
    if ( !a6 )
      v16 = "NULL";
    qword_140018EE0(*((_QWORD *)&off_140018050->AttachedDevice + 10 * v10), 43LL, a5, a4, v16, v15, va);
  }
  if ( a6 )
  {
    do
      ++v9;
    while ( a6[v9] );
    v17 = v9 + 1;
  }
  else
  {
    v17 = 5LL;
  }
  if ( !a6 )
    v6 = "NULL";
  LOWORD(v19) = a4;
  return WppAutoLogTrace(a1, v12, a3, a5, v19, v6, v17, va);
}
