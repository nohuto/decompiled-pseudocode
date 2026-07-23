/*
 * XREFs of AdtpBuildAccessReasonAuditString @ 0x140403434
 * Callers:
 *     AdtpPackageParameters @ 0x140448568 (AdtpPackageParameters.c)
 * Callees:
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x140403974 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpBuildContextFromSecurityDescriptor @ 0x140698064 (AdtpBuildContextFromSecurityDescriptor.c)
 *     AdtpBuildStagingReasonAuditStringInternal @ 0x14069810C (AdtpBuildStagingReasonAuditStringInternal.c)
 *     AdtpIsSDValidSelfRelative @ 0x14069854C (AdtpIsSDValidSelfRelative.c)
 *     AdtpPermissionBitPosition @ 0x1406985C4 (AdtpPermissionBitPosition.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     RtlLengthSecurityDescriptor @ 0x1408565C0 (RtlLengthSecurityDescriptor.c)
 *     AdtpEtwBuildDashString @ 0x140A90600 (AdtpEtwBuildDashString.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AdtpBuildAccessReasonAuditString(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4,
        int a5,
        __int64 a6,
        __int64 a7,
        _DWORD *a8,
        char *a9)
{
  char v10; // bl
  _WORD *v11; // r9
  unsigned int v12; // edi
  unsigned int v13; // r12d
  void *v14; // r13
  unsigned int i; // r14d
  int v16; // ecx
  int IsSDValidSelfRelative; // eax
  int v18; // eax
  int v19; // eax
  unsigned int v20; // ebx
  unsigned int v21; // r13d
  unsigned int v22; // r8d
  __int64 v23; // rdx
  int v24; // r8d
  unsigned __int16 *v25; // r14
  int v26; // eax
  int v27; // r8d
  unsigned int v28; // ebx
  int j; // r14d
  unsigned __int16 *v30; // r13
  int v31; // eax
  unsigned int v32; // ebx
  __int64 v33; // rax
  __int64 v34; // rsi
  char v35; // al
  __int64 Pool2; // rax
  unsigned int v37; // r13d
  unsigned __int64 v38; // rax
  unsigned __int16 *v39; // r14
  const void *v40; // rdx
  PVOID *v41; // rbx
  __int64 v42; // rsi
  int v44; // [rsp+28h] [rbp-D8h]
  char v45; // [rsp+60h] [rbp-A0h]
  char v46; // [rsp+62h] [rbp-9Eh]
  _BYTE v48[4]; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v49; // [rsp+68h] [rbp-98h]
  unsigned __int64 v50; // [rsp+70h] [rbp-90h]
  __int64 v51; // [rsp+78h] [rbp-88h]
  __int64 v52; // [rsp+80h] [rbp-80h]
  __int128 v53; // [rsp+88h] [rbp-78h] BYREF
  PVOID P; // [rsp+98h] [rbp-68h]
  __int128 v55; // [rsp+A0h] [rbp-60h] BYREF
  PVOID v56; // [rsp+B0h] [rbp-50h]
  __int64 v57; // [rsp+B8h] [rbp-48h]
  _DWORD *v58; // [rsp+C0h] [rbp-40h]
  char *v59; // [rsp+C8h] [rbp-38h]
  _BYTE v60[8]; // [rsp+D0h] [rbp-30h] BYREF
  char v61; // [rsp+D8h] [rbp-28h] BYREF

  v57 = a7;
  v10 = 1;
  v58 = a8;
  v59 = a9;
  LODWORD(v11) = 0;
  v12 = 0;
  v51 = a2;
  v13 = 0;
  v52 = a1;
  v48[0] = 0;
  v49 = 0;
  v45 = 0;
  v46 = 0;
  v50 = 0LL;
  v53 = 0LL;
  P = 0LL;
  v55 = 0LL;
  v56 = 0LL;
  if ( !*(_DWORD *)a3 )
  {
LABEL_2:
    if ( a6 )
      AdtpEtwBuildDashString(a6);
    goto LABEL_67;
  }
  v14 = (void *)(a3 + 144);
  for ( i = 0; i < 0x20; ++i )
  {
    v16 = *(_DWORD *)(a3 + 4LL * i + 4) & 0xFF0000;
    if ( !v16 )
      continue;
    if ( v16 != 0x10000 && v16 != 0x20000 )
    {
      if ( v16 == 196608 || v16 == 0x40000 )
        goto LABEL_14;
      if ( v16 != 327680 )
      {
        if ( v16 != 393216 )
        {
          v10 = 0;
          continue;
        }
LABEL_14:
        v10 = 0;
        IsSDValidSelfRelative = AdtpIsSDValidSelfRelative(v14);
        LODWORD(v11) = 0;
        if ( IsSDValidSelfRelative != -1073741736
          || (v50 = (unsigned __int64)v14 + RtlLengthSecurityDescriptor(v14),
              v18 = AdtpIsSDValidSelfRelative((PSECURITY_DESCRIPTOR)v50),
              LODWORD(v11) = 0,
              v12 = v18,
              v18 < 0) )
        {
LABEL_15:
          v12 = -1073741811;
          goto LABEL_67;
        }
        v46 = 1;
        goto LABEL_19;
      }
    }
    v10 = 0;
    v19 = AdtpIsSDValidSelfRelative(v14);
    LODWORD(v11) = 0;
    if ( v19 < 0 )
      goto LABEL_15;
LABEL_19:
    v45 = 1;
  }
  if ( v10 == 1 )
    goto LABEL_2;
  memset_0(v60, 0, 0x200uLL);
  if ( v45 == 1 )
    AdtpBuildContextFromSecurityDescriptor(v14, &v53);
  if ( v46 == 1 )
    AdtpBuildContextFromSecurityDescriptor(v50, &v55);
  v11 = 0LL;
  v20 = 0;
  v21 = 0;
  while ( 2 )
  {
    if ( v20 < 7 )
    {
      v22 = *((_DWORD *)AdtpStandardAccessTypes + v20);
      if ( a4 == 1 )
      {
        v23 = (unsigned __int8)AdtpPermissionBitPosition(v22);
        if ( *(_DWORD *)(a3 + 4 * v23 + 4) < (int)v11 )
        {
          v25 = (unsigned __int16 *)&v60[16 * v13];
          v26 = AdtpBuildStagingReasonAuditStringInternal(
                  v52,
                  v51,
                  (unsigned int)&v53,
                  (unsigned int)&v55,
                  v24,
                  v44,
                  a3 + 4,
                  (__int64)v25);
          goto LABEL_33;
        }
      }
      else
      {
        v27 = *(_DWORD *)a3 & v22;
        if ( v27 )
        {
          v25 = (unsigned __int16 *)&v60[16 * v13];
          LOBYTE(v44) = *(_BYTE *)(a3 + 136);
          v26 = AdtpBuildAccessReasonAuditStringInternal(
                  v52,
                  v51,
                  v27,
                  v44,
                  a3 + 4,
                  (__int64)v25,
                  (_DWORD)v11,
                  (_DWORD)v11,
                  (_DWORD)v11,
                  (__int64)v48);
LABEL_33:
          v11 = 0LL;
          v12 = v26;
          if ( v26 < 0 )
            goto LABEL_62;
          v21 += *v25;
          v49 = v21;
          ++v13;
        }
      }
      ++v20;
      continue;
    }
    break;
  }
  if ( *(_WORD *)a3 )
  {
    v28 = (unsigned int)v11;
    for ( j = 1; v28 < 0x10; j *= 2 )
    {
      if ( a4 == 1 )
      {
        if ( *(_DWORD *)(a3 + 4LL * v28 + 4) >= (int)v11 )
          goto LABEL_46;
        v30 = (unsigned __int16 *)&v60[16 * v13];
        v31 = AdtpBuildStagingReasonAuditStringInternal(
                v52,
                v51,
                (unsigned int)&v53,
                (unsigned int)&v55,
                j,
                v44,
                a3 + 4,
                (__int64)v30);
      }
      else
      {
        if ( (*(_DWORD *)a3 & j) == 0 )
          goto LABEL_46;
        v30 = (unsigned __int16 *)&v60[16 * v13];
        LOBYTE(v44) = *(_BYTE *)(a3 + 136);
        v31 = AdtpBuildAccessReasonAuditStringInternal(
                v52,
                v51,
                *(_DWORD *)a3 & (unsigned int)j,
                v44,
                a3 + 4,
                (__int64)v30,
                (_DWORD)v11,
                (_DWORD)v11,
                (_DWORD)v11,
                (__int64)v48);
      }
      v11 = 0LL;
      v12 = v31;
      if ( v31 < 0 )
        goto LABEL_62;
      v49 += *v30;
      ++v13;
LABEL_46:
      ++v28;
    }
  }
  v49 >>= 1;
  v32 = v49 + 1;
  if ( v57 )
  {
    if ( v58 )
    {
      v33 = (unsigned int)*v58;
      if ( (unsigned int)v33 + v32 < 0x400 )
      {
        v34 = v57 + 2 * v33;
        *v58 = v33 + v32;
        v35 = (char)v11;
LABEL_54:
        v37 = (unsigned int)v11;
        *v59 = v35;
        if ( v13 )
        {
          v38 = v13;
          v39 = (unsigned __int16 *)v60;
          v50 = v13;
          do
          {
            v40 = (const void *)*((_QWORD *)v39 + 1);
            if ( v40 )
            {
              memmove((void *)(v34 + v37), v40, *v39);
              v37 += *v39;
              v38 = v50;
              v11 = 0LL;
            }
            v39 += 8;
            v50 = --v38;
          }
          while ( v38 );
        }
        *(_WORD *)(v34 + 2LL * v49) = (_WORD)v11;
        if ( a6 )
        {
          *(_QWORD *)a6 = v34;
          *(_DWORD *)(a6 + 8) = 2 * v32;
          *(_DWORD *)(a6 + 12) = (_DWORD)v11;
        }
        else
        {
          MEMORY[8] = v34;
          MEMORY[2] = 2 * v32;
          *v11 = 2 * v32 - 2;
        }
        goto LABEL_62;
      }
    }
  }
  Pool2 = ExAllocatePool2(0x100uLL, 2LL * v32, 0x6B416553u);
  v11 = 0LL;
  v34 = Pool2;
  if ( Pool2 )
  {
    v35 = 1;
    goto LABEL_54;
  }
  v12 = -1073741801;
LABEL_62:
  if ( v13 )
  {
    v41 = (PVOID *)&v61;
    v42 = v13;
    do
    {
      if ( *v41 )
      {
        ExFreePoolWithTag(*v41, 0);
        LODWORD(v11) = 0;
      }
      v41 += 2;
      --v42;
    }
    while ( v42 );
  }
LABEL_67:
  if ( DWORD2(v53) != (_DWORD)v11 && P )
  {
    ExFreePoolWithTag(P, 0);
    LODWORD(v11) = 0;
  }
  if ( DWORD2(v55) != (_DWORD)v11 && v56 )
    ExFreePoolWithTag(v56, 0);
  return v12;
}
