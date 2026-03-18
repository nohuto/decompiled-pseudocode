/*
 * XREFs of HUBREG_QueryHubErrataFlags @ 0x140089C2C
 * Callers:
 *     HUBFDO_QueryHubErrataFlags @ 0x1400801E0 (HUBFDO_QueryHubErrataFlags.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x14000698C (WPP_RECORDER_SF_.c)
 *     Feature_RH1S__private_IsEnabledDeviceUsageNoInline @ 0x14000C860 (Feature_RH1S__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_RH5S__private_IsEnabledDeviceUsageNoInline @ 0x14000C8B4 (Feature_RH5S__private_IsEnabledDeviceUsageNoInline.c)
 *     HUBMISC_QueryKseDeviceFlags @ 0x140032F48 (HUBMISC_QueryKseDeviceFlags.c)
 *     _tlgWriteAgg @ 0x140045AC4 (_tlgWriteAgg.c)
 *     __security_check_cookie @ 0x140045CC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140045D00 (_guard_dispatch_icall.c)
 *     HUBREG_OpenCreateUsbflagsDeviceKey @ 0x1400886B4 (HUBREG_OpenCreateUsbflagsDeviceKey.c)
 */

__int64 __fastcall HUBREG_QueryHubErrataFlags(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  char v5; // r13
  const CHAR *v6; // r12
  const CHAR *v7; // r15
  const CHAR *v8; // r14
  _WORD *v10; // rdx
  __int64 v11; // rbx
  bool v12; // zf
  unsigned __int16 v13; // r9
  bool v14; // zf
  bool v15; // zf
  int v16; // edx
  __int64 v17; // r8
  char v18; // al
  __int64 v19; // rax
  __int64 v20; // rcx
  int v21; // ecx
  __int64 v22; // rcx
  __int64 v23; // rcx
  int v24; // eax
  __int64 v26; // [rsp+28h] [rbp-D8h]
  __int64 v27; // [rsp+38h] [rbp-C8h]
  int v28; // [rsp+80h] [rbp-80h] BYREF
  __int64 v29; // [rsp+88h] [rbp-78h] BYREF
  __int64 v30; // [rsp+90h] [rbp-70h] BYREF
  __int64 v31; // [rsp+98h] [rbp-68h] BYREF
  __int64 v32; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v33; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v34; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v35; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v36; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v37; // [rsp+C8h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v38; // [rsp+D0h] [rbp-30h] BYREF
  __int64 *v39; // [rsp+F0h] [rbp-10h]
  __int64 v40; // [rsp+F8h] [rbp-8h]
  const CHAR *v41; // [rsp+100h] [rbp+0h]
  int v42; // [rsp+108h] [rbp+8h]
  int v43; // [rsp+10Ch] [rbp+Ch]
  const CHAR *v44; // [rsp+110h] [rbp+10h]
  int v45; // [rsp+118h] [rbp+18h]
  int v46; // [rsp+11Ch] [rbp+1Ch]
  const CHAR *v47; // [rsp+120h] [rbp+20h]
  int v48; // [rsp+128h] [rbp+28h]
  int v49; // [rsp+12Ch] [rbp+2Ch]
  __int64 *v50; // [rsp+130h] [rbp+30h]
  __int64 v51; // [rsp+138h] [rbp+38h]

  v4 = 0;
  v5 = *(_BYTE *)(a1 + 200);
  v6 = (const CHAR *)a4;
  v27 = *(_QWORD *)(a1 + 2528);
  v7 = (const CHAR *)a3;
  v8 = (const CHAR *)a2;
  v29 = 0LL;
  HUBREG_OpenCreateUsbflagsDeviceKey(a2, a3, a4, 0x20019u, 0LL, &v29, 0, v27);
  v12 = *(_DWORD *)(a1 + 168) == 3;
  v35 = 0LL;
  v34 = 0LL;
  v33 = 0LL;
  v32 = 0LL;
  v31 = 0LL;
  v30 = 0LL;
  if ( v12 && (v10 = *(_WORD **)(a1 + 176)) != 0LL )
    HUBMISC_QueryKseDeviceFlags(
      0LL,
      (__int64)v8,
      (__int64)v7,
      (__int64)v6,
      v10,
      *(_WORD **)(a1 + 184),
      *(_WORD **)(a1 + 192),
      &v35,
      &v34,
      &v33,
      &v32,
      &v31,
      &v30,
      0LL,
      *(_BYTE *)(a1 + 240) == 0,
      *(_QWORD *)(a1 + 2528));
  else
    HUBMISC_QueryKseDeviceFlags(
      0LL,
      (__int64)v8,
      (__int64)v7,
      (__int64)v6,
      0LL,
      0LL,
      0LL,
      &v35,
      &v34,
      &v33,
      &v32,
      &v31,
      &v30,
      0LL,
      *(_BYTE *)(a1 + 240) == 0,
      *(_QWORD *)(a1 + 2528));
  v11 = v35 | v34 | v33 | v32 | v31 | v30;
  v28 = 0;
  if ( v29 )
  {
    v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
           WdfDriverGlobals,
           v29,
           &g_ResetTTOnCancel,
           4LL,
           &v28,
           0LL,
           0LL);
    if ( v4 >= 0 )
    {
      v4 = 0;
      v12 = v28 == 0;
      goto LABEL_14;
    }
    if ( v4 != -1073741772 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_113;
      v13 = 38;
      goto LABEL_11;
    }
    v4 = 0;
  }
  v12 = (v11 & 0x100) == 0;
