/*
 * XREFs of Bulk_EP_Enable @ 0x140031DE0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_DDDD @ 0x140004124 (WPP_RECORDER_SF_DDDD.c)
 *     Feature_EUSB2__private_IsEnabledDeviceUsageNoInline @ 0x140043D58 (Feature_EUSB2__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall Bulk_EP_Enable(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  unsigned __int16 v6; // ax
  __int64 v7; // r10
  unsigned int v8; // edx
  unsigned int v9; // r8d
  int v11; // [rsp+28h] [rbp-30h]
  int v12; // [rsp+30h] [rbp-28h]
  int v13; // [rsp+38h] [rbp-20h]
  unsigned int v14; // [rsp+40h] [rbp-18h]

  if ( *(_DWORD *)(*(_QWORD *)(a1 + 48) + 20LL) == 3 )
  {
    v5 = *(_QWORD *)(a1 + 56);
    if ( !(unsigned int)Feature_EUSB2__private_IsEnabledDeviceUsageNoInline(a1, a2, a3, a4)
      || *(_WORD *)(v5 + 100)
      || !*(_BYTE *)(v5 + 39)
      || ((*(_DWORD *)(v5 + 128) - 1) & 0xFFFFFFFB) != 0 )
    {
      v6 = *(_WORD *)(v5 + 100) & 0x7FF;
    }
    else
    {
      v6 = *(_WORD *)(v5 + 105);
    }
    v7 = *(_QWORD *)(a1 + 56);
    v8 = *(_DWORD *)(a1 + 4) % (v6 * ((unsigned int)*(unsigned __int8 *)(v7 + 113) + 1));
    if ( v8 )
    {
      v9 = *(_DWORD *)(a1 + 4) - v8;
      *(_DWORD *)(a1 + 4) = v9;
      *(_DWORD *)(a1 + 8) = (v9 + 4095) >> 12;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v14 = v9;
        v13 = *(_DWORD *)(a1 + 64);
        v12 = *(_DWORD *)(v7 + 152);
        v11 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 143LL);
        WPP_RECORDER_SF_DDDD(
          *(_QWORD *)(*(_QWORD *)(a1 + 40) + 72LL),
          4u,
          0xEu,
          0xBu,
          (__int64)&WPP_b35432f3067b3bf93fefc5589952cfde_Traceguids,
          v11,
          v12,
          v13,
          v14);
      }
    }
  }
  return 0LL;
}
