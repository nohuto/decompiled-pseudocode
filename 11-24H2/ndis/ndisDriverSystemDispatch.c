/*
 * XREFs of ndisDriverSystemDispatch @ 0x1400A2E28
 * Callers:
 *     ndisDispatchRequest @ 0x14002CA40 (ndisDispatchRequest.c)
 * Callees:
 *     WPP_RECORDER_SF_qqD @ 0x1400158F0 (WPP_RECORDER_SF_qqD.c)
 *     WPP_RECORDER_SF_D @ 0x1400527F0 (WPP_RECORDER_SF_D_ea_1400527F0.c)
 *     ndisEtwRegisterGuids @ 0x1400A2FFC (ndisEtwRegisterGuids.c)
 */

__int64 __fastcall ndisDriverSystemDispatch(char a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v3; // ebx
  __int64 v4; // rbp
  unsigned int v5; // r14d
  _QWORD *v6; // rdi
  unsigned __int8 *v7; // rsi
  __int64 v8; // rcx

  v2 = *(_QWORD *)(a2 + 184);
  v3 = 0;
  v4 = a2;
  v5 = *(_DWORD *)(v2 + 24);
  v6 = *(_QWORD **)(v2 + 32);
  v7 = (unsigned __int8 *)(v2 + 1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xCu,
      (struct _GUID *)&WPP_ce2236d9402e332d9fc244d3ef4316e6_Traceguids,
      a1,
      a2,
      *v7);
  switch ( *v7 )
  {
    case 4u:
      if ( v5 < 0x30 || !v6 || *(_DWORD *)v6 < 0x30u )
        goto LABEL_26;
      v8 = v6[3] - *(_QWORD *)&ndisControlGuid.Data1;
      if ( !v8 )
        v8 = v6[4] - *(_QWORD *)ndisControlGuid.Data4;
      if ( v8 )
      {
LABEL_26:
        v3 = -1073741811;
      }
      else
      {
        qword_14011D058 = v6[1];
        byte_14011D054 = BYTE2(qword_14011D058);
        ndisLogger = HIDWORD(qword_14011D058);
        if ( (qword_14011D058 & 0x800000000LL) != 0 )
          LOBYTE(dword_14011D060) = 1;
        if ( (qword_14011D058 & 0x100000000LL) != 0 )
          BYTE1(dword_14011D060) = 1;
        if ( (qword_14011D058 & 0x200000000LL) != 0 )
          BYTE2(dword_14011D060) = 1;
        if ( (qword_14011D058 & 0x400000000LL) != 0 )
          HIBYTE(dword_14011D060) = 1;
        if ( (qword_14011D058 & 0x1000000000LL) != 0 )
          LOBYTE(word_14011D064) = 1;
        if ( (qword_14011D058 & 0x2000000000LL) != 0 )
          HIBYTE(word_14011D064) = 1;
      }
      break;
    case 5u:
      byte_14011D054 = 0;
      ndisLogger = 0;
      qword_14011D058 = 0LL;
      dword_14011D060 = 0;
      word_14011D064 = 0;
      *(_QWORD *)(v4 + 56) = 0LL;
      break;
    case 0xBu:
      v3 = ndisEtwRegisterGuids(v6);
      *(_QWORD *)(v4 + 56) = 0LL;
      break;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      1,
      13,
      (struct _GUID *)&WPP_ce2236d9402e332d9fc244d3ef4316e6_Traceguids,
      v3);
  }
  return v3;
}
