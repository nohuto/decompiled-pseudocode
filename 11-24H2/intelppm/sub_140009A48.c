/*
 * XREFs of sub_140009A48 @ 0x140009A48
 * Callers:
 *     sub_140027354 @ 0x140027354 (sub_140027354.c)
 *     sub_14002D368 @ 0x14002D368 (sub_14002D368.c)
 *     sub_14002DD48 @ 0x14002DD48 (sub_14002DD48.c)
 *     sub_14002E0DC @ 0x14002E0DC (sub_14002E0DC.c)
 *     sub_140032E50 @ 0x140032E50 (sub_140032E50.c)
 *     sub_140034388 @ 0x140034388 (sub_140034388.c)
 *     sub_14003CB24 @ 0x14003CB24 (sub_14003CB24.c)
 *     sub_14003FC70 @ 0x14003FC70 (sub_14003FC70.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_140009A48(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        __int64 a5,
        const wchar_t *a6)
{
  const wchar_t *v6; // rbx
  __int64 v7; // rdi
  unsigned __int64 v10; // rsi
  __int64 v12; // rbp
  unsigned int v13; // r14d
  int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rdx
  const wchar_t *v17; // rcx
  bool v18; // zf
  int v20; // [rsp+20h] [rbp-48h]

  v6 = a6;
  v7 = -1LL;
  v10 = (unsigned __int64)a3 >> 16;
  v12 = 10LL;
  v13 = a2;
  v14 = *((_DWORD *)&off_140018050->Timer + 20 * v10 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v14, (a3 - 1) & 0x1F) && *((_BYTE *)&off_140018050->Timer + 80 * v10 + 1) >= a2 )
  {
    if ( a6 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( a6[v15] );
      v16 = 2 * v15 + 2;
    }
    else
    {
      v16 = 10LL;
    }
    v17 = a6;
    if ( !a6 )
      v17 = L"NULL";
    qword_140018EE0(*((_QWORD *)&off_140018050->AttachedDevice + 10 * v10), 43LL, a5, a4, v17, v16, 0LL);
  }
  v18 = a6 == 0LL;
  if ( a6 )
  {
    do
      ++v7;
    while ( a6[v7] );
    v12 = 2 * v7 + 2;
    v18 = a6 == 0LL;
  }
  if ( v18 )
    v6 = L"NULL";
  LOWORD(v20) = a4;
  return WppAutoLogTrace(a1, v13, a3, a5, v20, v6, v12, 0LL);
}
