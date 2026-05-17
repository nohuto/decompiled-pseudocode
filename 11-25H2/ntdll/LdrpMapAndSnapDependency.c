/*
 * XREFs of LdrpMapAndSnapDependency @ 0x18004B770
 * Callers:
 *     LdrpMapDllWithSectionHandle @ 0x18006D3E0 (LdrpMapDllWithSectionHandle.c)
 *     LdrpInitializeProcess @ 0x1800D29F4 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrpFindDllActivationContext @ 0x180003670 (LdrpFindDllActivationContext.c)
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     LdrpSnapModule @ 0x180012B70 (LdrpSnapModule.c)
 *     RtlpSysVolFree @ 0x180015880 (RtlpSysVolFree.c)
 *     LdrpGetImportDescriptorForSnap @ 0x180020E7C (LdrpGetImportDescriptorForSnap.c)
 *     LdrpPrepareImportAddressTableForSnap @ 0x180022070 (LdrpPrepareImportAddressTableForSnap.c)
 *     LdrpQueueWork @ 0x18003E480 (LdrpQueueWork.c)
 *     RtlUTF8ToUnicodeN @ 0x18004B290 (RtlUTF8ToUnicodeN.c)
 *     RtlAnsiStringToUnicodeString @ 0x18004BE00 (RtlAnsiStringToUnicodeString.c)
 *     RtlpAllocateAtom @ 0x18004C160 (RtlpAllocateAtom.c)
 *     LdrpLoadDependentModuleInternal @ 0x18004C180 (LdrpLoadDependentModuleInternal.c)
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     LdrpLogEtwHotPatchStatus @ 0x18006F018 (LdrpLogEtwHotPatchStatus.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     LdrpQueryCurrentPatch @ 0x1800D2238 (LdrpQueryCurrentPatch.c)
 *     LdrpShouldModuleImportBeRedirected @ 0x1800DD4F0 (LdrpShouldModuleImportBeRedirected.c)
 *     LdrpLoadDependentModuleW @ 0x1801196EC (LdrpLoadDependentModuleW.c)
 *     NtdllpReallocateStringRoutine @ 0x1801204A8 (NtdllpReallocateStringRoutine.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memmove @ 0x180168980 (memmove.c)
 *     strlen @ 0x180169260 (strlen.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrpMapAndSnapDependency(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  char v3; // di
  bool v4; // zf
  __int64 v5; // rbx
  int DllActivationContext; // esi
  __int64 result; // rax
  int v8; // r15d
  __int64 v9; // r9
  __int64 v10; // rdx
  int v11; // ebx
  __int64 v12; // r14
  unsigned int *v13; // rdx
  __int64 v14; // rcx
  unsigned int v15; // r12d
  unsigned int *v16; // r14
  unsigned int v17; // ecx
  __int64 v18; // rdx
  char *v19; // rbx
  size_t v20; // rax
  unsigned __int64 v21; // rdi
  _QWORD *v22; // r15
  int v23; // ecx
  int v24; // edx
  unsigned __int16 v25; // cx
  unsigned int v26; // ebx
  unsigned int v27; // r8d
  char *v28; // rdi
  __int64 v29; // rbx
  __int64 v31; // rax
  __int64 v32; // rcx
  char *Atom; // rax
  signed __int32 v34[8]; // [rsp+0h] [rbp-100h] BYREF
  char v35[8]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v36; // [rsp+38h] [rbp-C8h]
  int v37; // [rsp+40h] [rbp-C0h] BYREF
  int v38; // [rsp+44h] [rbp-BCh]
  __int64 v39; // [rsp+48h] [rbp-B8h] BYREF
  STRING SourceString; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v42[2]; // [rsp+70h] [rbp-90h] BYREF
  void *Src; // [rsp+78h] [rbp-88h]
  __int16 v44; // [rsp+80h] [rbp-80h] BYREF
  char v45[254]; // [rsp+82h] [rbp-7Eh] BYREF

  v2 = *(_QWORD *)(a1 + 56);
  v3 = 0;
  v4 = (*(_DWORD *)(a1 + 32) & 0x800000) == 0;
  v5 = a1;
  v36 = a1;
  SourceString = 0LL;
  v35[0] = 0;
  if ( v4
    && *(_DWORD *)(v2 + 268) != 9
    && (DllActivationContext = LdrpFindDllActivationContext((_QWORD *)v2), DllActivationContext < 0)
    || (result = LdrpPrepareImportAddressTableForSnap(v5, a2), DllActivationContext = result, (int)result < 0) )
  {
LABEL_4:
    result = *(_QWORD *)(v5 + 40);
    *(_DWORD *)result = DllActivationContext;
    return result;
  }
  v8 = 0;
  v9 = v5;
  v38 = 0;
  if ( LdrpIsHotPatchingEnabled && *(_QWORD *)(v5 + 56) )
  {
    result = LdrpQueryCurrentPatch(*(_QWORD *)(v2 + 48), v35);
    DllActivationContext = result;
    if ( (int)result < 0 )
      goto LABEL_4;
    v3 = v35[0];
    v9 = v5;
  }
  if ( !*(_QWORD *)(v9 + 112) && !v3 )
    goto LABEL_65;
  if ( (unsigned __int8)LdrpShouldModuleImportBeRedirected(v2) )
    *(_DWORD *)(v5 + 32) |= 0x2000000u;
  result = LdrpGetImportDescriptorForSnap(v5, v10);
  v11 = 0;
  v12 = result;
  if ( !result )
    goto LABEL_12;
  v13 = (unsigned int *)(result + 16);
  do
  {
    if ( !*(v13 - 1) )
      break;
    v14 = *v13;
    if ( !(_DWORD)v14 )
      break;
    ++v11;
    if ( *(_QWORD *)(v14 + *(_QWORD *)(v2 + 48)) )
      ++v8;
    v13 += 5;
    result = (__int64)(v13 - 4);
  }
  while ( v13 != (unsigned int *)16 );
  v38 = v8;
  if ( !v8 )
  {
LABEL_12:
    if ( !v3 )
      goto LABEL_64;
  }
  result = RtlAllocateHeap((void *)LdrpHeap);
  v9 = v36;
  *(_QWORD *)(v36 + 88) = result;
  if ( !result )
  {
    DllActivationContext = -1073741801;
    goto LABEL_65;
  }
  result = (unsigned int)(v8 + 1);
  *(_DWORD *)(v9 + 108) = result;
  *(_DWORD *)(v9 + 104) = v11;
  *(_QWORD *)(v9 + 136) = v12;
  if ( v3 )
  {
    result = (unsigned int)(v8 + 2);
    *(_DWORD *)(v9 + 108) = result;
  }
  v39 = 0LL;
  v15 = 0;
  if ( !v12 )
    goto LABEL_59;
  v16 = (unsigned int *)(v12 + 16);
  while ( 1 )
  {
    v17 = *(v16 - 1);
    if ( !v17 || (result = *v16, !(_DWORD)result) )
    {
LABEL_49:
      v8 = v38;
      v9 = v36;
      goto LABEL_58;
    }
    v18 = *(_QWORD *)(v2 + 48);
    if ( *(_QWORD *)(result + v18) )
      break;
LABEL_48:
    v16 += 5;
    ++v15;
    result = (__int64)(v16 - 4);
    if ( v16 == (unsigned int *)16 )
      goto LABEL_49;
  }
  *(_QWORD *)&SourceString.Length = 0LL;
  v19 = (char *)(v18 + v17);
  SourceString.Buffer = v19;
  if ( !v19 )
  {
    LOWORD(v21) = SourceString.Length;
LABEL_35:
    v22 = (_QWORD *)(*(_QWORD *)(v9 + 88) + 8LL * v15);
    v42[1] = 0;
    memset_thunk_772440563353939046(v45, 0, 0xFEuLL);
    v42[0] = 0x1000000;
    v44 = 0;
    Src = &v44;
    DestinationString = 0LL;
    if ( !(_WORD)v21 )
      goto LABEL_43;
    v37 = 0;
    v23 = (unsigned __int16)v21;
    _InterlockedOr(v34, 0);
    if ( word_1801CEFD0 == -535 || GlobalRtlNlsState == -535 )
    {
      RtlUTF8ToUnicodeN(0LL, 0, &v37, v19, (unsigned __int16)v21);
      v24 = v37;
    }
    else
    {
      _InterlockedOr(v34, 0);
      v24 = 0;
      if ( word_1801CEF9C )
      {
        while ( v23-- )
        {
          v31 = (unsigned __int8)*v19++;
          if ( *(_WORD *)(qword_1801CF020 + 2 * v31) )
          {
            if ( !v23 )
            {
              v24 += 2;
              break;
            }
            --v23;
            ++v19;
          }
          v24 += 2;
        }
      }
      else
      {
        v24 = 2 * (unsigned __int16)v21;
      }
    }
    v25 = v42[0];
    LOWORD(v26) = HIWORD(v42[0]);
    v27 = v24 + LOWORD(v42[0]) + 2;
    if ( v27 <= HIWORD(v42[0]) )
    {
      v28 = (char *)Src;
LABEL_42:
      DestinationString.Length = 0;
      DestinationString.MaximumLength = v26 - v25;
      DestinationString.Buffer = (wchar_t *)&v28[v25];
      RtlAnsiStringToUnicodeString(&DestinationString, &SourceString, 0);
      LOWORD(v42[0]) += DestinationString.Length;
LABEL_43:
      v29 = v36;
      DllActivationContext = LdrpLoadDependentModuleInternal((char)v42, (__int64)v22, (__int64)&v39);
      if ( DllActivationContext >= 0 )
      {
LABEL_44:
        if ( &v44 != Src )
          RtlpSysVolFree((__int64)Src);
        v42[0] = 0x1000000;
        result = (__int64)&v44;
        Src = &v44;
        v44 = 0;
        if ( DllActivationContext < 0 )
          goto LABEL_49;
        v8 = v38;
        v9 = v36;
        goto LABEL_48;
      }
LABEL_56:
      *v22 = 0LL;
      **(_DWORD **)(v29 + 40) = DllActivationContext;
      goto LABEL_44;
    }
    if ( v27 > 0xFFFE )
    {
      DllActivationContext = -1073741562;
    }
    else
    {
      v26 = (v27 + 63) & 0xFFFFFFC0;
      if ( v26 > 0xFFFE )
        v26 = 65534;
      if ( Src == &v44 )
      {
        Atom = (char *)RtlpAllocateAtom(v26);
        v28 = Atom;
        if ( Atom )
        {
          v25 = v42[0];
          if ( !LOWORD(v42[0]) )
          {
LABEL_87:
            Src = v28;
            HIWORD(v42[0]) = v26;
            goto LABEL_42;
          }
          memmove(Atom, Src, LOWORD(v42[0]));
LABEL_86:
          v25 = v42[0];
          goto LABEL_87;
        }
      }
      else
      {
        v28 = (char *)NtdllpReallocateStringRoutine(v26);
        if ( v28 )
          goto LABEL_86;
      }
      DllActivationContext = -1073741801;
    }
    v29 = v36;
    goto LABEL_56;
  }
  v20 = strlen((const char *)(v18 + v17));
  v9 = v36;
  v21 = v20;
  result = 65534LL;
  if ( v21 <= 0xFFFE )
  {
    SourceString.Length = v21;
    SourceString.MaximumLength = v21 + 1;
    goto LABEL_35;
  }
  DllActivationContext = -1073741562;
LABEL_58:
  v3 = v35[0];
LABEL_59:
  if ( v3 )
  {
    result = LdrpLoadDependentModuleW((unsigned int)&v39, v9, v2, v9, v9 + 96, (__int64)&v39);
    DllActivationContext = result;
    if ( (int)result < 0 )
      result = LdrpLogEtwHotPatchStatus((int)LdrpImageEntry + 88, v2, (int)v2 + 72, result, 5);
  }
  if ( v39 )
    result = RtlFreeHeap(LdrpHeap, 0LL, v39);
  if ( DllActivationContext >= 0 )
  {
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)&LdrpModuleDatatableLock);
    v8 = *(_DWORD *)(v36 + 108) - 1;
    *(_DWORD *)(v36 + 108) = v8;
    result = RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  }
LABEL_64:
  v9 = v36;
LABEL_65:
  v32 = *(_QWORD *)(v9 + 112);
  if ( v32 || !v3 )
  {
    if ( !v8 )
    {
      result = *(_QWORD *)(v2 + 152);
      if ( !v32 )
        goto LABEL_94;
      *(_DWORD *)(result + 56) = 4;
      if ( *(_QWORD *)(v9 + 48) )
      {
        result = (__int64)LdrpQueueWork(v9);
      }
      else
      {
        result = LdrpSnapModule(v9);
        DllActivationContext = result;
      }
    }
  }
  else
  {
    result = *(_QWORD *)(v2 + 152);
LABEL_94:
    *(_DWORD *)(result + 56) = 5;
  }
  if ( DllActivationContext < 0 )
  {
    v5 = v36;
    goto LABEL_4;
  }
  return result;
}
