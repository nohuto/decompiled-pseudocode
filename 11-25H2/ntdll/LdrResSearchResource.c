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

__int64 __fastcall LdrResSearchResource(
        __int64 String2,
        void *Src,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  unsigned int v8; // ebx
  __int64 v9; // r14
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 v16; // r15
  unsigned int v17; // esi
  bool v18; // zf
  int v19; // r12d
  __int64 result; // rax
  __int64 v21; // r13
  __int64 v22; // r14
  unsigned int v23; // ebx
  __int64 v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  unsigned int v29; // eax
  int v30; // eax
  __int64 v31; // rcx
  int v32; // eax
  wchar_t *v33; // rdx
  int v34; // [rsp+50h] [rbp-D8h]
  unsigned __int64 v35; // [rsp+58h] [rbp-D0h]
  __int64 v36; // [rsp+60h] [rbp-C8h] BYREF
  int v37; // [rsp+68h] [rbp-C0h] BYREF
  _QWORD v38[2]; // [rsp+70h] [rbp-B8h] BYREF
  __int64 v39; // [rsp+80h] [rbp-A8h]
  int v40; // [rsp+88h] [rbp-A0h]
  __int64 v41; // [rsp+90h] [rbp-98h]
  UNICODE_STRING UnicodeString; // [rsp+98h] [rbp-90h] BYREF
  __int64 v43; // [rsp+A8h] [rbp-80h]
  _QWORD v44[2]; // [rsp+B0h] [rbp-78h] BYREF
  _QWORD v45[2]; // [rsp+C0h] [rbp-68h] BYREF
  PCWSTR SourceString; // [rsp+D0h] [rbp-58h]

  v8 = a4;
  v9 = (unsigned int)a3;
  v41 = a5;
  v36 = a6;
  v43 = a7;
  v39 = a8;
  LODWORD(v35) = 0;
  v37 = 0;
  v38[0] = 3538996LL;
  v38[1] = L"LdrResSearchResource Enter";
  v44[0] = 3407922LL;
  v44[1] = L"LdrResSearchResource Exit";
  if ( (unsigned int)RtlGetCurrentServiceSessionId(String2, Src, a3, a4) )
    v15 = (__int64)NtCurrentPeb()->SharedData + 555;
  else
    v15 = 2147353477LL;
  if ( (*(_BYTE *)v15 & 1) != 0 )
  {
    v16 = 2147353476LL;
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v15, v12, v13, v14) )
      v31 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v31 = 2147353476LL;
    LdrpTraceLoadMUIDll(v38, *(unsigned __int8 *)v31);
  }
  else
  {
    v16 = 2147353476LL;
  }
  if ( !String2 || !Src || a7 && !v39 )
  {
LABEL_68:
    v23 = -1073741811;
    goto LABEL_41;
  }
  v12 = 256LL;
  v15 = v8 | 0x100;
  if ( (v8 & 0xF00) != 0 )
    v15 = v8;
  v17 = v15 | 0x1000;
  if ( (v15 & 0x2000) != 0 )
    v17 = v15;
  if ( (v17 & 0xFFF00000) != 0 )
    goto LABEL_40;
  if ( (unsigned int)v9 < 3 && (v17 & 2) == 0 || (unsigned int)v9 > 4 )
  {
    v23 = -1073741583;
    goto LABEL_41;
  }
  if ( (v17 & 0x41) != 0 )
  {
    if ( (_DWORD)v9 != 4 )
      return 3221225713LL;
  }
  else if ( (_DWORD)v9 != 4 )
  {
    goto LABEL_17;
  }
  if ( (v17 & 0x41) == 0 )
    return 3221225714LL;
LABEL_17:
  if ( (v17 & 0x100) != 0 )
  {
    v18 = (v17 & 0xE00) == 0;
    goto LABEL_19;
  }
  v15 = 3072LL;
  v30 = v17 & 0xC00;
  if ( (v17 & 0x200) != 0 )
  {
    v18 = v30 == 0;
LABEL_19:
    if ( v18 )
      goto LABEL_20;
LABEL_40:
    v23 = -1073741582;
LABEL_41:
    v34 = v23;
    goto LABEL_34;
  }
  if ( v30 == 3072 )
    goto LABEL_40;
