/*
 * XREFs of HUBDESC_InternalValidateLastEndpoint @ 0x140039A88
 * Callers:
 *     HUBDESC_InternalValidateEndpointDescriptor @ 0x1400376D8 (HUBDESC_InternalValidateEndpointDescriptor.c)
 *     HUBDESC_InternalValidateLastInterface @ 0x140039C0C (HUBDESC_InternalValidateLastInterface.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x14000698C (WPP_RECORDER_SF_.c)
 *     Feature_EUSB2__private_IsEnabledDeviceUsageNoInline @ 0x14000C860 (Feature_EUSB2__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x140046540 (_guard_dispatch_icall.c)
 */

bool __fastcall HUBDESC_InternalValidateLastEndpoint(__int64 a1, int *a2, int a3)
{
  int *v4; // rdi
  int v6; // eax
  int v7; // eax
  int v8; // edx
  int v9; // eax
  int v11; // [rsp+50h] [rbp+8h] BYREF

  v11 = 0;
  v4 = a2;
  if ( a2 )
  {
    if ( *(_BYTE *)(a1 + 48) )
      *a2 = 0;
  }
  else
  {
    v4 = &v11;
  }
  v6 = *(_DWORD *)(a1 + 256);
  if ( (v6 & 2) != 0 )
  {
    if ( *(_DWORD *)(a1 + 4) == 3 )
    {
      if ( (v6 & 0x20) == 0 )
      {
        *v4 = 2;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(a2) = 2;
          WPP_RECORDER_SF_(a3, (_DWORD)a2, 5, 27, (__int64)&WPP_a44667569f5231a010562af7f2d218c1_Traceguids);
        }
        (*(void (__fastcall **)(_QWORD, __int64))(a1 + 24))(*(_QWORD *)(a1 + 40), 59LL);
      }
      v7 = *(_DWORD *)(a1 + 256);
      if ( (v7 & 8) != 0 && (v7 & 0x40) == 0 )
      {
        *v4 = 0;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(a2) = 2;
          WPP_RECORDER_SF_(a3, (_DWORD)a2, 5, 28, (__int64)&WPP_a44667569f5231a010562af7f2d218c1_Traceguids);
        }
        (*(void (__fastcall **)(_QWORD, __int64))(a1 + 24))(*(_QWORD *)(a1 + 40), 212LL);
      }
    }
    if ( (unsigned int)Feature_EUSB2__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( (unsigned __int16)(*(_WORD *)a1 - 544) <= 0xDFu )
      {
        v9 = *(_DWORD *)(a1 + 256);
        if ( (v9 & 0x10) != 0 && (v9 & 0x80u) == 0 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v8) = 3;
            WPP_RECORDER_SF_(a3, v8, 5, 29, (__int64)&WPP_a44667569f5231a010562af7f2d218c1_Traceguids);
          }
          (*(void (__fastcall **)(_QWORD, __int64))(a1 + 24))(*(_QWORD *)(a1 + 40), 273LL);
        }
      }
    }
  }
  else
  {
    *(_DWORD *)(a1 + 256) = v6 | 2;
  }
  *(_DWORD *)(a1 + 256) &= 0xFFFFFF93;
  if ( (unsigned int)Feature_EUSB2__private_IsEnabledDeviceUsageNoInline() )
    *(_DWORD *)(a1 + 256) &= 0xFFFFFF6F;
  return *v4 == 0;
}
