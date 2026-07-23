/*
 * XREFs of SepCaptureTokenSecurityAttributesInformation @ 0x14088BFA8
 * Callers:
 *     SepCaptureTokenSecurityAttributesAndOperationsInformation @ 0x14088BDFC (SepCaptureTokenSecurityAttributesAndOperationsInformation.c)
 *     NtCreateTokenEx @ 0x140983E20 (NtCreateTokenEx.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     SepCaptureFqbnArray @ 0x140792058 (SepCaptureFqbnArray.c)
 *     SepCaptureOctetStringArray @ 0x14079228C (SepCaptureOctetStringArray.c)
 *     RtlCompareUnicodeStrings @ 0x14088C7D0 (RtlCompareUnicodeStrings.c)
 *     SepCaptureInt64Array @ 0x14088CB74 (SepCaptureInt64Array.c)
 *     SepCaptureUnicodeStringArray @ 0x14088CF60 (SepCaptureUnicodeStringArray.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepCaptureTokenSecurityAttributesInformation(
        unsigned __int64 a1,
        _DWORD *a2,
        int a3,
        char a4,
        char a5,
        unsigned __int64 **a6)
{
  PVOID *v7; // rsi
  signed int v8; // edi
  __int64 v9; // r13
  unsigned __int64 *Pool2; // rax
  unsigned __int64 *v11; // r14
  __int64 v12; // rcx
  unsigned __int64 v13; // rcx
  __int64 v14; // r12
  unsigned __int64 v15; // rax
  __int64 v16; // r8
  unsigned int v17; // r15d
  void *v18; // r12
  __int64 v19; // rax
  unsigned __int64 v20; // rdx
  unsigned int v21; // edx
  __int64 v22; // r15
  unsigned int v23; // r10d
  int v24; // eax
  unsigned int v26; // ecx
  bool v27; // zf
  __int64 v28; // rax
  PVOID *v29; // r15
  __int64 v30; // r14
  PVOID *v31; // r15
  char v32; // [rsp+30h] [rbp-88h]
  unsigned int i; // [rsp+34h] [rbp-84h]
  int v34; // [rsp+34h] [rbp-84h]
  signed int v35; // [rsp+38h] [rbp-80h]
  unsigned int v36; // [rsp+3Ch] [rbp-7Ch]
  PVOID P; // [rsp+40h] [rbp-78h] BYREF
  unsigned int v38; // [rsp+48h] [rbp-70h]
  void *v39; // [rsp+50h] [rbp-68h]
  PVOID *v40; // [rsp+58h] [rbp-60h]
  PVOID *v41; // [rsp+60h] [rbp-58h]
  unsigned __int64 *v42; // [rsp+68h] [rbp-50h]
  __int64 v43; // [rsp+70h] [rbp-48h]
  __int64 v44; // [rsp+78h] [rbp-40h]
  int v48; // [rsp+D8h] [rbp+20h]

  v7 = 0LL;
  v41 = 0LL;
  v38 = 0;
  v32 = 0;
  v8 = 0;
  v39 = 0LL;
  v9 = 0LL;
  v36 = 0;
  P = 0LL;
  if ( !a4 )
    return 3221225659LL;
  Pool2 = (unsigned __int64 *)ExAllocatePool2(0x100uLL, 0x10uLL, 0x74416553u);
  v11 = Pool2;
  v42 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  *(_OWORD *)Pool2 = 0LL;
  if ( a4 != 1 )
    goto LABEL_76;
  if ( !a2 || !a3 || *a2 == 1 )
    v32 = 1;
  if ( (a1 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( a1 + 16 > 0x7FFFFFFF0000LL || a1 + 16 < a1 )
    v9 = 0LL;
  *(_WORD *)Pool2 = *(_WORD *)a1;
  *((_WORD *)Pool2 + 1) = *(_WORD *)(a1 + 2);
  v12 = *(unsigned int *)(a1 + 4);
  *((_DWORD *)Pool2 + 1) = v12;
  if ( !(_DWORD)v12 )
  {
    *a6 = Pool2;
    return 0LL;
  }
  Pool2[1] = *(_QWORD *)(a1 + 8);
  v13 = 40 * v12;
  v43 = v13;
  v14 = 0xFFFFFFFFLL;
  if ( v13 <= 0xFFFFFFFF )
    v14 = (unsigned int)v13;
  v8 = v13 > 0xFFFFFFFF ? 0xC0000095 : 0;
  v35 = v8;
  if ( v13 > 0xFFFFFFFF )
  {
    ExFreePoolWithTag(Pool2, 0);
    return (unsigned int)v8;
  }
  v7 = (PVOID *)ExAllocatePool2(0x100uLL, (unsigned int)v14, 0x74416553u);
  v41 = v7;
  if ( !v7 )
  {
    ExFreePoolWithTag(v11, 0);
    return 3221225626LL;
  }
  if ( (_DWORD)v14 )
  {
    v15 = v11[1];
    if ( (v15 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( v15 + v14 > 0x7FFFFFFF0000LL || v15 + v14 < v15 )
    {
      v7 = v41;
      v9 = 0LL;
    }
  }
  memmove(v7, (const void *)v11[1], (unsigned int)v14);
  v17 = 0;
  for ( i = 0; ; i = v17 )
  {
    v39 = 0LL;
    if ( v17 >= *((_DWORD *)v11 + 1) )
      break;
    v40 = &v7[5 * v17];
    if ( !*(_WORD *)v40 )
    {
      v8 = -1073741811;
      v39 = 0LL;
      goto LABEL_70;
    }
    v18 = (void *)ExAllocatePool2(0x100uLL, *(unsigned __int16 *)v40, 0x74416553u);
    v39 = v18;
    if ( !v18 )
    {
      v8 = -1073741670;
      goto LABEL_70;
    }
    v19 = *(unsigned __int16 *)v40;
    if ( (_WORD)v19 )
    {
      v20 = (unsigned __int64)v40[1];
      if ( (v20 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v20 + v19 > 0x7FFFFFFF0000LL || v20 + v19 < v20 )
      {
        v7 = v41;
        v8 = v35;
        v18 = v39;
        v9 = 0LL;
        v17 = i;
      }
    }
    memmove(v18, v40[1], *(unsigned __int16 *)v40);
    v40[1] = v18;
    ++v38;
    v39 = 0LL;
    ++v17;
  }
  v21 = 0;
  v34 = 0;
  while ( v21 < *((_DWORD *)v11 + 1) )
  {
    v22 = 5LL * v21;
    v23 = (unsigned int)v7[5 * v21 + 3];
    if ( v23 )
    {
      switch ( LOWORD(v7[5 * v21 + 2]) )
      {
        case 1:
        case 2:
LABEL_45:
          v24 = SepCaptureInt64Array(v7[5 * v21 + 4]);
          break;
        case 3:
          LOBYTE(v16) = 1;
          v24 = SepCaptureUnicodeStringArray(v7[5 * v21 + 4], v23, v16, &P);
          break;
        case 4:
          v24 = SepCaptureFqbnArray(v7[5 * v21 + 4], v23, v16, &P);
          break;
        default:
          if ( LOWORD(v7[5 * v21 + 2]) != 5 )
          {
            if ( LOWORD(v7[5 * v21 + 2]) == 6 )
              goto LABEL_45;
            if ( LOWORD(v7[5 * v21 + 2]) != 16 )
            {
              v8 = -1073741637;
LABEL_49:
              if ( v8 < 0 )
                goto LABEL_70;
              v9 = (unsigned int)(v9 + 1);
              v36 = v9;
              P = 0LL;
              goto LABEL_33;
            }
          }
          v24 = SepCaptureOctetStringArray(v7[5 * v21 + 4], v23, v16, &P);
          break;
      }
      v8 = v24;
      if ( v24 >= 0 )
        v7[v22 + 4] = P;
      v21 = v34;
      goto LABEL_49;
    }
    if ( !a5 )
    {
      v8 = -1073741811;
      goto LABEL_70;
    }
    v7[5 * v21 + 4] = 0LL;
    v9 = (unsigned int)(v9 + 1);
    v36 = v9;
LABEL_33:
    v34 = ++v21;
  }
  if ( v8 >= 0 )
  {
    v11[1] = (unsigned __int64)v7;
    if ( !v32 && a3 != *((_DWORD *)v11 + 1) )
      v8 = -1073741811;
  }
LABEL_70:
  if ( v8 < 0 )
    goto LABEL_90;
  v26 = 0;
  v48 = 0;
  if ( *((_DWORD *)v11 + 1) )
  {
    do
    {
      if ( v32 || (v27 = ((a2[v26] - 2) & 0xFFFFFFFD) == 0, v26 = v48, v27) )
      {
        v28 = 0LL;
        while ( 1 )
        {
          LODWORD(v40) = v28;
          if ( (unsigned int)v28 >= 4 )
            break;
          v43 = 3 * v28;
          v44 = 5LL * v26;
          if ( !RtlCompareUnicodeStrings(
                  (PCWCH)v7[5 * v26 + 1],
                  (unsigned __int64)LOWORD(v7[5 * v26]) >> 1,
                  (PCWCH)SepValidAttributesTypes[3 * v28 + 1],
                  (unsigned __int64)LOWORD(SepValidAttributesTypes[3 * v28]) >> 1,
                  1u) )
          {
            if ( LOWORD(v7[v44 + 2]) != LODWORD(SepValidAttributesTypes[v43 + 2]) )
              v8 = -1073741811;
            if ( LODWORD(v7[v44 + 3]) < HIDWORD(SepValidAttributesTypes[v43 + 2]) )
              v8 = -1073741811;
            v26 = v48;
            break;
          }
          v28 = (unsigned int)((_DWORD)v40 + 1);
          v26 = v48;
        }
      }
      v48 = ++v26;
    }
    while ( v26 < *((_DWORD *)v11 + 1) );
    v9 = v36;
  }
LABEL_76:
  if ( v8 < 0 )
  {
LABEL_90:
    if ( v7 )
    {
      if ( v38 )
      {
        v29 = v7 + 1;
        v30 = v38;
        do
        {
          ExFreePoolWithTag(*v29, 0);
          v29 += 5;
          --v30;
        }
        while ( v30 );
        v11 = v42;
      }
      if ( (_DWORD)v9 )
      {
        v31 = v7 + 4;
        do
        {
          if ( *v31 )
            ExFreePoolWithTag(*v31, 0);
          v31 += 5;
          --v9;
        }
        while ( v9 );
      }
      ExFreePoolWithTag(v7, 0);
    }
    if ( P )
      ExFreePoolWithTag(P, 0);
    ExFreePoolWithTag(v11, 0);
  }
  else
  {
    *a6 = v11;
  }
  return (unsigned int)v8;
}
