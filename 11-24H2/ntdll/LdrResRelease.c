/*
 * XREFs of LdrResRelease @ 0x18010BB50
 * Callers:
 *     <none>
 * Callees:
 *     RtlCultureNameToLCID @ 0x1800330E0 (RtlCultureNameToLCID.c)
 *     RtlGetCurrentServiceSessionId @ 0x180055A20 (RtlGetCurrentServiceSessionId.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x180061800 (LdrUnloadAlternateResourceModuleEx.c)
 *     LdrRemoveLoadAsDataTable @ 0x1800643D0 (LdrRemoveLoadAsDataTable.c)
 *     LdrpTraceLoadMUIDll @ 0x1800790FC (LdrpTraceLoadMUIDll.c)
 *     RtlInitUnicodeString @ 0x1800DA0A0 (RtlInitUnicodeString.c)
 *     NtUnmapViewOfSection @ 0x1801621D0 (NtUnmapViewOfSection.c)
 */

__int64 __fastcall LdrResRelease(wchar_t *String2, PCWSTR SourceString, int a3)
{
  unsigned __int64 v6; // r8
  __int64 v7; // r14
  __int64 v8; // rcx
  __int64 v9; // rsi
  wchar_t *v10; // rdi
  unsigned int v11; // edi
  __int64 v13; // rcx
  int v14; // eax
  _QWORD v15[2]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v16[2]; // [rsp+30h] [rbp-48h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-38h] BYREF
  int v18; // [rsp+80h] [rbp+8h] BYREF
  wchar_t *v19; // [rsp+98h] [rbp+20h] BYREF

  v18 = 0;
  DestinationString = 0LL;
  v15[0] = 2621478LL;
  v15[1] = L"LdrResRelease Enter";
  v16[0] = 2490404LL;
  v16[1] = L"LdrResRelease Exit";
  v7 = 2147353477LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v8 = (__int64)NtCurrentPeb()->SharedData + 555;
  else
    v8 = 2147353477LL;
  if ( (*(_BYTE *)v8 & 1) != 0 )
  {
    v9 = 2147353476LL;
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v13 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v13 = 2147353476LL;
    LdrpTraceLoadMUIDll((unsigned __int16 *)v15, *(unsigned __int8 *)v13);
  }
  else
  {
    v9 = 2147353476LL;
  }
  if ( !String2 )
    return 3221225485LL;
  v19 = 0LL;
  if ( (a3 & 0x8800) == 0x8800 )
    return 0LL;
  if ( (unsigned __int64)SourceString >= 0x10000 )
  {
    if ( *SourceString )
    {
      RtlInitUnicodeString(&DestinationString, SourceString);
      if ( !RtlCultureNameToLCID(&DestinationString.Length, &v18) )
        return 3221225485LL;
    }
    else
    {
      v18 = 0;
    }
    LOWORD(SourceString) = v18;
  }
  if ( (a3 & 0xC00) != 0 )
  {
    v14 = LdrRemoveLoadAsDataTable(String2, &v19, 0LL, a3);
    v11 = v14;
    if ( v14 < 0 )
    {
      if ( v14 != -1073740024 && v14 != -1073741511 )
        goto LABEL_12;
      goto LABEL_11;
    }
  }
  else
  {
    v19 = String2;
  }
  v10 = v19;
  LdrUnloadAlternateResourceModuleEx((__int64)v19, (volatile signed __int32 **)(unsigned __int16)SourceString, v6);
  if ( (a3 & 0xC00) != 0 && v10 )
    NtUnmapViewOfSection(-1LL);
LABEL_11:
  v11 = 0;
LABEL_12:
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v7 = (__int64)NtCurrentPeb()->SharedData + 555;
  if ( (*(_BYTE *)v7 & 1) != 0 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v9 = (__int64)NtCurrentPeb()->SharedData + 554;
    LdrpTraceLoadMUIDll((unsigned __int16 *)v16, *(unsigned __int8 *)v9);
  }
  return v11;
}
