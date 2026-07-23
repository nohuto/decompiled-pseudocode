/*
 * XREFs of LdrpGetProcedureAddress @ 0x1800149E0
 * Callers:
 *     LdrpCorInitialize @ 0x1800D0840 (LdrpCorInitialize.c)
 *     AvrfMiniLoadDll @ 0x18010B9A4 (AvrfMiniLoadDll.c)
 *     LdrpApplyPatchImage @ 0x18011A970 (LdrpApplyPatchImage.c)
 *     LdrHotPatchNotify @ 0x18015FB50 (LdrHotPatchNotify.c)
 *     LdrpBuildImportRedirection @ 0x180162508 (LdrpBuildImportRedirection.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180014D30 (RtlImageNtHeaderEx.c)
 *     RtlAddressInSectionTable @ 0x1800206B0 (RtlAddressInSectionTable.c)
 *     LdrpLogInternal @ 0x18007B390 (LdrpLogInternal.c)
 */

__int64 __fastcall LdrpGetProcedureAddress(unsigned __int64 BaseOfImage, const char *a2, int a3, char **a4)
{
  int v4; // r14d
  unsigned int Size; // r13d
  bool v9; // si
  char *v10; // rbx
  char *v11; // rdi
  unsigned __int16 Magic; // ax
  __int64 VirtualAddress; // rax
  int v14; // eax
  char *v15; // rbx
  int v16; // edi
  int v17; // r9d
  int i; // eax
  int v19; // eax
  int v20; // r10d
  __int64 v21; // r8
  const char *v22; // rax
  char *v23; // rdx
  unsigned __int8 v24; // cl
  int v25; // eax
  unsigned int v26; // ebp
  char *v27; // rcx
  __int64 SizeOfHeapCommit_low; // r10
  unsigned int v30; // r8d
  unsigned int *v31; // rdx
  __int64 v32; // r9
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+40h] [rbp-48h] BYREF

  v4 = 0;
  OutHeaders = 0LL;
  Size = 0;
  v9 = 1;
  v10 = (char *)BaseOfImage;
  v11 = 0LL;
  if ( (BaseOfImage & 3) != 0 )
  {
    v10 = (char *)(BaseOfImage & 0xFFFFFFFFFFFFFFFCuLL);
    v9 = (BaseOfImage & 1) == 0;
  }
  RtlImageNtHeaderEx(1u, v10, 0LL, &OutHeaders);
  if ( !OutHeaders )
    return 3221225594LL;
  Magic = OutHeaders->OptionalHeader.Magic;
  if ( Magic != 267 )
  {
    if ( Magic == 523 && OutHeaders->OptionalHeader.NumberOfRvaAndSizes )
    {
      VirtualAddress = OutHeaders->OptionalHeader.DataDirectory[0].VirtualAddress;
      if ( (_DWORD)VirtualAddress )
      {
        Size = OutHeaders->OptionalHeader.DataDirectory[0].Size;
        if ( v9 || (unsigned int)VirtualAddress < OutHeaders->OptionalHeader.SizeOfHeaders )
        {
          v11 = &v10[VirtualAddress];
          v14 = 0;
        }
        else
        {
          v11 = (char *)RtlAddressInSectionTable(OutHeaders, v10, VirtualAddress);
          v14 = 0;
          if ( !v11 )
            v14 = -1073741811;
        }
      }
      else
      {
        v14 = -1073741822;
      }
      goto LABEL_10;
    }
LABEL_42:
    v14 = -1073741811;
    goto LABEL_10;
  }
  if ( !HIDWORD(OutHeaders->OptionalHeader.SizeOfHeapReserve) )
    goto LABEL_42;
  SizeOfHeapCommit_low = LODWORD(OutHeaders->OptionalHeader.SizeOfHeapCommit);
  if ( (_DWORD)SizeOfHeapCommit_low )
  {
    Size = HIDWORD(OutHeaders->OptionalHeader.SizeOfHeapCommit);
    if ( v9 || (unsigned int)SizeOfHeapCommit_low < OutHeaders->OptionalHeader.SizeOfHeaders )
    {
      v11 = &v10[SizeOfHeapCommit_low];
      v14 = 0;
    }
    else
    {
      v30 = 0;
      v31 = (unsigned int *)((char *)&OutHeaders->OptionalHeader.Magic + OutHeaders->FileHeader.SizeOfOptionalHeader);
      while ( v30 < OutHeaders->FileHeader.NumberOfSections )
      {
        v32 = v31[3];
        if ( (unsigned int)SizeOfHeapCommit_low >= (unsigned int)v32
          && (unsigned int)SizeOfHeapCommit_low < (unsigned int)v32 + v31[4] )
        {
          v11 = &v10[v31[5] - v32 + SizeOfHeapCommit_low];
          if ( v11 )
          {
            v14 = 0;
            goto LABEL_10;
          }
          break;
        }
        v31 += 10;
        ++v30;
      }
      v14 = -1073741811;
    }
  }
  else
  {
    v14 = -1073741822;
  }
