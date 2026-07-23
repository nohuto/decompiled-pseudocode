/*
 * XREFs of LocalConvertSDToStringSD_Rev1 @ 0x1408673C8
 * Callers:
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x140403974 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     SeConvertSecurityDescriptorToStringSecurityDescriptor @ 0x140491960 (SeConvertSecurityDescriptorToStringSecurityDescriptor.c)
 * Callees:
 *     RtlGetDaclSecurityDescriptor @ 0x140449130 (RtlGetDaclSecurityDescriptor.c)
 *     swprintf_s @ 0x140500710 (swprintf_s.c)
 *     wcscpy_s @ 0x1405020A0 (wcscpy_s.c)
 *     LocalConvertAclToString @ 0x140864F2C (LocalConvertAclToString.c)
 *     SddlpAlloc @ 0x140867ED4 (SddlpAlloc.c)
 *     SddlpFree @ 0x140867F20 (SddlpFree.c)
 *     RtlNtStatusToDosError @ 0x14086B8C0 (RtlNtStatusToDosError.c)
 *     LocalGetStringForControl @ 0x140A3A444 (LocalGetStringForControl.c)
 *     SddlFilterSacl @ 0x140A51D80 (SddlFilterSacl.c)
 *     LocalGetStringForSid @ 0x140A66038 (LocalGetStringForSid.c)
 */