LABEL_14:
  if ( !v12 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x800u);
  v28 = 0;
  if ( v29 )
  {
    v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
           WdfDriverGlobals,
           v29,
           L".0",
           4LL,
           &v28,
           0LL,
           0LL);
    if ( v4 >= 0 )
    {
      v4 = 0;
      v14 = v28 == 0;
      goto LABEL_24;
    }
    if ( v4 != -1073741772 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_113;
      v13 = 39;
      goto LABEL_11;
    }
    v4 = 0;
  }
  v14 = (v11 & 0x200) == 0;
LABEL_24:
  if ( !v14 )
  {
    _InterlockedAnd((volatile signed __int32 *)(a1 + 40), 0xFFFFF7FF);
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x1000u);
  }
  if ( (v11 & 0x800) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x2000u);
  v28 = 0;
  if ( !v29 )
    goto LABEL_35;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
         WdfDriverGlobals,
         v29,
         &g_DisableLpm,
         4LL,
         &v28,
         0LL,
         0LL);
  if ( v4 < 0 )
  {
    if ( v4 != -1073741772 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_113;
      v13 = 40;
LABEL_11:
      LODWORD(v26) = v4;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 2528),
        2u,
        3u,
        v13,
        (__int64)&WPP_6348287eaa4439ce1c5af6747761b290_Traceguids,
        v26);
      goto LABEL_113;
    }
    v4 = 0;
LABEL_35:
    v15 = (v11 & 0x1000) == 0;
    goto LABEL_36;
  }
  v4 = 0;
  v15 = v28 == 0;
LABEL_36:
  if ( !v15 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x8000u);
  if ( (v11 & 0x2000) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x10000u);
  if ( (v11 & 0x8000) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x80000u);
  if ( (v11 & 0x40000) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x100000u);
  if ( (v11 & 0x100000) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x200000u);
  if ( (v11 & 0x400000) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x800000u);
  if ( (v11 & 0x2000000) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x1000000u);
  if ( (v11 & 0x4000000) != 0 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2504), 1u);
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x8000u);
  }
  if ( (v11 & 0x40000000000LL) != 0 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2504), 4u);
    _InterlockedOr((volatile signed __int32 *)(a1 + 2504), 1u);
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x8000u);
  }
  if ( !*(_BYTE *)(a1 + 240) && (v11 & 0x10000) != 0 )
    *(_DWORD *)(a1 + 2504) |= 1u;
  if ( (v11 & 0x10000000) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x2000000u);
  if ( (v11 & 0x8000000000LL) != 0 && v5 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 44), 1u);
  if ( (v11 & 0x20000000) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x10000000u);
  if ( (v11 & 0x100000000000LL) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 44), 8u);
  if ( (v11 & 0x20000000000LL) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 44), 4u);
  _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x40000000u);
  if ( (v11 & 8) != 0 )
    _InterlockedAnd((volatile signed __int32 *)(a1 + 40), 0xBFFFFFFF);
  if ( (v11 & 0x800000000LL) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x80000000);
  if ( (v11 & 0x10000000000LL) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 44), 2u);
  if ( (v11 & 0x200000000000LL) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 44), 0x10u);
  if ( (v11 & 0x400000000000LL) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 44), 0x40u);
  if ( (v11 & 0x1000000000000LL) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 44), 0x80u);
  if ( (unsigned int)Feature_RH1S__private_IsEnabledDeviceUsageNoInline() && (v11 & 0x2000000000000LL) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 44), 0x400u);
  if ( (unsigned int)Feature_RH5S__private_IsEnabledDeviceUsageNoInline() && (v11 & 0x4000000000000LL) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 44), 0x800u);
  if ( *(_WORD *)(a1 + 2472) == 8457 && *(_WORD *)(a1 + 2474) == 2064 && (unsigned __int8)*(_WORD *)(a1 + 2476) < 0x89u )
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x800000u);
  if ( (*(_DWORD *)(a1 + 40) & 0x800000) != 0 )
  {
    if ( (unsigned int)dword_14006C1F8 > 5 )
    {
      v16 = 4;
      if ( (qword_14006C208 & 0x200000000004LL) == 0
        || (v18 = 1, (qword_14006C210 & 0x200000000004LL) != qword_14006C210) )
      {
        v18 = 0;
      }
      if ( v18 )
      {
        v36 = 1LL;
        v39 = &v36;
        v19 = -1LL;
        v40 = 8LL;
        if ( v8 )
        {
          v20 = -1LL;
          do
            ++v20;
          while ( v8[v20] );
          v21 = v20 + 1;
        }
        else
        {
          v8 = File;
          v21 = 1;
        }
        v41 = v8;
        v42 = v21;
        v43 = 0;
        if ( v7 )
        {
          v22 = -1LL;
          do
            ++v22;
          while ( v7[v22] );
          v23 = (unsigned int)(v22 + 1);
        }
        else
        {
          v7 = File;
          v23 = 1LL;
        }
        v44 = v7;
        v45 = v23;
        v46 = 0;
        if ( v6 )
        {
          do
            ++v19;
          while ( v6[v19] );
          v24 = v19 + 1;
        }
        else
        {
          v6 = File;
          v24 = 1;
        }
        v48 = v24;
        v47 = v6;
        v50 = &v37;
        v49 = 0;
        v37 = 16779264LL;
        v51 = 8LL;
        tlgWriteAgg(v23, byte_140067FBE, v17, 7u, &v38);
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v16) = 4;
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2528), v16, 3, 41, (__int64)&WPP_6348287eaa4439ce1c5af6747761b290_Traceguids);
    }
  }
LABEL_113:
  if ( v29 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  return (unsigned int)v4;
}
