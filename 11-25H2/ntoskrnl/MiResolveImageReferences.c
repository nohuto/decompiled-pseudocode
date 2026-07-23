/*
 * XREFs of MiResolveImageReferences @ 0x140A1286C
 * Callers:
 *     MiResolveImageImports @ 0x1407D7898 (MiResolveImageImports.c)
 * Callees:
 *     MiAllocatePool @ 0x1402DA740 (MiAllocatePool.c)
 *     RtlAppendUnicodeStringToString @ 0x140404430 (RtlAppendUnicodeStringToString.c)
 *     RtlImageDirectoryEntryToData @ 0x14040FE90 (RtlImageDirectoryEntryToData.c)
 *     RtlInitAnsiString @ 0x14046B2E0 (RtlInitAnsiString.c)
 *     MiGetBaseLoaderPortion @ 0x1404D0B80 (MiGetBaseLoaderPortion.c)
 *     ApiSetResolveToHost @ 0x1404ECC58 (ApiSetResolveToHost.c)
 *     _strnicmp @ 0x1404FB9E0 (_strnicmp.c)
 *     MiDereferenceImports @ 0x1407D7508 (MiDereferenceImports.c)
 *     MiFormFullImageName @ 0x1407D7718 (MiFormFullImageName.c)
 *     RtlCompareUnicodeStrings @ 0x1408694A0 (RtlCompareUnicodeStrings.c)
 *     RtlAnsiStringToUnicodeString @ 0x1408E5A80 (RtlAnsiStringToUnicodeString.c)
 *     RtlDuplicateUnicodeString @ 0x140932190 (RtlDuplicateUnicodeString.c)
 *     RtlEqualUnicodeString @ 0x1409329B0 (RtlEqualUnicodeString.c)
 *     MmLoadSystemImageEx @ 0x1409B0468 (MmLoadSystemImageEx.c)
 *     MiSnapThunk @ 0x140A12C8C (MiSnapThunk.c)
 *     PsQueryCurrentApiSetSchema @ 0x140A12F90 (PsQueryCurrentApiSetSchema.c)
 *     MiCompressImportList @ 0x140A12FD4 (MiCompressImportList.c)
 *     MiAllocateImportList @ 0x140A13084 (MiAllocateImportList.c)
 *     MiSnapUnresolvedImport @ 0x140A130C8 (MiSnapUnresolvedImport.c)
 *     MiLogFailedDriverLoad @ 0x140A1375C (MiLogFailedDriverLoad.c)
 *     ExFreePool @ 0x140B62CB0 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiResolveImageReferences(
        __int64 a1,
        __int64 a2,
        unsigned __int16 *a3,
        const UNICODE_STRING *a4,
        int a5)
{
  char *v5; // rbx
  unsigned __int16 *v6; // r14
  unsigned int *v7; // rax
  __int64 v8; // r8
  unsigned int *v9; // r12
  __int64 v10; // r15
  unsigned int v11; // edi
  _QWORD *v12; // r13
  __int64 v13; // rcx
  void *ImportList; // rax
  _QWORD *v15; // rcx
  __int64 v16; // rax
  const char *v17; // rdi
  int SystemImage; // ebx
  wchar_t *Buffer; // rsi
  __int64 CurrentApiSetSchema; // rax
  PVOID *v21; // rbx
  PVOID v22; // r15
  __int64 v23; // rax
  unsigned int v24; // edx
  char *v26; // rdi
  unsigned int v27; // r14d
  int v28; // eax
  __int64 v29; // rax
  unsigned __int16 Length; // bx
  ULONG v31; // edi
  char v32; // [rsp+48h] [rbp-91h]
  char v33; // [rsp+49h] [rbp-90h] BYREF
  unsigned int v34; // [rsp+4Ch] [rbp-8Dh]
  __int64 v35; // [rsp+50h] [rbp-89h]
  UNICODE_STRING *p_String1; // [rsp+58h] [rbp-81h]
  ULONG Size; // [rsp+60h] [rbp-79h] BYREF
  UNICODE_STRING StringOut; // [rsp+68h] [rbp-71h] BYREF
  char *v39; // [rsp+78h] [rbp-61h]
  UNICODE_STRING String1; // [rsp+88h] [rbp-51h] BYREF
  UNICODE_STRING StringIn; // [rsp+98h] [rbp-41h] BYREF
  PVOID *v42; // [rsp+A8h] [rbp-31h] BYREF
  PVOID P; // [rsp+B0h] [rbp-29h]
  _QWORD v44[2]; // [rsp+B8h] [rbp-21h] BYREF
  PVOID v45[2]; // [rsp+C8h] [rbp-11h] BYREF
  STRING DestinationString; // [rsp+D8h] [rbp-1h] BYREF

  v44[0] = 3932218LL;
  v44[1] = L"\\SystemRoot\\System32\\drivers\\";
  *(_QWORD *)&String1.Length = 0LL;
  v5 = *(char **)(a1 + 48);
  *(_QWORD *)(a1 + 136) = -2LL;
  v6 = a3;
  v42 = 0LL;
  v45[0] = 0LL;
  v33 = 0;
  v39 = v5;
  DestinationString = 0LL;
  StringOut = 0LL;
  StringIn = 0LL;
  v7 = (unsigned int *)RtlImageDirectoryEntryToData(v5, 1u, 1u, &Size);
  v8 = 0LL;
  v9 = v7;
  if ( !v7 )
    return 0LL;
  v10 = 0LL;
  v32 = 0;
  v11 = 0;
  v35 = 0LL;
  v12 = 0LL;
  v34 = 0;
  String1.Buffer = 0LL;
  v13 = 0LL;
  if ( !v7[3] )
    goto LABEL_40;
  do
  {
    if ( !*v7 )
      break;
    v7 += 5;
    v13 = (unsigned int)(v13 + 1);
  }
  while ( v7[3] );
  if ( (_DWORD)v13 )
  {
    ImportList = (void *)MiAllocateImportList(v13);
    v8 = 0LL;
    P = ImportList;
    v15 = ImportList;
    if ( !ImportList )
    {
      Buffer = StringOut.Buffer;
      SystemImage = -1073741670;
      v29 = 0LL;
      goto LABEL_47;
    }
  }
  else
  {
LABEL_40:
    v15 = 0LL;
    P = 0LL;
  }
  v12 = v15;
  while ( 1 )
  {
    v16 = v9[3];
    if ( !(_DWORD)v16 || *v9 == (_DWORD)v8 )
    {
      *(_QWORD *)(a1 + 136) = MiCompressImportList(P);
      return 0LL;
    }
    v17 = &v5[v16];
    v10 = v8;
    RtlInitAnsiString(&DestinationString, &v5[v16]);
    SystemImage = RtlAnsiStringToUnicodeString(&StringOut, &DestinationString, 1u);
    if ( SystemImage < 0 )
      goto LABEL_59;
    Buffer = StringOut.Buffer;
    if ( !StringOut.Buffer )
    {
LABEL_56:
      SystemImage = -1073741670;
LABEL_57:
      v29 = 0LL;
      goto LABEL_46;
    }
    CurrentApiSetSchema = PsQueryCurrentApiSetSchema(0LL);
    SystemImage = ApiSetResolveToHost(CurrentApiSetSchema, &StringOut.Length, a2, &v33, (__int64)&StringIn);
    if ( SystemImage < 0 )
      goto LABEL_57;
    if ( v33 )
    {
      ExFreePool(Buffer);
      v8 = 0LL;
      StringOut = 0LL;
      if ( !StringIn.Length )
      {
        v5 = v39;
        goto LABEL_33;
      }
      Size = 0x80000000;
      v6 = (unsigned __int16 *)v44;
      SystemImage = RtlDuplicateUnicodeString(0, &StringIn, &StringOut);
      if ( SystemImage < 0 )
      {
LABEL_59:
        Buffer = StringOut.Buffer;
        goto LABEL_60;
      }
      Buffer = StringOut.Buffer;
    }
    else
    {
      Size = 0;
    }
    if ( !a4
      || !strnicmp(v17, "ntoskrnl", 8uLL)
      || !strnicmp(v17, "hal", 3uLL)
      || (Length = StringOut.Length,
          !RtlCompareUnicodeStrings(Buffer, (unsigned __int64)StringOut.Length >> 1, L"ksrext.sys", 0xAuLL, 1u)) )
    {
      String1 = StringOut;
    }
    else
    {
      String1.MaximumLength = a4->Length + Length;
      String1.Buffer = (wchar_t *)MiAllocatePool(0x100uLL, String1.MaximumLength, 1413770573);
      if ( !String1.Buffer )
        goto LABEL_56;
      String1.Length = 0;
      RtlAppendUnicodeStringToString(&String1, a4);
      RtlAppendUnicodeStringToString(&String1, &StringOut);
      v32 = 1;
    }
    v21 = (PVOID *)PsLoadedModuleList;
    p_String1 = &String1;
    while ( 1 )
    {
      if ( v21 == &PsLoadedModuleList )
        goto LABEL_68;
      if ( RtlEqualUnicodeString(&String1, (PCUNICODE_STRING)(v21 + 11), 1u) )
        break;
      v21 = (PVOID *)*v21;
    }
    v22 = v21[6];
    if ( !v22 )
    {
LABEL_68:
      if ( a5 )
      {
        SystemImage = -1073740945;
        goto LABEL_82;
      }
      if ( !(unsigned int)MiFormFullImageName(v6, (const STRING *)&StringOut, (STRING *)&StringIn) )
        goto LABEL_73;
      v31 = Size | 8;
      SystemImage = MmLoadSystemImageEx((__int64)&StringIn, (__int64)a4, 0LL, 0, Size | 8, (__int64 *)&v42, v45);
      if ( SystemImage == -1073741772 )
      {
        ExFreePoolWithTag(StringIn.Buffer, 0);
        if ( v6 == (unsigned __int16 *)v44 )
        {
          if ( !v33 )
          {
            SystemImage = -1073741772;
LABEL_82:
            v10 = (__int64)p_String1;
LABEL_60:
            v29 = v35;
            goto LABEL_46;
          }
          if ( !(unsigned int)MiFormFullImageName(a3, (const STRING *)&StringOut, (STRING *)&StringIn) )
          {
            SystemImage = -1073741670;
            goto LABEL_82;
          }
        }
        else if ( !(unsigned int)MiFormFullImageName(
                                   (unsigned __int16 *)v44,
                                   (const STRING *)&StringOut,
                                   (STRING *)&StringIn) )
        {
LABEL_73:
          v10 = (__int64)p_String1;
          SystemImage = -1073741670;
          goto LABEL_57;
        }
        SystemImage = MmLoadSystemImageEx((__int64)&StringIn, (__int64)a4, 0LL, 0, v31, (__int64 *)&v42, v45);
      }
      ExFreePoolWithTag(StringIn.Buffer, 0);
      v8 = 0LL;
      if ( SystemImage < 0 )
        goto LABEL_80;
      v21 = v42;
      v22 = v42[6];
      goto LABEL_26;
    }
    if ( (*(_DWORD *)(MiGetBaseLoaderPortion((__int64)v21) + 184) & 0x80u) != 0 )
      break;
    if ( ((_DWORD)v21[13] & 0x1000) != 0 )
      goto LABEL_26;
    if ( v21[17] != (PVOID)1 )
    {
      ++*((_WORD *)v21 + 54);
LABEL_26:
      if ( v21[17] != (PVOID)1 && ((_DWORD)v21[13] & 0x1000) == 0 )
      {
        v24 = v34;
        *((_QWORD *)P + v34 + 1) = v21;
        v34 = v24 + 1;
      }
    }
    v23 = *v9;
    v5 = v39;
    if ( (_DWORD)v23 )
    {
      v26 = &v39[v23];
      v27 = (_DWORD)v39 + v9[4];
      while ( *(_QWORD *)v26 != v8 )
      {
        v28 = MiSnapThunk((_DWORD)v22, (_DWORD)v5, (_DWORD)v26, v27, v8);
        v8 = 0LL;
        SystemImage = v28;
        if ( v28 < 0 )
        {
          v29 = MiSnapUnresolvedImport(v39, v26, v22);
          v10 = (__int64)p_String1;
          goto LABEL_46;
        }
        v5 = v39;
        v26 += 8;
        v27 += 8;
      }
    }
    if ( Buffer )
    {
      ExFreePool(Buffer);
      v8 = 0LL;
      StringOut = 0LL;
    }
    if ( v32 != (_BYTE)v8 )
    {
      ExFreePoolWithTag(String1.Buffer, 0);
      v8 = 0LL;
      v32 = 0;
    }
    v6 = a3;
LABEL_33:
    v9 += 5;
  }
  SystemImage = -1073740608;
LABEL_80:
  v10 = (__int64)p_String1;
  v29 = v8;
LABEL_46:
  v11 = v34;
LABEL_47:
  MiLogFailedDriverLoad(a2, v10, v29, (unsigned int)SystemImage);
  if ( v32 )
    ExFreePoolWithTag(String1.Buffer, 0);
  if ( Buffer )
    ExFreePool(Buffer);
  if ( v12 )
  {
    if ( v11 != *v12 )
      *v12 = v11;
    MiDereferenceImports((unsigned __int64)v12);
    ExFreePoolWithTag(v12, 0);
  }
  return (unsigned int)SystemImage;
}
