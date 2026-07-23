/*
 * XREFs of SepAdjustPrivileges @ 0x140984FA0
 * Callers:
 *     NtAdjustPrivilegesToken @ 0x140984860 (NtAdjustPrivilegesToken.c)
 * Callees:
 *     RtlSidDominates @ 0x1403EFBC0 (RtlSidDominates.c)
 *     SepCopyTokenIntegrity @ 0x140409240 (SepCopyTokenIntegrity.c)
 *     Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline @ 0x1405E2C90 (Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     SepAdtTokenRightAdjusted @ 0x1408F2A90 (SepAdtTokenRightAdjusted.c)
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
  int v11; // r15d
  PSID v12; // r14
  NTSTATUS result; // eax
  __int64 v14; // rsi
  int v15; // eax
  signed int i; // edx
  BOOL v17; // r8d
  __int64 v18; // rcx
  int v19; // r8d
  unsigned int v20; // r9d
  __int64 v21; // rcx
  __int64 v22; // rcx
  int v23; // esi
  unsigned int v24; // r8d
  int v25; // eax
  unsigned __int64 v27; // r14
  __int64 v28; // r9
  __int64 v29; // r8
  __int64 v30; // r11
  __int64 v31; // rax
  __int64 v32; // rdx
  unsigned __int8 v33; // cf
  int v34; // r10d
  unsigned int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // xmm1_8
  __int64 v38; // rcx
  char v39; // r14
  __int64 v40; // rcx
  unsigned int v41; // edx
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // rdx
  bool v46; // zf
  __int64 v47; // xmm1_8
  __int64 v48; // rcx
  char v49; // al
  __int64 v50; // rcx
  unsigned int v51; // edx
  __int64 v52; // rcx
  BOOLEAN Dominates; // [rsp+31h] [rbp-CFh] BYREF
  BOOLEAN v55[2]; // [rsp+32h] [rbp-CEh] BYREF
  unsigned int v56; // [rsp+34h] [rbp-CCh]
  NTSTATUS v57; // [rsp+38h] [rbp-C8h]
  int v58; // [rsp+3Ch] [rbp-C4h]
  unsigned int v59; // [rsp+40h] [rbp-C0h]
  unsigned int v60; // [rsp+44h] [rbp-BCh]
  __int64 v61; // [rsp+48h] [rbp-B8h]
  unsigned int v62; // [rsp+50h] [rbp-B0h]
  __int64 v63; // [rsp+58h] [rbp-A8h]
  PSID Sid1[2]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE *v65; // [rsp+78h] [rbp-88h]
  int *v66; // [rsp+80h] [rbp-80h]
  _QWORD v67[54]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v68[54]; // [rsp+240h] [rbp+140h] BYREF

  v66 = a7;
  v63 = 0LL;
  Dominates = 0;
  v55[0] = 0;
  v11 = 0;
  LOBYTE(v58) = 0;
  v62 = a4;
  v65 = a9;
  v59 = 0;
  *(_OWORD *)Sid1 = 0LL;
  v61 = 0LL;
  v56 = 0;
  v60 = 0;
  memset_0(v67, 0, sizeof(v67));
  memset_0(v68, 0, sizeof(v68));
  *a8 = 0;
  *a9 = 0;
  SepCopyTokenIntegrity(a1, (__int64)Sid1);
  v12 = Sid1[0];
  result = RtlSidDominates(Sid1[0], SeHighMandatorySid, &Dominates);
  v57 = result;
  if ( result >= 0 )
  {
    v14 = 1LL;
    if ( !Dominates )
    {
      result = RtlSidDominates(v12, SeMediumMandatorySid, v55);
      v57 = result;
      if ( result < 0 )
        return result;
      v15 = (unsigned __int8)v58;
      if ( !v55[0] )
        v15 = 1;
      v58 = v15;
    }
    if ( a3 )
    {
      for ( i = 0; (unsigned int)i <= 0x24; ++i )
      {
        if ( (v14 & *(_QWORD *)(a1 + 72)) != 0 )
        {
          if ( a2 )
          {
            v17 = (v14 & *(_QWORD *)(a1 + 80)) != 0;
            v61 = i;
            v18 = 3LL * v56;
            v19 = v17 + 2;
            v20 = v56 + 1;
            v63 = i;
            *(_QWORD *)((char *)v67 + 4 * v18) = i;
            *((_DWORD *)&v67[1] + v18) = v19;
            v56 = v20;
            if ( a6 )
            {
              v21 = 3LL * (unsigned int)*a8;
              *(_QWORD *)(a6 + 4 * v21 + 4) = i;
              *(_DWORD *)(a6 + 4 * v21 + 12) = v19;
            }
            v22 = *(_QWORD *)(a1 + 72);
            _bittestandreset64(&v22, (unsigned int)i);
            *(_QWORD *)(a1 + 72) = v22;
          }
          ++*a8;
        }
        v14 = __ROL8__(v14, 1);
      }
      goto LABEL_16;
    }
    if ( v62 )
    {
      v27 = v62;
      Sid1[0] = (PSID)v62;
      while ( 1 )
      {
        v28 = *(_QWORD *)(a1 + 64);
        v29 = 1LL << *a5;
        if ( (v28 & v29) != 0 )
        {
          v30 = *(_QWORD *)a5;
          ++v59;
          v31 = *(_QWORD *)(a1 + 80);
          v32 = *(_QWORD *)(a1 + 72);
          v33 = _bittest64(&v31, (unsigned int)v30);
          v63 = v30;
          v34 = ((v32 & (1LL << v30)) != 0 ? 2 : 0) | v33;
          v35 = a5[2];
          if ( (v35 & 4) != 0 )
          {
            if ( a2 )
            {
              *(_QWORD *)(a1 + 72) = v32 & ~(1LL << v30);
              *(_DWORD *)(a1 + 200) |= 0x800u;
              *(_QWORD *)(a1 + 64) = v28 & ~(1LL << v30);
            }
            goto LABEL_62;
          }
          v36 = v29 & v32;
          if ( (v35 & 2) != 0 )
          {
            if ( !v36 )
            {
              if ( a2 )
              {
                v37 = v63;
                if ( a6 )
                {
                  v38 = 3LL * (unsigned int)*a8;
                  *(_QWORD *)(a6 + 4 * v38 + 4) = v63;
                  *(_DWORD *)(a6 + 4 * v38 + 12) = v34;
                }
                v39 = v63;
                v40 = 3LL * v60;
                v41 = v60 + 1;
                v46 = Dominates == 0;
                *(_QWORD *)((char *)v68 + 4 * v40) = v37;
                *((_DWORD *)&v68[1] + v40) = v34;
                v60 = v41;
                if ( !v46 )
                {
                  *(_QWORD *)(a1 + 72) |= 1LL << v39;
                  goto LABEL_42;
                }
                if ( v55[0] )
                {
                  v42 = 0x1120160684LL;
                  if ( _bittest64(&v42, *a5) )
                    ++v11;
                  else
                    *(_QWORD *)(a1 + 72) |= 1LL << v39;
                  if ( (unsigned int)Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline() )
LABEL_41:
                    v61 = 0x200800000LL;
                }
                else
                {
                  if ( !(_BYTE)v58 )
                    goto LABEL_42;
                  if ( (unsigned int)Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline() )
                    goto LABEL_41;
                  v45 = 1LL << *a5;
                  v46 = (*(_DWORD *)(a1 + 200) & 0x4000) == 0;
                  v61 = 0x200800000LL;
                  if ( v46 )
                    v46 = (v45 & 0x202800000LL) == 0;
                  else
                    v46 = (v45 & 0x200800000LL) == 0;
                  if ( v46 )
                    ++v11;
                  else
                    *(_QWORD *)(a1 + 72) |= 1LL << v39;
                }
LABEL_42:
                if ( (unsigned int)Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline()
                  && (*(_DWORD *)(a1 + 200) & 0x4000) != 0 )
                {
                  v43 = v61;
                  if ( _bittest64(&v43, *a5) )
                  {
                    v44 = *(_QWORD *)(a1 + 72) | (1LL << v39);
                    v27 = (unsigned __int64)Sid1[0];
                    *(_QWORD *)(a1 + 72) = v44;
                    goto LABEL_61;
                  }
                  ++v11;
                }
                v27 = (unsigned __int64)Sid1[0];
              }
LABEL_61:
              ++*a8;
            }
          }
          else if ( v36 )
          {
            if ( a2 )
            {
              v47 = v63;
              if ( a6 )
              {
                v48 = 3LL * (unsigned int)*a8;
                *(_QWORD *)(a6 + 4 * v48 + 4) = v63;
                *(_DWORD *)(a6 + 4 * v48 + 12) = v34;
              }
              v49 = v63;
              v50 = 3LL * v56;
              v51 = v56 + 1;
              *(_QWORD *)((char *)v67 + 4 * v50) = v47;
              *((_DWORD *)&v67[1] + v50) = v34;
              v52 = *(_QWORD *)(a1 + 72) & ~(1LL << v49);
              v56 = v51;
              *(_QWORD *)(a1 + 72) = v52;
            }
            goto LABEL_61;
          }
        }
LABEL_62:
        a5 += 3;
        Sid1[0] = (PSID)--v27;
        if ( !v27 )
        {
          if ( v59 < v62 || v11 )
          {
            v23 = 262;
            goto LABEL_17;
          }
          break;
        }
      }
    }
LABEL_16:
    v23 = v57;
LABEL_17:
    if ( *a8 && a2 )
    {
      v24 = v56;
      *v65 = 1;
      SepAdtTokenRightAdjusted(a1, (__int64)v67, v24, (__int64)v68, v60, v23 >= 0);
    }
    if ( a6 )
    {
      if ( *a8 <= 1u )
        v25 = 16;
      else
        v25 = 12 * *a8 + 4;
      *v66 = v25;
    }
    return v23;
  }
  return result;
}
