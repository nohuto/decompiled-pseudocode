/*
 * XREFs of HUBDESC_ValidateMSOSExtendedConfigDescriptor @ 0x14003DE98
 * Callers:
 *     HUBDTX_ValidateAndCacheMSOSExtendedConfigDescriptor @ 0x14002D504 (HUBDTX_ValidateAndCacheMSOSExtendedConfigDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_dD @ 0x1400025E4 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_ @ 0x14000698C (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall @ 0x140045D00 (_guard_dispatch_icall.c)
 */

char __fastcall HUBDESC_ValidateMSOSExtendedConfigDescriptor(_DWORD *a1, int a2, __int64 a3, __int64 a4)
{
  int v4; // ebp
  __int64 v5; // rdi
  char v7; // bl
  _BYTE *v8; // rcx
  unsigned int v9; // edx
  __int64 v10; // r9
  unsigned __int8 v11; // al
  _BYTE *v12; // rcx
  unsigned int i; // edx
  unsigned __int8 v14; // al
  __int64 v15; // rdx

  v4 = a4;
  v5 = a3;
  v7 = 1;
  if ( a2 != *a1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dD(a4, 2u, 5u, 0x10Fu, (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids, a2, *a1);
    (*(void (__fastcall **)(_QWORD, __int64))(v5 + 24))(*(_QWORD *)(v5 + 40), 126LL);
    if ( *(_WORD *)v5 > 0x200u || *(_BYTE *)(v5 + 12) )
      v7 = 0;
  }
  LOBYTE(a3) = 0;
  v8 = (char *)a1 + 18;
  v9 = 0;
  v10 = 0x87FFFFFE03FFLL;
  do
  {
    if ( *v8 )
    {
      if ( (_BYTE)a3 || (v11 = *v8 - 48, v11 > 0x2Fu) || !_bittest64(&v10, v11) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v9) = 2;
          WPP_RECORDER_SF_(v4, v9, 5, 273, (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids);
        }
        v15 = 123LL;
LABEL_29:
        (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64))(v5 + 24))(*(_QWORD *)(v5 + 40), v15, a3, v10);
        v7 = 0;
        goto LABEL_30;
      }
    }
    else
    {
      LOBYTE(a3) = 1;
    }
    ++v9;
    ++v8;
  }
  while ( v9 < 8 );
  LOBYTE(a3) = 0;
  v12 = (char *)a1 + 26;
  for ( i = 0; i < 8; ++i )
  {
    if ( *v12 )
    {
      if ( (_BYTE)a3 || (v14 = *v12 - 48, v14 > 0x2Fu) || !_bittest64(&v10, v14) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(i) = 2;
          WPP_RECORDER_SF_(v4, i, 5, 274, (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids);
        }
        v15 = 124LL;
        goto LABEL_29;
      }
    }
    else
    {
      LOBYTE(a3) = 1;
    }
    ++v12;
  }
  if ( v7 )
    return v7;
LABEL_30:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(i) = 2;
    WPP_RECORDER_SF_(v4, i, 5, 275, (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids);
  }
  return v7;
}
