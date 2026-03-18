/*
 * XREFs of HUBPDO_ValidateSelectConfigUrb @ 0x14001C038
 * Callers:
 *     HUBDSM_ValidatingSelectConfigUrbFromConfigured @ 0x140025DE0 (HUBDSM_ValidatingSelectConfigUrbFromConfigured.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dD @ 0x1400025E4 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_ @ 0x14000698C (WPP_RECORDER_SF_.c)
 *     HUBPDO_ValidateConfigurationDescriptor @ 0x14001BE34 (HUBPDO_ValidateConfigurationDescriptor.c)
 *     HUBMISC_VerifierDbgBreak @ 0x140033D80 (HUBMISC_VerifierDbgBreak.c)
 *     __security_check_cookie @ 0x140045CC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140045D00 (_guard_dispatch_icall.c)
 *     WMI_FireNotification @ 0x14008FB20 (WMI_FireNotification.c)
 */

__int64 __fastcall HUBPDO_ValidateSelectConfigUrb(__int64 a1)
{
  __int64 v1; // r15
  __int64 v2; // rdx
  unsigned __int16 *v4; // r12
  __int64 v5; // r13
  int v6; // edx
  int v7; // ebx
  int v8; // edi
  __int64 v9; // rax
  unsigned int v10; // ecx
  unsigned int *v11; // rdx
  unsigned int v12; // eax
  __int64 v13; // rdx
  unsigned __int16 *v14; // rcx
  unsigned __int64 v15; // r8
  unsigned int v16; // edx
  __int64 v17; // r9
  int v18; // eax
  __int64 result; // rax
  _OWORD v20[2]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v21; // [rsp+60h] [rbp-38h]

  v1 = *(_QWORD *)(a1 + 16);
  v2 = *(_QWORD *)(a1 + 456);
  memset(v20, 0, sizeof(v20));
  v21 = 0LL;
  LOWORD(v20[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    v2,
    v20);
  v4 = (unsigned __int16 *)*((_QWORD *)&v20[0] + 1);
  v5 = *(_QWORD *)(*((_QWORD *)&v20[0] + 1) + 24LL);
  if ( !v5 )
  {
    *(_DWORD *)(v1 + 36) = 0;
    return 4077LL;
  }
  v7 = HUBPDO_ValidateConfigurationDescriptor(
         a1,
         *(unsigned __int8 **)(*((_QWORD *)&v20[0] + 1) + 24LL),
         *(unsigned __int16 *)(v5 + 2));
  if ( !v7 )
  {
    v9 = *(_QWORD *)(v1 + 16);
    v10 = 2 * *(unsigned __int8 *)(v5 + 8);
    *(_DWORD *)(v1 + 36) = v10;
    v11 = (unsigned int *)(v9 + 92);
    if ( *(_BYTE *)(v9 + 240) && v10 > *v11 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v11) = 3;
        WPP_RECORDER_SF_(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
          (_DWORD)v11,
          5,
          28,
          (__int64)&WPP_31a10eb015d93b042fda7856b1df3354_Traceguids);
      }
      v8 = -1073741670;
      v7 = -1073737728;
      *(_DWORD *)(*(_QWORD *)(a1 + 8) + 1424LL) = 5;
      WMI_FireNotification(*(_QWORD *)a1, *(unsigned __int16 *)(v1 + 48), 2LL);
      goto LABEL_52;
    }
    if ( (*(_DWORD *)(a1 + 1456) & 0x800) != 0 )
    {
      v12 = 150;
      if ( *v11 != 100 )
        v12 = 900;
      if ( 8 * (unsigned int)*(unsigned __int8 *)(v5 + 8) > v12 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v11) = 3;
          WPP_RECORDER_SF_(
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
            (_DWORD)v11,
            5,
            29,
            (__int64)&WPP_31a10eb015d93b042fda7856b1df3354_Traceguids);
        }
        v13 = *(_QWORD *)(v1 + 24);
        if ( (*(_DWORD *)(v13 + 2436) & 0x1000) != 0 )
          HUBMISC_VerifierDbgBreak("DeviceHwVerifierSetConfigTooMuchPowerRequired", v13 + 504);
      }
    }
    v14 = v4 + 20;
    v15 = (unsigned __int64)v4 + *v4;
    v16 = 0;
    if ( (unsigned __int64)(v4 + 21) < v15 )
    {
      while ( v16 < *(unsigned __int8 *)(v5 + 4) )
      {
        v17 = *v14;
        if ( (unsigned int)v17 < 0x18 || (v14 = (unsigned __int16 *)((char *)v14 + v17), (unsigned __int64)v14 > v15) )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_d(
              *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
              3u,
              5u,
              0x1Eu,
              (__int64)&WPP_31a10eb015d93b042fda7856b1df3354_Traceguids,
              v17);
          goto LABEL_50;
        }
        ++v16;
        if ( (unsigned __int64)(v14 + 1) >= v15 )
          break;
      }
    }
    v18 = *(unsigned __int8 *)(v5 + 4);
    if ( (_BYTE)v18 )
    {
      if ( v16 == v18 && v16 )
        return 4077LL;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_dD(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
          3u,
          5u,
          0x20u,
          (__int64)&WPP_31a10eb015d93b042fda7856b1df3354_Traceguids,
          *(unsigned __int8 *)(v5 + 4),
          v16);
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v16) = 3;
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        v16,
        5,
        31,
        (__int64)&WPP_31a10eb015d93b042fda7856b1df3354_Traceguids);
    }
LABEL_50:
    v7 = -1073737984;
    goto LABEL_51;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 3;
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      v6,
      5,
      27,
      (__int64)&WPP_31a10eb015d93b042fda7856b1df3354_Traceguids);
  }
  if ( v7 > -1073737728 )
  {
    switch ( v7 )
    {
      case -1073713152:
        v8 = -1073741810;
        goto LABEL_52;
      case -1073676288:
        v8 = -1073741536;
        goto LABEL_52;
      case 1:
        return 4077LL;
    }
    goto LABEL_51;
  }
  if ( v7 == -1073737728 )
  {
    v8 = -1073741670;
    goto LABEL_52;
  }
  if ( v7 == -2147483136 || v7 == -2147482880 || v7 == -2147482112 || v7 == -1073739264 )
  {
    v8 = -1073741811;
    goto LABEL_52;
  }
  if ( v7 != -1073738240 )
  {
LABEL_51:
    v8 = -1073741823;
    goto LABEL_52;
  }
  v8 = -1073741637;
LABEL_52:
  result = 4065LL;
  *(_DWORD *)(a1 + 1560) = v8;
  *(_DWORD *)(a1 + 1564) = v7;
  return result;
}
