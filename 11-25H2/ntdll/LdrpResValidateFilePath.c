/*
 * XREFs of LdrpResValidateFilePath @ 0x1800E65B8
 * Callers:
 *     LdrResSearchResource @ 0x180003A20 (LdrResSearchResource.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180011660 (RtlGetCurrentServiceSessionId.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     LdrpTraceLoadMUIDll @ 0x1800A3730 (LdrpTraceLoadMUIDll.c)
 *     RtlDetermineDosPathNameType_U @ 0x1800AC080 (RtlDetermineDosPathNameType_U.c)
 *     RtlDosPathNameToNtPathName_U @ 0x1800E6800 (RtlDosPathNameToNtPathName_U.c)
 *     ZwQueryAttributesFile @ 0x1801639C0 (ZwQueryAttributesFile.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpResValidateFilePath(__int16 *a1)
{
  __int64 v2; // r14
  __int64 v3; // rcx
  __int64 v4; // rsi
  __int64 v5; // rcx
  signed int v6; // edi
  int v7; // edx
  __int64 v8; // rbx
  __int64 v9; // r9
  __int64 v11; // [rsp+20h] [rbp-A8h] BYREF
  const wchar_t *v12; // [rsp+28h] [rbp-A0h]
  __int64 v13; // [rsp+30h] [rbp-98h] BYREF
  const wchar_t *v14; // [rsp+38h] [rbp-90h]
  int v15; // [rsp+40h] [rbp-88h]
  __int128 v16; // [rsp+48h] [rbp-80h] BYREF
  __int128 v17; // [rsp+58h] [rbp-70h] BYREF
  __int128 v18; // [rsp+68h] [rbp-60h]
  __int128 v19; // [rsp+78h] [rbp-50h]
  _BYTE v20[32]; // [rsp+88h] [rbp-40h] BYREF
  __int64 v21; // [rsp+A8h] [rbp-20h]

  v17 = 0LL;
  v18 = 0LL;
  *(_QWORD *)&v19 = 0LL;
  DWORD2(v19) = 0;
  v16 = 0LL;
  memset(v20, 0, sizeof(v20));
  v21 = 0LL;
  v11 = 3932218LL;
  v12 = L"LdrpResValidateFilePath Enter";
  v13 = 3801144LL;
  v14 = L"LdrpResValidateFilePath Exit";
  v2 = 2147353477LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v3 = (__int64)NtCurrentPeb()->SharedData + 555;
  else
    v3 = 2147353477LL;
  if ( (*(_BYTE *)v3 & 1) != 0 )
  {
    v4 = 2147353476LL;
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v5 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v5 = 2147353476LL;
    LdrpTraceLoadMUIDll((unsigned __int16 *)&v11, *(unsigned __int8 *)v5);
  }
  else
  {
    v4 = 2147353476LL;
  }
  if ( !a1 || (v7 = RtlDetermineDosPathNameType_U(a1), v15 = v7, ((v7 - 1) & 0xFFFFFFFA) != 0) || v7 == 5 )
  {
    v6 = -1073741811;
  }
  else if ( (unsigned __int8)((__int64 (__fastcall *)(__int16 *, __int128 *, _QWORD, _QWORD, __int64, const wchar_t *, __int64, const wchar_t *, int))RtlDosPathNameToNtPathName_U)(
                               a1,
                               &v16,
                               0LL,
                               0LL,
                               v11,
                               v12,
                               v13,
                               v14,
                               v15) )
  {
    v8 = *((_QWORD *)&v16 + 1);
    LODWORD(v17) = 48;
    *((_QWORD *)&v17 + 1) = 0LL;
    DWORD2(v18) = 64;
    *(_QWORD *)&v18 = &v16;
    v19 = 0LL;
    v6 = ZwQueryAttributesFile(&v17, v20);
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v8, v9);
    if ( v6 >= 0 )
      v6 = (v21 & 0x10) != 0 ? 0xC000000D : 0;
  }
  else
  {
    v6 = -1073741766;
  }
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v2 = (__int64)NtCurrentPeb()->SharedData + 555;
  if ( (*(_BYTE *)v2 & 1) != 0 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v4 = (__int64)NtCurrentPeb()->SharedData + 554;
    LdrpTraceLoadMUIDll((unsigned __int16 *)&v13, *(unsigned __int8 *)v4);
  }
  return (unsigned int)v6;
}
