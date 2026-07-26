/*
 * XREFs of ndisDriverSystemDispatch @ 0x1400AAFD8
 * Callers:
 *     ndisDispatchRequest @ 0x140029830 (ndisDispatchRequest.c)
 * Callees:
 *     WPP_RECORDER_SF_qqD @ 0x140026FA0 (WPP_RECORDER_SF_qqD.c)
 *     WPP_RECORDER_SF_D @ 0x14006D370 (WPP_RECORDER_SF_D_ea_14006D370.c)
 *     ndisEtwRegisterGuids @ 0x1400AB1AC (ndisEtwRegisterGuids.c)
 */

__int64 __fastcall ndisDriverSystemDispatch(char a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v3; // ebx
  unsigned int v5; // r14d
  _QWORD *v6; // rdi
  unsigned __int8 *v7; // rsi
  __int64 v8; // rcx
  __int64 v10; // [rsp+28h] [rbp-40h]

  v2 = *(_QWORD *)(a2 + 184);
  v3 = 0;
  v5 = *(_DWORD *)(v2 + 24);
  v6 = *(_QWORD **)(v2 + 32);
  v7 = (unsigned __int8 *)(v2 + 1);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
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
        qword_140127108 = v6[1];
        byte_140127104 = BYTE2(qword_140127108);
        ndisLogger = HIDWORD(qword_140127108);
        if ( (qword_140127108 & 0x800000000LL) != 0 )
          LOBYTE(dword_140127110) = 1;
        if ( (qword_140127108 & 0x100000000LL) != 0 )
          BYTE1(dword_140127110) = 1;
        if ( (qword_140127108 & 0x200000000LL) != 0 )
          BYTE2(dword_140127110) = 1;
        if ( (qword_140127108 & 0x400000000LL) != 0 )
          HIBYTE(dword_140127110) = 1;
        if ( (qword_140127108 & 0x1000000000LL) != 0 )
          LOBYTE(word_140127114) = 1;
        if ( (qword_140127108 & 0x2000000000LL) != 0 )
          HIBYTE(word_140127114) = 1;
      }
      break;
    case 5u:
      byte_140127104 = 0;
      ndisLogger = 0;
      qword_140127108 = 0LL;
      dword_140127110 = 0;
      word_140127114 = 0;
      *(_QWORD *)(a2 + 56) = 0LL;
      break;
    case 0xBu:
      v3 = ndisEtwRegisterGuids(v6);
      *(_QWORD *)(a2 + 56) = 0LL;
      break;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v10) = v3;
    WPP_RECORDER_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xDu,
      (struct _GUID *)&WPP_ce2236d9402e332d9fc244d3ef4316e6_Traceguids,
      v10);
  }
  return v3;
}