ULONG __fastcall LocalConvertSDToStringSD_Rev1(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int16 a5,
        wchar_t **a6,
        unsigned int *a7)
{
  int StringForSid; // r13d
  unsigned int v9; // edi
  void *v10; // rsi
  void *v11; // r15
  __int64 v12; // r14
  __int16 v13; // r12
  __int64 v14; // rax
  __int64 v15; // rax
  int DaclSecurityDescriptor; // eax
  __int64 v17; // r12
  ULONG v18; // ebx
  size_t v20; // rdx
  wchar_t **v21; // r14
  __int64 v22; // rcx
  wchar_t *v23; // rax
  __int64 v24; // rsi
  __int64 v25; // rcx
  size_t v26; // r12
  size_t v27; // rdx
  wchar_t *v28; // rcx
  wchar_t *v29; // rcx
  __int64 v30; // r15
  size_t v31; // r12
  __int64 v32; // rax
  __int64 v33; // rax
  char v34; // bl
  BOOLEAN v35; // cl
  unsigned int v36; // r12d
  __int16 v37; // ax
  char v38; // cl
  unsigned __int16 v39; // bx
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // [rsp+20h] [rbp-71h]
  __int64 v43; // [rsp+58h] [rbp-39h]
  __int64 v44; // [rsp+68h] [rbp-29h] BYREF
  __int64 v45; // [rsp+70h] [rbp-21h] BYREF
  wchar_t *v46; // [rsp+78h] [rbp-19h] BYREF
  wchar_t *Src; // [rsp+80h] [rbp-11h] BYREF
  PACL Dacl; // [rsp+88h] [rbp-9h] BYREF
  BOOLEAN DaclDefaulted; // [rsp+E0h] [rbp+4Fh] BYREF
  __int64 v50; // [rsp+E8h] [rbp+57h]
  BOOLEAN DaclPresent; // [rsp+F0h] [rbp+5Fh] BYREF
  size_t Size; // [rsp+F8h] [rbp+67h] BYREF

  v50 = a2;
  LODWORD(Size) = 0;
  StringForSid = 0;
  Dacl = 0LL;
  v9 = 0;
  v43 = 0LL;
  v10 = 0LL;
  LOBYTE(v50) = 0;
  v11 = 0LL;
  DaclPresent = 0;
  v12 = 0LL;
  v46 = 0LL;
  Src = 0LL;
  v45 = 0LL;
  v44 = 0LL;
  if ( !a4 || !a6 )
    return 87;
  v13 = a5;
  if ( (a5 & 1) != 0 )
  {
    if ( *(_BYTE *)a4 != 1 )
      goto LABEL_30;
    if ( *(__int16 *)(a4 + 2) >= 0 )
    {
      v10 = *(void **)(a4 + 8);
    }
    else
    {
      v14 = *(unsigned int *)(a4 + 4);
      if ( (_DWORD)v14 )
        v10 = (void *)(a4 + v14);
    }
  }
  if ( (a5 & 2) != 0 )
  {
    if ( *(_BYTE *)a4 == 1 )
    {
      if ( *(__int16 *)(a4 + 2) >= 0 )
      {
        v11 = *(void **)(a4 + 16);
      }
      else
      {
        v15 = *(unsigned int *)(a4 + 8);
        if ( (_DWORD)v15 )
          v11 = (void *)(a4 + v15);
      }
      goto LABEL_13;
    }
LABEL_30:
    DaclSecurityDescriptor = -1073741736;
LABEL_15:
    v17 = 0LL;
LABEL_16:
    v18 = RtlNtStatusToDosError(DaclSecurityDescriptor);
    SddlpFree(v17);
    return v18;
  }
LABEL_13:
  if ( (a5 & 4) != 0 )
  {
    DaclSecurityDescriptor = RtlGetDaclSecurityDescriptor((PSECURITY_DESCRIPTOR)a4, &DaclPresent, &Dacl, &DaclDefaulted);
    if ( DaclSecurityDescriptor < 0 )
      goto LABEL_15;
  }
  v36 = v13 & 0x1F8;
  if ( !v36 )
    goto LABEL_68;
  if ( *(_BYTE *)a4 == 1 )
  {
    v37 = *(_WORD *)(a4 + 2);
    if ( (v37 & 0x10) != 0 )
    {
      v38 = 1;
      LOBYTE(v50) = 1;
      if ( v37 >= 0 )
      {
        v12 = *(_QWORD *)(a4 + 24);
      }
      else
      {
        v41 = *(unsigned int *)(a4 + 12);
        if ( (_DWORD)v41 )
          v12 = a4 + v41;
        else
          v12 = 0LL;
      }
    }
    else
    {
      v38 = 0;
      LOBYTE(v50) = 0;
    }
    if ( v38 && v12 )
    {
      SddlFilterSacl(v12, 0LL, &Size, v36);
      v40 = SddlpAlloc((unsigned int)Size);
      v43 = v40;
      if ( !v40 )
      {
        v17 = 0LL;
        DaclSecurityDescriptor = -1073741801;
        goto LABEL_16;
      }
      SddlFilterSacl(v12, v40, &Size, v36);
      v17 = v43;
      v12 = v43;
LABEL_69:
      if ( *(_BYTE *)a4 != 1 )
      {
        DaclSecurityDescriptor = -1073741736;
        goto LABEL_16;
      }
      v39 = *(_WORD *)(a4 + 2);
      if ( v10 )
      {
        StringForSid = LocalGetStringForSid(v10, v42, 1);
        if ( StringForSid )
          goto LABEL_29;
      }
      if ( v11 )
      {
        StringForSid = LocalGetStringForSid(v11, v42, 1);
        if ( StringForSid )
          goto LABEL_29;
      }
      if ( v39 )
      {
        StringForSid = LocalGetStringForControl(v39, 1LL, &v45);
        if ( StringForSid )
          goto LABEL_29;
        StringForSid = LocalGetStringForControl(v39, 2LL, &v44);
        if ( StringForSid )
          goto LABEL_29;
      }
      v34 = v50;
      if ( (_BYTE)v50 )
      {
        StringForSid = LocalConvertAclToString(v12, v50, 0, (__int64 *)&v46, (unsigned int *)&Size, 0LL, 0LL, 0, 1);
        if ( StringForSid )
          goto LABEL_29;
        v9 = Size;
      }
      v35 = DaclPresent;
      if ( !DaclPresent )
        goto LABEL_61;
      StringForSid = LocalConvertAclToString(
                       (__int64)Dacl,
                       DaclPresent,
                       1,
                       (__int64 *)&Src,
                       (unsigned int *)&Size,
                       0LL,
                       0LL,
                       0,
                       1);
      if ( !StringForSid )
      {
        v9 += Size;
        v35 = DaclPresent;
LABEL_61:
        v30 = -1LL;
        if ( v35 )
        {
          v9 += 4;
          if ( v45 )
          {
            v32 = -1LL;
            do
              ++v32;
            while ( *(_WORD *)(v45 + 2 * v32) );
            v9 += 2 * v32;
          }
        }
        if ( v34 )
        {
          v9 += 4;
          if ( v44 )
          {
            v33 = -1LL;
            do
              ++v33;
            while ( *(_WORD *)(v44 + 2 * v33) );
            v9 += 2 * v33;
          }
        }
        v31 = v9 + 2LL;
        v23 = (wchar_t *)SddlpAlloc(v31);
        *a6 = v23;
        if ( v23 )
        {
          LODWORD(v24) = 0;
          if ( DaclPresent )
          {
            v20 = v31 >> 1;
            LODWORD(v42) = 58;
            if ( v45 )
              swprintf_s(v23, v20, L"%ws%wc%ws", L"D", v42, v45);
            else
              swprintf_s(v23, v20, L"%ws%wc", L"D", v42);
            v21 = a6;
            v22 = -1LL;
            v23 = *a6;
            do
              ++v22;
            while ( (*a6)[v22] );
            v24 = (unsigned int)v22;
            if ( Src )
            {
              wcscpy_s(&v23[(unsigned int)v22], (v31 >> 1) - (unsigned int)v22, Src);
              v23 = *v21;
              v25 = -1LL;
              do
                ++v25;
              while ( (*v21)[v24 + v25] );
              LODWORD(v24) = v25 + v24;
            }
          }
          else
          {
            v21 = a6;
          }
          if ( (_BYTE)v50 )
          {
            v26 = v31 >> 1;
            v27 = v26 - (unsigned int)v24;
            v28 = &v23[(unsigned int)v24];
            LODWORD(v42) = 58;
            if ( v44 )
              swprintf_s(v28, v27, L"%ws%wc%ws", L"S", v42, v44);
            else
              swprintf_s(v28, v27, L"%ws%wc", L"S", v42);
            v29 = *v21;
            if ( v46 )
            {
              do
                ++v30;
              while ( v29[(unsigned int)v24 + v30] );
              wcscpy_s(&v29[(unsigned int)(v24 + v30)], v26 - (unsigned int)(v24 + v30), v46);
            }
          }
          if ( a7 )
            *a7 = v9 >> 1;
        }
        else
        {
          StringForSid = 8;
        }
      }
LABEL_29:
      SddlpFree(0LL);
      SddlpFree(0LL);
      SddlpFree(v46);
      SddlpFree(Src);
      SddlpFree(v44);
      SddlpFree(v45);
      SddlpFree(v43);
      SddlpFree(0LL);
      return StringForSid;
    }
LABEL_68:
    v17 = 0LL;
    goto LABEL_69;
  }
  return RtlNtStatusToDosError(-1073741736);
}
