/*
 * XREFs of SepInternalQuerySecurityAttributesTokenEx @ 0x1403B7650
 * Callers:
 *     SeQuerySecurityAttributesTokenAccessInformation @ 0x1403B5CD0 (SeQuerySecurityAttributesTokenAccessInformation.c)
 *     NtQuerySecurityAttributesToken @ 0x14088CC70 (NtQuerySecurityAttributesToken.c)
 *     SeQuerySecurityAttributesToken @ 0x1409E61E0 (SeQuerySecurityAttributesToken.c)
 *     NtQueryInformationToken @ 0x140AD09E0 (NtQueryInformationToken.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x1402195E0 (ExReleaseSpinLockShared.c)
 *     SepGetSingletonEntryFromIndexNumber @ 0x14021AA04 (SepGetSingletonEntryFromIndexNumber.c)
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     ExAcquireSpinLockShared @ 0x1402C2D30 (ExAcquireSpinLockShared.c)
 *     ExAcquireResourceSharedLite @ 0x140321360 (ExAcquireResourceSharedLite.c)
 *     AuthzBasepQuerySecurityAttributesToken @ 0x1403B7C30 (AuthzBasepQuerySecurityAttributesToken.c)
 *     AuthzBasepCopyoutSecurityAttributes @ 0x1403B7FB0 (AuthzBasepCopyoutSecurityAttributes.c)
 *     AuthzBasepGetSecurityAttributeValueCopyoutBufferSize @ 0x1403B82E0 (AuthzBasepGetSecurityAttributeValueCopyoutBufferSize.c)
 *     SepPotentialGlobalTableAttribute @ 0x1403B86D8 (SepPotentialGlobalTableAttribute.c)
 *     AuthzBasepSecurityAttributePresent @ 0x1403B8760 (AuthzBasepSecurityAttributePresent.c)
 *     AuthzBasepEqualUnicodeStringCaseSensitive @ 0x1403B88F4 (AuthzBasepEqualUnicodeStringCaseSensitive.c)
 *     AuthzBasepEqualUnicodeString @ 0x1403B8930 (AuthzBasepEqualUnicodeString.c)
 *     SepInternalFillNoAttribs @ 0x1403B8A6C (SepInternalFillNoAttribs.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x1403B95E0 (AuthzBasepFreeSecurityAttributesList.c)
 *     AuthzBasepAllocateSecurityAttributesList @ 0x1403B972C (AuthzBasepAllocateSecurityAttributesList.c)
 *     AuthzBasepDuplicateSecurityAttributes @ 0x1403BA310 (AuthzBasepDuplicateSecurityAttributes.c)
 *     SepGetProcUniqueLuidAndIndexFromAttributeInfo @ 0x140473DD0 (SepGetProcUniqueLuidAndIndexFromAttributeInfo.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     RtlEqualUnicodeString @ 0x140929190 (RtlEqualUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepInternalQuerySecurityAttributesTokenEx(
        __int64 a1,
        char a2,
        __int64 a3,
        unsigned int a4,
        char a5,
        _OWORD *a6,
        size_t Size,
        _DWORD *a8)
{
  unsigned __int64 v8; // rdi
  bool v9; // zf
  unsigned int *v12; // r13
  _DWORD *v13; // r15
  unsigned __int64 v14; // r9
  unsigned int j; // ecx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rbp
  unsigned int k; // r15d
  unsigned int *v19; // rsi
  unsigned int *v20; // r13
  unsigned int *m; // r13
  char v22; // al
  unsigned int *v23; // rcx
  __int64 result; // rax
  unsigned __int16 v25; // r8
  unsigned __int16 v26; // dx
  const UNICODE_STRING *v27; // rcx
  const UNICODE_STRING *v28; // rdx
  BOOLEAN v29; // al
  unsigned __int64 v30; // rax
  unsigned int *v31; // rsi
  unsigned __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rbp
  unsigned __int64 v35; // rdx
  __int64 v36; // r8
  struct _KTHREAD *CurrentThread; // rax
  int ProcUniqueLuidAndIndexFromAttributeInfo; // ebp
  bool v39; // cf
  _WORD *v40; // rcx
  unsigned __int64 v41; // rbx
  int v42; // esi
  unsigned int i; // ebp
  _WORD *v44; // rax
  volatile LONG *SingletonEntryFromIndexNumber; // rax
  volatile LONG *v46; // rbx
  KIRQL v47; // al
  KIRQL v48; // si
  __int64 SecurityAttributesList; // rax
  void *v50; // r14
  int SecurityAttributesToken; // ebp
  __int64 v52; // rdx
  __int64 v53; // r8
  __int64 v54; // r9
  unsigned int v55; // eax
  unsigned int *v56; // [rsp+30h] [rbp-48h]
  unsigned int *v57; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v58; // [rsp+88h] [rbp+10h] BYREF
  unsigned int v59; // [rsp+98h] [rbp+20h]

  v59 = a4;
  LOBYTE(v58) = a2;
  v8 = a4;
  v9 = (*(_DWORD *)(a1 + 200) & 0x20000) == 0;
  v57 = 0LL;
  v58 = 0;
  if ( v9 )
  {
    if ( !a5 )
    {
      if ( (SepSingletonGlobal[4] & 1) == 0 || !a3 )
        goto LABEL_5;
      for ( i = 0; i < (unsigned int)v8; ++i )
      {
        if ( !(unsigned __int8)SepPotentialGlobalTableAttribute((PCUNICODE_STRING)(a3 + 16LL * i))
          || (unsigned __int8)AuthzBasepSecurityAttributePresent(*(_QWORD *)(a1 + 776), a3 + 16LL * i) )
        {
          goto LABEL_5;
        }
      }
    }
    if ( (SepTokenSingletonAttributesConfig & 3) != 3 )
      goto LABEL_52;
    if ( KeGetCurrentIrql() >= 2u )
    {
      ProcUniqueLuidAndIndexFromAttributeInfo = SepGetProcUniqueLuidAndIndexFromAttributeInfo(
                                                  *(_QWORD *)(a1 + 776),
                                                  &v58,
                                                  &v57);
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 48), 1u);
      ProcUniqueLuidAndIndexFromAttributeInfo = SepGetProcUniqueLuidAndIndexFromAttributeInfo(
                                                  *(_QWORD *)(a1 + 776),
                                                  &v58,
                                                  &v57);
      ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
      KeLeaveCriticalRegionThread();
    }
    if ( ProcUniqueLuidAndIndexFromAttributeInfo < 0 )
    {
LABEL_52:
      v39 = (unsigned int)Size < 0x10;
      *a8 = 16;
      if ( v39 )
        return 3221225507LL;
      v40 = a6;
      result = 0LL;
      *a6 = 0LL;
      *v40 = 1;
      return result;
    }
    SingletonEntryFromIndexNumber = (volatile LONG *)SepGetSingletonEntryFromIndexNumber(v58);
    v46 = SingletonEntryFromIndexNumber;
    if ( !SingletonEntryFromIndexNumber )
      return SepInternalFillNoAttribs(a6, (unsigned int)Size, a8);
    v47 = ExAcquireSpinLockShared(SingletonEntryFromIndexNumber);
    v48 = v47;
    if ( !*((_QWORD *)v46 + 2) )
    {
      ExReleaseSpinLockShared(v46, v47);
      return SepInternalFillNoAttribs(a6, (unsigned int)Size, a8);
    }
    SecurityAttributesList = AuthzBasepAllocateSecurityAttributesList();
    v50 = (void *)SecurityAttributesList;
    if ( SecurityAttributesList )
      SecurityAttributesToken = AuthzBasepDuplicateSecurityAttributes(*((_QWORD *)v46 + 2), SecurityAttributesList, 0LL);
    else
      SecurityAttributesToken = -1073741801;
    ExReleaseSpinLockShared(v46, v48);
    if ( SecurityAttributesToken == -1073741275 )
      return SepInternalFillNoAttribs(a6, (unsigned int)Size, a8);
    if ( SecurityAttributesToken < 0 )
    {
      if ( v50 )
        goto LABEL_81;
    }
    else if ( v50 )
    {
      SecurityAttributesToken = AuthzBasepQuerySecurityAttributesToken(v50, a3, (unsigned int)v8, a6, Size, a8);
LABEL_81:
      AuthzBasepFreeSecurityAttributesList(v50, v52, v53, v54);
      ExFreePoolWithTag(v50, 0);
    }
    return (unsigned int)SecurityAttributesToken;
  }
LABEL_5:
  v12 = *(unsigned int **)(a1 + 776);
  v13 = a8;
  v56 = v12;
  *a8 = 0;
  v14 = *v12;
  if ( !(_DWORD)v14 )
  {
    if ( (unsigned int)Size >= 0x10 )
    {
      v44 = a6;
      *a6 = 0LL;
      *v44 = 1;
      result = 0LL;
    }
    else
    {
      result = 3221225507LL;
    }
    *v13 = 16;
    return result;
  }
  for ( j = 0; j < (unsigned int)v8; ++j )
  {
    v25 = *(_WORD *)(a3 + 16LL * j);
    if ( !v25 )
      return 3221225485LL;
    v26 = *(_WORD *)(a3 + 16LL * j + 2);
    if ( !v26 || v25 > v26 || !*(_QWORD *)(a3 + 16LL * j + 8) )
      return 3221225485LL;
  }
  v57 = 0LL;
  if ( a3 )
  {
    v16 = 40 * v8;
    if ( is_mul_ok(0x28uLL, v8) )
    {
      v17 = v16 + 16;
      if ( v16 < 0xFFFFFFFFFFFFFFF0uLL )
      {
        for ( k = 0; k < (unsigned int)v8; ++k )
        {
          v19 = (unsigned int *)*((_QWORD *)v12 + 1);
          v57 = 0LL;
          v20 = v12 + 2;
          while ( v19 != v20 )
          {
            v57 = v19;
            v27 = (const UNICODE_STRING *)(v19 + 8);
            v28 = (const UNICODE_STRING *)(a3 + 16LL * k);
            if ( KeGetCurrentIrql() >= 2u )
              v29 = AuthzBasepEqualUnicodeStringCaseSensitive(v27, v28);
            else
              v29 = RtlEqualUnicodeString(v27, v28, 1u);
            if ( v29 )
            {
LABEL_43:
              v22 = 1;
              goto LABEL_18;
            }
            v19 = *(unsigned int **)v19;
          }
          LODWORD(v8) = v59;
          for ( m = (unsigned int *)*((_QWORD *)v56 + 4); m != v56 + 8; m = *(unsigned int **)m )
          {
            v55 = m[10];
            v57 = m - 4;
            if ( (v55 & 1) == 0 && (unsigned __int8)AuthzBasepEqualUnicodeString(m + 4, a3 + 16LL * k) )
              goto LABEL_43;
          }
          v22 = 0;
LABEL_18:
          v23 = 0LL;
          if ( v22 )
            v23 = v57;
          if ( !v23 )
            return 3221226021LL;
          v35 = (v17 + 1) & 0xFFFFFFFFFFFFFFFEuLL;
          if ( v35 < v17 )
            return 3221225621LL;
          v36 = *((unsigned __int16 *)v23 + 16);
          if ( v36 + v35 < v35 )
            return 3221225621LL;
          v57 = (unsigned int *)(v36 + v35);
          result = AuthzBasepGetSecurityAttributeValueCopyoutBufferSize(v23, &v57);
          v12 = v56;
          if ( (int)result < 0 )
            return result;
          v17 = (unsigned __int64)v57;
        }
        v13 = a8;
        goto LABEL_55;
      }
    }
    return 3221225621LL;
  }
  v30 = 40 * v14;
  if ( !is_mul_ok(0x28uLL, v14) )
    return 3221225621LL;
  v17 = v30 + 16;
  if ( v30 >= 0xFFFFFFFFFFFFFFF0uLL )
    return 3221225621LL;
  v31 = (unsigned int *)*((_QWORD *)v12 + 1);
  while ( v31 != v12 + 2 )
  {
    v32 = (v17 + 1) & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v32 < v17 )
      return 3221225621LL;
    v33 = *((unsigned __int16 *)v31 + 16);
    if ( v33 + v32 < v32 )
      return 3221225621LL;
    v57 = (unsigned int *)(v32 + v33);
    result = AuthzBasepGetSecurityAttributeValueCopyoutBufferSize(v31, &v57);
    if ( (int)result < 0 )
      return result;
    v31 = *(unsigned int **)v31;
    v17 = (unsigned __int64)v57;
  }
LABEL_55:
  v41 = v17;
  v42 = v17;
  if ( !v17 )
    return 3221225485LL;
  v34 = (unsigned int)Size;
  if ( (unsigned int)Size < v41 )
  {
    *v13 = v42;
    return 3221225507LL;
  }
  else
  {
    memset_0(a6, 0, (unsigned int)Size);
    result = AuthzBasepCopyoutSecurityAttributes(v12, a3, (unsigned int)v8, a6, v34);
    *v13 = v42;
  }
  return result;
}
