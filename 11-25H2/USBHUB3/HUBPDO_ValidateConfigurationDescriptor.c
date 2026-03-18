/*
 * XREFs of HUBPDO_ValidateConfigurationDescriptor @ 0x14001BE34
 * Callers:
 *     HUBPDO_ValidateSelectConfigUrb @ 0x14001C038 (HUBPDO_ValidateSelectConfigUrb.c)
 * Callees:
 *     WPP_RECORDER_SF_dD @ 0x1400025E4 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_ @ 0x14000698C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_c @ 0x140006A64 (WPP_RECORDER_SF_c.c)
 *     HUBDESC_ValidateConfigurationDescriptorSet @ 0x14003D35C (HUBDESC_ValidateConfigurationDescriptorSet.c)
 *     _guard_dispatch_icall @ 0x140045D00 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBPDO_ValidateConfigurationDescriptor(__int64 a1, unsigned __int8 *a2, int a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rax
  __int16 v8; // cx
  unsigned __int8 v9; // r8
  int v10; // ecx
  bool v11; // cf
  __int64 v12; // rcx
  bool v13; // zf
  int v15; // edx
  _WORD v17[2]; // [rsp+40h] [rbp-40h] BYREF
  int v18; // [rsp+44h] [rbp-3Ch]
  __int64 v19; // [rsp+48h] [rbp-38h]
  int v20; // [rsp+50h] [rbp-30h]
  int v21; // [rsp+54h] [rbp-2Ch]
  void *v22; // [rsp+58h] [rbp-28h]
  void *v23; // [rsp+60h] [rbp-20h]
  __int64 v24; // [rsp+68h] [rbp-18h]
  _BOOL8 v25; // [rsp+70h] [rbp-10h]

  v6 = 0;
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_14006C1E8);
  v8 = *(_WORD *)(a1 + 1990);
  v9 = a2[1];
  v19 = 0LL;
  v17[0] = v8;
  v18 = *(_DWORD *)(a1 + 172);
  v10 = *(_DWORD *)(v7 + 4);
  v25 = 0LL;
  *(_WORD *)((char *)&v19 + 5) = (v10 & 0x20) != 0;
  v17[1] = 0;
  HIBYTE(v19) = (v10 & 0x2000) != 0;
  v11 = (v10 & 0x4000) != 0;
  v12 = *(_QWORD *)(a1 + 8);
  v13 = (*(_DWORD *)(a1 + 1644) & 0x200000) == 0;
  BYTE4(v19) = v11;
  v21 = 0;
  v25 = !v13;
  v20 = *(_DWORD *)(v12 + 220);
  v22 = &HUBMISC_LogDescriptorValidationErrorForDevice;
  v23 = &HUBMISC_LogDescriptorValidationWarningForDevice;
  v24 = a1;
  if ( v9 != 2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_c(
        *(_QWORD *)(v12 + 1432),
        2u,
        5u,
        0x18u,
        (__int64)&WPP_31a10eb015d93b042fda7856b1df3354_Traceguids,
        v9);
    return (unsigned int)-1073737984;
  }
  v15 = *a2;
  if ( (unsigned __int8)v15 < 9u )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dD(
        *(_QWORD *)(v12 + 1432),
        2u,
        5u,
        0x19u,
        (__int64)&WPP_31a10eb015d93b042fda7856b1df3354_Traceguids,
        *a2,
        9);
    return (unsigned int)-1073737984;
  }
  if ( !*((_WORD *)a2 + 1) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v15) = 2;
      WPP_RECORDER_SF_(*(_QWORD *)(v12 + 1432), v15, 5, 26, (__int64)&WPP_31a10eb015d93b042fda7856b1df3354_Traceguids);
    }
    return (unsigned int)-1073737984;
  }
  if ( !(unsigned __int8)HUBDESC_ValidateConfigurationDescriptorSet(
                           (_DWORD)a2,
                           a3,
                           (unsigned int)v17,
                           *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
                           0LL) )
    return (unsigned int)-1073737984;
  return v6;
}
