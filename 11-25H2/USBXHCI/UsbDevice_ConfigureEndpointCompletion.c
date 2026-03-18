/*
 * XREFs of UsbDevice_ConfigureEndpointCompletion @ 0x14004DF90
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_dq @ 0x14002CC1C (WPP_RECORDER_SF_dq.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UsbDevice_ConfigureEndpointCompletion(__int64 a1, int a2)
{
  _QWORD *v2; // rbx
  int v3; // edx
  unsigned __int16 v4; // r9
  __int64 v5; // rdx
  __int64 (__fastcall *v6)(__int64, __int64); // rax
  __int64 v7; // rcx

  v2 = *(_QWORD **)(a1 + 48);
  if ( a2 == 3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v3 = *((unsigned __int8 *)v2 + 135);
      v4 = 91;
LABEL_10:
      WPP_RECORDER_SF_dq(
        *(_QWORD *)(v2[1] + 72LL),
        4u,
        0xCu,
        v4,
        (__int64)&WPP_222713be4b65397e827dad6cd239c0b0_Traceguids,
        v3,
        *v2);
      goto LABEL_11;
    }
    goto LABEL_11;
  }
  if ( *(_BYTE *)(a1 + 60) != 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v3 = *(unsigned __int8 *)(a1 + 61);
      v4 = 93;
      goto LABEL_10;
    }
LABEL_11:
    v5 = 3221225473LL;
    goto LABEL_12;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dq(
      *(_QWORD *)(v2[1] + 72LL),
      4u,
      0xCu,
      0x5Cu,
      (__int64)&WPP_222713be4b65397e827dad6cd239c0b0_Traceguids,
      *(unsigned __int8 *)(a1 + 61),
      *v2);
  v5 = 0LL;
LABEL_12:
  v6 = (__int64 (__fastcall *)(__int64, __int64))v2[69];
  v7 = v2[70];
  v2[69] = 0LL;
  v2[70] = 0LL;
  return v6(v7, v5);
}
