/*
 * XREFs of ObGetObjectInformation @ 0x1409C5D80
 * Callers:
 *     ExpQuerySystemInformation @ 0x140ADDAE0 (ExpQuerySystemInformation.c)
 * Callees:
 *     OBJECT_HEADER_TO_QUOTA_INFO @ 0x140402A00 (OBJECT_HEADER_TO_QUOTA_INFO.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     OBJECT_HEADER_TO_PROCESS_INFO @ 0x1404A1F34 (OBJECT_HEADER_TO_PROCESS_INFO.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ObQueryTypeName @ 0x140914530 (ObQueryTypeName.c)
 *     ObQueryNameStringMode @ 0x1409524C0 (ObQueryNameStringMode.c)
 *     ObpDestroyTypeArray @ 0x1409C6404 (ObpDestroyTypeArray.c)
 *     ObpCreateTypeArray @ 0x1409C6454 (ObpCreateTypeArray.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ObGetObjectInformation(int a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int *a5)
{
  unsigned int *v5; // rdi
  __int64 v6; // r15
  __int64 Pool2; // rax
  unsigned __int16 *v8; // r12
  unsigned __int16 *v10; // rbx
  unsigned int v11; // r14d
  unsigned int v12; // esi
  unsigned int *TypeArray; // rcx
  unsigned int v14; // edx
  __int64 v15; // rcx
  POBJECT_TYPE *v16; // rcx
  unsigned int *v17; // r13
  char v18; // dl
  unsigned int i; // eax
  __int64 v20; // rcx
  __int64 v21; // r9
  char *v22; // r11
  __int64 v23; // rdi
  POBJECT_TYPE *v24; // rdx
  int v25; // eax
  unsigned int v26; // ecx
  unsigned int v27; // r10d
  char *v28; // rax
  unsigned __int64 v29; // rax
  int *v30; // rax
  __int64 v31; // r9
  int v32; // edx
  int v33; // r8d
  __int64 *v34; // rax
  unsigned int v35; // r10d
  __int64 v36; // r11
  __int64 v37; // rax
  int v38; // edi
  int v39; // eax
  unsigned int v40; // eax
  void *v41; // rbx
  unsigned __int16 *v42; // rcx
  unsigned __int16 *v43; // rdi
  __int16 v44; // ax
  __int16 v45; // di
  unsigned int v46; // [rsp+30h] [rbp-C8h] BYREF
  int v47; // [rsp+34h] [rbp-C4h]
  char v48; // [rsp+38h] [rbp-C0h]
  unsigned int v49; // [rsp+3Ch] [rbp-BCh]
  int v50; // [rsp+40h] [rbp-B8h]
  unsigned int v51; // [rsp+44h] [rbp-B4h]
  const void **v52; // [rsp+48h] [rbp-B0h]
  unsigned int v53; // [rsp+50h] [rbp-A8h]
  POBJECT_TYPE *v54; // [rsp+58h] [rbp-A0h]
  unsigned __int64 v55; // [rsp+60h] [rbp-98h]
  unsigned int *v56; // [rsp+68h] [rbp-90h]
  unsigned int *v57; // [rsp+70h] [rbp-88h]
  PVOID P; // [rsp+78h] [rbp-80h]
  unsigned __int16 *v59; // [rsp+80h] [rbp-78h]
  char *v60; // [rsp+88h] [rbp-70h]
  __int64 v61; // [rsp+90h] [rbp-68h]
  __int64 v62; // [rsp+98h] [rbp-60h]
  __int64 v63; // [rsp+A0h] [rbp-58h]
  __int64 v64; // [rsp+A8h] [rbp-50h]
  unsigned __int16 *v65; // [rsp+B0h] [rbp-48h]

  v5 = 0LL;
  v46 = 0;
  v6 = 0LL;
  v57 = 0LL;
  v55 = 536LL;
  Pool2 = ExAllocatePool2(0x100uLL, 0x218uLL, 0x7241624Fu);
  v8 = (unsigned __int16 *)Pool2;
  v59 = (unsigned __int16 *)Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  v10 = (unsigned __int16 *)Pool2;
  v52 = (const void **)Pool2;
  v11 = 0;
  v12 = 0;
  v56 = 0LL;
  TypeArray = (unsigned int *)ObpCreateTypeArray(ObpTypeObjectType);
  P = TypeArray;
  if ( !TypeArray )
  {
    ExFreePoolWithTag(v8, 0x7241624Fu);
    return 3221225473LL;
  }
  v14 = 0;
LABEL_6:
  v51 = v14;
  if ( v14 < *TypeArray )
  {
    v15 = *(_QWORD *)&TypeArray[2 * v14 + 2];
    if ( !v15 )
      goto LABEL_22;
    v16 = (POBJECT_TYPE *)(v15 + 80);
    v54 = v16;
    if ( v16 == ObpTypeObjectType )
      goto LABEL_22;
    v17 = (unsigned int *)ObpCreateTypeArray(v16);
    v57 = v17;
    if ( !v17 )
      goto LABEL_21;
    v18 = 1;
    v48 = 1;
    for ( i = 0; ; ++i )
    {
      v53 = i;
      if ( i >= *v17 )
      {
LABEL_20:
        ObpDestroyTypeArray(v17);
        v57 = 0LL;
        v5 = v56;
LABEL_21:
        v14 = v51;
LABEL_22:
        ++v14;
        TypeArray = (unsigned int *)P;
        goto LABEL_6;
      }
      v20 = *(_QWORD *)&v17[2 * i + 2];
      v61 = v20;
      if ( v20 )
        break;
LABEL_73:
      ;
    }
    v21 = v20 + 32;
    v62 = v20 + 32;
    v22 = (char *)(v20 + 80);
    v60 = (char *)(v20 + 80);
    if ( v18 )
    {
      v48 = 0;
      if ( v5 && v12 < a4 )
        *v5 = v12;
      v23 = a3 + v12;
      v56 = (unsigned int *)v23;
      v63 = v23;
      v12 += 48;
      v49 = v12;
      if ( v12 < 0x30 )
        goto LABEL_18;
      if ( v12 >= a4 )
        goto LABEL_24;
      *(_DWORD *)v23 = 0;
      v24 = v54;
      *(_DWORD *)(v23 + 4) = *((_DWORD *)v54 + 11);
      *(_DWORD *)(v23 + 8) = *((_DWORD *)v24 + 12);
      *(_DWORD *)(v23 + 12) = *((unsigned __int8 *)v24 + 40);
      *(_DWORD *)(v23 + 16) = *((_DWORD *)v24 + 18);
      *(_OWORD *)(v23 + 20) = *(_OWORD *)((char *)v24 + 76);
      *(_DWORD *)(v23 + 36) = *((_DWORD *)v24 + 23);
      *(_DWORD *)(v23 + 40) = *((_DWORD *)v24 + 25);
      *(_BYTE *)(v23 + 44) = (*((_BYTE *)v24 + 66) & 8) != 0;
      v46 = 0;
      v25 = ObQueryTypeName((__int64)v22, v23 + 48, a4 - v12, &v46);
      v50 = v25;
      v26 = (v46 + 7) & 0xFFFFFFF8;
      v46 = v26;
      if ( v25 < 0 )
      {
        v11 = v25;
        v47 = v25;
      }
      else
      {
        *(_WORD *)(v23 + 50) = v26 - 16;
        *(_QWORD *)(v23 + 56) += a2 - a3;
        v26 = v46;
      }
      v12 += v26;
      v49 = v12;
      if ( v12 < v26 )
      {
LABEL_18:
        v11 = -1073741675;
LABEL_19:
        v47 = v11;
        goto LABEL_20;
      }
      v21 = v62;
      v20 = v61;
      v27 = a4;
      v22 = v60;
    }
    else
    {
      v27 = a4;
      if ( v12 < a4 )
        *(_DWORD *)v6 = v12;
    }
    v6 = a3 + v12;
    v64 = v6;
    v12 += 64;
    v49 = v12;
    if ( v12 < 0x40 )
      goto LABEL_18;
    if ( v12 >= v27 )
    {
LABEL_24:
      v11 = -1073741820;
      goto LABEL_19;
    }
    *(_DWORD *)v6 = 0;
    v28 = v22;
    if ( a1 )
      v28 = 0LL;
    *(_QWORD *)(v6 + 8) = v28;
    *(_QWORD *)(v6 + 16) = *(_QWORD *)(v20 + 16);
    *(_WORD *)(v6 + 24) = *(_WORD *)(v20 + 24);
    *(_DWORD *)(v6 + 28) = *(_DWORD *)v21;
    *(_DWORD *)(v6 + 32) = *(_DWORD *)(v21 + 8);
    *(_WORD *)(v6 + 26) = *(unsigned __int8 *)(v21 + 27);
    v29 = *(_QWORD *)(v21 + 40) & 0xFFFFFFFFFFFFFFF0uLL;
    *(_QWORD *)(v6 + 56) = v29;
    if ( a1 )
      v29 = 0LL;
    *(_QWORD *)(v6 + 56) = v29;
    v30 = (int *)OBJECT_HEADER_TO_QUOTA_INFO(v21);
    v32 = *((_DWORD *)v54 + 26);
    v33 = *((_DWORD *)v54 + 27);
    if ( v30 )
    {
      v32 = *v30;
      v33 = v30[1];
    }
    *(_DWORD *)(v6 + 36) = v32;
    *(_DWORD *)(v6 + 40) = v33;
    v34 = (__int64 *)OBJECT_HEADER_TO_PROCESS_INFO(v31);
    if ( v34 )
    {
      v37 = *v34;
      if ( v37 )
        *(_QWORD *)(v6 + 48) = *(_QWORD *)(v37 + 464);
    }
    v46 = 0;
    v38 = 0;
    v50 = 0;
    if ( v54[20] && v54 == IoFileObjectType )
    {
      *(_OWORD *)v10 = *(_OWORD *)(v36 + 88);
      v39 = *v10;
      if ( (_WORD)v39 && *((_QWORD *)v10 + 1) )
      {
        v40 = v39 + 2;
        v46 = v40;
        if ( v40 > 0x208 )
        {
          v46 = 520;
          *v10 = 518;
          v40 = v46;
        }
        v41 = v10 + 8;
        memmove(v41, v52[1], v40 - 2LL);
        v42 = (unsigned __int16 *)v52;
        v52[1] = v41;
        v42[1] = v46;
        *((_WORD *)v41 + (*v42 >> 1)) = 0;
        v46 += 16;
        v10 = (unsigned __int16 *)v52;
        v35 = a4;
      }
LABEL_56:
      if ( v46 )
      {
        v46 = (v46 + 7) & 0xFFFFFFF8;
        v12 += v46;
        v49 = v12;
        if ( v12 < v46 )
          goto LABEL_18;
        if ( v38 < 0 )
        {
          v12 += 16;
          v49 = v12;
          if ( v12 < 0x10 )
            goto LABEL_18;
          if ( v12 < v35 )
          {
            RtlInitUnicodeString((PUNICODE_STRING)(v6 + 64), 0LL);
            v11 = v38;
            v47 = v38;
            goto LABEL_72;
          }
LABEL_70:
          v11 = -1073741820;
          v47 = -1073741820;
          goto LABEL_72;
        }
        v44 = *v10;
        if ( *v10 && v12 < v35 )
        {
          v45 = v44 + 2;
          *(_WORD *)(v6 + 64) = v44;
          memmove((void *)(v6 + 80), v52[1], (unsigned __int16)(v44 + 2));
          *(_QWORD *)(v6 + 72) = a2 + v6 + 80 - a3;
          *(_WORD *)(v6 + 66) = v45;
LABEL_72:
          v10 = (unsigned __int16 *)v52;
          v5 = v56;
          i = v53;
          v18 = v48;
          goto LABEL_73;
        }
        if ( *v10 )
          goto LABEL_70;
      }
      else
      {
        v12 += 16;
        v49 = v12;
        if ( v12 < 0x10 )
          goto LABEL_18;
      }
      if ( v12 < v35 )
      {
        RtlInitUnicodeString((PUNICODE_STRING)(v6 + 64), 0LL);
        goto LABEL_72;
      }
      goto LABEL_70;
    }
    v38 = ObQueryNameStringMode((char *)v36, (__int64)v10, v55, &v46, 0);
    v50 = v38;
    if ( v38 == -1073741820 )
    {
      v35 = a4;
      if ( v46 <= v55 || v12 + v46 >= a4 )
        goto LABEL_56;
      v43 = v8;
      v8 = (unsigned __int16 *)ExAllocatePool2(0x100uLL, v46, 0x7241624Fu);
      v59 = v8;
      if ( !v8 )
      {
        v8 = v43;
        v59 = v43;
        v38 = -1073741670;
        v50 = -1073741670;
        v35 = a4;
        goto LABEL_56;
      }
      ExFreePoolWithTag(v43, 0x7241624Fu);
      v55 = v46;
      v61 = v46;
      v10 = v8;
      v52 = (const void **)v8;
      v65 = v8;
      v38 = ObQueryNameStringMode(v60, (__int64)v8, v46, &v46, 0);
      v50 = v38;
    }
    v35 = a4;
    goto LABEL_56;
  }
  if ( a5 )
    *a5 = v12;
  ObpDestroyTypeArray(TypeArray);
  ExFreePoolWithTag(v8, 0x7241624Fu);
  if ( !v5 )
    return (unsigned int)-1073741823;
  return v11;
}
