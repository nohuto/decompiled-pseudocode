/*
 * XREFs of Bulk_ProcessStreamOnEndpointStopOrHalt @ 0x140015FFC
 * Callers:
 *     Bulk_EP_FSEReceived @ 0x140015F90 (Bulk_EP_FSEReceived.c)
 *     Bulk_EP_EndpointHalted @ 0x140033960 (Bulk_EP_EndpointHalted.c)
 * Callees:
 *     WPP_RECORDER_SF_DDDD @ 0x1400159CC (WPP_RECORDER_SF_DDDD.c)
 *     Bulk_FindStage @ 0x140016194 (Bulk_FindStage.c)
 *     memmove @ 0x1400597C0 (memmove.c)
 */

__int64 __fastcall Bulk_ProcessStreamOnEndpointStopOrHalt(__int64 a1)
{
  __int64 v1; // rax
  __int64 *v3; // rdi
  __int64 result; // rax
  __int64 v5; // r10
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rax
  int v9; // ecx
  unsigned int v10; // ecx
  unsigned int v11; // r8d
  unsigned int v12; // [rsp+60h] [rbp+8h] BYREF
  __int64 *v13; // [rsp+68h] [rbp+10h] BYREF

  v1 = *(_QWORD *)(a1 + 56);
  v12 = 0;
  v13 = 0LL;
  if ( !(unsigned __int8)Bulk_FindStage(
                           a1,
                           *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v1 + 136) + 32LL) + 16LL)
                                     + 16LL * *(unsigned int *)(a1 + 64)) & 0xFFFFFFFFFFFFFFF0uLL,
                           &v13,
                           &v12)
    || (v3 = v13) == 0LL )
  {
    result = *(unsigned int *)(a1 + 356);
    goto LABEL_4;
  }
  v5 = *(_QWORD *)(a1 + 56);
  v6 = *v13;
  v7 = *(_QWORD *)(*(_QWORD *)v5 + 736LL);
  v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 136) + 32LL) + 16LL) + 16LL * *(unsigned int *)(a1 + 64);
  if ( (v7 & 0x1800000000LL) != 0 )
  {
    if ( (v7 & 0x1000000000LL) != 0 )
    {
      if ( (v7 & 0x800000000LL) == 0 )
      {
        v9 = *(_DWORD *)(v8 + 12);
        goto LABEL_7;
      }
    }
    else
    {
      v11 = *(_DWORD *)(v8 + 8);
      v10 = v11 >> 8;
      if ( (v7 & 0x200000000000LL) == 0 || (v11 & 0x80u) != 0 )
        goto LABEL_8;
    }
    v10 = 0;
    goto LABEL_8;
  }
  v9 = *(_DWORD *)(v8 + 8);
LABEL_7:
  v10 = v9 & 0xFFFFFF;
LABEL_8:
  if ( (v7 & 0x10000000000LL) != 0 )
    v10 += *(_DWORD *)(v8 + 12) & 0x1FFFF;
  if ( v10 > *((_DWORD *)v13 + 10) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DDDD(
        *(_QWORD *)(v5 + 80),
        3u,
        0xEu,
        0xCu,
        (__int64)&WPP_af203940883a35574f6554fa7269ecc3_Traceguids,
        *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
        *(_DWORD *)(v5 + 144),
        *(_DWORD *)(a1 + 64),
        v10);
    v10 = 0;
  }
  *(_DWORD *)(v6 + 108) += v10;
  if ( (*(_DWORD *)(*(_QWORD *)(v6 + 48) + 32LL) & 1) != 0 && *(_DWORD *)(v6 + 76) == 2 )
    memmove((void *)v3[8], *(const void **)(v3[9] + 16), v10);
  result = v12;
LABEL_4:
  *(_DWORD *)(a1 + 360) = result;
  return result;
}
