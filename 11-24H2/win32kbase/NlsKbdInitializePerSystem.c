/*
 * XREFs of NlsKbdInitializePerSystem @ 0x14014A750
 * Callers:
 *     <none>
 * Callees:
 *     ?NlsSetKeyStateToggle@@YAXE@Z @ 0x14014AAA4 (-NlsSetKeyStateToggle@@YAXE@Z.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

void __fastcall NlsKbdInitializePerSystem(__int64 a1)
{
  wchar_t **v1; // rcx
  __int64 UserSessionState; // rax
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  UNICODE_STRING String1; // [rsp+30h] [rbp-D0h] BYREF
  UNICODE_STRING v12; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING v13; // [rsp+50h] [rbp-B0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  struct _UNICODE_STRING v15; // [rsp+70h] [rbp-90h] BYREF
  struct _UNICODE_STRING v16; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING String2; // [rsp+90h] [rbp-70h] BYREF
  UNICODE_STRING v18; // [rsp+A0h] [rbp-60h] BYREF
  UNICODE_STRING v19; // [rsp+B0h] [rbp-50h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v21; // [rsp+F8h] [rbp-8h]
  int v22; // [rsp+100h] [rbp+0h]
  const wchar_t *v23; // [rsp+108h] [rbp+8h]
  UNICODE_STRING *v24; // [rsp+110h] [rbp+10h]
  int v25; // [rsp+118h] [rbp+18h]
  struct _UNICODE_STRING *v26; // [rsp+120h] [rbp+20h]
  int v27; // [rsp+128h] [rbp+28h]
  __int64 v28; // [rsp+130h] [rbp+30h]
  int v29; // [rsp+138h] [rbp+38h]
  const wchar_t *v30; // [rsp+140h] [rbp+40h]
  UNICODE_STRING *v31; // [rsp+148h] [rbp+48h]
  int v32; // [rsp+150h] [rbp+50h]
  struct _UNICODE_STRING *v33; // [rsp+158h] [rbp+58h]
  int v34; // [rsp+160h] [rbp+60h]
  __int64 v35; // [rsp+168h] [rbp+68h]
  int v36; // [rsp+170h] [rbp+70h]
  __int64 v37; // [rsp+178h] [rbp+78h]

  DestinationString = 0LL;
  String2 = 0LL;
  v15 = 0LL;
  v18 = 0LL;
  v16 = 0LL;
  v19 = 0LL;
  String1 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  if ( *(_BYTE *)(W32GetUserSessionState(a1) + 12832) == 3 )
  {
    UserSessionState = W32GetUserSessionState(v1);
    v1 = &gapulCvt_VK_84;
    *(_QWORD *)(UserSessionState + 13976) = &gapulCvt_VK_84;
  }
  if ( *(_BYTE *)(W32GetUserSessionState(v1) + 12832) == 7 && *(_BYTE *)(W32GetUserSessionState(v3) + 12833) == 3 )
    *(_QWORD *)(W32GetUserSessionState(v4) + 13976) = &gapulCvt_VK_IBM02;
  NlsSetKeyStateToggle(0xF0u);
  NlsSetKeyStateToggle(0xF3u);
  NlsSetKeyStateToggle(0xF6u);
  NlsSetKeyStateToggle(0xFBu);
  RtlInitUnicodeString(&DestinationString, L"end");
  RtlInitUnicodeString(&String2, L"help");
  RtlInitUnicodeString(&v15, L"yes");
  RtlInitUnicodeString(&v18, L"no");
  RtlInitUnicodeString(&v16, L"home");
  RtlInitUnicodeString(&v19, L"clear");
  RtlInitUnicodeString(&String1, 0LL);
  RtlInitUnicodeString(&v12, 0LL);
  RtlInitUnicodeString(&v13, 0LL);
  QueryTable.QueryRoutine = 0LL;
  QueryTable.DefaultLength = 0;
  v21 = 0LL;
  v27 = 0;
  v28 = 0LL;
  v34 = 0;
  v35 = 0LL;
  v36 = 0;
  v37 = 0LL;
  QueryTable.Name = L"helpkey";
  QueryTable.EntryContext = &String1;
  QueryTable.DefaultData = &DestinationString;
  v23 = L"KanaHelpKey";
  v24 = &v12;
  v26 = &v15;
  v30 = L"clrkey";
  v31 = &v13;
  QueryTable.Flags = 32;
  QueryTable.DefaultType = 16777217;
  v22 = 32;
  v25 = 16777217;
  v29 = 32;
  v32 = 16777217;
  v33 = &v16;
  if ( RtlQueryRegistryValues(3u, L"WOW\\keyboard", &QueryTable, 0LL, 0LL) >= 0 )
  {
    if ( RtlEqualUnicodeString(&String1, &String2, 1u) )
    {
      v6 = W32GetUserSessionState(v5);
      *(_BYTE *)(v6 + 14333) &= ~2u;
    }
    if ( RtlEqualUnicodeString(&v12, &v18, 1u) )
    {
      v8 = W32GetUserSessionState(v7);
      *(_BYTE *)(v8 + 14333) &= ~1u;
    }
    if ( RtlEqualUnicodeString(&v13, &v19, 1u) )
    {
      v10 = W32GetUserSessionState(v9);
      *(_BYTE *)(v10 + 14333) &= ~4u;
    }
    ExFreePoolWithTag(String1.Buffer, 0);
    ExFreePoolWithTag(v12.Buffer, 0);
    ExFreePoolWithTag(v13.Buffer, 0);
  }
}
