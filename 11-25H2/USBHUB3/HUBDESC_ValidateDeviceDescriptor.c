/*
 * XREFs of HUBDESC_ValidateDeviceDescriptor @ 0x14003D71C
 * Callers:
 *     HUBDTX_ValidateAndCacheDeviceDescriptor @ 0x14002D020 (HUBDTX_ValidateAndCacheDeviceDescriptor.c)
 *     HUBDTX_ValidateFirstDeviceDescriptorFor20 @ 0x14002DBB4 (HUBDTX_ValidateFirstDeviceDescriptorFor20.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x14000698C (WPP_RECORDER_SF_.c)
 *     HUBDESC_ShouldEnforceWin8ValidationMutable @ 0x14003C58C (HUBDESC_ShouldEnforceWin8ValidationMutable.c)
 *     _guard_dispatch_icall @ 0x140045D00 (_guard_dispatch_icall.c)
 */

char __fastcall HUBDESC_ValidateDeviceDescriptor(
        unsigned __int8 *a1,
        unsigned int a2,
        __int64 a3,
        _BYTE *a4,
        __int64 a5)
{
  int v7; // r14d
  __int64 v8; // rdx
  int v9; // edx
  char v10; // bl
  void (__fastcall **v12)(_QWORD, __int64); // r13
  _QWORD *v13; // rcx
  _QWORD *v14; // r8
  __int16 v15; // cx
  int v16; // r13d
  int v17; // eax
  bool ShouldEnforceWin8ValidationMutable; // al
  __int64 v19; // rcx
  unsigned __int16 v20; // r9
  __int64 v21; // rcx
  bool v22; // al
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // [rsp+28h] [rbp-50h]
  _QWORD *v26; // [rsp+30h] [rbp-48h]
  void (__fastcall **v27)(_QWORD, __int64); // [rsp+38h] [rbp-40h]
  int v28; // [rsp+80h] [rbp+8h]
  unsigned int v29; // [rsp+88h] [rbp+10h]

  v29 = a2;
  v28 = 0;
  if ( !a1 )
  {
    v7 = a5;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 2;
      WPP_RECORDER_SF_(a5, a2, 5, 249, (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids);
    }
    v8 = 79LL;
LABEL_5:
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), v8);
    goto LABEL_6;
  }
  if ( a2 < 2 )
  {
    v7 = a5;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(a5, 2u, 5u, 0xFAu, (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids, a2);
    v8 = 71LL;
    goto LABEL_5;
  }
  v7 = a5;
  if ( *a1 >= 0x12u )
  {
    v12 = (void (__fastcall **)(_QWORD, __int64))(a3 + 24);
    v13 = (_QWORD *)(a3 + 40);
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(a5, 2u, 5u, 0xFBu, (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids, *a1);
    v12 = (void (__fastcall **)(_QWORD, __int64))(a3 + 24);
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 70LL);
    v13 = (_QWORD *)(a3 + 40);
    v28 = 2;
  }
  v14 = v13;
  v27 = v12;
  v26 = v13;
  if ( a1[1] != 1 )
  {
    v27 = v12;
    v26 = v13;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v25) = a1[1];
      WPP_RECORDER_SF_d(a5, 2u, 5u, 0xFCu, (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids, v25);
      v27 = (void (__fastcall **)(_QWORD, __int64))(a3 + 24);
      v13 = (_QWORD *)(a3 + 40);
      v26 = (_QWORD *)(a3 + 40);
    }
    ((void (__fastcall *)(_QWORD, __int64, _QWORD *))*v12)(*v13, 77LL, v14);
    v14 = v26;
    v13 = (_QWORD *)(a3 + 40);
    v28 = 2;
  }
  if ( v29 < 8 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v25) = v29;
      WPP_RECORDER_SF_d(a5, 2u, 5u, 0xFDu, (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids, v25);
      v13 = v26;
      v12 = v27;
    }
    (*v12)(*v13, 71LL);
    goto LABEL_6;
  }
  v15 = *((_WORD *)a1 + 6);
  if ( (v15 & 0xF000u) > 0x9000
    || (v15 & 0xF00u) > 0x900
    || (v9 = 144, (*((_WORD *)a1 + 6) & 0xF0u) > 0x90)
    || (v15 & 0xFu) > 9 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v25) = *((unsigned __int16 *)a1 + 6);
      WPP_RECORDER_SF_d(a5, 2u, 5u, 0xFEu, (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids, v25);
      v14 = (_QWORD *)(a3 + 40);
    }
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 32))(*v14, 69LL);
  }
  if ( a1[4] != 17 || a1[5] || a1[6] )
  {
    v16 = v28;
  }
  else
  {
    v9 = 513;
    if ( (unsigned __int16)(*((_WORD *)a1 + 1) - 513) > 0xFEu )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v25) = *((unsigned __int16 *)a1 + 1);
        WPP_RECORDER_SF_d(a5, 2u, 5u, 0xFFu, (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids, v25);
      }
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD *))(a3 + 24))(*(_QWORD *)(a3 + 40), 246LL, v14);
      v16 = 2;
      v28 = 2;
    }
    else
    {
      v16 = v28;
      if ( a4 )
        *a4 = 1;
    }
  }
  v17 = *(_DWORD *)(a3 + 4);
  if ( !v17 )
  {
    if ( a1[7] != 8 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v25) = a1[7];
        WPP_RECORDER_SF_d(a5, 2u, 5u, 0x100u, (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids, v25);
      }
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD *))(a3 + 24))(*(_QWORD *)(a3 + 40), 78LL, v14);
      ShouldEnforceWin8ValidationMutable = HUBDESC_ShouldEnforceWin8ValidationMutable(a3);
      v9 = a1[7];
      if ( ShouldEnforceWin8ValidationMutable )
        v16 = 2;
      if ( (unsigned __int8)(v9 - 8) > 0x38u || (v19 = 0x100000001000101LL, !_bittest64(&v19, (unsigned int)(v9 - 8))) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v20 = 257;
LABEL_68:
          LODWORD(v25) = v9;
          WPP_RECORDER_SF_d(a5, 2u, 5u, v20, (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids, v25);
          goto LABEL_69;
        }
        goto LABEL_69;
      }
      goto LABEL_78;
    }
    goto LABEL_75;
  }
  if ( v17 == 1 )
  {
    v9 = a1[7];
    if ( (unsigned __int8)(v9 - 8) > 0x38u || (v21 = 0x100000001000101LL, !_bittest64(&v21, (unsigned int)(v9 - 8))) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v20 = 258;
        goto LABEL_68;
      }
LABEL_69:
      (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 78LL);
      v24 = 2;
      goto LABEL_76;
    }
    goto LABEL_75;
  }
  if ( v17 != 2 )
  {
    if ( v17 == 3 && a1[7] != 9 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v25) = a1[7];
        WPP_RECORDER_SF_d(a5, 2u, 5u, 0x105u, (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids, v25);
      }
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD *))(a3 + 24))(*(_QWORD *)(a3 + 40), 78LL, v14);
      if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a3) )
        goto LABEL_6;
    }
    goto LABEL_75;
  }
  if ( a1[7] == 64 )
  {
LABEL_75:
    v24 = v28;
    goto LABEL_76;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v25) = a1[7];
    WPP_RECORDER_SF_d(a5, 2u, 5u, 0x103u, (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids, v25);
  }
  (*(void (__fastcall **)(_QWORD, __int64, _QWORD *))(a3 + 24))(*(_QWORD *)(a3 + 40), 78LL, v14);
  v22 = HUBDESC_ShouldEnforceWin8ValidationMutable(a3);
  v9 = a1[7];
  if ( v22 )
    v16 = 2;
  if ( (unsigned __int8)(v9 - 8) > 0x38u || (v23 = 0x100000001000101LL, !_bittest64(&v23, (unsigned int)(v9 - 8))) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v20 = 260;
      goto LABEL_68;
    }
    goto LABEL_69;
  }
LABEL_78:
  v24 = v16;
LABEL_76:
  if ( !v24 )
    return 1;
LABEL_6:
  v10 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 2;
    WPP_RECORDER_SF_(v7, v9, 5, 262, (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids);
  }
  return v10;
}
