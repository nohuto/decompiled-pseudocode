/*
 * XREFs of SepAdjustPrivileges @ 0x1409353B0
 * Callers:
 *     NtAdjustPrivilegesToken @ 0x1409334E0 (NtAdjustPrivilegesToken.c)
 * Callees:
 *     RtlSidDominates @ 0x1403F2890 (RtlSidDominates.c)
 *     SepCopyTokenIntegrity @ 0x14041C6A0 (SepCopyTokenIntegrity.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     SepAdtTokenRightAdjusted @ 0x140936BA8 (SepAdtTokenRightAdjusted.c)
 */

NTSTATUS __fastcall SepAdjustPrivileges(
        __int64 a1,
        char a2,
        char a3,
        unsigned int a4,
        unsigned int *a5,
        __int64 a6,
        int *a7,
        _DWORD *a8,
        _BYTE *a9)
{
  unsigned int v11; // r12d
  unsigned int v12; // r13d
  PSID v13; // r14
  NTSTATUS result; // eax
  __int64 v15; // rsi
  __int64 v17; // r10
  __int64 v18; // r9
  __int64 v19; // rax
  unsigned __int64 v20; // r14
  __int64 v21; // rcx
  __int64 v22; // r11
  unsigned __int8 v23; // cf
  int v24; // edi
  unsigned int v25; // ecx
  __int64 v26; // rax
  __int64 v27; // rdx
  unsigned __int64 v28; // xmm1_8
  __int64 v29; // rcx
  char v30; // al
  __int64 v31; // rcx
  unsigned int v32; // edx
  __int64 v33; // rcx
  unsigned int v34; // r10d
  __int64 v35; // rdi
  int v36; // esi
  int v37; // eax
  int v38; // eax
  signed int v39; // edx
  BOOL v40; // r8d
  int v41; // r8d
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rdx
  unsigned __int64 v47; // xmm1_8
  __int64 v48; // rcx
  __int64 v49; // rax
  bool v50; // zf
  __int64 v51; // rcx
  __int64 v52; // rcx
  __int64 v53; // rdx
  BOOLEAN Dominates; // [rsp+31h] [rbp-CFh] BYREF
  BOOLEAN v56[2]; // [rsp+32h] [rbp-CEh] BYREF
  int v57; // [rsp+34h] [rbp-CCh]
  unsigned int v58; // [rsp+38h] [rbp-C8h]
  NTSTATUS v59; // [rsp+3Ch] [rbp-C4h]
  __int64 v60; // [rsp+40h] [rbp-C0h]
  int v61; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v62; // [rsp+50h] [rbp-B0h]
  unsigned int v63; // [rsp+60h] [rbp-A0h]
  _BYTE *v64; // [rsp+68h] [rbp-98h]
  int *v65; // [rsp+70h] [rbp-90h]
  PSID Sid1[3]; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v67[54]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v68[54]; // [rsp+240h] [rbp+140h] BYREF

  v60 = a6;
  v65 = a7;
  v62 = 0LL;
  Dominates = 0;
  v11 = 0;
  v56[0] = 0;
  v12 = 0;
  LOBYTE(v61) = 0;
  v63 = a4;
  v64 = a9;
  v57 = 0;
  *(_OWORD *)Sid1 = 0LL;
  v58 = 0;
  memset_0(v67, 0, sizeof(v67));
  memset_0(v68, 0, sizeof(v68));
  *a8 = 0;
  *a9 = 0;
  SepCopyTokenIntegrity(a1, (__int64)Sid1);
  v13 = Sid1[0];
  result = RtlSidDominates(Sid1[0], SeHighMandatorySid, &Dominates);
  v59 = result;
  if ( result < 0 )
    return result;
  v15 = 1LL;
  if ( !Dominates )
  {
    result = RtlSidDominates(v13, SeMediumMandatorySid, v56);
    v59 = result;
    if ( result < 0 )
      return result;
    v38 = (unsigned __int8)v61;
    if ( !v56[0] )
      v38 = 1;
    v61 = v38;
  }
  if ( a3 )
  {
    v35 = v60;
    v39 = 0;
    v34 = 0;
    do
    {
      if ( (v15 & *(_QWORD *)(a1 + 72)) != 0 )
      {
        if ( a2 )
        {
          v40 = (v15 & *(_QWORD *)(a1 + 80)) != 0;
          v60 = v39;
          v41 = v40 + 2;
          v62 = v39;
          v42 = v34++;
          v43 = 3 * v42;
          *(_QWORD *)((char *)v67 + 4 * v43) = v39;
          *((_DWORD *)&v67[1] + v43) = v41;
          if ( v35 )
          {
            v44 = 3LL * (unsigned int)*a8;
            *(_QWORD *)(v35 + 4 * v44 + 4) = v39;
            *(_DWORD *)(v35 + 4 * v44 + 12) = v41;
          }
          v45 = *(_QWORD *)(a1 + 72);
          _bittestandreset64(&v45, (unsigned int)v39);
          *(_QWORD *)(a1 + 72) = v45;
        }
        ++*a8;
      }
      ++v39;
      v15 = __ROL8__(v15, 1);
    }
    while ( (unsigned int)v39 <= 0x24 );
LABEL_20:
    v36 = v59;
    goto LABEL_21;
  }
  if ( !v63 )
  {
    v34 = 0;
LABEL_19:
    v35 = v60;
    goto LABEL_20;
  }
  v17 = v63;
  do
  {
    v18 = *(_QWORD *)(a1 + 64);
    v19 = 1LL << *a5;
    if ( (v18 & v19) == 0 )
      goto LABEL_15;
    v20 = *(_QWORD *)a5;
    v21 = *(_QWORD *)(a1 + 80);
    ++v11;
    v22 = *(_QWORD *)(a1 + 72);
    v23 = _bittest64(&v21, (unsigned int)*(_QWORD *)a5);
    v62 = v20;
    v24 = ((v22 & (1LL << v20)) != 0 ? 2 : 0) | v23;
    v25 = a5[2];
    if ( (v25 & 4) != 0 )
    {
      if ( a2 )
      {
        *(_QWORD *)(a1 + 72) = v22 & ~(1LL << v20);
        *(_DWORD *)(a1 + 200) |= 0x800u;
        *(_QWORD *)(a1 + 64) = v18 & ~(1LL << v20);
      }
    }
    else
    {
      v26 = v22 & v19;
      if ( (v25 & 2) == 0 )
      {
        if ( !v26 )
          goto LABEL_15;
        if ( a2 )
        {
          v27 = v60;
          v28 = v62;
          if ( v60 )
          {
            v29 = 3LL * (unsigned int)*a8;
            *(_QWORD *)(v60 + 4 * v29 + 4) = v62;
            *(_DWORD *)(v27 + 4 * v29 + 12) = v24;
          }
          v30 = v62;
          v31 = 3LL * v58;
          v32 = v58 + 1;
          *(_QWORD *)((char *)v67 + 4 * v31) = v28;
          *((_DWORD *)&v67[1] + v31) = v24;
          v33 = *(_QWORD *)(a1 + 72) & ~(1LL << v30);
          v58 = v32;
          *(_QWORD *)(a1 + 72) = v33;
        }
        goto LABEL_14;
      }
      if ( !v26 )
      {
        if ( a2 )
        {
          v46 = v60;
          v47 = v62;
          if ( v60 )
          {
            v48 = 3LL * (unsigned int)*a8;
            *(_QWORD *)(v60 + 4 * v48 + 4) = v62;
            *(_DWORD *)(v46 + 4 * v48 + 12) = v24;
            v20 = *a5;
            v22 = *(_QWORD *)(a1 + 72);
          }
          v49 = v12++;
          v50 = Dominates == 0;
          v51 = 3 * v49;
          *(_QWORD *)((char *)v68 + 4 * v51) = v47;
          *((_DWORD *)&v68[1] + v51) = v24;
          if ( v50 )
          {
            if ( v56[0] )
            {
              v52 = 0x1120160684LL;
              if ( !_bittest64(&v52, v20) )
                goto LABEL_53;
            }
            else
            {
              if ( !(_BYTE)v61 )
                goto LABEL_14;
              v53 = 1LL << v20;
              if ( (*(_DWORD *)(a1 + 200) & 0x4000) != 0 )
              {
                if ( (v53 & 0x200800000LL) != 0 )
                  goto LABEL_53;
              }
              else if ( (v53 & 0x202800000LL) != 0 )
              {
                goto LABEL_53;
              }
            }
            ++v57;
            goto LABEL_14;
          }
LABEL_53:
          _bittestandset64(&v22, (unsigned int)v62);
          *(_QWORD *)(a1 + 72) = v22;
        }
LABEL_14:
        ++*a8;
      }
    }
LABEL_15:
    a5 += 3;
    --v17;
  }
  while ( v17 );
  if ( v11 >= v63 && !v57 )
  {
    v34 = v58;
    goto LABEL_19;
  }
  v35 = v60;
  v36 = 262;
  v34 = v58;
LABEL_21:
  if ( a2 && *a8 )
  {
    *v64 = 1;
    SepAdtTokenRightAdjusted(a1, (unsigned int)v67, v34, (unsigned int)v68, v12, v36 >= 0);
  }
  if ( v35 )
  {
    if ( *a8 > 1u )
      v37 = 12 * *a8 + 4;
    else
      v37 = 16;
    *v65 = v37;
  }
  return v36;
}
