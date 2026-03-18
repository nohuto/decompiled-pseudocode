/*
 * XREFs of HUBDESC_InternalValidateCommonDescriptorHeader @ 0x140036594
 * Callers:
 *     HUBDESC_ValidateBOSDescriptorSet @ 0x14003CE94 (HUBDESC_ValidateBOSDescriptorSet.c)
 *     HUBDESC_ValidateConfigurationDescriptorSet @ 0x14003D35C (HUBDESC_ValidateConfigurationDescriptorSet.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dD @ 0x1400025E4 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_ @ 0x14000698C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_DDD @ 0x14001D540 (WPP_RECORDER_SF_DDD.c)
 *     WPP_RECORDER_SF_DDDD @ 0x14002E284 (WPP_RECORDER_SF_DDDD.c)
 *     _guard_dispatch_icall @ 0x140045D00 (_guard_dispatch_icall.c)
 */

char __fastcall HUBDESC_InternalValidateCommonDescriptorHeader(
        unsigned __int8 *a1,
        __int64 a2,
        unsigned int *a3,
        int *a4,
        __int64 a5)
{
  int *v5; // rdi
  __int64 v6; // rbx
  int v8; // r15d
  unsigned int v9; // r13d
  char v10; // r12
  unsigned int v11; // ebp
  __int64 v12; // rdx
  unsigned int v13; // eax
  __int64 v15; // [rsp+28h] [rbp-60h]
  __int64 v16; // [rsp+30h] [rbp-58h]
  __int64 v17; // [rsp+38h] [rbp-50h]
  int v18; // [rsp+90h] [rbp+8h] BYREF
  unsigned int *v19; // [rsp+A0h] [rbp+18h]

  v19 = a3;
  v5 = a4;
  v18 = 0;
  v6 = a2;
  if ( a4 )
  {
    if ( *(_BYTE *)(a2 + 48) )
      *a4 = 0;
  }
  else
  {
    v5 = &v18;
  }
  v8 = (_DWORD)a1 - *(_DWORD *)(a2 + 56);
  v9 = *(_DWORD *)(a2 + 64) - (_DWORD)a1;
  v10 = 1;
  v11 = *(_DWORD *)(a2 + 72) - v8;
  *a3 = 0;
  if ( v11 < 2 )
  {
    *v5 = 1;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dD(a5, 2u, 5u, 0xDu, (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids, v11, 2);
    v12 = 90LL;
LABEL_31:
    (*(void (__fastcall **)(_QWORD, __int64))(v6 + 24))(*(_QWORD *)(v6 + 40), v12);
    goto LABEL_32;
  }
  v13 = *a1;
  *a3 = v13;
  if ( v13 > v11 )
  {
    *v5 = 2;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DDDD(
        a5,
        2u,
        5u,
        0xEu,
        (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids,
        *a1,
        v8,
        v11,
        v11);
    (*(void (__fastcall **)(_QWORD, __int64))(v6 + 24))(*(_QWORD *)(v6 + 40), 87LL);
    *v19 = v11;
  }
  if ( *a1 > v9 )
  {
    *v5 = 2;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v17) = v9;
      LODWORD(v16) = v8;
      LODWORD(v15) = *a1;
      WPP_RECORDER_SF_DDD(
        a5,
        2u,
        (__int64)a3,
        0xFu,
        (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids,
        v15,
        v16,
        v17);
    }
    (*(void (__fastcall **)(_QWORD, __int64))(v6 + 24))(*(_QWORD *)(v6 + 40), 88LL);
  }
  if ( *a1 < 2u )
  {
    if ( *(_WORD *)v6 > 0x200u || *(_BYTE *)(v6 + 12) )
      *v5 = 2;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v17) = 2;
      LODWORD(v16) = v8;
      LODWORD(v15) = *a1;
      WPP_RECORDER_SF_DDD(
        a5,
        2u,
        (__int64)a3,
        0x10u,
        (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids,
        v15,
        v16,
        v17);
    }
    (*(void (__fastcall **)(_QWORD, __int64))(v6 + 24))(*(_QWORD *)(v6 + 40), 89LL);
  }
  if ( !*a1 )
  {
    if ( *(_WORD *)v6 > 0x200u || *(_BYTE *)(v6 + 12) )
      *v5 = 1;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v15) = v8;
      WPP_RECORDER_SF_d(a5, 2u, 5u, 0x11u, (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids, v15);
    }
    v12 = 91LL;
    goto LABEL_31;
  }
LABEL_32:
  if ( *v5 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 2;
      WPP_RECORDER_SF_(a5, a2, 5, 18, (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids);
    }
    return 0;
  }
  return v10;
}
