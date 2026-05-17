/*
 * XREFs of LdrResSearchResource @ 0x1800983B0
 * Callers:
 *     RtlLoadString @ 0x1800976E0 (RtlLoadString.c)
 *     LdrResFindResourceDirectory @ 0x180098320 (LdrResFindResourceDirectory.c)
 *     LdrResFindResource @ 0x1801385A0 (LdrResFindResource.c)
 * Callees:
 *     RtlCultureNameToLCID @ 0x1800330E0 (RtlCultureNameToLCID.c)
 *     RtlGetCurrentServiceSessionId @ 0x180055A20 (RtlGetCurrentServiceSessionId.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x18005FF20 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrAddLoadAsDataTable @ 0x180064190 (LdrAddLoadAsDataTable.c)
 *     LdrpTraceLoadMUIDll @ 0x1800790FC (LdrpTraceLoadMUIDll.c)
 *     LdrpResGetMappingSize @ 0x1800791F0 (LdrpResGetMappingSize.c)
 *     LdrpResSearchResourceMappedFile @ 0x180079BD0 (LdrpResSearchResourceMappedFile.c)
 *     LdrpResValidateFileHandle @ 0x180097188 (LdrpResValidateFileHandle.c)
 *     LdrpResValdiateMappedAddress @ 0x180097200 (LdrpResValdiateMappedAddress.c)
 *     RtlFreeAnsiString @ 0x1800B4B90 (RtlFreeAnsiString.c)
 *     LdrpResSearchResourceHandle @ 0x1800D1ACC (LdrpResSearchResourceHandle.c)
 *     RtlLcidToLocaleName @ 0x1800D26D0 (RtlLcidToLocaleName.c)
 *     RtlInitUnicodeString @ 0x1800DA0A0 (RtlInitUnicodeString.c)
 *     LdrpResValidateFilePath @ 0x1800E7188 (LdrpResValidateFilePath.c)
 *     LdrpResMapFile @ 0x18010E614 (LdrpResMapFile.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     memmove @ 0x180167400 (memmove.c)
 */

