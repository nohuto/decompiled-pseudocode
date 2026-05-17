/*
 * XREFs of LdrpResValidateFilePath @ 0x1800E7188
 * Callers:
 *     LdrResSearchResource @ 0x1800983B0 (LdrResSearchResource.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180055A20 (RtlGetCurrentServiceSessionId.c)
 *     LdrpTraceLoadMUIDll @ 0x1800790FC (LdrpTraceLoadMUIDll.c)
 *     RtlDetermineDosPathNameType_U @ 0x180083CF0 (RtlDetermineDosPathNameType_U.c)
 *     RtlDosPathNameToNtPathName_U @ 0x1800E73D0 (RtlDosPathNameToNtPathName_U.c)
 *     ZwQueryAttributesFile @ 0x180162430 (ZwQueryAttributesFile.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpResValidateFilePath(__int16 *a1)
{
  __int64 v2; // r14
  __int64 v3; // rcx
  __int64 v4; // rsi
  __int64 v5; // rcx
  signed int v6; // edi
  int v7; // edx
  unsigned __int64 v8; // rbx
  __int64 v10; // [rsp+20h] [rbp-A8h] BYREF
  const wchar_t *v11; // [rsp+28h] [rbp-A0h]
  __int64 v12; // [rsp+30h] [rbp-98h] BYREF
  const wchar_t *v13; // [rsp+38h] [rbp-90h]
  int v14; // [rsp+40h] [rbp-88h]
  __int128 v15; // [rsp+48h] [rbp-80h] BYREF
  __int128 v16; // [rsp+58h] [rbp-70h] BYREF
  __int128 v17; // [rsp+68h] [rbp-60h]
  __int128 v18; // [rsp+78h] [rbp-50h]
  _BYTE v19[32]; // [rsp+88h] [rbp-40h] BYREF
  __int64 v20; // [rsp+A8h] [rbp-20h]

  v16 = 0LL;
  v17 = 0LL;
  *(_QWORD *)&v18 = 0LL;
  DWORD2(v18) = 0;
  v15 = 0LL;
  memset(v19, 0, sizeof(v19));
  v20 = 0LL;
  v10 = 3932218LL;
  v11 = L"LdrpResValidateFilePath Enter";
  v12 = 3801144LL;
  v13 = L"LdrpResValidateFilePath Exit";
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
    LdrpTraceLoadMUIDll((unsigned __int16 *)&v10, *(unsigned __int8 *)v5);
  }
  else
  {
    v4 = 2147353476LL;
  }
  if ( !a1 || (v7 = RtlDetermineDosPathNameType_U(a1), v14 = v7, ((v7 - 1) & 0xFFFFFFFA) != 0) || v7 == 5 )
  {
    v6 = -1073741811;
  }
  else if ( (unsigned __int8)((__int64 (__fastcall *)(__int16 *, __int128 *, _QWORD, _QWORD, __int64, const wchar_t *, __int64, const wchar_t *, int))RtlDosPathNameToNtPathName_U)(
                               a1,
                               &v15,
                               0LL,
                               0LL,
                               v10,
                               v11,
                               v12,
                               v13,
                               v14) )
  {
    v8 = *((_QWORD *)&v15 + 1);
    LODWORD(v16) = 48;
    *((_QWORD *)&v16 + 1) = 0LL;
    DWORD2(v17) = 64;
    *(_QWORD *)&v17 = &v15;
    v18 = 0LL;
    v6 = ZwQueryAttributesFile(&v16, v19);
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v8);
    if ( v6 >= 0 )
      v6 = (v20 & 0x10) != 0 ? 0xC000000D : 0;
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
    LdrpTraceLoadMUIDll((unsigned __int16 *)&v12, *(unsigned __int8 *)v4);
  }
  return (unsigned int)v6;
}
