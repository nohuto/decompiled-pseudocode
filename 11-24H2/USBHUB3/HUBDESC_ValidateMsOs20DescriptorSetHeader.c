/*
 * XREFs of HUBDESC_ValidateMsOs20DescriptorSetHeader @ 0x14003F310
 * Callers:
 *     HUBDESC_ValidateMsOs20ConfigurationSubset @ 0x14003ECD0 (HUBDESC_ValidateMsOs20ConfigurationSubset.c)
 *     HUBDESC_ValidateMsOs20DescriptorSet @ 0x14003EFC0 (HUBDESC_ValidateMsOs20DescriptorSet.c)
 *     HUBDESC_ValidateMsOs20FunctionSubset @ 0x14003F430 (HUBDESC_ValidateMsOs20FunctionSubset.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x14000698C (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall @ 0x140046540 (_guard_dispatch_icall.c)
 */

char __fastcall HUBDESC_ValidateMsOs20DescriptorSetHeader(__int64 a1, __int64 a2, unsigned __int16 *a3)
{
  __int64 v3; // rdi
  char v4; // si
  _QWORD *v7; // rbx

  v3 = a2;
  v4 = 0;
  LOBYTE(a2) = 1;
  v7 = (_QWORD *)(v3 + 96);
  if ( (*(_BYTE *)v3 & 2) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 2;
      WPP_RECORDER_SF_(*v7, a2, 5, 319, (__int64)&WPP_a44667569f5231a010562af7f2d218c1_Traceguids);
    }
    (*(void (__fastcall **)(_QWORD, __int64))(a1 + 24))(*(_QWORD *)(a1 + 40), 154LL);
    LOBYTE(a2) = 0;
  }
  if ( *a3 == 10 )
  {
    v4 = a2;
    if ( (_BYTE)a2 == 1 )
    {
      *(_DWORD *)v3 |= 2u;
      return v4;
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v7 = (_QWORD *)(v3 + 96);
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v3 + 96),
        2u,
        5u,
        0x140u,
        (__int64)&WPP_a44667569f5231a010562af7f2d218c1_Traceguids,
        *a3);
    }
    (*(void (__fastcall **)(_QWORD, __int64))(a1 + 24))(*(_QWORD *)(a1 + 40), 155LL);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 2;
    WPP_RECORDER_SF_(*v7, a2, 5, 321, (__int64)&WPP_a44667569f5231a010562af7f2d218c1_Traceguids);
  }
  return v4;
}
