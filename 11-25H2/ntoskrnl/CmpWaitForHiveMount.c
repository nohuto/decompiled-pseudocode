/*
 * XREFs of CmpWaitForHiveMount @ 0x140AAE5C4
 * Callers:
 *     CmpPerformCompleteKcbCacheLookup @ 0x140848B80 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoParseKey @ 0x140871670 (CmpDoParseKey.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     CmpHashUnicodeComponent @ 0x140848190 (CmpHashUnicodeComponent.c)
 */

char __fastcall CmpWaitForHiveMount(__m128i *a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int128 v4; // xmm0
  char v5; // bl
  __int16 v7; // cx
  _WORD *v8; // r8
  bool v9; // zf
  unsigned __int16 v10; // dx
  unsigned int v11; // edi
  int v12; // eax
  unsigned __int16 i; // dx
  __int64 v14; // rsi
  __int64 v15; // rcx
  __int128 v17; // [rsp+20h] [rbp-18h] BYREF

  v4 = (__int128)*a1;
  v5 = 0;
  v7 = _mm_cvtsi128_si32(*a1);
  v17 = v4;
  if ( !v7 )
    goto LABEL_17;
  v8 = (_WORD *)*((_QWORD *)&v17 + 1);
  do
  {
    if ( *v8 != 92 )
      break;
    ++v8;
    v9 = v7 == 2;
    v7 -= 2;
    LOWORD(v17) = v7;
  }
  while ( !v9 );
  *((_QWORD *)&v17 + 1) = v8;
  if ( v7 )
  {
    v10 = 0;
    v11 = 1;
    do
    {
      if ( v8[v10] == 92 )
        break;
      ++v10;
      v7 -= 2;
    }
    while ( v7 );
    LOWORD(v17) = 2 * v10;
    v12 = CmpHashUnicodeComponent(&v17);
    for ( i = 0; ; ++i )
    {
      if ( i >= 8u )
      {
        _interlockedbittestandset(dword_140E09D20, 2u);
        return 0;
      }
      v14 = 3LL * i;
      if ( dword_140E09D1C[6 * i] == v12 )
        break;
    }
    _mm_lfence();
    _interlockedbittestandset(&dword_140E09D20[6 * i], 3u);
    _InterlockedAdd(&dword_140E09D24[6 * i], 1u);
    KeSetEvent((struct _KEVENT *)((char *)&stru_140E09790 + 184 * (unsigned int)dword_140E09D18[6 * i]), 0, 0);
    v15 = (unsigned int)dword_140E09D18[2 * v14];
    if ( !*((_DWORD *)&unk_140E097C4 + 46 * v15) )
    {
      v5 = 1;
      *a4 = v15;
      v11 = 5;
    }
    _interlockedbittestandset(&dword_140E09D20[2 * v14], v11);
    return v5;
  }
  else
  {
LABEL_17:
    _interlockedbittestandset(dword_140E09D20, 0);
    return 0;
  }
}
