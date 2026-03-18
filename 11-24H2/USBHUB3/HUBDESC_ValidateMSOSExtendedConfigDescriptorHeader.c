/*
 * XREFs of HUBDESC_ValidateMSOSExtendedConfigDescriptorHeader @ 0x14003E75C
 * Callers:
 *     HUBDSM_ValidatingMSOSExtendedConfigDescriptorHeader @ 0x1400259E0 (HUBDSM_ValidatingMSOSExtendedConfigDescriptorHeader.c)
 * Callees:
 *     WPP_RECORDER_SF_dD @ 0x1400025E4 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_ @ 0x14000698C (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall @ 0x140046540 (_guard_dispatch_icall.c)
 */

char __fastcall HUBDESC_ValidateMSOSExtendedConfigDescriptorHeader(int *a1, int a2, __int64 a3, __int64 a4)
{
  int *v6; // rax
  char v7; // bl
  int v8; // edx
  int v9; // ecx
  void (__fastcall **v10)(_QWORD, __int64); // r15
  _QWORD *v11; // r12
  int v12; // edx
  int v13; // ecx
  __int64 v15; // [rsp+28h] [rbp-50h]
  __int64 v16; // [rsp+30h] [rbp-48h]
  void (__fastcall **v17)(_QWORD, __int64); // [rsp+40h] [rbp-38h]
  _QWORD *v18; // [rsp+48h] [rbp-30h]

  v6 = a1;
  v7 = 1;
  if ( a2 != 16 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dD(a4, 2u, 5u, 0x11Eu, (__int64)&WPP_a44667569f5231a010562af7f2d218c1_Traceguids, a2, 16);
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 122LL);
LABEL_5:
    v7 = 0;
    goto LABEL_24;
  }
  v9 = *((unsigned __int16 *)a1 + 2);
  if ( (_WORD)v9 == 256 )
  {
    v10 = (void (__fastcall **)(_QWORD, __int64))(a3 + 24);
    v11 = (_QWORD *)(a3 + 40);
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dD(a4, 2u, 5u, 0x11Fu, (__int64)&WPP_a44667569f5231a010562af7f2d218c1_Traceguids, v9, 256);
    v10 = (void (__fastcall **)(_QWORD, __int64))(a3 + 24);
    v11 = (_QWORD *)(a3 + 40);
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 120LL);
    v6 = a1;
    v7 = 0;
  }
  v12 = 4;
  v17 = v10;
  v18 = v11;
  if ( *((_WORD *)v6 + 3) != 4 )
  {
    v17 = v10;
    v18 = v11;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v16) = 4;
      LODWORD(v15) = *((unsigned __int16 *)v6 + 3);
      WPP_RECORDER_SF_dD(a4, 2u, 5u, 0x120u, (__int64)&WPP_a44667569f5231a010562af7f2d218c1_Traceguids, v15, v16);
      v17 = (void (__fastcall **)(_QWORD, __int64))(a3 + 24);
      v18 = (_QWORD *)(a3 + 40);
    }
    (*v10)(*v11, 125LL);
    v6 = a1;
    v7 = 0;
  }
  v13 = *((unsigned __int8 *)v6 + 8);
  if ( (_BYTE)v13 != 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v12) = 2;
      WPP_RECORDER_SF_(a4, v12, 5, 289, (__int64)&WPP_a44667569f5231a010562af7f2d218c1_Traceguids);
      v10 = v17;
      v11 = v18;
    }
    (*v10)(*v11, 121LL);
    goto LABEL_5;
  }
  v8 = *v6;
  if ( *v6 == 40 )
  {
    if ( v7 )
      return v7;
  }
  else
  {
    v7 = 0;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v16) = 24 * v13 + 16;
      LODWORD(v15) = *v6;
      WPP_RECORDER_SF_dD(a4, 2u, 5u, 0x122u, (__int64)&WPP_a44667569f5231a010562af7f2d218c1_Traceguids, v15, v16);
    }
    (*v17)(*v18, 127LL);
  }
LABEL_24:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = 2;
    WPP_RECORDER_SF_(a4, v8, 5, 291, (__int64)&WPP_a44667569f5231a010562af7f2d218c1_Traceguids);
  }
  return v7;
}
