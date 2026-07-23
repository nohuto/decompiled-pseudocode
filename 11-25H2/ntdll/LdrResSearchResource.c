/*
 * XREFs of LdrResSearchResource @ 0x180003A20
 * Callers:
 *     RtlLoadString @ 0x180002D50 (RtlLoadString.c)
 *     LdrResFindResourceDirectory @ 0x180003990 (LdrResFindResourceDirectory.c)
 *     LdrResFindResource @ 0x180139D10 (LdrResFindResource.c)
 * Callees:
 *     LdrpResValidateFileHandle @ 0x1800027E8 (LdrpResValidateFileHandle.c)
 *     LdrpResValdiateMappedAddress @ 0x180002860 (LdrpResValdiateMappedAddress.c)
 *     RtlGetCurrentServiceSessionId @ 0x180011660 (RtlGetCurrentServiceSessionId.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x18001BB80 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrAddLoadAsDataTable @ 0x18001FDF0 (LdrAddLoadAsDataTable.c)
 *     RtlCultureNameToLCID @ 0x18005C370 (RtlCultureNameToLCID.c)
 *     RtlFreeAnsiString @ 0x1800832E0 (RtlFreeAnsiString.c)
 *     LdrpTraceLoadMUIDll @ 0x1800A3730 (LdrpTraceLoadMUIDll.c)
 *     LdrpResGetMappingSize @ 0x1800A3820 (LdrpResGetMappingSize.c)
 *     LdrpResSearchResourceMappedFile @ 0x1800A4170 (LdrpResSearchResourceMappedFile.c)
 *     LdrpResSearchResourceHandle @ 0x1800A66CC (LdrpResSearchResourceHandle.c)
 *     RtlLcidToLocaleName @ 0x1800A75A0 (RtlLcidToLocaleName.c)
 *     RtlInitUnicodeString @ 0x1800A8A00 (RtlInitUnicodeString.c)
 *     LdrpResValidateFilePath @ 0x1800E65B8 (LdrpResValidateFilePath.c)
 *     LdrpResMapFile @ 0x1801110E4 (LdrpResMapFile.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memmove @ 0x180168980 (memmove.c)
 */

