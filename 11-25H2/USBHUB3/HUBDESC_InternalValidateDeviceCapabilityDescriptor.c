/*
 * XREFs of HUBDESC_InternalValidateDeviceCapabilityDescriptor @ 0x140036ED4
 * Callers:
 *     HUBDESC_ValidateBOSDescriptorSet @ 0x14003CE94 (HUBDESC_ValidateBOSDescriptorSet.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x14000698C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_DDD @ 0x14001D540 (WPP_RECORDER_SF_DDD.c)
 *     WPP_RECORDER_SF_DDDD @ 0x14002E284 (WPP_RECORDER_SF_DDDD.c)
 *     HUBDESC_InternalValidateBillboardCapabilityDescriptor @ 0x1400362DC (HUBDESC_InternalValidateBillboardCapabilityDescriptor.c)
 *     HUBDESC_InternalValidateContainerIDCapabilityDescriptor @ 0x140036BE0 (HUBDESC_InternalValidateContainerIDCapabilityDescriptor.c)
 *     HUBDESC_InternalValidateFirmwareStatusCapabilityDescriptor @ 0x14003870C (HUBDESC_InternalValidateFirmwareStatusCapabilityDescriptor.c)
 *     HUBDESC_InternalValidatePlatformCapabilityDescriptor @ 0x1400396A0 (HUBDESC_InternalValidatePlatformCapabilityDescriptor.c)
 *     HUBDESC_InternalValidatePowerDeliveryCapabilityDescriptor @ 0x140039CB8 (HUBDESC_InternalValidatePowerDeliveryCapabilityDescriptor.c)
 *     HUBDESC_InternalValidateSuperSpeedDeviceCapabilityDescriptor @ 0x14003A2F0 (HUBDESC_InternalValidateSuperSpeedDeviceCapabilityDescriptor.c)
 *     HUBDESC_InternalValidateSuperSpeedPlusDeviceCapabilityDescriptor @ 0x14003B2F4 (HUBDESC_InternalValidateSuperSpeedPlusDeviceCapabilityDescriptor.c)
 *     HUBDESC_InternalValidateUSB20DeviceCapabilityDescriptor @ 0x14003BF90 (HUBDESC_InternalValidateUSB20DeviceCapabilityDescriptor.c)
 *     _guard_dispatch_icall @ 0x140045D00 (_guard_dispatch_icall.c)
 */

char __fastcall HUBDESC_InternalValidateDeviceCapabilityDescriptor(
        unsigned __int8 *a1,
        __int64 a2,
        unsigned int *a3,
        int *a4,
        _WORD *a5,
        _WORD *a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11)
{
  int *v11; // rdi
  __int64 v16; // rdx
  unsigned int v17; // eax
  int v18; // ecx
  char v19; // r12
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  unsigned __int8 **v26; // rax
  int v28; // [rsp+50h] [rbp-38h] BYREF
  unsigned int v29; // [rsp+90h] [rbp+8h]
  int v30; // [rsp+B0h] [rbp+28h]

  v11 = a4;
  v28 = 0;
  if ( a4 )
  {
    if ( *(_BYTE *)(a2 + 48) )
      *a4 = 0;
  }
  else
  {
    v11 = &v28;
  }
  if ( a5 )
    *a5 = 0;
  v16 = (__int64)a6;
  if ( a6 )
    *a6 = 0;
  v17 = *a1;
  v18 = (_DWORD)a1 - *(_DWORD *)(a2 + 56);
  v19 = 1;
  *a3 = v17;
  v30 = v18;
  v29 = *(_DWORD *)(a2 + 72) - v18;
  if ( (unsigned __int8)v17 >= 3u )
  {
    if ( (unsigned int)(*(_DWORD *)(a2 + 72) - v18) < 3 )
    {
      if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) )
        *v11 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_d(a11, 2u, 5u, 0xDAu, (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids, v18);
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 73LL);
      goto LABEL_66;
    }
