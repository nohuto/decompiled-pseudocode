/*
 * XREFs of LdrpCompleteMapModule @ 0x18006DBC0
 * Callers:
 *     LdrpMapDllWithSectionHandle @ 0x18006D3E0 (LdrpMapDllWithSectionHandle.c)
 * Callees:
 *     LdrpLogEtwEvent @ 0x180006960 (LdrpLogEtwEvent.c)
 *     RtlGetCurrentServiceSessionId @ 0x180011660 (RtlGetCurrentServiceSessionId.c)
 *     RtlImageNtHeaderEx @ 0x180014D30 (RtlImageNtHeaderEx.c)
 *     RtlAddressInSectionTable @ 0x1800206B0 (RtlAddressInSectionTable.c)
 *     LdrpCorValidateImage @ 0x18006CD44 (LdrpCorValidateImage.c)
 *     LdrpLogInternal @ 0x18007B390 (LdrpLogInternal.c)
 *     LdrpRelocateImage @ 0x1800E3E8C (LdrpRelocateImage.c)
 *     LdrpLogError @ 0x1800FD63C (LdrpLogError.c)
 *     LdrpCorFixupImage @ 0x18010CA20 (LdrpCorFixupImage.c)
 */

__int64 __fastcall LdrpCompleteMapModule(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r14
  int v4; // esi
  char *v5; // rbp
  bool v9; // bl
  unsigned __int64 v10; // rdi
  unsigned __int16 Magic; // ax
  __int64 VirtualAddress; // rax
  int v13; // ecx
  _BYTE *v14; // rax
  int v16; // eax
  __int64 v17; // rdi
  __int64 v18; // rbx
  __int64 v19; // rcx
  __int64 v20; // rbp
  __int64 v21; // rdi
  int v22; // ecx
  int v23; // eax
  char *v24; // rcx
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+88h] [rbp+20h] BYREF

  v3 = *(_QWORD *)(a1 + 56);
  v4 = 0;
  v5 = 0LL;
  OutHeaders = 0LL;
  v9 = 1;
  v10 = *(_QWORD *)(v3 + 48);
  if ( (v10 & 3) != 0 )
  {
    v10 &= 0xFFFFFFFFFFFFFFFCuLL;
    v9 = !(*(_BYTE *)(v3 + 48) & 1);
  }
  RtlImageNtHeaderEx(1u, (PVOID)v10, 0LL, &OutHeaders);
  if ( !OutHeaders )
  {
LABEL_13:
    if ( (*(_WORD *)(a2 + 22) & 0x2000) != 0 )
    {
      if ( *(char *)(a1 + 32) >= 0 || *(char *)(a2 + 94) < 0 )
      {
        if ( (*(_DWORD *)(v3 + 104) & 0x1000000) == 0 && (a3 == 1073741827 || a3 == 1073741878) )
        {
          v17 = *(_QWORD *)(v3 + 48);
          v18 = 2147353476LL;
          if ( RtlGetCurrentServiceSessionId() )
            v19 = (__int64)NtCurrentPeb()->SharedData + 554;
          else
            v19 = 2147353476LL;
          v20 = 2147353477LL;
          if ( *(_BYTE *)v19 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
          {
            v24 = RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 555 : (char *)2147353477;
            if ( (*v24 & 0x20) != 0 )
              LdrpLogEtwEvent(5264, v17, 255, 255, 0LL, 0LL);
          }
          if ( a3 == 1073741827 && (v23 = LdrpRelocateImage(*(PVOID *)(v3 + 48)), v4 = v23, v23 < 0) )
          {
            LdrpLogError((unsigned int)v23, 5264LL, 0LL, v3 + 72);
          }
          else
          {
            v21 = *(_QWORD *)(v3 + 48);
            if ( RtlGetCurrentServiceSessionId() )
              v18 = (__int64)NtCurrentPeb()->SharedData + 554;
            if ( *(_BYTE *)v18 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
            {
              if ( RtlGetCurrentServiceSessionId() )
                v20 = (__int64)NtCurrentPeb()->SharedData + 555;
              if ( (*(_BYTE *)v20 & 0x20) != 0 )
                LdrpLogEtwEvent(5265, v21, 255, 255, 0LL, 0LL);
            }
          }
        }
      }
      else
      {
        LdrpLogInternal(
          "minkernel\\ldr\\ldrmap.c",
          1053LL,
          "LdrpCompleteMapModule",
          0LL,
          "Could not validate the crypto signature for DLL %wZ\n",
          v3 + 72);
        return (unsigned int)-1073740760;
      }
    }
    else
    {
      *(_DWORD *)(v3 + 104) &= ~4u;
    }
    return (unsigned int)v4;
  }
  Magic = OutHeaders->OptionalHeader.Magic;
  if ( Magic == 267 )
  {
    if ( HIDWORD(OutHeaders->OptionalHeader.SizeOfHeapReserve) > 0xE )
    {
      VirtualAddress = OutHeaders->OptionalHeader.DataDirectory[12].VirtualAddress;
      if ( (_DWORD)VirtualAddress )
        goto LABEL_8;
      v13 = -1073741822;
      goto LABEL_10;
    }
LABEL_41:
    v13 = -1073741811;
    goto LABEL_10;
  }
  if ( Magic != 523 || OutHeaders->OptionalHeader.NumberOfRvaAndSizes <= 0xE )
    goto LABEL_41;
  VirtualAddress = OutHeaders->OptionalHeader.DataDirectory[14].VirtualAddress;
  if ( (_DWORD)VirtualAddress )
  {
LABEL_8:
    if ( v9 || (unsigned int)VirtualAddress < OutHeaders->OptionalHeader.SizeOfHeaders )
    {
      v5 = (char *)(v10 + VirtualAddress);
      v13 = 0;
    }
    else
    {
      v5 = (char *)RtlAddressInSectionTable(OutHeaders, (PVOID)v10, VirtualAddress);
      v16 = 0;
      if ( !v5 )
        v16 = -1073741811;
      v13 = v16;
    }
    goto LABEL_10;
  }
  v13 = -1073741822;
LABEL_10:
  v14 = 0LL;
  if ( v13 >= 0 )
    v14 = v5;
  if ( !v14 )
    goto LABEL_13;
  if ( (*(_DWORD *)(a1 + 32) & 0x800000) != 0 )
    return (unsigned int)-1073741701;
  v22 = *(_DWORD *)(v3 + 104) | 0x400000;
  *(_DWORD *)(v3 + 104) = v22;
  if ( (v14[16] & 1) == 0 )
    goto LABEL_13;
  *(_DWORD *)(v3 + 104) = v22 | 0x1000000;
  v4 = LdrpCorValidateImage(*(void **)(v3 + 48));
  if ( v4 >= 0 )
  {
    if ( (*(_DWORD *)(a1 + 32) & 0x200000) == 0 )
      goto LABEL_13;
    v4 = LdrpCorFixupImage(*(PVOID *)(v3 + 48));
    if ( v4 >= 0 )
      goto LABEL_13;
  }
  return (unsigned int)v4;
}