NTSTATUS __fastcall LdrResSearchResource(
        __int64 FileHandle,
        void *Src,
        unsigned int a3,
        int a4,
        __int64 a5,
        void *a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v9; // r14
  __int64 v12; // rcx
  __int64 v13; // r15
  int v14; // ecx
  unsigned int v15; // esi
  bool v16; // zf
  SIZE_T *v17; // rcx
  int v18; // r12d
  NTSTATUS result; // eax
  __int64 v20; // r13
  PVOID v21; // r14
  int v22; // ebx
  __int64 v23; // rsi
  int v24; // eax
  int v25; // eax
  __int64 v26; // rcx
  int v27; // eax
  HANDLE v28; // r9
  WCHAR *v29; // rdx
  int v30; // [rsp+50h] [rbp-D8h]
  PVOID DllHandle; // [rsp+58h] [rbp-D0h] BYREF
  PVOID ResourceDllBase; // [rsp+60h] [rbp-C8h] BYREF
  DWORD Lcid; // [rsp+68h] [rbp-C0h] BYREF
  SIZE_T Size[2]; // [rsp+70h] [rbp-B8h] BYREF
  __int64 v35; // [rsp+80h] [rbp-A8h]
  int v36; // [rsp+88h] [rbp-A0h]
  __int64 v37; // [rsp+90h] [rbp-98h]
  _UNICODE_STRING LocaleName; // [rsp+98h] [rbp-90h] BYREF
  __int64 v39; // [rsp+A8h] [rbp-80h]
  _QWORD v40[2]; // [rsp+B0h] [rbp-78h] BYREF
  __int64 v41; // [rsp+C0h] [rbp-68h] BYREF
  LCID lcid[2]; // [rsp+D0h] [rbp-58h]

  v9 = a3;
  v37 = a5;
  ResourceDllBase = a6;
  v39 = a7;
  v35 = a8;
  DllHandle = 0LL;
  Lcid = 0;
  Size[0] = 3538996LL;
  Size[1] = (SIZE_T)L"LdrResSearchResource Enter";
  v40[0] = 3407922LL;
  v40[1] = L"LdrResSearchResource Exit";
  if ( RtlGetCurrentServiceSessionId() )
    v12 = (__int64)NtCurrentPeb()->SharedData + 555;
  else
    v12 = 2147353477LL;
  if ( (*(_BYTE *)v12 & 1) != 0 )
  {
    v13 = 2147353476LL;
    if ( RtlGetCurrentServiceSessionId() )
      v26 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v26 = 2147353476LL;
    LdrpTraceLoadMUIDll(Size, *(unsigned __int8 *)v26);
  }
  else
  {
    v13 = 2147353476LL;
  }
  if ( !FileHandle || !Src || a7 && !v35 )
  {
LABEL_68:
    v22 = -1073741811;
    goto LABEL_41;
  }
  v14 = a4 | 0x100;
  if ( (a4 & 0xF00) != 0 )
    v14 = a4;
  v15 = v14 | 0x1000;
  if ( (v14 & 0x2000) != 0 )
    v15 = v14;
  if ( (v15 & 0xFFF00000) != 0 )
    goto LABEL_40;
  if ( (unsigned int)v9 < 3 && (v15 & 2) == 0 || (unsigned int)v9 > 4 )
  {
    v22 = -1073741583;
    goto LABEL_41;
  }
  if ( (v15 & 0x41) != 0 )
  {
    if ( (_DWORD)v9 != 4 )
      return -1073741583;
  }
  else if ( (_DWORD)v9 != 4 )
  {
    goto LABEL_17;
  }
  if ( (v15 & 0x41) == 0 )
    return -1073741582;
LABEL_17:
  if ( (v15 & 0x100) != 0 )
  {
    v16 = (v15 & 0xE00) == 0;
    goto LABEL_19;
  }
  v25 = v15 & 0xC00;
  if ( (v15 & 0x200) != 0 )
  {
    v16 = v25 == 0;
LABEL_19:
    if ( v16 )
      goto LABEL_20;
LABEL_40:
    v22 = -1073741582;
LABEL_41:
    v30 = v22;
    goto LABEL_34;
  }
  if ( v25 == 3072 )
    goto LABEL_40;
LABEL_20:
  v36 = v15 & 0x8000;
  if ( (v15 & 0x8000) != 0 && (~(_WORD)v15 & 0x810) != 0 || (v15 & 0x3000) == 0x3000 || (v15 & 0x18) == 0x18 )
    goto LABEL_40;
  Size[0] = 0LL;
  if ( (v15 & 0x20000) != 0 )
  {
    if ( (v15 & 0x400) == 0 || (v17 = (SIZE_T *)ResourceDllBase) == 0LL || !*(_QWORD *)ResourceDllBase )
    {
      v22 = -1073741811;
      v30 = -1073741811;
      v23 = 2147353477LL;
      goto LABEL_35;
    }
    Size[0] = *(_QWORD *)ResourceDllBase;
  }
  else
  {
    v17 = (SIZE_T *)ResourceDllBase;
  }
  if ( (v15 & 0x80000) != 0 )
  {
    if ( (v15 & 0x300) == 0 || !v17 || !*v17 )
    {
      v22 = -1073741811;
      v30 = -1073741811;
      v23 = 2147353477LL;
      goto LABEL_35;
    }
    Size[0] = *v17;
  }
  memmove(&v41, Src, 8 * v9);
  v18 = 3;
  if ( (unsigned int)v9 <= 3 )
    v18 = v9;
  if ( v18 == 3 )
  {
    if ( *(_QWORD *)lcid >= 0x10000uLL )
    {
      if ( **(_WORD **)lcid )
      {
        LocaleName = 0LL;
        RtlInitUnicodeString(&LocaleName, *(PCWSTR *)lcid);
        if ( !RtlCultureNameToLCID(&LocaleName, &Lcid) )
          return -1073741811;
      }
      else
      {
        Lcid = 0;
      }
      *(_QWORD *)lcid = (unsigned __int16)Lcid;
      goto LABEL_29;
    }
    if ( !*(_QWORD *)lcid )
      goto LABEL_29;
    if ( (lcid[0] & 0x3FF) != 0 && *(_QWORD *)lcid != 127LL )
    {
      LocaleName = 0LL;
      if ( RtlLcidToLocaleName(lcid[0], &LocaleName, 2u, 1u) >= 0 )
      {
        if ( LocaleName.Buffer )
          RtlFreeAnsiString(&LocaleName);
        goto LABEL_29;
      }
    }
    goto LABEL_68;
  }
LABEL_29:
  if ( (v15 & 0x300) == 0 )
  {
    if ( (v15 & 0x400) == 0 && ((v15 & 0x800) == 0 || (~(_WORD)v15 & 0x8000) == 0) )
    {
LABEL_32:
      if ( v36 )
      {
        result = LdrpResValidateFileHandle((char *)FileHandle);
        if ( result < 0 )
          return result;
        v24 = LdrpResSearchResourceHandle((HANDLE)FileHandle, v37, (__int64)ResourceDllBase, v39, v35);
      }
      else
      {
        v20 = v39;
        v21 = ResourceDllBase;
        v22 = LdrpResSearchResourceMappedFile(DllHandle, v18, v37, (__int64)ResourceDllBase, v39, v35);
        v30 = v22;
        if ( v22 != -1073741686 )
          goto LABEL_34;
        if ( ((v41 - 16) & 0xFFFFFFFFFFFFFFF7uLL) == 0 )
          goto LABEL_34;
        ResourceDllBase = 0LL;
        if ( LdrLoadAlternateResourceModuleEx(DllHandle, 0xF2EEu, &ResourceDllBase, 0LL, 0x1000000u) < 0 )
          goto LABEL_34;
        Size[0] = 0LL;
        if ( (int)LdrpResGetMappingSize(ResourceDllBase, Size, v15, 0LL) < 0 )
          goto LABEL_34;
        v24 = LdrpResSearchResourceMappedFile(ResourceDllBase, v18, v37, (__int64)v21, v20, v35);
      }
      v22 = v24;
      v30 = v24;
LABEL_34:
      v23 = 2147353477LL;
LABEL_35:
      if ( RtlGetCurrentServiceSessionId() )
      {
        v23 = (__int64)NtCurrentPeb()->SharedData + 555;
        v22 = v30;
      }
      if ( (*(_BYTE *)v23 & 1) != 0 )
      {
        if ( RtlGetCurrentServiceSessionId() )
        {
          v13 = (__int64)NtCurrentPeb()->SharedData + 554;
          v22 = v30;
        }
        LdrpTraceLoadMUIDll(v40, *(unsigned __int8 *)v13);
      }
      return v22;
    }
    if ( (v15 & 0x1400) == 0x1400 )
    {
      result = LdrpResValidateFilePath((PCWSTR)FileHandle);
    }
    else
    {
      if ( (v15 & 0x1000) == 0 )
        goto LABEL_107;
      result = LdrpResValidateFileHandle((char *)FileHandle);
    }
    if ( result < 0 )
      return result;
LABEL_107:
    v27 = LdrpResMapFile((HANDLE)FileHandle, &DllHandle, Size);
    v22 = v27;
    v30 = v27;
    if ( v27 < 0 )
    {
      if ( v27 != -1073741302 )
        goto LABEL_34;
    }
    else
    {
      if ( (v15 & 0x400) != 0 )
      {
        v28 = 0LL;
        v29 = (WCHAR *)FileHandle;
      }
      else
      {
        v28 = (HANDLE)FileHandle;
        v29 = 0LL;
      }
      result = LdrAddLoadAsDataTable(DllHandle, v29, Size[0], v28, 0LL);
      if ( result < 0 )
        return result;
    }
    goto LABEL_32;
  }
  DllHandle = (PVOID)FileHandle;
  if ( (v15 & 0x200) == 0 )
    goto LABEL_96;
  if ( (FileHandle & 1) == 0 )
    DllHandle = (PVOID)(FileHandle | 1);
  if ( (v15 & 0x1000) == 0 || (result = LdrpResValdiateMappedAddress(FileHandle), result >= 0) )
  {
LABEL_96:
    result = LdrpResGetMappingSize(DllHandle, Size, v15, 0LL);
    if ( result >= 0 || (v15 & 0x1000) == 0 )
      goto LABEL_32;
  }
  return result;
}