LABEL_10:
  v15 = 0LL;
  if ( v14 >= 0 )
    v15 = v11;
  if ( !v15 )
    return 3221225594LL;
  if ( a2 )
  {
    LdrpLogInternal(
      "minkernel\\ldr\\ldrsnap.c",
      838LL,
      "LdrpGetProcedureAddress",
      2LL,
      "Locating procedure \"%s\" by name\n",
      a2);
    v16 = 0;
    v17 = *((_DWORD *)v15 + 6) - 1;
    for ( i = v17; ; i = v16 + v17 )
    {
      v19 = i / 2;
      v20 = v19;
      if ( v17 < v16 )
        break;
      v21 = v19;
      v22 = a2;
      v23 = (char *)(BaseOfImage + *(unsigned int *)(BaseOfImage + *((unsigned int *)v15 + 8) + 4 * v21) - (_QWORD)a2);
      while ( 1 )
      {
        v24 = *v22;
        if ( *v22 != v23[(_QWORD)v22] )
          break;
        ++v22;
        if ( !v24 )
        {
          v25 = 0;
          goto LABEL_20;
        }
      }
      v25 = v24 < (unsigned int)v23[(_QWORD)v22] ? -1 : 1;
LABEL_20:
      if ( !v25 )
      {
        v26 = *(unsigned __int16 *)(BaseOfImage + *((unsigned int *)v15 + 9) + 2 * v21);
        goto LABEL_22;
      }
      if ( v25 >= 0 )
        v16 = v20 + 1;
      else
        v17 = v20 - 1;
    }
    LdrpLogInternal(
      "minkernel\\ldr\\ldrsnap.c",
      2286LL,
      "LdrpNameToOrdinal",
      1LL,
      "Procedure \"%s\" could not be located in DLL at base 0x%p.\n",
      a2,
      (const void *)BaseOfImage);
    return 3221225594LL;
  }
  LdrpLogInternal(
    "minkernel\\ldr\\ldrsnap.c",
    856LL,
    "LdrpGetProcedureAddress",
    2LL,
    "Loading procedure 0x%lx by ordinal\n",
    a3);
  if ( !a3 )
    return 3221225485LL;
  v26 = a3 - *((_DWORD *)v15 + 4);
LABEL_22:
  if ( v26 >= *((_DWORD *)v15 + 5) )
  {
    LOBYTE(v4) = a2 != 0LL;
    return (unsigned int)(v4 - 1073741512);
  }
  else
  {
    v27 = (char *)(BaseOfImage + *(unsigned int *)(BaseOfImage + *((unsigned int *)v15 + 7) + 4LL * (int)v26));
    *a4 = v27;
    if ( v27 >= v15 )
      return v27 < &v15[Size] ? 0xC000022D : 0;
    else
      return 0LL;
  }
}
