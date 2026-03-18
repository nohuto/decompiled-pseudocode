/*
 * XREFs of HUBDESC_InternalValidateStringDescriptor @ 0x14003A678
 * Callers:
 *     HUBDSM_ValidatingAndLoggingAlternateModeStringDescriptor @ 0x140025180 (HUBDSM_ValidatingAndLoggingAlternateModeStringDescriptor.c)
 *     HUBDSM_ValidatingAndLoggingBillboardStringDescriptor @ 0x140025310 (HUBDSM_ValidatingAndLoggingBillboardStringDescriptor.c)
 *     HUBDTX_ValidateAndCacheLanguageIdStringDescriptor @ 0x14002D49C (HUBDTX_ValidateAndCacheLanguageIdStringDescriptor.c)
 *     HUBDTX_ValidateAndCacheProductIdStringDescriptor @ 0x14002D820 (HUBDTX_ValidateAndCacheProductIdStringDescriptor.c)
 *     HUBDTX_ValidateAndCacheSerialNumberStringDescriptor @ 0x14002D9F8 (HUBDTX_ValidateAndCacheSerialNumberStringDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dD @ 0x1400025E4 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_ @ 0x14000698C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_Ddd @ 0x14003FF78 (WPP_RECORDER_SF_Ddd.c)
 *     _guard_dispatch_icall @ 0x140046540 (_guard_dispatch_icall.c)
 */

char __fastcall HUBDESC_InternalValidateStringDescriptor(
        unsigned __int8 *a1,
        unsigned int a2,
        unsigned int *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  int v7; // ebp
  int v8; // edx
  unsigned int v9; // eax
  void (__fastcall **v10)(_QWORD, __int64); // r14
  _QWORD *v11; // r15
  unsigned __int8 *v12; // rax
  void (__fastcall **v13)(_QWORD, __int64); // r12
  _QWORD *v14; // r13
  char v15; // r15
  unsigned int v16; // ecx
  __int64 v18; // [rsp+28h] [rbp-70h]
  unsigned int v20; // [rsp+28h] [rbp-70h]
  __int64 v21; // [rsp+30h] [rbp-68h]
  int v22; // [rsp+30h] [rbp-68h]
  _QWORD *v23; // [rsp+40h] [rbp-58h]
  int v25; // [rsp+A8h] [rbp+10h]
  unsigned int *v26; // [rsp+B0h] [rbp+18h]
  void (__fastcall **v27)(_QWORD, __int64); // [rsp+B8h] [rbp+20h]

  v26 = a3;
  v25 = 0;
  if ( a2 < 2 )
  {
    *a3 = 0;
    v7 = a5;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(a5, 2u, 5u, 0xFCu, (__int64)&WPP_a44667569f5231a010562af7f2d218c1_Traceguids, a2);
    (*(void (__fastcall **)(_QWORD, __int64))(a6 + 24))(*(_QWORD *)(a6 + 40), 131LL);
LABEL_27:
    v15 = 0;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = 2;
      WPP_RECORDER_SF_(v7, v8, 5, 258, (__int64)&WPP_a44667569f5231a010562af7f2d218c1_Traceguids);
    }
    return v15;
  }
  v9 = *a1;
  v7 = a5;
  *a3 = v9;
  if ( v9 <= a2 )
  {
    v10 = (void (__fastcall **)(_QWORD, __int64))(a6 + 24);
    v11 = (_QWORD *)(a6 + 40);
  }
  else
  {
    v25 = 2;
    *a3 = a2;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Ddd(a5, a2, (_DWORD)a3, 253);
    v10 = (void (__fastcall **)(_QWORD, __int64))(a6 + 24);
    v11 = (_QWORD *)(a6 + 40);
    (*(void (__fastcall **)(_QWORD, __int64))(a6 + 24))(*(_QWORD *)(a6 + 40), 129LL);
    a3 = v26;
  }
  v12 = a1;
  v13 = v10;
  v14 = v11;
  if ( *a1 <= 2u )
  {
    v25 = 2;
    *a3 = a2;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v20 = a2;
      WPP_RECORDER_SF_d(a5, 2u, 5u, 0xFEu, (__int64)&WPP_a44667569f5231a010562af7f2d218c1_Traceguids, v20);
      v13 = (void (__fastcall **)(_QWORD, __int64))(a6 + 24);
      v14 = (_QWORD *)(a6 + 40);
    }
    (*v10)(*v11, 130LL);
    v12 = a1;
  }
  if ( v12[1] != 3 )
  {
    v25 = 2;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v22 = 3;
      LODWORD(v18) = v12[1];
      WPP_RECORDER_SF_dD(a5, 2u, 5u, 0xFFu, (__int64)&WPP_a44667569f5231a010562af7f2d218c1_Traceguids, v18, v22);
      v10 = v13;
      v11 = v14;
    }
    ((void (__fastcall *)(_QWORD, __int64, unsigned int *))*v10)(*v11, 133LL, a3);
    v12 = a1;
    v13 = v10;
    v14 = v11;
  }
  v8 = *v12;
  v15 = 1;
  v27 = v13;
  v23 = v14;
  if ( (v8 & 1) != 0 )
  {
    v25 = 2;
    v16 = *v26 & 0xFFFFFFFE;
    *v26 = v16;
    v27 = v13;
    v23 = v14;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v21) = v16;
      LODWORD(v18) = v8;
      WPP_RECORDER_SF_dD(a5, 2u, 5u, 0x100u, (__int64)&WPP_a44667569f5231a010562af7f2d218c1_Traceguids, v18, v21);
      v27 = (void (__fastcall **)(_QWORD, __int64))(a6 + 24);
      v23 = (_QWORD *)(a6 + 40);
    }
    ((void (__fastcall *)(_QWORD, __int64, unsigned int *))*v13)(*v14, 128LL, a3);
    v12 = a1;
  }
  if ( *v12 != a2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v21) = a2;
      LODWORD(v18) = *v12;
      WPP_RECORDER_SF_dD(a5, 2u, 5u, 0x101u, (__int64)&WPP_a44667569f5231a010562af7f2d218c1_Traceguids, v18, v21);
      v13 = v27;
      v14 = v23;
    }
    (*v13)(*v14, 134LL);
  }
  if ( v25 )
    goto LABEL_27;
  return v15;
}
