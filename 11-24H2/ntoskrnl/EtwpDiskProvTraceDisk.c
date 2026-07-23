/*
 * XREFs of EtwpDiskProvTraceDisk @ 0x1403C379C
 * Callers:
 *     EtwpTraceIo @ 0x1403C2130 (EtwpTraceIo.c)
 * Callees:
 *     EtwpLevelKeywordEnabled @ 0x1402D1760 (EtwpLevelKeywordEnabled.c)
 *     EtwpEventWriteFull @ 0x140326D30 (EtwpEventWriteFull.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall EtwpDiskProvTraceDisk(unsigned __int16 a1, __int64 a2, __int64 a3, GUID *a4)
{
  ULONGLONG v4; // rbx
  int v8; // ecx
  __int64 *v9; // rdi
  void *v10; // rsi
  unsigned __int64 v11; // [rsp+90h] [rbp-9h] BYREF
  __int128 v12; // [rsp+98h] [rbp-1h] BYREF
  __int128 v13; // [rsp+A8h] [rbp+Fh]

  v4 = EtwpDiskProvRegHandle;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  if ( EtwpDiskProvRegHandle )
  {
    v8 = a1 - 266;
    if ( v8 )
    {
      if ( v8 == 4 )
        v9 = KDskEvt_Flush;
      else
        v9 = KDskEvt_Write;
    }
    else
    {
      v9 = KDskEvt_Read;
    }
    *(_DWORD *)(a2 + 8) -= 4;
    v10 = (void *)((*(_QWORD *)(v4 + 112) + 28LL) & -(__int64)(*(_QWORD *)(v4 + 112) != 0LL));
    if ( *(_WORD *)(v4 + 100) && EtwpLevelKeywordEnabled(*(_QWORD *)(v4 + 32) + 96LL, *((_BYTE *)v9 + 4), v9[1]) )
      EtwpEventWriteFull(
        *(_QWORD *)(v4 + 32),
        *(_WORD *)(v4 + 100),
        0,
        0,
        (unsigned __int16 *)v9,
        0,
        0,
        a4,
        0LL,
        1u,
        a2,
        a3,
        (__int64)&v12,
        0LL,
        *(_WORD *)(v4 + 98),
        v10,
        &v11);
    if ( *(_WORD *)(v4 + 102) && EtwpLevelKeywordEnabled(*(_QWORD *)(v4 + 40) + 96LL, *((_BYTE *)v9 + 4), v9[1]) )
      EtwpEventWriteFull(
        *(_QWORD *)(v4 + 32),
        *(_WORD *)(v4 + 102),
        0,
        0,
        (unsigned __int16 *)v9,
        0,
        0,
        a4,
        0LL,
        1u,
        a2,
        a3,
        (__int64)&v12,
        *(_QWORD *)(v4 + 40),
        *(_WORD *)(v4 + 98),
        v10,
        &v11);
    if ( *(_QWORD *)(*(_QWORD *)(v4 + 32) + 656LL) )
    {
      v12 = 0LL;
      v13 = 0LL;
      if ( *(_WORD *)(v4 + 104)
        && EtwpLevelKeywordEnabled(*(_QWORD *)(*(_QWORD *)(v4 + 32) + 656LL) + 96LL, *((_BYTE *)v9 + 4), v9[1]) )
      {
        EtwpEventWriteFull(
          *(_QWORD *)(*(_QWORD *)(v4 + 32) + 656LL),
          *(_WORD *)(v4 + 104),
          0,
          0,
          (unsigned __int16 *)v9,
          0,
          0,
          a4,
          0LL,
          1u,
          a2,
          a3,
          (__int64)&v12,
          0LL,
          *(_WORD *)(v4 + 98),
          v10,
          &v11);
      }
      if ( *(_WORD *)(v4 + 106) )
      {
        if ( EtwpLevelKeywordEnabled(*(_QWORD *)(*(_QWORD *)(v4 + 40) + 656LL) + 96LL, *((_BYTE *)v9 + 4), v9[1]) )
          EtwpEventWriteFull(
            *(_QWORD *)(*(_QWORD *)(v4 + 32) + 656LL),
            *(_WORD *)(v4 + 106),
            0,
            0,
            (unsigned __int16 *)v9,
            0,
            0,
            a4,
            0LL,
            1u,
            a2,
            a3,
            (__int64)&v12,
            *(_QWORD *)(*(_QWORD *)(v4 + 40) + 656LL),
            *(_WORD *)(v4 + 98),
            v10,
            &v11);
      }
    }
  }
}
