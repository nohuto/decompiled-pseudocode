/*
 * XREFs of SepInternalQuerySecurityAttributesTokenEx @ 0x14035FF40
 * Callers:
 *     SeQuerySecurityAttributesTokenAccessInformation @ 0x140361040 (SeQuerySecurityAttributesTokenAccessInformation.c)
 *     NtQuerySecurityAttributesToken @ 0x140867840 (NtQuerySecurityAttributesToken.c)
 *     SeQuerySecurityAttributesToken @ 0x1409F23F0 (SeQuerySecurityAttributesToken.c)
 *     NtQueryInformationToken @ 0x140AC8E20 (NtQueryInformationToken.c)
 * Callees:
 *     AuthzBasepAllocateSecurityAttributesList @ 0x14029040C (AuthzBasepAllocateSecurityAttributesList.c)
 *     AuthzBasepDuplicateSecurityAttributes @ 0x140290A60 (AuthzBasepDuplicateSecurityAttributes.c)
 *     ExAcquireResourceSharedLite @ 0x140295130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireSpinLockShared @ 0x1402BBA30 (ExAcquireSpinLockShared.c)
 *     ExReleaseSpinLockShared @ 0x14035E450 (ExReleaseSpinLockShared.c)
 *     SepGetSingletonEntryFromIndexNumber @ 0x14035ED18 (SepGetSingletonEntryFromIndexNumber.c)
 *     SepInternalFillNoAttribs @ 0x14035FA1C (SepInternalFillNoAttribs.c)
 *     AuthzBasepEqualUnicodeString @ 0x14035FA50 (AuthzBasepEqualUnicodeString.c)
 *     AuthzBasepSecurityAttributePresent @ 0x14035FA80 (AuthzBasepSecurityAttributePresent.c)
 *     AuthzBasepEqualUnicodeStringCaseSensitive @ 0x14035FC14 (AuthzBasepEqualUnicodeStringCaseSensitive.c)
 *     AuthzBasepQuerySecurityAttributesToken @ 0x140360510 (AuthzBasepQuerySecurityAttributesToken.c)
 *     AuthzBasepCopyoutSecurityAttributes @ 0x140360890 (AuthzBasepCopyoutSecurityAttributes.c)
 *     AuthzBasepGetSecurityAttributeValueCopyoutBufferSize @ 0x140360BC0 (AuthzBasepGetSecurityAttributeValueCopyoutBufferSize.c)
 *     SepPotentialGlobalTableAttribute @ 0x140360FB8 (SepPotentialGlobalTableAttribute.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x140366160 (AuthzBasepFreeSecurityAttributesList.c)
 *     SepGetProcUniqueLuidAndIndexFromAttributeInfo @ 0x140477BD0 (SepGetProcUniqueLuidAndIndexFromAttributeInfo.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     RtlEqualUnicodeString @ 0x1409329B0 (RtlEqualUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
  const void **v27; // rcx
  const UNICODE_STRING *v28; // rdx
  char v29; // al
  unsigned __int64 v30; // rax
  unsigned int *v31; // rsi
  unsigned __int64 v32; // rcx
  __int64 v33; // rdx
  unsigned __int64 v34; // rbx
  int v35; // esi
  __int64 v36; // rbp
  unsigned __int64 v37; // rdx
  __int64 v38; // r8
  struct _KTHREAD *CurrentThread; // rax
  int ProcUniqueLuidAndIndexFromAttributeInfo; // ebp
  bool v41; // cf
  _WORD *v42; // rcx
  unsigned int i; // ebp
  _WORD *v44; // rax
  volatile LONG *SingletonEntryFromIndexNumber; // rax
  volatile LONG *v46; // rbx
  KIRQL v47; // al
  __int64 v48; // rdx
  __int64 v49; // rcx
  KIRQL v50; // si
  __int64 SecurityAttributesList; // rax
  void *v52; // r14
  int SecurityAttributesToken; // ebp
  __int64 v54; // rdx
  __int64 v55; // r8
  unsigned int v56; // eax
  unsigned int *v57; // [rsp+30h] [rbp-48h]
  unsigned int *v58; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v59; // [rsp+88h] [rbp+10h] BYREF
  unsigned int v60; // [rsp+98h] [rbp+20h]

  v60 = a4;
  LOBYTE(v59) = a2;
  v8 = a4;
  v9 = (*(_DWORD *)(a1 + 200) & 0x20000) == 0;
  v58 = 0LL;
  v59 = 0;
  if ( v9 )
  {
    if ( !a5 )
    {
      if ( (SepSingletonGlobal[4] & 1) == 0 || !a3 )
        goto LABEL_5;
      for ( i = 0; i < (unsigned int)v8; ++i )
      {
        if ( !(unsigned __int8)SepPotentialGlobalTableAttribute((PCUNICODE_STRING)(a3 + 16LL * i))
          || AuthzBasepSecurityAttributePresent(*(_QWORD *)(a1 + 776), (const UNICODE_STRING *)(a3 + 16LL * i)) )
        {
          goto LABEL_5;
        }
      }
    }
    if ( (SepTokenSingletonAttributesConfig & 3) != 3 )
      goto LABEL_53;
    if ( KeGetCurrentIrql() >= 2u )
    {
      ProcUniqueLuidAndIndexFromAttributeInfo = SepGetProcUniqueLuidAndIndexFromAttributeInfo(
                                                  *(_QWORD *)(a1 + 776),
                                                  &v59,
                                                  &v58);
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 48), 1u);
      ProcUniqueLuidAndIndexFromAttributeInfo = SepGetProcUniqueLuidAndIndexFromAttributeInfo(
                                                  *(_QWORD *)(a1 + 776),
                                                  &v59,
                                                  &v58);
      ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    }
    if ( ProcUniqueLuidAndIndexFromAttributeInfo < 0 )
    {
LABEL_53:
      v41 = (unsigned int)Size < 0x10;
      *a8 = 16;
      if ( v41 )
        return 3221225507LL;
      v42 = a6;
      result = 0LL;
      *a6 = 0LL;
      *v42 = 1;
      return result;
    }
    SingletonEntryFromIndexNumber = (volatile LONG *)SepGetSingletonEntryFromIndexNumber(v59);
    v46 = SingletonEntryFromIndexNumber;
    if ( !SingletonEntryFromIndexNumber )
      return SepInternalFillNoAttribs(a6, Size, a8);
    v47 = ExAcquireSpinLockShared(SingletonEntryFromIndexNumber);
    v50 = v47;
    if ( !*((_QWORD *)v46 + 2) )
    {
      ExReleaseSpinLockShared(v46, v47);
      return SepInternalFillNoAttribs(a6, Size, a8);
    }
    SecurityAttributesList = AuthzBasepAllocateSecurityAttributesList(v49, v48);
    v52 = (void *)SecurityAttributesList;
    if ( SecurityAttributesList )
      SecurityAttributesToken = AuthzBasepDuplicateSecurityAttributes(*((_QWORD *)v46 + 2), SecurityAttributesList, 0);
    else
      SecurityAttributesToken = -1073741801;
    ExReleaseSpinLockShared(v46, v50);
    if ( SecurityAttributesToken == -1073741275 )
      return SepInternalFillNoAttribs(a6, Size, a8);
    if ( SecurityAttributesToken < 0 )
    {
      if ( v52 )
        goto LABEL_80;
    }
    else if ( v52 )
    {
      SecurityAttributesToken = AuthzBasepQuerySecurityAttributesToken(v52, a3, (unsigned int)v8, a6, Size, a8);
LABEL_80:
      AuthzBasepFreeSecurityAttributesList(v52, v54, v55);
      ExFreePoolWithTag(v52, 0);
    }
    return (unsigned int)SecurityAttributesToken;
  }
LABEL_5:
  v12 = *(unsigned int **)(a1 + 776);
  v13 = a8;
  v57 = v12;
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
  v58 = 0LL;
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
          v58 = 0LL;
          v20 = v12 + 2;
          while ( v19 != v20 )
          {
            v58 = v19;
            v27 = (const void **)(v19 + 8);
            v28 = (const UNICODE_STRING *)(a3 + 16LL * k);
            if ( KeGetCurrentIrql() >= 2u )
              v29 = AuthzBasepEqualUnicodeStringCaseSensitive(v27, (__int64)v28);
            else
              v29 = RtlEqualUnicodeString((PCUNICODE_STRING)v27, v28, 1u);
            if ( v29 )
            {
LABEL_44:
              v22 = 1;
              goto LABEL_18;
            }
            v19 = *(unsigned int **)v19;
          }
          LODWORD(v8) = v60;
          for ( m = (unsigned int *)*((_QWORD *)v57 + 4); m != v57 + 8; m = *(unsigned int **)m )
          {
            v56 = m[10];
            v58 = m - 4;
            if ( (v56 & 1) == 0
              && AuthzBasepEqualUnicodeString((const UNICODE_STRING *)m + 1, (const UNICODE_STRING *)(a3 + 16LL * k)) )
            {
              goto LABEL_44;
            }
          }
          v22 = 0;
LABEL_18:
          v23 = 0LL;
          if ( v22 )
            v23 = v58;
          if ( !v23 )
            return 3221226021LL;
          v37 = (v17 + 1) & 0xFFFFFFFFFFFFFFFEuLL;
          if ( v37 < v17 )
            return 3221225621LL;
          v38 = *((unsigned __int16 *)v23 + 16);
          if ( v38 + v37 < v37 )
            return 3221225621LL;
          v58 = (unsigned int *)(v38 + v37);
          result = AuthzBasepGetSecurityAttributeValueCopyoutBufferSize(v23, &v58);
          v12 = v57;
          if ( (int)result < 0 )
            return result;
          v17 = (unsigned __int64)v58;
        }
        v13 = a8;
        goto LABEL_41;
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
    v58 = (unsigned int *)(v32 + v33);
    result = AuthzBasepGetSecurityAttributeValueCopyoutBufferSize(v31, &v58);
    if ( (int)result < 0 )
      return result;
    v31 = *(unsigned int **)v31;
    v17 = (unsigned __int64)v58;
  }
LABEL_41:
  v34 = v17;
  v35 = v17;
  if ( !v17 )
    return 3221225485LL;
  v36 = (unsigned int)Size;
  if ( (unsigned int)Size < v34 )
  {
    *v13 = v35;
    return 3221225507LL;
  }
  else
  {
    memset_0(a6, 0, (unsigned int)Size);
    result = AuthzBasepCopyoutSecurityAttributes(v12, a3, (unsigned int)v8, a6, v36);
    *v13 = v35;
  }
  return result;
}
