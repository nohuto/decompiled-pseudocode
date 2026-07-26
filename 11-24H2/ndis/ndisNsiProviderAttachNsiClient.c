/*
 * XREFs of ndisNsiProviderAttachNsiClient @ 0x140148990
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 */

__int64 __fastcall ndisNsiProviderAttachNsiClient(
        __int64 a1,
        char a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6,
        _QWORD *a7)
{
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      22,
      10,
      (struct _GUID *)&WPP_012aeb269b5b38b010d0502f73c9d515_Traceguids,
      a2,
      a4);
  ndisNsiSavedClientNpi = a4;
  *a6 = 0LL;
  *a7 = &unk_1400F4D80;
  qword_14011D548 = a5;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      22,
      11,
      (struct _GUID *)&WPP_012aeb269b5b38b010d0502f73c9d515_Traceguids,
      a2,
      a4);
  return 0LL;
}
