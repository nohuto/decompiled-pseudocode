/*
 * XREFs of Isoch_Stage_EstimateRequiredSegments @ 0x140023F50
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_DDqDDD @ 0x14004CC1C (WPP_RECORDER_SF_DDqDDD.c)
 */

__int64 __fastcall Isoch_Stage_EstimateRequiredSegments(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rsi
  int v4; // r9d
  unsigned int v5; // r9d
  unsigned int v6; // edi
  unsigned int v7; // r11d
  unsigned int v8; // edi
  __int64 v10; // rax
  __int64 v11; // rax
  char v12; // [rsp+20h] [rbp-48h]

  v2 = *(_QWORD *)(a1 + 56);
  v3 = *(_QWORD *)(a1 + 40);
  v4 = (((unsigned __int64)*(unsigned int *)(v2 + 160) + 8190) >> 12) + 1;
  if ( !_bittest64((const signed __int64 *)(v3 + 736), 0x2Fu)
    || (v10 = *(_QWORD *)(a1 + 48), *(_DWORD *)(v10 + 20) != 1)
    || !*(_DWORD *)(v10 + 40) )
  {
    v4 = ((unsigned __int64)*(unsigned int *)(v2 + 160) + 8190) >> 12;
  }
  v5 = v4 + 1;
  if ( *(_WORD *)(*(_QWORD *)(*(_QWORD *)a2 + 48LL) + 2LL) == 56 )
  {
LABEL_4:
    if ( *(_DWORD *)(*(_QWORD *)(a2 + 64) + 40LL) < *(_DWORD *)(a2 + 52) )
      v5 += 2;
  }
  else
  {
    switch ( *(_WORD *)(*(_QWORD *)(*(_QWORD *)a2 + 48LL) + 2LL) )
    {
      case '9':
      case ':':
        break;
      default:
        goto LABEL_4;
    }
  }
  v6 = *(_DWORD *)(a1 + 196);
  *(_DWORD *)(a1 + 440) = v5;
  v7 = v5 * (*(_DWORD *)(a2 + 44) - *(_DWORD *)(a2 + 40) + 1);
  if ( v7 <= v6 - *(_DWORD *)(a1 + 192) - (v6 - *(_DWORD *)(a1 + 192)) % v5 )
    v8 = 0;
  else
    v8 = (v7 + -(v6 % v5) - (-*(_DWORD *)(a1 + 192) - (v6 - *(_DWORD *)(a1 + 192)) % v5) - 1) / (v6 - v6 % v5);
  if ( _bittest64((const signed __int64 *)(v3 + 736), 0x2Fu) )
  {
    v11 = *(_QWORD *)(a1 + 48);
    if ( *(_DWORD *)(v11 + 20) == 1 )
    {
      if ( *(_DWORD *)(v11 + 40) )
        ++v8;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_DDqDDD(
      *(_QWORD *)(v2 + 80),
      *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 143LL),
      *(_DWORD *)(a2 + 44) - *(_DWORD *)(a2 + 40) + 1,
      v5,
      v12,
      *(_BYTE *)(*(_QWORD *)(a1 + 48) + 143LL),
      *(_DWORD *)(v2 + 152),
      a2,
      v8,
      v5,
      *(_BYTE *)(a2 + 44) - *(_BYTE *)(a2 + 40) + 1);
  return v8;
}
