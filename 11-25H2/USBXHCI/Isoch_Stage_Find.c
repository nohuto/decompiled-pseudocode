/*
 * XREFs of Isoch_Stage_Find @ 0x140017210
 * Callers:
 *     Isoch_ProcessTransferEventWithED1 @ 0x140016B10 (Isoch_ProcessTransferEventWithED1.c)
 * Callees:
 *     WPP_RECORDER_SF_DDqDD @ 0x14001574C (WPP_RECORDER_SF_DDqDD.c)
 *     WPP_RECORDER_SF_DDDDD @ 0x14001588C (WPP_RECORDER_SF_DDDDD.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1400159CC (WPP_RECORDER_SF_DDDD.c)
 *     WPP_RECORDER_SF_DDi @ 0x1400370AC (WPP_RECORDER_SF_DDi.c)
 */

__int64 __fastcall Isoch_Stage_Find(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  __int64 *v4; // rbx
  __int64 *i; // rsi
  __int64 v9; // r8
  char v10; // cl
  int v11; // eax
  __int64 v12; // rbx
  unsigned int v13; // eax
  __int64 v14; // rbx
  unsigned int v16; // eax
  int v17; // edx
  unsigned int v18; // eax
  __int64 v19; // [rsp+28h] [rbp-50h]
  __int64 v20; // [rsp+30h] [rbp-48h]
  __int64 v21; // [rsp+38h] [rbp-40h]
  __int64 v22; // [rsp+40h] [rbp-38h]
  __int64 v23; // [rsp+48h] [rbp-30h]

  v3 = *(unsigned __int16 *)(a3 + 2);
  v4 = (__int64 *)(a1 + 392);
  for ( i = *(__int64 **)(a1 + 392); ; i = (__int64 *)*i )
  {
    if ( v4 == i )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v18 = *(_DWORD *)(a2 + 12);
        LODWORD(v21) = HIDWORD(*(_QWORD *)a3);
        LODWORD(v20) = HIWORD(v18) & 0x1F;
        LODWORD(v19) = HIBYTE(v18);
        WPP_RECORDER_SF_DDDD(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          4u,
          0xEu,
          0x13u,
          (__int64)&WPP_dd4fc339be0d3de3d8d0a5a4ecea6bb9_Traceguids,
          v19,
          v20,
          v21,
          v3);
      }
      return 0LL;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v17 = HIWORD(*(_DWORD *)(a2 + 12)) & 0x1F;
      LOBYTE(v17) = 5;
      WPP_RECORDER_SF_DDi(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        v17,
        HIBYTE(*(_DWORD *)(a2 + 12)),
        18,
        (__int64)&WPP_dd4fc339be0d3de3d8d0a5a4ecea6bb9_Traceguids,
        HIBYTE(*(_DWORD *)(a2 + 12)),
        HIWORD(*(_DWORD *)(a2 + 12)) & 0x1F,
        i[3]);
    }
    v9 = HIDWORD(*(_QWORD *)a3);
    if ( *(_DWORD *)(i[6] + 128) == v9 )
      break;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v16 = *(_DWORD *)(a2 + 12);
    LODWORD(v21) = *(_DWORD *)(i[6] + 128);
    LODWORD(v20) = HIWORD(v16) & 0x1F;
    LODWORD(v19) = HIBYTE(v16);
    WPP_RECORDER_SF_DDDDD(
      *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
      5u,
      v9,
      0x14u,
      (__int64)&WPP_dd4fc339be0d3de3d8d0a5a4ecea6bb9_Traceguids,
      v19,
      v20,
      v21,
      v9,
      v3);
  }
  v10 = *((_BYTE *)i + 130);
  v11 = *((unsigned __int8 *)i + 132);
  *((_BYTE *)i + 133) = v11;
  *((_BYTE *)i + 134) = v10;
  if ( v10 )
  {
    v12 = v11 * (unsigned int)*((unsigned __int8 *)i + 128);
    v13 = v11 + 1;
LABEL_12:
    *((_BYTE *)i + 134) = v10 - 1;
    v14 = (__int64)i + v12 + 144;
    *((_BYTE *)i + 133) = v13 % *((unsigned __int8 *)i + 129);
    goto LABEL_13;
  }
  v14 = 0LL;
LABEL_13:
  while ( v14 )
  {
    if ( v3 <= *(_DWORD *)(v14 + 44) )
    {
      if ( !v3 || v3 > *(_DWORD *)(v14 + 48) - 1 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            LODWORD(v22) = v3 + 1;
            LODWORD(v21) = *(_DWORD *)(v14 + 48);
            LODWORD(v20) = HIWORD(*(_DWORD *)(a2 + 12)) & 0x1F;
            LODWORD(v19) = HIBYTE(*(_DWORD *)(a2 + 12));
            WPP_RECORDER_SF_DDDD(
              *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
              5u,
              0xEu,
              0x15u,
              (__int64)&WPP_dd4fc339be0d3de3d8d0a5a4ecea6bb9_Traceguids,
              v19,
              v20,
              v21,
              v22);
          }
        }
        *((_DWORD *)i + 25) = v3 + 1;
        *(_DWORD *)(v14 + 48) = v3 + 1;
      }
      return v14;
    }
    v10 = *((_BYTE *)i + 134);
    if ( v10 )
    {
      v12 = *((unsigned __int8 *)i + 133) * (unsigned int)*((unsigned __int8 *)i + 128);
      v13 = *((unsigned __int8 *)i + 133) + 1;
      goto LABEL_12;
    }
    v14 = 0LL;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return 0LL;
  LODWORD(v23) = v3;
  LODWORD(v22) = HIDWORD(*(_QWORD *)a3);
  LODWORD(v20) = HIWORD(*(_DWORD *)(a2 + 12)) & 0x1F;
  LODWORD(v19) = HIBYTE(*(_DWORD *)(a2 + 12));
  WPP_RECORDER_SF_DDqDD(
    *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
    i[3],
    (unsigned int)v20,
    0x16u,
    (__int64)&WPP_dd4fc339be0d3de3d8d0a5a4ecea6bb9_Traceguids,
    v19,
    v20,
    i[3],
    v22,
    v23);
  return 0LL;
}