__int64 __fastcall LdrResSearchResource(
        __int64 String2,
        void *Src,
        unsigned int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v9; // r14
  __int64 v12; // rcx
  __int64 v13; // r15
  int v14; // ecx
  int v15; // esi
  bool v16; // zf
  unsigned __int64 *v17; // rcx
  int v18; // r12d
  __int64 result; // rax
  void *v20; // r13
  __int64 *v21; // r14
  unsigned int v22; // ebx
  __int64 v23; // rsi
  unsigned int v24; // eax
  int v25; // eax
  __int64 v26; // rcx
  int v27; // eax
  wchar_t *v28; // r9
  _WORD *v29; // rdx
  int v30; // [rsp+50h] [rbp-D8h]
  wchar_t *v31; // [rsp+58h] [rbp-D0h]
  __int64 v32; // [rsp+60h] [rbp-C8h] BYREF
  int v33; // [rsp+68h] [rbp-C0h] BYREF
  unsigned __int64 v34[2]; // [rsp+70h] [rbp-B8h] BYREF
  __int64 v35; // [rsp+80h] [rbp-A8h]
  int v36; // [rsp+88h] [rbp-A0h]
  __int64 v37; // [rsp+90h] [rbp-98h]
  UNICODE_STRING UnicodeString; // [rsp+98h] [rbp-90h] BYREF
  __int64 v39; // [rsp+A8h] [rbp-80h]
  _QWORD v40[2]; // [rsp+B0h] [rbp-78h] BYREF
  _QWORD v41[2]; // [rsp+C0h] [rbp-68h] BYREF
  PCWSTR SourceString; // [rsp+D0h] [rbp-58h]

  v9 = a3;
  v37 = a5;
  v32 = a6;
  v39 = a7;
  v35 = a8;
  v31 = 0LL;
  v33 = 0;
  v34[0] = 3538996LL;
  v34[1] = (unsigned __int64)L"LdrResSearchResource Enter";
  v40[0] = 3407922LL;
  v40[1] = L"LdrResSearchResource Exit";
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v12 = (__int64)NtCurrentPeb()->SharedData + 555;
  else
    v12 = 2147353477LL;
  if ( (*(_BYTE *)v12 & 1) != 0 )
  {
    v13 = 2147353476LL;
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v26 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v26 = 2147353476LL;
    LdrpTraceLoadMUIDll((unsigned __int16 *)v34, *(unsigned __int8 *)v26);
  }
  else
  {
    v13 = 2147353476LL;
  }
  if ( !String2 || !Src || a7 && !v35 )
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
      return 3221225713LL;
  }
  else if ( (_DWORD)v9 != 4 )
  {
    goto LABEL_17;
  }
  if ( (v15 & 0x41) == 0 )
    return 3221225714LL;
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
  v34[0] = 0LL;
  if ( (v15 & 0x20000) != 0 )
  {
    if ( (v15 & 0x400) == 0 || (v17 = (unsigned __int64 *)v32) == 0LL || !*(_QWORD *)v32 )
    {
      v22 = -1073741811;
      v30 = -1073741811;
      v23 = 2147353477LL;
      goto LABEL_35;
    }
    v34[0] = *(_QWORD *)v32;
  }
  else
  {
    v17 = (unsigned __int64 *)v32;
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
    v34[0] = *v17;
  }
  memmove(v41, Src, 8 * v9);
  v18 = 3;
  if ( (unsigned int)v9 <= 3 )
    v18 = v9;
  if ( v18 == 3 )
  {
    if ( (unsigned __int64)SourceString >= 0x10000 )
    {
      if ( *SourceString )
      {
        UnicodeString = 0LL;
        RtlInitUnicodeString(&UnicodeString, SourceString);
        if ( !RtlCultureNameToLCID(&UnicodeString.Length, &v33) )
          return 3221225485LL;
      }
      else
      {
        v33 = 0;
      }
      SourceString = (PCWSTR)(unsigned __int16)v33;
      goto LABEL_29;
    }
    if ( !SourceString )
      goto LABEL_29;
    if ( ((unsigned __int16)SourceString & 0x3FF) != 0 && SourceString != (PCWSTR)127 )
    {
      UnicodeString = 0LL;
      if ( (int)RtlLcidToLocaleName(SourceString, &UnicodeString, 2LL) >= 0 )
      {
        if ( UnicodeString.Buffer )
          RtlFreeAnsiString(&UnicodeString);
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
        result = LdrpResValidateFileHandle(String2);
        if ( (int)result < 0 )
          return result;
        v24 = LdrpResSearchResourceHandle((HANDLE)String2, v37, v32, v39, v35);
      }
      else
      {
        v20 = (void *)v39;
        v21 = (__int64 *)v32;
        v22 = LdrpResSearchResourceMappedFile(
                (__int64)v31,
                v34[0],
                v15,
                (__int64)v41,
                v18,
                (unsigned int **)v37,
                (__int64 *)v32,
                (void *)v39,
                (unsigned int *)v35);
        v30 = v22;
        if ( v22 != -1073741686 )
          goto LABEL_34;
        if ( ((v41[0] - 16LL) & 0xFFFFFFFFFFFFFFF7uLL) == 0 )
          goto LABEL_34;
        v32 = 0LL;
        if ( (int)LdrLoadAlternateResourceModuleEx((__int64)v31, 0xF2EEu, &v32, 0LL, 0x1000000) < 0 )
          goto LABEL_34;
        v34[0] = 0LL;
        if ( (int)LdrpResGetMappingSize(v32, v34, v15, 0) < 0 )
          goto LABEL_34;
        v24 = LdrpResSearchResourceMappedFile(
                v32,
                v34[0],
                v15 | 0x1000000u,
                (__int64)v41,
                v18,
                (unsigned int **)v37,
                v21,
                v20,
                (unsigned int *)v35);
      }
      v22 = v24;
      v30 = v24;
LABEL_34:
      v23 = 2147353477LL;
LABEL_35:
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      {
        v23 = (__int64)NtCurrentPeb()->SharedData + 555;
        v22 = v30;
      }
      if ( (*(_BYTE *)v23 & 1) != 0 )
      {
        if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        {
          v13 = (__int64)NtCurrentPeb()->SharedData + 554;
          v22 = v30;
        }
        LdrpTraceLoadMUIDll((unsigned __int16 *)v40, *(unsigned __int8 *)v13);
      }
      return v22;
    }
    if ( (v15 & 0x1400) == 0x1400 )
    {
      result = LdrpResValidateFilePath(String2);
    }
    else
    {
      if ( (v15 & 0x1000) == 0 )
        goto LABEL_107;
      result = LdrpResValidateFileHandle(String2);
    }
    if ( (int)result < 0 )
      return result;
LABEL_107:
    v27 = LdrpResMapFile((wchar_t *)String2);
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
        v29 = (_WORD *)String2;
      }
      else
      {
        v28 = (wchar_t *)String2;
        v29 = 0LL;
      }
      result = LdrAddLoadAsDataTable(0LL, v29, v34[0], (__int64)v28, 0LL);
      if ( (int)result < 0 )
        return result;
    }
    goto LABEL_32;
  }
  v31 = (wchar_t *)String2;
  if ( (v15 & 0x200) == 0 )
    goto LABEL_96;
  if ( (String2 & 1) == 0 )
    v31 = (wchar_t *)(String2 | 1);
  if ( (v15 & 0x1000) == 0 || (result = LdrpResValdiateMappedAddress(String2), (int)result >= 0) )
  {
LABEL_96:
    result = LdrpResGetMappingSize((__int64)v31, v34, v15, 0);
    if ( (int)result >= 0 || (v15 & 0x1000) == 0 )
      goto LABEL_32;
  }
  return result;
}
