/*
 * XREFs of LdrpResGetResourceDirectory @ 0x180097F40
 * Callers:
 *     LdrpResSearchResourceMappedFile @ 0x180096010 (LdrpResSearchResourceMappedFile.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18006B600 (RtlGetCurrentServiceSessionId.c)
 *     RtlImageNtHeaderEx @ 0x18006ECD0 (RtlImageNtHeaderEx.c)
 *     LdrpTraceLoadMUIDll @ 0x18009540C (LdrpTraceLoadMUIDll.c)
 */

NTSTATUS __fastcall LdrpResGetResourceDirectory(
        unsigned __int64 BaseOfImage,
        ULONG64 Size,
        __int16 a3,
        _QWORD *a4,
        PIMAGE_NT_HEADERS *a5)
{
  char v9; // di
  _DWORD *SharedData; // rcx
  __int64 v11; // r14
  __int64 v12; // rcx
  char v13; // di
  int v14; // esi
  NTSTATUS result; // eax
  PIMAGE_NT_HEADERS v16; // r9
  _IMAGE_OPTIONAL_HEADER64 *p_OptionalHeader; // rcx
  unsigned __int16 Magic; // ax
  unsigned int v19; // eax
  char v20; // cl
  unsigned int v21; // eax
  char *v22; // rdx
  unsigned int *v23; // rdx
  int i; // r8d
  __int64 v25; // r10
  unsigned __int64 v26; // r8
  int v27; // eax
  int v28; // ecx
  _DWORD *v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rax
  int v32; // [rsp+20h] [rbp-168h]
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+38h] [rbp-150h] BYREF
  unsigned int *v34; // [rsp+40h] [rbp-148h]
  char *v35; // [rsp+48h] [rbp-140h]
  _QWORD v36[2]; // [rsp+50h] [rbp-138h] BYREF
  _QWORD v37[2]; // [rsp+60h] [rbp-128h] BYREF
  __int128 v38; // [rsp+70h] [rbp-118h]
  __int128 v39; // [rsp+80h] [rbp-108h]
  __int128 v40; // [rsp+90h] [rbp-F8h]
  __int128 v41; // [rsp+A0h] [rbp-E8h]
  __int128 v42; // [rsp+B0h] [rbp-D8h]
  __int128 v43; // [rsp+C0h] [rbp-C8h]
  __int128 v44; // [rsp+D0h] [rbp-B8h]
  __int128 v45; // [rsp+E0h] [rbp-A8h]
  __int128 v46; // [rsp+F0h] [rbp-98h]
  __int128 v47; // [rsp+100h] [rbp-88h]
  __int128 v48; // [rsp+110h] [rbp-78h]
  __int128 v49; // [rsp+120h] [rbp-68h]
  __int128 v50; // [rsp+130h] [rbp-58h]
  __int128 v51; // [rsp+140h] [rbp-48h]
  __int128 v52; // [rsp+150h] [rbp-38h]

  v35 = 0LL;
  OutHeaders = 0LL;
  v9 = 1;
  v36[0] = 4456514LL;
  v36[1] = L"LdrpResGetResourceDirectory Enter";
  v37[0] = 4325440LL;
  v37[1] = L"LdrpResGetResourceDirectory Exit";
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
  {
    v12 = (__int64)NtCurrentPeb()->SharedData + 555;
    v11 = 2147353477LL;
  }
  else
  {
    v11 = 2147353477LL;
    v12 = 2147353477LL;
  }
  if ( (*(_BYTE *)v12 & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v30 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v30 = 2147353476LL;
    LdrpTraceLoadMUIDll((unsigned __int16 *)v36, *(unsigned __int8 *)v30);
  }
  if ( !BaseOfImage || !a4 || !a5 )
    return -1073741811;
  if ( (BaseOfImage & 3) != 0 )
  {
    v13 = BaseOfImage & 1;
    BaseOfImage &= 0xFFFFFFFFFFFFFFFCuLL;
    v9 = v13 ^ 1;
  }
  v14 = a3 & 0x1000;
  result = RtlImageNtHeaderEx(v14 == 0, (PVOID)BaseOfImage, Size, &OutHeaders);
  if ( result >= 0 )
  {
    v16 = OutHeaders;
    p_OptionalHeader = &OutHeaders->OptionalHeader;
    Magic = OutHeaders->OptionalHeader.Magic;
    if ( Magic == 267 )
    {
      v38 = *(_OWORD *)&p_OptionalHeader->Magic;
      v39 = *(_OWORD *)&OutHeaders->OptionalHeader.AddressOfEntryPoint;
      v40 = *(_OWORD *)&OutHeaders->OptionalHeader.SectionAlignment;
      v41 = *(_OWORD *)&OutHeaders->OptionalHeader.MajorSubsystemVersion;
      v42 = *(_OWORD *)&OutHeaders->OptionalHeader.CheckSum;
      v43 = *(_OWORD *)&OutHeaders->OptionalHeader.SizeOfStackCommit;
      v44 = *(_OWORD *)&OutHeaders->OptionalHeader.SizeOfHeapCommit;
      v45 = *(_OWORD *)&OutHeaders->OptionalHeader.DataDirectory[0].VirtualAddress;
      v46 = *(_OWORD *)&OutHeaders->OptionalHeader.DataDirectory[2].VirtualAddress;
      v47 = *(_OWORD *)&OutHeaders->OptionalHeader.DataDirectory[4].VirtualAddress;
      v48 = *(_OWORD *)&OutHeaders->OptionalHeader.DataDirectory[6].VirtualAddress;
      v49 = *(_OWORD *)&OutHeaders->OptionalHeader.DataDirectory[8].VirtualAddress;
      v50 = *(_OWORD *)&OutHeaders->OptionalHeader.DataDirectory[10].VirtualAddress;
      v51 = *(_OWORD *)&OutHeaders->OptionalHeader.DataDirectory[12].VirtualAddress;
      v19 = HIDWORD(v43);
      v20 = 1;
    }
    else
    {
      if ( Magic != 523 )
      {
        v32 = -1073741701;
        goto LABEL_46;
      }
      v38 = *(_OWORD *)&p_OptionalHeader->Magic;
      v39 = *(_OWORD *)&OutHeaders->OptionalHeader.AddressOfEntryPoint;
      v40 = *(_OWORD *)&OutHeaders->OptionalHeader.SectionAlignment;
      v41 = *(_OWORD *)&OutHeaders->OptionalHeader.MajorSubsystemVersion;
      v42 = *(_OWORD *)&OutHeaders->OptionalHeader.CheckSum;
      v43 = *(_OWORD *)&OutHeaders->OptionalHeader.SizeOfStackCommit;
      v44 = *(_OWORD *)&OutHeaders->OptionalHeader.SizeOfHeapCommit;
      v45 = *(_OWORD *)&OutHeaders->OptionalHeader.DataDirectory[0].VirtualAddress;
      v46 = *(_OWORD *)&OutHeaders->OptionalHeader.DataDirectory[2].VirtualAddress;
      v47 = *(_OWORD *)&OutHeaders->OptionalHeader.DataDirectory[4].VirtualAddress;
      v48 = *(_OWORD *)&OutHeaders->OptionalHeader.DataDirectory[6].VirtualAddress;
      v49 = *(_OWORD *)&OutHeaders->OptionalHeader.DataDirectory[8].VirtualAddress;
      v50 = *(_OWORD *)&OutHeaders->OptionalHeader.DataDirectory[10].VirtualAddress;
      v51 = *(_OWORD *)&OutHeaders->OptionalHeader.DataDirectory[12].VirtualAddress;
      v52 = *(_OWORD *)&OutHeaders->OptionalHeader.DataDirectory[14].VirtualAddress;
      v20 = 0;
      v19 = HIDWORD(v44);
    }
    if ( v19 <= 2 )
    {
      v32 = -1073741687;
      goto LABEL_46;
    }
    v21 = v46;
    if ( v20 )
      v21 = v45;
    if ( !v21 )
    {
      v32 = -1073741687;
      goto LABEL_46;
    }
    if ( !v9 && v21 >= HIDWORD(v41) )
    {
      v34 = 0LL;
      v16 = OutHeaders;
      v23 = (unsigned int *)((char *)&OutHeaders->OptionalHeader.Magic + OutHeaders->FileHeader.SizeOfOptionalHeader);
      v34 = v23;
      if ( v23 )
      {
        for ( i = 0;
              i < OutHeaders->FileHeader.NumberOfSections
           && (!v14 || (unsigned __int64)(v23 + 10) <= Size + (BaseOfImage & 0xFFFFFFFFFFFFFFFCuLL));
              ++i )
        {
          v25 = v23[3];
          if ( v21 == (_DWORD)v25 || v21 > (unsigned int)v25 && v21 < (unsigned int)v25 + v23[4] )
          {
            if ( v23[4] )
            {
              v22 = (char *)(BaseOfImage + v23[5] - v25 + v21);
              goto LABEL_21;
            }
            v32 = -1073741687;
            goto LABEL_46;
          }
          v23 += 10;
          v34 = v23;
        }
      }
      v32 = -1073741701;
      goto LABEL_46;
    }
    v22 = (char *)(BaseOfImage + v21);
    if ( (unsigned __int64)v22 < BaseOfImage )
    {
      v32 = -1073741701;
      goto LABEL_46;
    }
LABEL_21:
    v35 = v22;
    if ( v22 )
    {
      if ( !v14 )
      {
LABEL_45:
        *a4 = v22;
        *a5 = v16;
        v32 = 0;
        goto LABEL_46;
      }
      if ( (unsigned __int64)v22 > BaseOfImage )
      {
        v26 = (BaseOfImage & 0xFFFFFFFFFFFFFFFCuLL) + Size;
        if ( (unsigned __int64)(v22 + 16) <= v26 )
        {
          v27 = *((unsigned __int16 *)v22 + 6);
          v28 = *((unsigned __int16 *)v22 + 7);
          if ( !__PAIR32__(v28, v27) )
          {
            v32 = -1073741686;
            goto LABEL_46;
          }
          if ( (unsigned __int64)&v22[8 * (v27 + v28)] <= v26 )
            goto LABEL_45;
        }
      }
      v32 = -1073741701;
    }
    else
    {
      v32 = -1073741687;
    }
LABEL_46:
    v29 = NtCurrentPeb()->SharedData;
    if ( v29 && *v29 )
      v11 = (__int64)NtCurrentPeb()->SharedData + 555;
    if ( (*(_BYTE *)v11 & 1) != 0 )
    {
      if ( RtlGetCurrentServiceSessionId() )
        v31 = (__int64)NtCurrentPeb()->SharedData + 554;
      else
        v31 = 2147353476LL;
      LdrpTraceLoadMUIDll((unsigned __int16 *)v37, *(unsigned __int8 *)v31);
    }
    return v32;
  }
  return result;
}
