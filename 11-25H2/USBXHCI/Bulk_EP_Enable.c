/*
 * XREFs of Bulk_EP_Enable @ 0x140034440
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_DDDD @ 0x1400159CC (WPP_RECORDER_SF_DDDD.c)
 */

__int64 __fastcall Bulk_EP_Enable(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v4; // rbx
  unsigned int v5; // edx
  unsigned int v6; // r11d
  int v7; // [rsp+28h] [rbp-30h]
  int v8; // [rsp+30h] [rbp-28h]
  int v9; // [rsp+38h] [rbp-20h]
  unsigned int v10; // [rsp+40h] [rbp-18h]

  v2 = *(_QWORD *)(a1 + 48);
  if ( *(_DWORD *)(v2 + 20) == 3 )
  {
    v4 = *(_QWORD *)(a1 + 56);
    v5 = *(_DWORD *)(a1 + 4) % ((*(unsigned __int8 *)(v4 + 105) + 1) * (*(_WORD *)(v4 + 100) & 0x7FFu));
    if ( v5 )
    {
      v6 = *(_DWORD *)(a1 + 4) - v5;
      *(_DWORD *)(a1 + 4) = v6;
      *(_DWORD *)(a1 + 8) = (v6 + 4095) >> 12;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v10 = v6;
        v9 = *(_DWORD *)(a1 + 64);
        v8 = *(_DWORD *)(v4 + 144);
        v7 = *(unsigned __int8 *)(v2 + 135);
        WPP_RECORDER_SF_DDDD(
          *(_QWORD *)(*(_QWORD *)(a1 + 40) + 72LL),
          4u,
          0xEu,
          0xBu,
          (__int64)&WPP_af203940883a35574f6554fa7269ecc3_Traceguids,
          v7,
          v8,
          v9,
          v10);
      }
    }
  }
  return 0LL;
}
