/*
 * XREFs of AdtpWriteToEtwEx @ 0x1404481F0
 * Callers:
 *     SeAuditPlugAndPlay @ 0x140A69008 (SeAuditPlugAndPlay.c)
 * Callees:
 *     EtwWriteKMSecurityEvent @ 0x140326CA0 (EtwWriteKMSecurityEvent.c)
 *     AdtpNormalizeAuditInfoHelper @ 0x140448438 (AdtpNormalizeAuditInfoHelper.c)
 *     AdtpPackageParameters @ 0x140448568 (AdtpPackageParameters.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     AdtpGetCategoryAndSubCategoryId @ 0x140A3D3F0 (AdtpGetCategoryAndSubCategoryId.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AdtpWriteToEtwEx(__int64 a1, _BYTE *a2)
{
  int v4; // ebx
  __int16 v5; // r14
  __int64 v6; // rcx
  __int16 v7; // dx
  unsigned __int64 v8; // rax
  unsigned __int16 v9; // cx
  unsigned int v10; // edx
  char *v11; // rax
  __int64 v12; // r8
  _BYTE *v13; // rdi
  __int64 v14; // r14
  PVOID *v15; // rsi
  _WORD v17[2]; // [rsp+40h] [rbp-C0h] BYREF
  int v18; // [rsp+44h] [rbp-BCh] BYREF
  int v19; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v20; // [rsp+50h] [rbp-B0h]
  _BYTE v21[320]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v22[8]; // [rsp+1A0h] [rbp+A0h] BYREF
  char v23; // [rsp+1A8h] [rbp+A8h] BYREF
  _OWORD v24[3]; // [rsp+4A0h] [rbp+3A0h] BYREF
  _BYTE v25[2048]; // [rsp+4D0h] [rbp+3D0h] BYREF

  v17[0] = 0;
  v20 = 0LL;
  memset_0(v25, 0, sizeof(v25));
  memset_0(v21, 0, sizeof(v21));
  *a2 = 0;
  memset(v24, 0, sizeof(v24));
  AdtpNormalizeAuditInfoHelper(0LL, a1);
  if ( *(_QWORD *)(a1 + 56) )
  {
    v5 = *(_WORD *)(a1 + 22);
    v4 = AdtpPackageParameters(0LL, a1, 2LL, v25, v21, v22, v17, v24);
    if ( v4 >= 0 )
    {
      if ( *(_WORD *)(a1 + 20)
        && (v6 = *(unsigned __int16 *)(a1 + 20),
            v18 = 0,
            v19 = 0,
            (int)AdtpGetCategoryAndSubCategoryId(v6, &v18, &v19) >= 0) )
      {
        v7 = v19 + (((_WORD)v18 + 48) << 8);
      }
      else
      {
        v7 = -256;
      }
      LOWORD(v20) = *(_WORD *)(a1 + 4);
      BYTE2(v20) = *(_BYTE *)(a1 + 8);
      v8 = 0x8020000000000000uLL;
      if ( v5 != 8 )
        v8 = 0x8010000000000000uLL;
      WORD3(v20) = v7;
      v9 = v17[0];
      v10 = 0;
      *(_WORD *)((char *)&v20 + 3) = 10;
      BYTE5(v20) = 0;
      *((_QWORD *)&v20 + 1) = v8;
      if ( v17[0] )
      {
        v11 = &v23;
        v12 = v17[0];
        do
        {
          v10 += *(_DWORD *)v11;
          v11 += 16;
          --v12;
        }
        while ( v12 );
        if ( v10 > 0xDC00 )
        {
          *a2 = 1;
          v4 = -2147483643;
          goto LABEL_18;
        }
      }
      v4 = EtwWriteKMSecurityEvent();
      if ( v4 == -1073741058 )
        *a2 = 1;
    }
  }
  else
  {
    v4 = -1073741811;
  }
  v9 = v17[0];
LABEL_18:
  if ( v9 )
  {
    v13 = v24;
    v14 = v9;
    v15 = (PVOID *)v22;
    do
    {
      if ( *v13 )
        ExFreePoolWithTag(*v15, 0);
      ++v13;
      v15 += 2;
      --v14;
    }
    while ( v14 );
  }
  return (unsigned int)v4;
}
