/*
 * XREFs of ndisValidateSGDmaDescription @ 0x1400DB0FC
 * Callers:
 *     NdisMRegisterScatterGatherDma @ 0x1400DB720 (NdisMRegisterScatterGatherDma.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x14001DD50 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1400527F0 (WPP_RECORDER_SF_D_ea_1400527F0.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x14008ADC0 (-ndisBugCheckEx@@YAX_K000@Z.c)
 */

__int64 __fastcall ndisValidateSGDmaDescription(_BYTE *a1, ULONG_PTR a2)
{
  unsigned int v3; // r8d
  int v4; // r9d
  int v5; // r9d
  unsigned __int8 v6; // al
  char v7; // [rsp+28h] [rbp-10h]
  char v8; // [rsp+28h] [rbp-10h]

  if ( *(_BYTE *)(a2 + 1) != 1 )
  {
    if ( *(_BYTE *)(a2 + 1) != 2 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v7 = *(_BYTE *)(a2 + 1);
        LOBYTE(a2) = 2;
        WPP_RECORDER_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          a2,
          1,
          41,
          (struct _GUID *)&WPP_407ea9eeeedc372ae5fce7cbec7f7f91_Traceguids,
          v7);
      }
      return 3221291012LL;
    }
    if ( *a1 == 17 )
    {
      if ( a1[32] <= 6u && (a1[32] != 6 || a1[33] < 0x55u) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(a2) = 2;
          WPP_RECORDER_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            a2,
            1,
            36,
            (struct _GUID *)&WPP_407ea9eeeedc372ae5fce7cbec7f7f91_Traceguids);
        }
        return 3221291012LL;
      }
    }
    else
    {
      if ( *a1 != 1 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return 3221225485LL;
        v5 = 37;
        goto LABEL_33;
      }
      if ( !*(_QWORD *)(a2 + 40) || (*(_DWORD *)(a2 + 4) & 2) == 0 || *(_QWORD *)(a2 + 16) || *(_QWORD *)(a2 + 24) )
        ndisBugCheckEx(0x34uLL, 3uLL, 2uLL, a2);
    }
    v3 = *(unsigned __int16 *)(a2 + 2);
    if ( v3 < 0x30 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v4 = 38;
LABEL_20:
        v8 = v3;
LABEL_48:
        LOBYTE(a2) = 2;
        WPP_RECORDER_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          a2,
          1,
          v4,
          (struct _GUID *)&WPP_407ea9eeeedc372ae5fce7cbec7f7f91_Traceguids,
          v8);
        return 3221225485LL;
      }
      return 3221225485LL;
    }
    v3 = *(_DWORD *)(a2 + 4);
    if ( (v3 & 0xFFFFFFF8) != 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v4 = 39;
        goto LABEL_20;
      }
      return 3221225485LL;
    }
    if ( (v3 & 6) == 4 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 3221225485LL;
      v5 = 40;
LABEL_33:
      LOBYTE(a2) = 2;
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        a2,
        1,
        v5,
        (struct _GUID *)&WPP_407ea9eeeedc372ae5fce7cbec7f7f91_Traceguids);
      return 3221225485LL;
    }
    return 0LL;
  }
  if ( *a1 != 17 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 3221225485LL;
    v5 = 32;
    goto LABEL_33;
  }
  v6 = a1[32];
  if ( v6 >= 6u )
  {
    if ( v6 > 6u || a1[33] >= 0x32u )
    {
      if ( (*(_DWORD *)(a2 + 4) & 0xFFFFFFFC) != 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v4 = 34;
          v8 = *(_DWORD *)(a2 + 4);
          goto LABEL_48;
        }
        return 3221225485LL;
      }
      if ( v6 > 6u )
        goto LABEL_45;
    }
    if ( a1[33] >= 0x55u )
    {
LABEL_45:
      if ( *(_WORD *)(a2 + 2) < 0x24u )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v4 = 35;
          v8 = *(_WORD *)(a2 + 2);
          goto LABEL_48;
        }
        return 3221225485LL;
      }
    }
    return 0LL;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 2;
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      1,
      33,
      (struct _GUID *)&WPP_407ea9eeeedc372ae5fce7cbec7f7f91_Traceguids);
  }
  return 3221225659LL;
}
