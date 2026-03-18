/*
 * XREFs of Control_ValidateED0TrbPointerOnMismatch @ 0x14003C710
 * Callers:
 *     Control_ProcessTransferEventWithED0 @ 0x140013E5C (Control_ProcessTransferEventWithED0.c)
 * Callees:
 *     Controller_ReportFatalError @ 0x140013068 (Controller_ReportFatalError.c)
 *     WPP_RECORDER_SF_DDi @ 0x1400370AC (WPP_RECORDER_SF_DDi.c)
 */

signed __int64 __fastcall Control_ValidateED0TrbPointerOnMismatch(_QWORD *a1, signed __int64 *a2)
{
  signed __int64 result; // rax
  __int64 v4; // rcx
  signed __int64 v5; // r8
  __int64 v6; // rcx
  __int64 v7; // rcx
  int v8; // r8d
  __int64 v9; // rcx
  int v10; // [rsp+28h] [rbp-20h]
  int v11; // [rsp+28h] [rbp-20h]
  int v12; // [rsp+28h] [rbp-20h]
  int v13; // [rsp+30h] [rbp-18h]
  int v14; // [rsp+30h] [rbp-18h]
  int v15; // [rsp+30h] [rbp-18h]

  result = *a2;
  v4 = a1[22];
  v5 = *(_QWORD *)(v4 + 24);
  if ( *a2 < v5 || result >= v5 + *(unsigned int *)(v4 + 40) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v9 = a1[7];
      v15 = *(_DWORD *)(v9 + 144);
      v12 = *(unsigned __int8 *)(a1[6] + 135LL);
      WPP_RECORDER_SF_DDi(
        *(_QWORD *)(v9 + 80),
        2u,
        *(unsigned __int8 *)(a1[6] + 135LL),
        0xFu,
        (__int64)&WPP_c4903a4407353a45c75e6304bdbc5226_Traceguids,
        v12,
        v15,
        result);
    }
    v8 = 4127;
    return Controller_ReportFatalError(a1[5], 2, v8, 0, a1[6], a1[7], (__int64)a1);
  }
  if ( !_bittest64((const signed __int64 *)(a1[5] + 736LL), 0x26u) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v7 = a1[7];
      v14 = *(_DWORD *)(v7 + 144);
      v11 = *(unsigned __int8 *)(a1[6] + 135LL);
      WPP_RECORDER_SF_DDi(
        *(_QWORD *)(v7 + 80),
        2u,
        *(unsigned __int8 *)(a1[6] + 135LL),
        0xEu,
        (__int64)&WPP_c4903a4407353a45c75e6304bdbc5226_Traceguids,
        v11,
        v14,
        result);
    }
    v8 = 4128;
    return Controller_ReportFatalError(a1[5], 2, v8, 0, a1[6], a1[7], (__int64)a1);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v6 = a1[7];
    v13 = *(_DWORD *)(v6 + 144);
    v10 = *(unsigned __int8 *)(a1[6] + 135LL);
    return WPP_RECORDER_SF_DDi(
             *(_QWORD *)(v6 + 80),
             3u,
             *(unsigned __int8 *)(a1[6] + 135LL),
             0xDu,
             (__int64)&WPP_c4903a4407353a45c75e6304bdbc5226_Traceguids,
             v10,
             v13,
             result);
  }
  return result;
}
