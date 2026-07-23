/*
 * XREFs of AdtpWriteToEtw @ 0x140AEB4C0
 * Callers:
 *     SepRmCallLsa @ 0x1403C17F0 (SepRmCallLsa.c)
 * Callees:
 *     EtwWriteKMSecurityEvent @ 0x140326CA0 (EtwWriteKMSecurityEvent.c)
 *     AdtpNormalizeAuditInfoHelper @ 0x140448438 (AdtpNormalizeAuditInfoHelper.c)
 *     AdtpPackageParameters @ 0x140448568 (AdtpPackageParameters.c)
 *     AdtpCleanupParameterAllocations @ 0x14046E394 (AdtpCleanupParameterAllocations.c)
 *     Feature_Servicing_EnhancedAuditingForKerberosEtypes__private_IsEnabledDeviceUsageNoInline @ 0x140697FBC (Feature_Servicing_EnhancedAuditingForKerberosEtypes__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_Servicing_RpcBufferAuditing__private_IsEnabledDeviceUsageNoInline @ 0x140698010 (Feature_Servicing_RpcBufferAuditing__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     AdtpGetCategoryAndSubCategoryId @ 0x140A3D3F0 (AdtpGetCategoryAndSubCategoryId.c)
 */

__int64 __fastcall AdtpWriteToEtw(__int64 a1, _BYTE *a2)
{
  unsigned int v4; // ebx
  int v5; // edi
  __int16 v6; // r15
  int v7; // ecx
  __int16 v8; // di
  unsigned int v9; // eax
  unsigned int v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // eax
  unsigned int v14; // eax
  bool v15; // zf
  unsigned int v16; // eax
  unsigned int v17; // eax
  bool v18; // zf
  unsigned int v19; // eax
  char v20; // cl
  unsigned int v21; // eax
  unsigned int v22; // eax
  unsigned int v23; // eax
  unsigned int v24; // eax
  unsigned int v25; // eax
  int IsEnabledDeviceUsageNoInline; // eax
  unsigned int v27; // eax
  unsigned int v28; // eax
  unsigned int v29; // eax
  unsigned int v30; // eax
  unsigned int v31; // eax
  unsigned int v32; // eax
  unsigned int v33; // eax
  unsigned int v34; // eax
  unsigned int v35; // eax
  unsigned int v36; // eax
  unsigned int v37; // eax
  unsigned int v38; // eax
  unsigned int v39; // eax
  bool v40; // zf
  unsigned int v41; // eax
  unsigned int v42; // eax
  unsigned int v43; // eax
  unsigned __int64 v44; // rax
  unsigned __int16 v45; // cx
  char *v46; // rax
  __int64 v47; // rdx
  unsigned __int16 v49[2]; // [rsp+40h] [rbp-C0h] BYREF
  int v50; // [rsp+44h] [rbp-BCh] BYREF
  int v51; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v52; // [rsp+50h] [rbp-B0h]
  _BYTE v53[320]; // [rsp+60h] [rbp-A0h] BYREF
  PVOID v54; // [rsp+1A0h] [rbp+A0h] BYREF
  char v55; // [rsp+1A8h] [rbp+A8h] BYREF
  _OWORD v56[3]; // [rsp+4A0h] [rbp+3A0h] BYREF
  _BYTE v57[2048]; // [rsp+4D0h] [rbp+3D0h] BYREF

  v4 = 0;
  v49[0] = 0;
  v52 = 0LL;
  memset_0(v57, 0, sizeof(v57));
  memset_0(v53, 0, sizeof(v53));
  *a2 = 0;
  memset(v56, 0, sizeof(v56));
  AdtpNormalizeAuditInfoHelper(a1, 0LL);
  if ( !*(_QWORD *)(a1 + 48) )
  {
    v5 = -1073741811;
LABEL_78:
    v45 = v49[0];
    goto LABEL_79;
  }
  v6 = *(_WORD *)(a1 + 18);
  v5 = AdtpPackageParameters(a1, 0LL, 2, (__int64)v57, (__int64)v53, (__int64)&v54, v49, (__int64)v56);
  if ( v5 < 0 )
    goto LABEL_78;
  if ( *(_WORD *)(a1 + 16)
    && (v7 = *(unsigned __int16 *)(a1 + 16), v50 = 0, v51 = 0, (int)AdtpGetCategoryAndSubCategoryId(v7, &v50, &v51) >= 0) )
  {
    v8 = v51 + (((_WORD)v50 + 48) << 8);
  }
  else
  {
    v8 = -256;
  }
  v9 = *(_DWORD *)(a1 + 4);
  if ( v9 > 0x1343 )
  {
    if ( v9 > 0x1421 )
    {
      if ( v9 <= 0x1600 )
      {
        if ( v9 == 5632 )
          goto LABEL_24;
        v36 = v9 - 5156;
        if ( !v36 )
          goto LABEL_24;
        v37 = v36 - 1;
        if ( !v37 )
          goto LABEL_57;
        v38 = v37 - 219;
        if ( !v38 )
          goto LABEL_24;
        v39 = v38 - 1;
        if ( !v39 )
          goto LABEL_24;
        v41 = v39 - 74;
        v40 = v41 == 0;
LABEL_62:
        if ( v40 )
          goto LABEL_24;
        v15 = v41 == 1;
        goto LABEL_64;
      }
      v42 = v9 - 5712;
      if ( v42 )
      {
        v43 = v42 - 560;
        if ( !v43 || (v19 = v43 - 1) == 0 )
        {
LABEL_66:
          v20 = 2;
          goto LABEL_69;
        }
        goto LABEL_61;
      }
      IsEnabledDeviceUsageNoInline = Feature_Servicing_RpcBufferAuditing__private_IsEnabledDeviceUsageNoInline();
      goto LABEL_68;
    }
    if ( v9 == 5153 )
      goto LABEL_24;
    if ( v9 <= 0x1414 )
    {
      if ( v9 == 5140 )
        goto LABEL_24;
      v29 = v9 - 4932;
      if ( !v29 )
        goto LABEL_24;
      v30 = v29 - 1;
      if ( !v30 )
        goto LABEL_24;
      v31 = v30 - 4;
      if ( !v31 )
        goto LABEL_24;
      v32 = v31 - 121;
      if ( !v32 )
        goto LABEL_24;
      v33 = v32 - 1;
      if ( !v33 )
        goto LABEL_24;
      v15 = v33 == 66;
LABEL_64:
      if ( !v15 )
      {
        v20 = 0;
        goto LABEL_69;
      }
LABEL_24:
      v20 = 1;
      goto LABEL_69;
    }
    v34 = v9 - 5146;
    if ( !v34 )
      goto LABEL_24;
    v35 = v34 - 1;
    if ( !v35 )
      goto LABEL_24;
    v19 = v35 - 3;
    v18 = v19 == 0;
LABEL_23:
    if ( v18 )
      goto LABEL_24;
LABEL_61:
    v41 = v19 - 1;
    v40 = v41 == 0;
    goto LABEL_62;
  }
  if ( v9 == 4931 )
    goto LABEL_24;
  if ( v9 <= 0x125E )
  {
    if ( v9 == 4702 )
      goto LABEL_24;
    if ( v9 <= 0x1250 )
    {
      if ( v9 != 4688 )
      {
        v10 = v9 - 4616;
        if ( !v10 )
          goto LABEL_24;
        v11 = v10 - 8;
        if ( v11 )
        {
          v12 = v11 - 30;
          if ( !v12 )
            goto LABEL_24;
          v13 = v12 - 2;
          if ( !v13 )
            goto LABEL_24;
          v14 = v13 - 5;
          if ( !v14 )
            goto LABEL_24;
          v15 = v14 == 2;
          goto LABEL_64;
        }
LABEL_57:
        v20 = 3;
        goto LABEL_69;
      }
      goto LABEL_66;
    }
    v16 = v9 - 4697;
    if ( !v16 )
      goto LABEL_24;
    v17 = v16 - 1;
    if ( !v17 )
      goto LABEL_24;
    v19 = v17 - 1;
    v18 = v19 == 0;
    goto LABEL_23;
  }
  if ( v9 > 0x1317 )
  {
    v27 = v9 - 4888;
    if ( !v27 )
      goto LABEL_24;
    v28 = v27 - 1;
    if ( !v28 )
      goto LABEL_24;
    v19 = v28 - 39;
    v18 = v19 == 0;
    goto LABEL_23;
  }
  if ( v9 == 4887 )
    goto LABEL_24;
  v21 = v9 - 4719;
  if ( !v21 )
    goto LABEL_24;
  v22 = v21 - 49;
  if ( v22 )
  {
    v23 = v22 - 1;
    if ( v23 )
    {
      v24 = v23 - 1;
      if ( !v24 )
        goto LABEL_24;
      v25 = v24 - 46;
      if ( !v25 )
        goto LABEL_24;
      v15 = v25 == 70;
      goto LABEL_64;
    }
  }
  IsEnabledDeviceUsageNoInline = Feature_Servicing_EnhancedAuditingForKerberosEtypes__private_IsEnabledDeviceUsageNoInline();
LABEL_68:
  v20 = (IsEnabledDeviceUsageNoInline != 0) + 1;
LABEL_69:
  LOWORD(v52) = *(_WORD *)(a1 + 4);
  v44 = 0x8020000000000000uLL;
  BYTE2(v52) = v20;
  if ( v6 != 8 )
    v44 = 0x8010000000000000uLL;
  *(_WORD *)((char *)&v52 + 3) = 10;
  v45 = v49[0];
  WORD3(v52) = v8;
  BYTE5(v52) = 0;
  *((_QWORD *)&v52 + 1) = v44;
  if ( !v49[0] )
    goto LABEL_76;
  v46 = &v55;
  v47 = v49[0];
  do
  {
    v4 += *(_DWORD *)v46;
    v46 += 16;
    --v47;
  }
  while ( v47 );
  if ( v4 <= 0xDC00 )
  {
LABEL_76:
    v5 = EtwWriteKMSecurityEvent();
    if ( v5 == -1073741058 )
      *a2 = 1;
    goto LABEL_78;
  }
  *a2 = 1;
  v5 = -2147483643;
LABEL_79:
  AdtpCleanupParameterAllocations(v56, &v54, v45);
  return (unsigned int)v5;
}
