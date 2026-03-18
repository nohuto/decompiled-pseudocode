/*
 * XREFs of ACPIFanValidateImpactZoneSupport @ 0x14009E418
 * Callers:
 *     ACPIFanPrepareImpactZoneSupport @ 0x14009DCC8 (ACPIFanPrepareImpactZoneSupport.c)
 * Callees:
 *     WPP_RECORDER_SF_dqss @ 0x140033790 (WPP_RECORDER_SF_dqss.c)
 *     WPP_RECORDER_SF_dddqss @ 0x14006069C (WPP_RECORDER_SF_dddqss.c)
 */

char __fastcall ACPIFanValidateImpactZoneSupport(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // di
  const char *v4; // rsi
  unsigned int v6; // eax
  char v7; // dl
  const char *v8; // rcx
  __int64 v9; // rax
  unsigned int i; // r14d
  unsigned int v11; // ecx
  int v12; // edx
  unsigned int v13; // r13d
  const char *v14; // r10
  const char *v15; // rdx
  __int64 v16; // rax
  char v17; // r10
  const char *v18; // rdx
  char v19; // dl
  const char *v20; // rax
  __int64 v21; // rcx
  int v23; // [rsp+20h] [rbp-68h]

  v3 = 0;
  v4 = byte_1400753E8;
  v6 = 0;
  if ( *(_DWORD *)(a1 + 324) )
  {
    for ( i = 0; i < 4; ++i )
    {
      v11 = *(_DWORD *)(a1 + 4LL * i + 328);
      if ( v6 > v11 )
      {
        v17 = 0;
        v18 = byte_1400753E8;
        if ( a1 )
        {
          a3 = *(_QWORD *)(a1 + 8);
          v17 = a1;
          if ( (a3 & 0x200000000000LL) != 0 )
          {
            v4 = *(const char **)(a1 + 608);
            if ( (a3 & 0x400000000000LL) != 0 )
              v18 = *(const char **)(a1 + 616);
          }
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_dddqss(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            a3,
            0x2Eu,
            v23,
            v6,
            i,
            v11,
            v17,
            v4,
            v18);
        return v3;
      }
      v12 = v11 % *(_DWORD *)(a1 + 324);
      if ( v12 )
      {
        a3 = 0LL;
        v13 = v11 - v12;
        v14 = byte_1400753E8;
        v15 = byte_1400753E8;
        if ( a1 )
        {
          v16 = *(_QWORD *)(a1 + 8);
          a3 = a1;
          if ( (v16 & 0x200000000000LL) != 0 )
          {
            v14 = *(const char **)(a1 + 608);
            if ( (v16 & 0x400000000000LL) != 0 )
              v15 = *(const char **)(a1 + 616);
          }
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_dddqss(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            a3,
            0x2Fu,
            v23,
            i,
            v11,
            v13,
            a3,
            v14,
            v15);
        v11 = v13;
        *(_DWORD *)(a1 + 4LL * i + 328) = v13;
      }
      v6 = v11;
    }
    if ( *(_DWORD *)(a1 + 340) )
    {
      return 1;
    }
    else
    {
      v19 = 0;
      v20 = byte_1400753E8;
      if ( a1 )
      {
        v21 = *(_QWORD *)(a1 + 8);
        v19 = a1;
        if ( (v21 & 0x200000000000LL) != 0 )
        {
          v4 = *(const char **)(a1 + 608);
          if ( (v21 & 0x400000000000LL) != 0 )
            v20 = *(const char **)(a1 + 616);
        }
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_dqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          0x10u,
          0x30u,
          (__int64)&WPP_667aea33661b3b69513e94c68b16346f_Traceguids,
          0,
          v19,
          v4,
          v20);
    }
  }
  else
  {
    v7 = 0;
    v8 = byte_1400753E8;
    if ( a1 )
    {
      v9 = *(_QWORD *)(a1 + 8);
      v7 = a1;
      if ( (v9 & 0x200000000000LL) != 0 )
      {
        v4 = *(const char **)(a1 + 608);
        if ( (v9 & 0x400000000000LL) != 0 )
          v8 = *(const char **)(a1 + 616);
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0x10u,
        0x2Du,
        (__int64)&WPP_667aea33661b3b69513e94c68b16346f_Traceguids,
        0,
        v7,
        v4,
        v8);
  }
  return v3;
}