LABEL_14:
    if ( a1[2] == 2 )
    {
      HUBDESC_InternalValidateUSB20DeviceCapabilityDescriptor((_DWORD)a1, a2, (_DWORD)a3, (_DWORD)v11, a8, a11);
      if ( *v11 == 1 )
        goto LABEL_66;
      v26 = *(unsigned __int8 ***)(a2 + 80);
      if ( !*v26 )
      {
        *v26 = a1;
        goto LABEL_66;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v16) = 2;
        WPP_RECORDER_SF_(a11, v16, 5, 219, (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids);
      }
      v22 = 76LL;
      goto LABEL_37;
    }
    if ( a1[2] == 3 )
    {
      HUBDESC_InternalValidateSuperSpeedDeviceCapabilityDescriptor(
        (_DWORD)a1,
        a2,
        (_DWORD)a3,
        (_DWORD)v11,
        (__int64)a5,
        v16,
        a7,
        a11);
      if ( *v11 == 1 )
        goto LABEL_66;
      v25 = *(_QWORD *)(a2 + 80);
      if ( !*(_QWORD *)(v25 + 8) )
      {
        *(_QWORD *)(v25 + 8) = a1;
        goto LABEL_66;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v16) = 2;
        WPP_RECORDER_SF_(a11, v16, 5, 220, (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids);
      }
      v22 = 75LL;
      goto LABEL_37;
    }
    if ( a1[2] != 4 )
    {
      if ( a1[2] == 5 )
      {
        HUBDESC_InternalValidatePlatformCapabilityDescriptor((_DWORD)a1, a2, (_DWORD)a3, (_DWORD)v11, a11);
        goto LABEL_66;
      }
      if ( a1[2] == 6 )
      {
        HUBDESC_InternalValidatePowerDeliveryCapabilityDescriptor((_DWORD)a1, a2, (_DWORD)a3, (_DWORD)v11, a11);
        goto LABEL_66;
      }
      if ( a1[2] == 10 )
      {
        HUBDESC_InternalValidateSuperSpeedPlusDeviceCapabilityDescriptor((_DWORD)a1, a2, (_DWORD)a3, (_DWORD)v11, a11);
        if ( *v11 == 1 )
          goto LABEL_66;
        v23 = *(_QWORD *)(a2 + 80);
        if ( !*(_QWORD *)(v23 + 16) )
        {
          *(_QWORD *)(v23 + 16) = a1;
          goto LABEL_66;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v16) = 2;
          WPP_RECORDER_SF_(a11, v16, 5, 221, (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids);
        }
        v22 = 203LL;
      }
      else
      {
        if ( a1[2] != 13 )
        {
          if ( a1[2] == 17 )
            HUBDESC_InternalValidateFirmwareStatusCapabilityDescriptor(
              (_DWORD)a1,
              a2,
              (_DWORD)a3,
              (_DWORD)v11,
              a9,
              a10,
              a11);
          goto LABEL_66;
        }
        HUBDESC_InternalValidateBillboardCapabilityDescriptor(a1, a2, a3, v11, a11);
        if ( *v11 == 1 )
          goto LABEL_66;
        v21 = *(_QWORD *)(a2 + 80);
        if ( !*(_QWORD *)(v21 + 32) )
        {
          *(_QWORD *)(v21 + 32) = a1;
          goto LABEL_66;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v16) = 2;
          WPP_RECORDER_SF_(a11, v16, 5, 223, (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids);
        }
        v22 = 245LL;
      }
      goto LABEL_37;
    }
    HUBDESC_InternalValidateContainerIDCapabilityDescriptor(a1, a2, a3, v11, a11);
    if ( *v11 == 1 )
      goto LABEL_66;
    v24 = *(_QWORD *)(a2 + 80);
    if ( *(_QWORD *)(v24 + 24) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v16) = 2;
        WPP_RECORDER_SF_(a11, v16, 5, 222, (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids);
      }
      v22 = 74LL;
LABEL_37:
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), v22);
      *v11 = 2;
      goto LABEL_67;
    }
    if ( !*(_BYTE *)(v24 + 41) )
      *(_QWORD *)(v24 + 24) = a1;
LABEL_66:
    if ( !*v11 )
      return v19;
    goto LABEL_67;
  }
  (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 72LL);
  if ( v29 >= 3 )
  {
    *v11 = 2;
    *a3 = 3;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DDDD(
        a11,
        2u,
        5u,
        0xD8u,
        (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids,
        v30,
        *a1,
        3,
        3);
    v16 = (__int64)a6;
    goto LABEL_14;
  }
  *v11 = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_DDD(a11, 2u, v20, 0xD9u, (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids, v30, *a1, 3);
    goto LABEL_66;
  }
LABEL_67:
  v19 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v16) = 2;
    WPP_RECORDER_SF_(a11, v16, 5, 224, (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids);
  }
  return v19;
}
