/*
 * XREFs of HUBDESC_Validate30HubDescriptor @ 0x14003C9EC
 * Callers:
 *     HUBHSM_ValidatingAndParsingHubDescriptor @ 0x14000A250 (HUBHSM_ValidatingAndParsingHubDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x14000698C (WPP_RECORDER_SF_.c)
 *     HUBDESC_ShouldEnforceWin8ValidationMutable @ 0x14003C58C (HUBDESC_ShouldEnforceWin8ValidationMutable.c)
 *     _guard_dispatch_icall @ 0x140045D00 (_guard_dispatch_icall.c)
 */

char __fastcall HUBDESC_Validate30HubDescriptor(unsigned __int8 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // edi
  void (__fastcall **v8)(_QWORD, __int64); // rbx
  _QWORD *v9; // r12
  void (__fastcall **v10)(_QWORD, __int64); // r15
  int v11; // eax
  _QWORD *v12; // r15
  void (__fastcall **v13)(_QWORD, __int64); // r14
  unsigned __int8 *v14; // r12
  unsigned int v15; // ebx
  unsigned __int8 *v16; // rbx
  char v17; // r14
  __int64 v19; // [rsp+28h] [rbp-40h]
  _QWORD *v20; // [rsp+30h] [rbp-38h]
  unsigned __int8 *v22; // [rsp+70h] [rbp+8h]

  v4 = 0;
  if ( !a1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(a4, 2, 5, 284, (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids);
LABEL_56:
    v17 = 0;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(a4, 2, 5, 296, (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids);
    return v17;
  }
  if ( *a1 >= 0xCu )
  {
    v8 = (void (__fastcall **)(_QWORD, __int64))(a3 + 24);
    v9 = (_QWORD *)(a3 + 40);
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(a4, 2u, 5u, 0x11Eu, (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids, *a1);
    v8 = (void (__fastcall **)(_QWORD, __int64))(a3 + 24);
    v9 = (_QWORD *)(a3 + 40);
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 12LL);
    v4 = 2;
  }
  if ( *a1 > 0xCu )
  {
    v10 = v8;
    v20 = v9;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v19) = *a1;
      WPP_RECORDER_SF_d(a4, 2u, 5u, 0x11Fu, (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids, v19);
      v20 = (_QWORD *)(a3 + 40);
      v10 = (void (__fastcall **)(_QWORD, __int64))(a3 + 24);
    }
    (*v8)(*v9, 11LL);
    if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a3) )
    {
      v9 = v20;
      v4 = 2;
      v8 = v10;
    }
  }
  v11 = a1[1];
  v12 = v9;
  v13 = v8;
  if ( (_BYTE)v11 != 42 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v19) = v11;
      WPP_RECORDER_SF_d(a4, 2u, 5u, 0x120u, (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids, v19);
      v13 = (void (__fastcall **)(_QWORD, __int64))(a3 + 24);
      v12 = (_QWORD *)(a3 + 40);
    }
    (*v8)(*v9, 16LL);
    v4 = 2;
  }
  if ( a1[2] > 0xFu )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v19) = a1[2];
      WPP_RECORDER_SF_d(a4, 2u, 5u, 0x121u, (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids, v19);
      v8 = v13;
      v9 = v12;
    }
    (*v8)(*v9, 17LL);
    v13 = v8;
    v4 = 2;
    v12 = v9;
  }
  v14 = a1;
  if ( !a1[2] )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v19) = 0;
      WPP_RECORDER_SF_d(a4, 2u, 5u, 0x122u, (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids, v19);
    }
    (*v13)(*v12, 18LL);
    v13 = (void (__fastcall **)(_QWORD, __int64))(a3 + 24);
    v4 = 2;
    v12 = (_QWORD *)(a3 + 40);
  }
  v15 = *(unsigned __int16 *)(a1 + 3);
  if ( (v15 & 2) != 0 )
  {
    if ( *(_BYTE *)(a3 + 15) )
      v4 = 2;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v19) = *(unsigned __int16 *)(a1 + 3);
      WPP_RECORDER_SF_d(a4, 2u, 5u, 0x123u, (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids, v19);
    }
    v13 = (void (__fastcall **)(_QWORD, __int64))(a3 + 24);
    v12 = (_QWORD *)(a3 + 40);
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 19LL);
  }
  if ( v15 >= 0x20 )
  {
    if ( *(_BYTE *)(a3 + 15) )
      v4 = 2;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v19) = v15;
      WPP_RECORDER_SF_d(a4, 2u, 5u, 0x124u, (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids, v19);
    }
    (*v13)(*v12, 19LL);
    v13 = (void (__fastcall **)(_QWORD, __int64))(a3 + 24);
    v12 = (_QWORD *)(a3 + 40);
  }
  if ( a1[7] >= 0xBu )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v19) = a1[7];
      WPP_RECORDER_SF_d(a4, 2u, 5u, 0x125u, (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids, v19);
    }
    v13 = (void (__fastcall **)(_QWORD, __int64))(a3 + 24);
    v12 = (_QWORD *)(a3 + 40);
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 10LL);
    if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a3) )
      v4 = 2;
  }
  v16 = a1 + 10;
  if ( (a1[10] & 1) != 0 )
  {
    if ( *(_BYTE *)(a3 + 15) )
      v4 = 2;
    v22 = a1 + 10;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_(a4, 2, 5, 294, (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids);
      v16 = v22;
    }
    (*v13)(*v12, 15LL);
  }
  v17 = 1;
  if ( ((unsigned __int16)(-1 << (v14[2] + 1)) & *(_WORD *)v16) != 0 )
  {
    if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a3) )
      v4 = 2;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(a4, 2, 5, 295, (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids);
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 14LL);
  }
  if ( v4 )
    goto LABEL_56;
  return v17;
}