LABEL_20:
  v40 = v17 & 0x8000;
  if ( (v17 & 0x8000) != 0 && (~(_WORD)v17 & 0x810) != 0 )
    goto LABEL_40;
  v15 = 12288LL;
  if ( (v17 & 0x3000) == 0x3000 || (v17 & 0x18) == 0x18 )
    goto LABEL_40;
  v38[0] = 0LL;
  if ( (v17 & 0x20000) != 0 )
  {
    if ( (v17 & 0x400) == 0 || (v15 = v36) == 0 || !*(_QWORD *)v36 )
    {
      v23 = -1073741811;
      v34 = -1073741811;
      v24 = 2147353477LL;
      goto LABEL_35;
    }
    v38[0] = *(_QWORD *)v36;
  }
  else
  {
    v15 = v36;
  }
  if ( (v17 & 0x80000) != 0 )
  {
    if ( (v17 & 0x300) == 0 || !v15 || !*(_QWORD *)v15 )
    {
      v23 = -1073741811;
      v34 = -1073741811;
      v24 = 2147353477LL;
      goto LABEL_35;
    }
    v38[0] = *(_QWORD *)v15;
  }
  memmove(v45, Src, 8 * v9);
  v19 = 3;
  if ( (unsigned int)v9 <= 3 )
    v19 = v9;
  if ( v19 == 3 )
  {
    v15 = (__int64)SourceString;
    if ( (unsigned __int64)SourceString >= 0x10000 )
    {
      if ( *SourceString )
      {
        UnicodeString = 0LL;
        RtlInitUnicodeString(&UnicodeString, SourceString);
        if ( !(unsigned __int8)RtlCultureNameToLCID(&UnicodeString, &v37) )
          return 3221225485LL;
      }
      else
      {
        v37 = 0;
      }
      SourceString = (PCWSTR)(unsigned __int16)v37;
      goto LABEL_29;
    }
    if ( !SourceString )
      goto LABEL_29;
    if ( ((unsigned __int16)SourceString & 0x3FF) != 0 && SourceString != (PCWSTR)127 )
    {
      UnicodeString = 0LL;
      LOBYTE(v14) = 1;
      if ( (int)RtlLcidToLocaleName(SourceString, &UnicodeString, 2LL, v14) >= 0 )
      {
        if ( UnicodeString.Buffer )
          RtlFreeAnsiString(&UnicodeString);
        goto LABEL_29;
      }
    }
    goto LABEL_68;
  }
LABEL_29:
  if ( (v17 & 0x300) == 0 )
  {
    if ( (v17 & 0x400) == 0 && ((v17 & 0x800) == 0 || (~(_WORD)v17 & 0x8000) == 0) )
    {
LABEL_32:
      if ( v40 )
      {
        result = LdrpResValidateFileHandle(String2);
        if ( (int)result < 0 )
          return result;
        v29 = LdrpResSearchResourceHandle((HANDLE)String2, v41, v36, v43, v39);
      }
      else
      {
        v21 = v43;
        v22 = v36;
        v23 = LdrpResSearchResourceMappedFile(v35, v38[0], v17, (unsigned int)v45, v19, v41, v36, v43, v39);
        v34 = v23;
        if ( v23 != -1073741686 )
          goto LABEL_34;
        if ( ((v45[0] - 16LL) & 0xFFFFFFFFFFFFFFF7uLL) == 0 )
          goto LABEL_34;
        v36 = 0LL;
        if ( (int)LdrLoadAlternateResourceModuleEx(v35, 62190, (unsigned int)&v36, 0, 0x1000000) < 0 )
          goto LABEL_34;
        v38[0] = 0LL;
        if ( (int)LdrpResGetMappingSize(v36, v38, v17, 0LL) < 0 )
          goto LABEL_34;
        v29 = LdrpResSearchResourceMappedFile(v36, v38[0], v17 | 0x1000000, (unsigned int)v45, v19, v41, v22, v21, v39);
      }
      v23 = v29;
      v34 = v29;
LABEL_34:
      v24 = 2147353477LL;
LABEL_35:
      if ( (unsigned int)RtlGetCurrentServiceSessionId(v15, v12, v13, v14) )
      {
        v24 = (__int64)NtCurrentPeb()->SharedData + 555;
        v23 = v34;
      }
      if ( (*(_BYTE *)v24 & 1) != 0 )
      {
        if ( (unsigned int)RtlGetCurrentServiceSessionId(v26, v25, v27, v28) )
        {
          v16 = (__int64)NtCurrentPeb()->SharedData + 554;
          v23 = v34;
        }
        LdrpTraceLoadMUIDll(v44, *(unsigned __int8 *)v16);
      }
      return v23;
    }
    if ( (v17 & 0x1400) == 0x1400 )
    {
      result = LdrpResValidateFilePath(String2);
    }
    else
    {
      if ( (v17 & 0x1000) == 0 )
        goto LABEL_107;
      result = LdrpResValidateFileHandle(String2);
    }
    if ( (int)result < 0 )
      return result;
LABEL_107:
    v32 = LdrpResMapFile((wchar_t *)String2);
    v23 = v32;
    v34 = v32;
    if ( v32 < 0 )
    {
      if ( v32 != -1073741302 )
        goto LABEL_34;
    }
    else
    {
      if ( (v17 & 0x400) != 0 )
        v33 = (wchar_t *)String2;
      else
        v33 = 0LL;
      result = LdrAddLoadAsDataTable(0LL, v33, 0LL);
      if ( (int)result < 0 )
        return result;
    }
    goto LABEL_32;
  }
  v35 = String2;
  if ( (v17 & 0x200) == 0 )
    goto LABEL_96;
  if ( (String2 & 1) == 0 )
    v35 = String2 | 1;
  if ( (v17 & 0x1000) == 0 || (result = LdrpResValdiateMappedAddress(String2), (int)result >= 0) )
  {
LABEL_96:
    result = LdrpResGetMappingSize(v35, v38, v17, 0LL);
    if ( (int)result >= 0 || (v17 & 0x1000) == 0 )
      goto LABEL_32;
  }
  return result;
}
