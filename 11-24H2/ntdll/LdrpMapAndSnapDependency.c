/*
 * XREFs of LdrpMapAndSnapDependency @ 0x1800392D0
 * Callers:
 *     LdrpMapDllWithSectionHandle @ 0x18008F450 (LdrpMapDllWithSectionHandle.c)
 *     LdrpInitializeProcess @ 0x1800AEF54 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180005870 (RtlpSysVolFree.c)
 *     LdrpFindDllActivationContext @ 0x18002CE50 (LdrpFindDllActivationContext.c)
 *     LdrpGetImportDescriptorForSnap @ 0x180034090 (LdrpGetImportDescriptorForSnap.c)
 *     LdrpPrepareImportAddressTableForSnap @ 0x180035250 (LdrpPrepareImportAddressTableForSnap.c)
 *     RtlUTF8ToUnicodeN @ 0x180038DF0 (RtlUTF8ToUnicodeN.c)
 *     RtlAnsiStringToUnicodeString @ 0x180039960 (RtlAnsiStringToUnicodeString.c)
 *     RtlpAllocateAtom @ 0x180039CC0 (RtlpAllocateAtom.c)
 *     LdrpLoadDependentModuleInternal @ 0x180039CE0 (LdrpLoadDependentModuleInternal.c)
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 *     LdrpSnapModule @ 0x18006CB10 (LdrpSnapModule.c)
 *     LdrpLogEtwHotPatchStatus @ 0x180091078 (LdrpLogEtwHotPatchStatus.c)
 *     LdrpQueryCurrentPatch @ 0x1800AE798 (LdrpQueryCurrentPatch.c)
 *     LdrpQueueWork @ 0x1800D20D4 (LdrpQueueWork.c)
 *     LdrpShouldModuleImportBeRedirected @ 0x1800DAFD0 (LdrpShouldModuleImportBeRedirected.c)
 *     LdrpLoadDependentModuleW @ 0x180111730 (LdrpLoadDependentModuleW.c)
 *     NtdllpReallocateStringRoutine @ 0x18011CE08 (NtdllpReallocateStringRoutine.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 *     strlen @ 0x1801660A0 (strlen.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

void __fastcall LdrpMapAndSnapDependency(__int64 a1)
{
  __int64 v1; // r13
  char v2; // di
  bool v3; // zf
  __int64 v4; // rbx
  int DllActivationContext; // esi
  int v6; // r15d
  __int64 v7; // r9
  char *ImportDescriptorForSnap; // rax
  unsigned int v9; // ebx
  char *v10; // r14
  unsigned int *v11; // rdx
  __int64 v12; // rcx
  PVOID Heap; // rax
  unsigned int v14; // r12d
  unsigned int *v15; // r14
  unsigned int v16; // ecx
  __int64 v17; // rax
  __int64 v18; // rdx
  char *v19; // rbx
  size_t v20; // rax
  unsigned __int16 Length; // di
  _QWORD *v22; // r15
  int v23; // ecx
  ULONG v24; // edx
  unsigned __int16 v25; // cx
  unsigned int v26; // ebx
  unsigned int v27; // r8d
  wchar_t *Buffer; // rdi
  __int64 v29; // rbx
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rax
  wchar_t *Atom; // rax
  int DependentModuleW; // eax
  signed __int32 v36[8]; // [rsp+0h] [rbp-100h] BYREF
  char v37[8]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v38; // [rsp+38h] [rbp-C8h]
  ULONG UnicodeStringActualByteCount; // [rsp+40h] [rbp-C0h] BYREF
  int v40; // [rsp+44h] [rbp-BCh]
  PVOID BaseAddress; // [rsp+48h] [rbp-B8h] BYREF
  ANSI_STRING SourceString; // [rsp+50h] [rbp-B0h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  _UNICODE_STRING OriginalName; // [rsp+70h] [rbp-90h] BYREF
  __int16 v45; // [rsp+80h] [rbp-80h] BYREF
  char v46[254]; // [rsp+82h] [rbp-7Eh] BYREF

  v1 = *(_QWORD *)(a1 + 56);
  v2 = 0;
  v3 = (*(_DWORD *)(a1 + 32) & 0x800000) == 0;
  v4 = a1;
  v38 = a1;
  SourceString = 0LL;
  v37[0] = 0;
  if ( v3
    && *(_DWORD *)(v1 + 268) != 9
    && (DllActivationContext = LdrpFindDllActivationContext((_QWORD *)v1), DllActivationContext < 0)
    || (DllActivationContext = LdrpPrepareImportAddressTableForSnap(v4), DllActivationContext < 0) )
  {
LABEL_4:
    **(_DWORD **)(v4 + 40) = DllActivationContext;
    return;
  }
  v6 = 0;
  v7 = v4;
  v40 = 0;
  if ( LdrpIsHotPatchingEnabled && *(_QWORD *)(v4 + 56) )
  {
    DllActivationContext = LdrpQueryCurrentPatch(*(_QWORD *)(v1 + 48), v37);
    if ( DllActivationContext < 0 )
      goto LABEL_4;
    v2 = v37[0];
    v7 = v4;
  }
  if ( !*(_QWORD *)(v7 + 112) && !v2 )
    goto LABEL_65;
  if ( (unsigned __int8)LdrpShouldModuleImportBeRedirected(v1) )
    *(_DWORD *)(v4 + 32) |= 0x2000000u;
  ImportDescriptorForSnap = (char *)LdrpGetImportDescriptorForSnap(v4);
  v9 = 0;
  v10 = ImportDescriptorForSnap;
  if ( !ImportDescriptorForSnap )
    goto LABEL_12;
  v11 = (unsigned int *)(ImportDescriptorForSnap + 16);
  do
  {
    if ( !*(v11 - 1) )
      break;
    v12 = *v11;
    if ( !(_DWORD)v12 )
      break;
    ++v9;
    if ( *(_QWORD *)(v12 + *(_QWORD *)(v1 + 48)) )
      ++v6;
    v11 += 5;
  }
  while ( v11 != (unsigned int *)16 );
  v40 = v6;
  if ( !v6 )
  {
LABEL_12:
    if ( !v2 )
      goto LABEL_64;
  }
  Heap = RtlAllocateHeap(LdrpHeap, (NtdllBaseTag + 1572864) | 8, 8LL * v9);
  v7 = v38;
  *(_QWORD *)(v38 + 88) = Heap;
  if ( !Heap )
  {
    DllActivationContext = -1073741801;
    goto LABEL_65;
  }
  *(_DWORD *)(v7 + 108) = v6 + 1;
  *(_DWORD *)(v7 + 104) = v9;
  *(_QWORD *)(v7 + 136) = v10;
  if ( v2 )
    *(_DWORD *)(v7 + 108) = v6 + 2;
  BaseAddress = 0LL;
  v14 = 0;
  if ( !v10 )
    goto LABEL_59;
  v15 = (unsigned int *)(v10 + 16);
  while ( 1 )
  {
    v16 = *(v15 - 1);
    if ( !v16 || (v17 = *v15, !(_DWORD)v17) )
    {
LABEL_49:
      v6 = v40;
      v7 = v38;
      goto LABEL_58;
    }
    v18 = *(_QWORD *)(v1 + 48);
    if ( *(_QWORD *)(v17 + v18) )
      break;
LABEL_48:
    v15 += 5;
    ++v14;
    if ( v15 == (unsigned int *)16 )
      goto LABEL_49;
  }
  *(_QWORD *)&SourceString.Length = 0LL;
  v19 = (char *)(v18 + v16);
  SourceString.Buffer = v19;
  if ( !v19 )
  {
    Length = SourceString.Length;
LABEL_35:
    v22 = (_QWORD *)(*(_QWORD *)(v7 + 88) + 8LL * v14);
    *(_DWORD *)(&OriginalName.MaximumLength + 1) = 0;
    memset_thunk_772440563353939046(v46, 0, 0xFEuLL);
    *(_DWORD *)&OriginalName.Length = 0x1000000;
    v45 = 0;
    OriginalName.Buffer = (wchar_t *)&v45;
    DestinationString = 0LL;
    if ( !Length )
      goto LABEL_43;
    UnicodeStringActualByteCount = 0;
    v23 = Length;
    _InterlockedOr(v36, 0);
    if ( CodePageTable.CodePage == 0xFDE9 || GlobalRtlNlsState.CodePage == 0xFDE9 )
    {
      RtlUTF8ToUnicodeN(0LL, 0, &UnicodeStringActualByteCount, v19, Length);
      v24 = UnicodeStringActualByteCount;
    }
    else
    {
      _InterlockedOr(v36, 0);
      v24 = 0;
      if ( GlobalRtlNlsState.DBCSCodePage )
      {
        while ( v23-- )
        {
          v31 = (unsigned __int8)*v19++;
          if ( *(_WORD *)(qword_1801CC020 + 2 * v31) )
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
        v24 = 2 * Length;
      }
    }
    v25 = OriginalName.Length;
    LOWORD(v26) = OriginalName.MaximumLength;
    v27 = v24 + OriginalName.Length + 2;
    if ( v27 <= OriginalName.MaximumLength )
    {
      Buffer = OriginalName.Buffer;
LABEL_42:
      DestinationString.Length = 0;
      DestinationString.MaximumLength = v26 - v25;
      DestinationString.Buffer = (wchar_t *)((char *)Buffer + v25);
      RtlAnsiStringToUnicodeString(&DestinationString, &SourceString, 0);
      OriginalName.Length += DestinationString.Length;
LABEL_43:
      v29 = v38;
      DllActivationContext = LdrpLoadDependentModuleInternal(&OriginalName, (__int64)v22, (__int64)&BaseAddress);
      if ( DllActivationContext >= 0 )
      {
LABEL_44:
        if ( &v45 != (__int16 *)OriginalName.Buffer )
          RtlpSysVolFree(OriginalName.Buffer);
        *(_DWORD *)&OriginalName.Length = 0x1000000;
        OriginalName.Buffer = (wchar_t *)&v45;
        v45 = 0;
        if ( DllActivationContext < 0 )
          goto LABEL_49;
        v6 = v40;
        v7 = v38;
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
      if ( (__int16 *)OriginalName.Buffer == &v45 )
      {
        Atom = (wchar_t *)RtlpAllocateAtom(v26);
        Buffer = Atom;
        if ( Atom )
        {
          v25 = OriginalName.Length;
          if ( !OriginalName.Length )
          {
LABEL_87:
            OriginalName.Buffer = Buffer;
            OriginalName.MaximumLength = v26;
            goto LABEL_42;
          }
          memmove(Atom, OriginalName.Buffer, OriginalName.Length);
LABEL_86:
          v25 = OriginalName.Length;
          goto LABEL_87;
        }
      }
      else
      {
        Buffer = (wchar_t *)NtdllpReallocateStringRoutine(v26, OriginalName.Buffer);
        if ( Buffer )
          goto LABEL_86;
      }
      DllActivationContext = -1073741801;
    }
    v29 = v38;
    goto LABEL_56;
  }
  v20 = strlen((const char *)(v18 + v16));
  v7 = v38;
  Length = v20;
  if ( v20 <= 0xFFFE )
  {
    SourceString.Length = v20;
    SourceString.MaximumLength = v20 + 1;
    goto LABEL_35;
  }
  DllActivationContext = -1073741562;
LABEL_58:
  v2 = v37[0];
LABEL_59:
  if ( v2 )
  {
    DependentModuleW = LdrpLoadDependentModuleW((unsigned int)&BaseAddress, v7, v1, v7, v7 + 96, (__int64)&BaseAddress);
    DllActivationContext = DependentModuleW;
    if ( DependentModuleW < 0 )
      LdrpLogEtwHotPatchStatus(LdrpImageEntry + 88, v1, v1 + 72, DependentModuleW, 5);
  }
  if ( BaseAddress )
    RtlFreeHeap(LdrpHeap, 0, BaseAddress);
  if ( DllActivationContext >= 0 )
  {
    RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
    v6 = *(_DWORD *)(v38 + 108) - 1;
    *(_DWORD *)(v38 + 108) = v6;
    RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  }
LABEL_64:
  v7 = v38;
LABEL_65:
  v32 = *(_QWORD *)(v7 + 112);
  if ( v32 || !v2 )
  {
    if ( !v6 )
    {
      v33 = *(_QWORD *)(v1 + 152);
      if ( !v32 )
        goto LABEL_94;
      *(_DWORD *)(v33 + 56) = 4;
      if ( *(_QWORD *)(v7 + 48) )
        LdrpQueueWork(v7);
      else
        DllActivationContext = LdrpSnapModule(v7);
    }
  }
  else
  {
    v33 = *(_QWORD *)(v1 + 152);
LABEL_94:
    *(_DWORD *)(v33 + 56) = 5;
  }
  if ( DllActivationContext < 0 )
  {
    v4 = v38;
    goto LABEL_4;
  }
}
