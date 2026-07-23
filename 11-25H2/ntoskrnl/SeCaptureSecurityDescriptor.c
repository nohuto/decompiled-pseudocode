/*
 * XREFs of SeCaptureSecurityDescriptor @ 0x14092A4A0
 * Callers:
 *     SeAccessCheckByType @ 0x140363B20 (SeAccessCheckByType.c)
 *     CmpCopySaclToVirtualKey @ 0x1407CD3BC (CmpCopySaclToVirtualKey.c)
 *     ObpCaptureObjectCreateInformation @ 0x14085C5F0 (ObpCaptureObjectCreateInformation.c)
 *     NtSetSecurityObject @ 0x14086E8B0 (NtSetSecurityObject.c)
 *     NtCreateWnfStateName @ 0x1408973D0 (NtCreateWnfStateName.c)
 *     AlpcpConnectPort @ 0x140916470 (AlpcpConnectPort.c)
 *     SepAccessCheckAndAuditAlarm @ 0x14092B360 (SepAccessCheckAndAuditAlarm.c)
 *     NtOpenObjectAuditAlarm @ 0x14092DA70 (NtOpenObjectAuditAlarm.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x140982C90 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     PipGetRegistrySecurityWithFallback @ 0x1409AC3D8 (PipGetRegistrySecurityWithFallback.c)
 *     IopQuerySecureDeviceClassState @ 0x140A9EFB8 (IopQuerySecureDeviceClassState.c)
 * Callees:
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     RtlpValidAccessFilterAce @ 0x140771504 (RtlpValidAccessFilterAce.c)
 *     RtlpValidCompoundAce @ 0x140771670 (RtlpValidCompoundAce.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     RtlLengthRequiredSid @ 0x140918FE0 (RtlLengthRequiredSid.c)
 *     RtlValidAcl @ 0x14092A320 (RtlValidAcl.c)
 *     RtlpValidAttributeAce @ 0x140999538 (RtlpValidAttributeAce.c)
 *     RtlpValidObjectAce @ 0x140999C24 (RtlpValidObjectAce.c)
 *     ExAllocatePoolWithTag @ 0x140B62010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SeCaptureSecurityDescriptor(__int64 a1, char a2, int a3, char a4, _QWORD *a5)
{
  char v5; // r11
  _DWORD *v7; // rdi
  unsigned int v8; // r8d
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  _BYTE *v11; // r12
  unsigned __int64 v12; // rbx
  unsigned __int16 *v13; // r15
  unsigned __int16 *v14; // rsi
  unsigned __int64 v15; // rdx
  unsigned int v16; // r13d
  unsigned int v17; // r14d
  unsigned int v18; // edx
  unsigned int v19; // r8d
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  _DWORD *PoolWithTag; // rax
  _BYTE *v24; // rbx
  char v25; // r15
  unsigned __int16 *v26; // r13
  unsigned int v27; // ecx
  unsigned __int8 *v28; // rsi
  unsigned int v29; // r14d
  int v30; // r8d
  int v31; // r9d
  unsigned __int64 v32; // rdx
  unsigned __int16 *v33; // r15
  unsigned __int64 v34; // rcx
  unsigned int v35; // edx
  __int64 v36; // rax
  char v37; // al
  int v38; // ecx
  int v39; // ebx
  __int64 v41; // rax
  unsigned __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rax
  unsigned int v45; // [rsp+20h] [rbp-C8h]
  unsigned int v46; // [rsp+24h] [rbp-C4h]
  size_t v47; // [rsp+28h] [rbp-C0h]
  int v48; // [rsp+30h] [rbp-B8h]
  void *v49; // [rsp+38h] [rbp-B0h]
  void *v50[2]; // [rsp+40h] [rbp-A8h]
  unsigned __int16 *v51; // [rsp+58h] [rbp-90h]
  unsigned __int16 *Src; // [rsp+60h] [rbp-88h]
  unsigned int v53; // [rsp+68h] [rbp-80h]
  unsigned int v54; // [rsp+6Ch] [rbp-7Ch]
  unsigned int v55; // [rsp+78h] [rbp-70h]
  size_t Size; // [rsp+80h] [rbp-68h]
  __int128 v57; // [rsp+88h] [rbp-60h]
  int v58; // [rsp+F0h] [rbp+8h]

  v5 = a2;
  HIDWORD(v50[0]) = 0;
  v7 = 0LL;
  LOBYTE(v58) = 0;
  v47 = 0LL;
  LOBYTE(v48) = 0;
  if ( !a1 )
    goto LABEL_98;
  if ( a2 )
  {
    if ( (a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v57 = *(_OWORD *)a1;
    v8 = *(_DWORD *)(a1 + 16);
    v9 = *(_QWORD *)a1;
    if ( (WORD1(*(_OWORD *)a1) & 0x8000u) == 0 && (a1 & 7) != 0 )
      ExRaiseDatatypeMisalignment();
  }
  else
  {
    if ( !a4 )
    {
      *a5 = a1;
      return 0LL;
    }
    v57 = *(_OWORD *)a1;
    v8 = *(_DWORD *)(a1 + 16);
    v9 = *(_QWORD *)a1;
  }
  if ( (_BYTE)v9 != 1 )
    return 3221225560LL;
  LODWORD(v50[0]) = v9 & 0x7FFFFFFF;
  v10 = v9 >> 16;
  if ( (v9 & 0x80000000) != 0 )
  {
    v15 = HIDWORD(v9);
    if ( (_DWORD)v15 )
      v11 = (_BYTE *)(a1 + v15);
    else
      v11 = 0LL;
  }
  else
  {
    v11 = *(_BYTE **)(a1 + 8);
  }
  v50[1] = v11;
  if ( (v10 & 0x8000u) != 0LL )
  {
    if ( DWORD2(v57) )
      v12 = a1 + DWORD2(v57);
    else
      v12 = 0LL;
  }
  else
  {
    v12 = *(_QWORD *)(a1 + 16);
  }
  v49 = (void *)v12;
  if ( (v10 & 0x10) != 0 )
  {
    if ( (v10 & 0x8000u) == 0LL )
    {
      v13 = *(unsigned __int16 **)(a1 + 24);
    }
    else if ( HIDWORD(v57) )
    {
      v13 = (unsigned __int16 *)(a1 + HIDWORD(*((_QWORD *)&v57 + 1)));
    }
    else
    {
      v13 = 0LL;
    }
  }
  else
  {
    v13 = 0LL;
  }
  v51 = v13;
  if ( (v10 & 4) != 0 )
  {
    if ( (v10 & 0x8000u) == 0LL )
    {
      v14 = *(unsigned __int16 **)(a1 + 32);
    }
    else if ( v8 )
    {
      v14 = (unsigned __int16 *)(a1 + v8);
    }
    else
    {
      v14 = 0LL;
    }
  }
  else
  {
    v14 = 0LL;
  }
  Src = v14;
  v16 = 0;
  v45 = 0;
  v17 = 0;
  v46 = 0;
  v53 = 0;
  v55 = 0;
  v18 = 0;
  v19 = 0;
  v54 = 0;
  if ( (BYTE2(v50[0]) & 0x10) != 0 && v13 )
  {
    if ( v5 )
    {
      v43 = (__int64)(v13 + 1);
      if ( (unsigned __int64)(v13 + 1) >= 0x7FFFFFFF0000LL )
        v43 = 0x7FFFFFFF0000LL;
      v44 = *(unsigned __int16 *)v43;
      v16 = v44;
      v45 = v44;
      if ( (_DWORD)v44 )
      {
        if ( ((unsigned __int8)v13 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (unsigned __int16 *)((char *)v13 + v44) < v13 || (unsigned __int64)v13 + v44 > 0x7FFFFFFF0000LL )
          v16 = v44;
      }
      v49 = (void *)v12;
      v17 = 0;
    }
    else
    {
      v16 = v13[1];
      v45 = v16;
    }
    v53 = (v16 + 3) & 0xFFFFFFFC;
    if ( v53 - 8 > 0xFFF7 )
      return 3221225591LL;
  }
  else
  {
    v13 = 0LL;
    v51 = 0LL;
  }
  if ( (BYTE2(v50[0]) & 4) != 0 && v14 )
  {
    if ( v5 )
    {
      v20 = (__int64)(v14 + 1);
      if ( (unsigned __int64)(v14 + 1) >= 0x7FFFFFFF0000LL )
        v20 = 0x7FFFFFFF0000LL;
      v21 = *(unsigned __int16 *)v20;
      v17 = v21;
      v46 = v21;
      if ( (_DWORD)v21 )
      {
        if ( ((unsigned __int8)v14 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (unsigned __int64)v14 + v21 > 0x7FFFFFFF0000LL || (unsigned __int16 *)((char *)v14 + v21) < v14 )
          v17 = v21;
      }
      v13 = v51;
      v49 = (void *)v12;
      v16 = v45;
    }
    else
    {
      v17 = v14[1];
      v46 = v17;
    }
    LODWORD(v7) = (v17 + 3) & 0xFFFFFFFC;
    v55 = (unsigned int)v7;
    if ( (unsigned int)((_DWORD)v7 - 8) > 0xFFF7 )
      return 3221225591LL;
  }
  else
  {
    v14 = 0LL;
    Src = 0LL;
  }
  if ( v11 )
  {
    if ( v5 )
    {
      v22 = (__int64)(v11 + 1);
      if ( (unsigned __int64)(v11 + 1) >= 0x7FFFFFFF0000LL )
        v22 = 0x7FFFFFFF0000LL;
      v58 = *(unsigned __int8 *)v22;
      LODWORD(v47) = 4 * v58 + 8;
      if ( 4 * v58 != -8 && ((unsigned __int8)v11 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v14 = Src;
      v13 = v51;
      v49 = (void *)v12;
      v16 = v45;
      v17 = v46;
    }
    else
    {
      LOBYTE(v58) = v11[1];
      LODWORD(v47) = RtlLengthRequiredSid((unsigned __int8)v58);
      v5 = a2;
      v18 = 0;
    }
    v19 = (v47 + 3) & 0xFFFFFFFC;
    v54 = v19;
  }
  if ( v12 )
  {
    if ( v5 )
    {
      v41 = v12 + 1;
      if ( v12 + 1 >= 0x7FFFFFFF0000LL )
        v41 = 0x7FFFFFFF0000LL;
      v48 = *(unsigned __int8 *)v41;
      HIDWORD(v47) = 4 * v48 + 8;
      if ( 4 * v48 == -8 )
        goto LABEL_108;
      if ( (v12 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v49 = (void *)v12;
      v42 = v12 + HIDWORD(v47);
      if ( v42 > 0x7FFFFFFF0000LL || v42 < v12 )
LABEL_108:
        v49 = (void *)v12;
      v14 = Src;
      v13 = v51;
      v16 = v45;
      v17 = v46;
    }
    else
    {
      LOBYTE(v48) = *(_BYTE *)(v12 + 1);
      HIDWORD(v47) = RtlLengthRequiredSid((unsigned __int8)v48);
    }
    v18 = (HIDWORD(v47) + 3) & 0xFFFFFFFC;
    v19 = v54;
  }
  Size = v53 + 20 + (_DWORD)v7 + v18 + v19;
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)(a3 | 0x400), Size, 0x63536553u);
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset_0(PoolWithTag, 0, Size);
    *(_OWORD *)v7 = *(_OWORD *)v50;
    v7[4] = v12;
    v24 = v7 + 5;
    *((_WORD *)v7 + 1) |= 0x8000u;
    if ( (BYTE2(v50[0]) & 0x10) != 0 && v13 )
    {
      memmove(v7 + 5, v13, v16);
      v25 = a2;
      if ( a2 && (v16 < 8 || v16 != *((unsigned __int16 *)v7 + 11) || !RtlValidAcl((PACL)(v7 + 5))) )
        goto LABEL_131;
      v7[3] = 20;
      *((_WORD *)v7 + 11) = v53;
      v24 += v53;
    }
    else
    {
      v7[3] = 0;
      v25 = a2;
    }
    if ( (BYTE2(v50[0]) & 4) == 0 || !v14 )
    {
      v7[4] = 0;
LABEL_85:
      if ( v11 )
      {
        memmove(v24, v11, (unsigned int)v47);
        v24[1] = v58;
        if ( v25 && ((unsigned __int64)v24 <= 0x7FFFFFFF0000LL || (unsigned __int8)v58 > 0xFu || (*v24 & 0xF) != 1) )
        {
LABEL_144:
          ExFreePoolWithTag(v7, 0);
          return 3221225592LL;
        }
        v38 = (_DWORD)v24 - (_DWORD)v7;
        v24 += v54;
      }
      else
      {
        v38 = 0;
      }
      v7[1] = v38;
      if ( !v49 )
      {
        v39 = 0;
        goto LABEL_97;
      }
      memmove(v24, v49, HIDWORD(v47));
      v24[1] = v48;
      if ( !v25 || (unsigned __int64)v24 > 0x7FFFFFFF0000LL && (unsigned __int8)v48 <= 0xFu && (*v24 & 0xF) == 1 )
      {
        v39 = (_DWORD)v24 - (_DWORD)v7;
LABEL_97:
        v7[2] = v39;
LABEL_98:
        *a5 = v7;
        return 0LL;
      }
      goto LABEL_144;
    }
    memmove(v24, v14, v17);
    if ( !v25 )
      goto LABEL_84;
    if ( v17 >= 8 )
    {
      v26 = (unsigned __int16 *)(v24 + 2);
      v27 = *((unsigned __int16 *)v24 + 1);
      if ( v17 == v27 )
      {
        if ( (unsigned __int8)(*v24 - 2) <= 2u
          && (unsigned __int16 *)((unsigned __int64)(v24 + 3) & 0xFFFFFFFFFFFFFFFEuLL) == v26
          && v27 >= 8 )
        {
          v28 = v24 + 8;
          v29 = 0;
          v30 = 1730063;
          v31 = 104928;
          while ( 1 )
          {
            if ( v29 >= *((unsigned __int16 *)v24 + 2) )
            {
              v37 = 1;
              v25 = a2;
              goto LABEL_83;
            }
            v32 = (unsigned __int64)&v24[*v26];
            if ( (unsigned __int64)(v28 + 4) > v32 )
              break;
            v33 = (unsigned __int16 *)(v28 + 2);
            if ( (unsigned __int8 *)((unsigned __int64)(v28 + 3) & 0xFFFFFFFFFFFFFFFEuLL) != v28 + 2 )
              break;
            v34 = *v33;
            if ( (unsigned __int64)&v28[v34] > v32 )
              break;
            v35 = *v28;
            if ( (unsigned __int8)v35 <= 0x14u && _bittest(&v30, v35) )
            {
              if ( ((v34 + 3) & 0xFFFFFFFFFFFFFFFCuLL) != v34 )
                break;
              if ( (unsigned int)v34 < 0x10 )
                break;
              if ( v28[8] != 1 )
                break;
              v36 = v28[9];
              if ( (unsigned __int8)v36 > 0xFu || v34 < 4 * v36 + 16 )
                break;
            }
            else if ( (_BYTE)v35 == 4 )
            {
              if ( *v24 < 3u || !RtlpValidCompoundAce((__int64)v28) )
                break;
              v30 = 1730063;
            }
            else if ( (unsigned __int8)v35 <= 0x10u && _bittest(&v31, v35) )
            {
              if ( *v24 < 4u || !(unsigned __int8)RtlpValidObjectAce(v28) )
                break;
              v30 = 1730063;
              v31 = 104928;
            }
            else if ( (_BYTE)v35 == 18 )
            {
              if ( !(unsigned __int8)RtlpValidAttributeAce(v28) )
                break;
              v30 = 1730063;
              v31 = 104928;
            }
            else if ( (_BYTE)v35 == 21 )
            {
              if ( !RtlpValidAccessFilterAce((__int64)v28) )
                break;
              v30 = 1730063;
            }
            else if ( (unsigned int)v34 < 4 )
            {
              break;
            }
            v28 += *v33;
            ++v29;
          }
          v25 = a2;
        }
        v37 = 0;
LABEL_83:
        if ( v37 )
        {
LABEL_84:
          v7[4] = (_DWORD)v24 - (_DWORD)v7;
          *((_WORD *)v24 + 1) = v55;
          v24 += v55;
          goto LABEL_85;
        }
      }
    }
LABEL_131:
    ExFreePoolWithTag(v7, 0);
    return 3221225591LL;
  }
  return 3221225626LL;
}
