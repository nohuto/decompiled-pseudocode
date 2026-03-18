/*
 * XREFs of HUBFDO_RegisterSleepstudyBlockerReasons @ 0x1400804F0
 * Callers:
 *     HUBFDO_EvtDevicePrepareHardware @ 0x14007B8E0 (HUBFDO_EvtDevicePrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline @ 0x140044EF0 (Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline.c)
 *     SleepstudyHelper_GenerateGuid @ 0x140045054 (SleepstudyHelper_GenerateGuid.c)
 *     __security_check_cookie @ 0x140045CC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140045D00 (_guard_dispatch_icall.c)
 *     HUBFDO_RegisterSleepstudyBlockerReason @ 0x14008039C (HUBFDO_RegisterSleepstudyBlockerReason.c)
 *     HUBFDO_UnregisterSleepstudyBlockerReasons @ 0x14008090C (HUBFDO_UnregisterSleepstudyBlockerReasons.c)
 */

__int64 __fastcall HUBFDO_RegisterSleepstudyBlockerReasons(__int64 a1, __int64 a2)
{
  int v4; // ebx
  const wchar_t *v5; // r8
  unsigned __int64 v6; // r9
  __int16 v7; // cx
  __int64 v8; // rdx
  __int64 v9; // r10
  unsigned __int16 v10; // r9
  __int64 v12; // [rsp+28h] [rbp-D8h]
  __int64 v13; // [rsp+30h] [rbp-D0h] BYREF
  char *v14; // [rsp+38h] [rbp-C8h]
  __int128 v15; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v16; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v17; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v18; // [rsp+70h] [rbp-90h] BYREF
  __int128 v19; // [rsp+80h] [rbp-80h] BYREF
  __int128 v20; // [rsp+90h] [rbp-70h] BYREF
  char v21; // [rsp+A0h] [rbp-60h] BYREF

  v13 = 0x2000000LL;
  v14 = &v21;
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  SleepstudyHelper_GenerateGuid(0LL, a1, (GUID *)&v17);
  if ( qword_14006FDE0 )
    v4 = qword_14006FDE0(a1, &v13);
  else
    v4 = -1073741637;
  if ( !(unsigned int)Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline() && v4 == -1073741637 )
  {
    if ( (v13 & 1) != 0
      || (v13 & 0x10000) != 0
      || (unsigned __int16)v13 > WORD1(v13)
      || WORD1(v13) == 0xFFFF
      || !v14 && (_DWORD)v13 )
    {
      v4 = -1073741811;
    }
    else
    {
      v5 = L"Sleepstudy Unsupported";
      v6 = (unsigned __int64)WORD1(v13) >> 1;
      v7 = 0;
      if ( L"Sleepstudy Unsupported" )
      {
        v4 = 0;
        v8 = 22LL;
        if ( v6 )
        {
          v9 = v14 - (char *)L"Sleepstudy Unsupported";
          while ( v8 )
          {
            --v8;
            *(const wchar_t *)((char *)v5 + v9) = *v5;
            ++v7;
            ++v5;
            if ( !--v6 )
              goto LABEL_18;
          }
        }
        else
        {
LABEL_18:
          if ( v8 )
            v4 = -2147483643;
        }
      }
      else
      {
        v4 = -1073741811;
      }
      LOWORD(v13) = 2 * v7;
    }
  }
  if ( v4 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v10 = 108;
LABEL_34:
      LODWORD(v12) = v4;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a2 + 2528),
        2u,
        2u,
        v10,
        (__int64)&WPP_15d974077bc73d0eebd93ea2bffbd60f_Traceguids,
        v12,
        v13);
      goto LABEL_35;
    }
    goto LABEL_35;
  }
  SleepstudyHelper_GenerateGuid(7LL, a1 + 336, (GUID *)&v18);
  v15 = v18;
  v16 = v17;
  v4 = HUBFDO_RegisterSleepstudyBlockerReason(
         a2,
         &v16,
         (__int64)&v13,
         &v15,
         (__int64)L"Suspend unsupported by parent",
         a2 + 2624);
  if ( v4 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v10 = 109;
      goto LABEL_34;
    }
LABEL_35:
    HUBFDO_UnregisterSleepstudyBlockerReasons(a2);
    return (unsigned int)v4;
  }
  SleepstudyHelper_GenerateGuid(7LL, a1 + 672, (GUID *)&v19);
  v16 = v19;
  v15 = v17;
  v4 = HUBFDO_RegisterSleepstudyBlockerReason(
         a2,
         &v15,
         (__int64)&v13,
         &v16,
         (__int64)L"Suspend unsupported by hardware",
         a2 + 2632);
  if ( v4 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v10 = 110;
      goto LABEL_34;
    }
    goto LABEL_35;
  }
  SleepstudyHelper_GenerateGuid(7LL, a1 + 1008, (GUID *)&v20);
  v16 = v20;
  v15 = v17;
  v4 = HUBFDO_RegisterSleepstudyBlockerReason(
         a2,
         &v15,
         (__int64)&v13,
         &v16,
         (__int64)L"Selective Suspend Disabled By User",
         a2 + 2640);
  if ( v4 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v10 = 111;
      goto LABEL_34;
    }
    goto LABEL_35;
  }
  return (unsigned int)v4;
}
