/*
 * XREFs of SeCaptureSecurityDescriptor @ 0x1409108D0
 * Callers:
 *     SeAccessCheckByType @ 0x14042DC70 (SeAccessCheckByType.c)
 *     CmpCopySaclToVirtualKey @ 0x1407DD0CC (CmpCopySaclToVirtualKey.c)
 *     NtCreateWnfStateName @ 0x1408340B0 (NtCreateWnfStateName.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x14086395C (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     AlpcpConnectPort @ 0x140868BB0 (AlpcpConnectPort.c)
 *     ObpCaptureObjectCreateInformation @ 0x1408A5340 (ObpCaptureObjectCreateInformation.c)
 *     NtSetSecurityObject @ 0x1409118E0 (NtSetSecurityObject.c)
 *     NtOpenObjectAuditAlarm @ 0x140911F00 (NtOpenObjectAuditAlarm.c)
 *     PipGetRegistrySecurityWithFallback @ 0x14097FB88 (PipGetRegistrySecurityWithFallback.c)
 *     SepAccessCheckAndAuditAlarm @ 0x140A07A00 (SepAccessCheckAndAuditAlarm.c)
 *     IopQuerySecureDeviceClassState @ 0x140A9FB70 (IopQuerySecureDeviceClassState.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     RtlpValidAccessFilterAce @ 0x140780684 (RtlpValidAccessFilterAce.c)
 *     RtlpValidCompoundAce @ 0x1407807F0 (RtlpValidCompoundAce.c)
 *     RtlLengthRequiredSid @ 0x14086B5A0 (RtlLengthRequiredSid.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     RtlValidAcl @ 0x140910580 (RtlValidAcl.c)
 *     RtlpValidObjectAce @ 0x14098353C (RtlpValidObjectAce.c)
 *     RtlpValidAttributeAce @ 0x1409835D0 (RtlpValidAttributeAce.c)
 *     ExAllocatePoolWithTag @ 0x140B74010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SeCaptureSecurityDescriptor(__int64 a1, char a2, int a3, char a4, _QWORD *a5)
{
  char v5; // r8
  unsigned int v7; // r14d
  unsigned int v8; // r9d
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  _BYTE *v11; // r12
  unsigned __int64 v12; // rdi
  unsigned __int16 *v13; // r15
  unsigned __int16 *v14; // rsi
  unsigned __int64 v15; // rdx
  unsigned int v16; // r13d
  unsigned int v17; // ebx
  unsigned int v18; // edx
  unsigned int v19; // r9d
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  unsigned __int64 v23; // rcx
  SIZE_T v24; // rbx
  _DWORD *PoolWithTag; // rax
  _DWORD *v26; // rdi
  _BYTE *v27; // rbx
  char v28; // r15
  unsigned __int16 *v29; // r12
  unsigned int v30; // ecx
  unsigned __int8 *v31; // rsi
  unsigned int v32; // r14d
  int v33; // r13d
  int v34; // r8d
  unsigned __int64 v35; // rdx
  unsigned __int16 *v36; // r15
  unsigned __int64 v37; // rcx
  unsigned int v38; // edx
  __int64 v39; // rax
  char v40; // al
  int v41; // ecx
  int v42; // ebx
  __int64 v44; // rax
  unsigned __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rax
  unsigned int v48; // [rsp+20h] [rbp-C8h]
  unsigned int v49; // [rsp+24h] [rbp-C4h]
  size_t Size; // [rsp+28h] [rbp-C0h]
  void *v51; // [rsp+30h] [rbp-B8h]
  int v52; // [rsp+38h] [rbp-B0h]
  _BYTE *v53; // [rsp+40h] [rbp-A8h]
  __int128 v54; // [rsp+48h] [rbp-A0h]
  unsigned __int16 *v55; // [rsp+60h] [rbp-88h]
  unsigned __int16 *Src; // [rsp+68h] [rbp-80h]
  unsigned int v57; // [rsp+70h] [rbp-78h]
  unsigned int v58; // [rsp+74h] [rbp-74h]
  unsigned int v59; // [rsp+80h] [rbp-68h]
  __int128 v60; // [rsp+88h] [rbp-60h]
  int v61; // [rsp+F0h] [rbp+8h]

  v5 = a2;
  DWORD1(v54) = 0;
  v7 = 0;
  LOBYTE(v61) = 0;
  Size = 0LL;
  LOBYTE(v52) = 0;
  if ( !a1 )
  {
    *a5 = 0LL;
    return 0LL;
  }
  if ( a2 )
  {
    if ( (a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v60 = *(_OWORD *)a1;
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
    v60 = *(_OWORD *)a1;
    v8 = *(_DWORD *)(a1 + 16);
    v9 = *(_QWORD *)a1;
  }
  if ( (_BYTE)v9 != 1 )
    return 3221225560LL;
  LODWORD(v54) = v9 & 0x7FFFFFFF;
  v10 = v9 >> 16;
  if ( (v9 & 0x80000000) == 0 )
  {
    v11 = *(_BYTE **)(a1 + 8);
LABEL_11:
    v53 = v11;
    goto LABEL_12;
  }
  v15 = HIDWORD(v9);
  if ( (_DWORD)v15 )
  {
    v11 = (_BYTE *)(a1 + v15);
    goto LABEL_11;
  }
  v11 = 0LL;
  v53 = 0LL;
LABEL_12:
  *((_QWORD *)&v54 + 1) = v11;
  if ( (v10 & 0x8000u) != 0LL )
  {
    if ( !DWORD2(v60) )
    {
      v12 = 0LL;
      v51 = 0LL;
      goto LABEL_15;
    }
    v12 = a1 + DWORD2(v60);
  }
  else
  {
    v12 = *(_QWORD *)(a1 + 16);
  }
  v51 = (void *)v12;
LABEL_15:
  if ( (v10 & 0x10) != 0 )
  {
    if ( (v10 & 0x8000u) == 0LL )
    {
      v13 = *(unsigned __int16 **)(a1 + 24);
    }
    else if ( HIDWORD(v60) )
    {
      v13 = (unsigned __int16 *)(a1 + HIDWORD(*((_QWORD *)&v60 + 1)));
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
  v55 = v13;
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
  v48 = 0;
  v49 = 0;
  v57 = 0;
  v17 = 0;
  v59 = 0;
  v18 = 0;
  v19 = 0;
  v58 = 0;
  if ( (BYTE2(v54) & 0x10) != 0 && v13 )
  {
    if ( v5 )
    {
      v46 = (__int64)(v13 + 1);
      if ( (unsigned __int64)(v13 + 1) >= 0x7FFFFFFF0000LL )
        v46 = 0x7FFFFFFF0000LL;
      v47 = *(unsigned __int16 *)v46;
      v16 = v47;
      v48 = v47;
      if ( (_DWORD)v47 )
      {
        if ( ((unsigned __int8)v13 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (unsigned __int16 *)((char *)v13 + v47) < v13 || (unsigned __int64)v13 + v47 > 0x7FFFFFFF0000LL )
          v16 = v47;
      }
      v51 = (void *)v12;
      v53 = v11;
      v7 = 0;
    }
    else
    {
      v16 = v13[1];
      v48 = v16;
    }
    v57 = (v16 + 3) & 0xFFFFFFFC;
    if ( v57 - 8 > 0xFFF7 )
      return 3221225591LL;
  }
  else
  {
    v13 = 0LL;
    v55 = 0LL;
  }
  if ( (BYTE2(v54) & 4) != 0 && v14 )
  {
    if ( v5 )
    {
      v20 = (__int64)(v14 + 1);
      if ( (unsigned __int64)(v14 + 1) >= 0x7FFFFFFF0000LL )
        v20 = 0x7FFFFFFF0000LL;
      v21 = *(unsigned __int16 *)v20;
      v7 = v21;
      v49 = v21;
      if ( (_DWORD)v21 )
      {
        if ( ((unsigned __int8)v14 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (unsigned __int64)v14 + v21 > 0x7FFFFFFF0000LL || (unsigned __int16 *)((char *)v14 + v21) < v14 )
          v7 = v21;
      }
      v13 = v55;
      v51 = (void *)v12;
      v53 = v11;
      v16 = v48;
    }
    else
    {
      v7 = v14[1];
      v49 = v7;
    }
    v17 = (v7 + 3) & 0xFFFFFFFC;
    v59 = v17;
    if ( v17 - 8 > 0xFFF7 )
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
      v61 = *(unsigned __int8 *)v22;
      LODWORD(Size) = 4 * v61 + 8;
      if ( 4 * v61 == -8 )
        goto LABEL_59;
      if ( ((unsigned __int8)v11 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v53 = v11;
      v23 = (unsigned __int64)&v11[(unsigned int)Size];
      if ( v23 > 0x7FFFFFFF0000LL || v23 < (unsigned __int64)v11 )
LABEL_59:
        v53 = v11;
      v14 = Src;
      v13 = v55;
      v51 = (void *)v12;
      v16 = v48;
      v7 = v49;
    }
    else
    {
      LOBYTE(v61) = v11[1];
      LODWORD(Size) = RtlLengthRequiredSid((unsigned __int8)v61);
      v5 = a2;
      v18 = 0;
    }
    v19 = (Size + 3) & 0xFFFFFFFC;
    v58 = v19;
  }
  if ( v12 )
  {
    if ( v5 )
    {
      v44 = v12 + 1;
      if ( v12 + 1 >= 0x7FFFFFFF0000LL )
        v44 = 0x7FFFFFFF0000LL;
      v52 = *(unsigned __int8 *)v44;
      HIDWORD(Size) = 4 * v52 + 8;
      if ( 4 * v52 == -8 )
        goto LABEL_112;
      if ( (v12 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v51 = (void *)v12;
      v45 = v12 + HIDWORD(Size);
      if ( v45 > 0x7FFFFFFF0000LL || v45 < v12 )
LABEL_112:
        v51 = (void *)v12;
      v14 = Src;
      v13 = v55;
      v53 = v11;
      v16 = v48;
      v7 = v49;
    }
    else
    {
      LOBYTE(v52) = *(_BYTE *)(v12 + 1);
      HIDWORD(Size) = RtlLengthRequiredSid((unsigned __int8)v52);
    }
    v18 = (HIDWORD(Size) + 3) & 0xFFFFFFFC;
    v19 = v58;
  }
  v24 = v57 + 20 + v17 + v18 + v19;
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)(a3 | 0x400), v24, 0x63536553u);
  v26 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset_0(PoolWithTag, 0, (unsigned int)v24);
    *(_OWORD *)v26 = v54;
    v26[4] = (_DWORD)v51;
    v27 = v26 + 5;
    *((_WORD *)v26 + 1) |= 0x8000u;
    if ( (BYTE2(v54) & 0x10) != 0 && v13 )
    {
      memmove(v26 + 5, v13, v16);
      v28 = a2;
      if ( a2 && (v16 < 8 || v16 != *((unsigned __int16 *)v26 + 11) || !RtlValidAcl((PACL)(v26 + 5))) )
        goto LABEL_135;
      v26[3] = 20;
      *((_WORD *)v26 + 11) = v57;
      v27 += v57;
    }
    else
    {
      v26[3] = 0;
      v28 = a2;
    }
    if ( (BYTE2(v54) & 4) == 0 || !v14 )
    {
      v26[4] = 0;
LABEL_90:
      if ( v11 )
      {
        memmove(v27, v11, (unsigned int)Size);
        v27[1] = v61;
        if ( v28 && ((unsigned __int64)v27 <= 0x7FFFFFFF0000LL || (*v27 & 0xF) != 1 || (unsigned __int8)v61 > 0xFu) )
        {
LABEL_148:
          ExFreePoolWithTag(v26, 0);
          return 3221225592LL;
        }
        v41 = (_DWORD)v27 - (_DWORD)v26;
        v27 += v58;
      }
      else
      {
        v41 = 0;
      }
      v26[1] = v41;
      if ( !v51 )
      {
        v42 = 0;
        goto LABEL_102;
      }
      memmove(v27, v51, HIDWORD(Size));
      v27[1] = v52;
      if ( !v28 || (unsigned __int64)v27 > 0x7FFFFFFF0000LL && (unsigned __int8)v52 <= 0xFu && (*v27 & 0xF) == 1 )
      {
        v42 = (_DWORD)v27 - (_DWORD)v26;
LABEL_102:
        v26[2] = v42;
        *a5 = v26;
        return 0LL;
      }
      goto LABEL_148;
    }
    memmove(v27, v14, v7);
    if ( !v28 )
      goto LABEL_89;
    if ( v7 >= 8 )
    {
      v29 = (unsigned __int16 *)(v27 + 2);
      v30 = *((unsigned __int16 *)v27 + 1);
      if ( v7 == v30 )
      {
        if ( (unsigned __int8)(*v27 - 2) <= 2u
          && (unsigned __int16 *)((unsigned __int64)(v27 + 3) & 0xFFFFFFFFFFFFFFFEuLL) == v29
          && v30 >= 8 )
        {
          v31 = v27 + 8;
          v32 = 0;
          v33 = 1730063;
          v34 = 104928;
          while ( 1 )
          {
            if ( v32 >= *((unsigned __int16 *)v27 + 2) )
            {
              v40 = 1;
              v28 = a2;
              goto LABEL_88;
            }
            v35 = (unsigned __int64)&v27[*v29];
            if ( (unsigned __int64)(v31 + 4) > v35 )
              break;
            v36 = (unsigned __int16 *)(v31 + 2);
            if ( (unsigned __int8 *)((unsigned __int64)(v31 + 3) & 0xFFFFFFFFFFFFFFFEuLL) != v31 + 2 )
              break;
            v37 = *v36;
            if ( (unsigned __int64)&v31[v37] > v35 )
              break;
            v38 = *v31;
            if ( (unsigned __int8)v38 <= 0x14u && _bittest(&v33, v38) )
            {
              if ( ((v37 + 3) & 0xFFFFFFFFFFFFFFFCuLL) != v37 )
                break;
              if ( (unsigned int)v37 < 0x10 )
                break;
              if ( v31[8] != 1 )
                break;
              v39 = v31[9];
              if ( (unsigned __int8)v39 > 0xFu || v37 < 4 * v39 + 16 )
                break;
            }
            else if ( (_BYTE)v38 == 4 )
            {
              if ( *v27 < 3u || !RtlpValidCompoundAce((__int64)v31) )
                break;
              v34 = 104928;
            }
            else if ( (unsigned __int8)v38 <= 0x10u && _bittest(&v34, v38) )
            {
              if ( *v27 < 4u || !(unsigned __int8)RtlpValidObjectAce(v31) )
                break;
              v34 = 104928;
            }
            else if ( (_BYTE)v38 == 18 )
            {
              if ( !(unsigned __int8)RtlpValidAttributeAce(v31) )
                break;
              v34 = 104928;
            }
            else if ( (_BYTE)v38 == 21 )
            {
              if ( !RtlpValidAccessFilterAce((__int64)v31) )
                break;
              v34 = 104928;
            }
            else if ( (unsigned int)v37 < 4 )
            {
              break;
            }
            v31 += *v36;
            ++v32;
          }
          v28 = a2;
        }
        v40 = 0;
LABEL_88:
        if ( v40 )
        {
LABEL_89:
          v26[4] = (_DWORD)v27 - (_DWORD)v26;
          *((_WORD *)v27 + 1) = v59;
          v27 += v59;
          v11 = v53;
          goto LABEL_90;
        }
      }
    }
LABEL_135:
    ExFreePoolWithTag(v26, 0);
    return 3221225591LL;
  }
  return 3221225626LL;
}
