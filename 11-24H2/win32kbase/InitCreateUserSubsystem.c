/*
 * XREFs of InitCreateUserSubsystem @ 0x1402E4B58
 * Callers:
 *     Win32UserInitialize @ 0x1402E5DE4 (Win32UserInitialize.c)
 * Callees:
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x1400183CC (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     OpenCacheKeyEx @ 0x1400A0010 (OpenCacheKeyEx.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1400A0750 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     wcsstr @ 0x1401A0128 (wcsstr.c)
 *     wcschr @ 0x1401A0348 (wcschr.c)
 */

__int64 InitCreateUserSubsystem()
{
  CTouchProcessor *v0; // rcx
  unsigned int v1; // r15d
  char v2; // bl
  bool v3; // di
  __int64 UserSessionState; // rax
  int v5; // r8d
  int v6; // edx
  __int64 result; // rax
  __int64 v8; // rcx
  char *v9; // rdi
  __int64 v10; // rcx
  void *v11; // r14
  __int64 v12; // rbx
  NTSTATUS v13; // eax
  int v14; // ecx
  __int64 v15; // rcx
  __int64 v16; // rax
  int v17; // esi
  int v18; // ebx
  __int64 v19; // rcx
  int v20; // esi
  wchar_t *v21; // rax
  wchar_t *v22; // rax
  wchar_t *v23; // r14
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  int v29; // ebx
  __int64 v30; // rcx
  wchar_t *v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rcx
  UNICODE_STRING String; // [rsp+40h] [rbp-20h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF
  ULONG Length; // [rsp+90h] [rbp+30h] BYREF
  int v39; // [rsp+98h] [rbp+38h] BYREF

  String = 0LL;
  v0 = WPP_GLOBAL_Control;
  v1 = 1;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) == 0
    || (v2 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v2 = 0;
  }
  v3 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v5) = v3;
    LOBYTE(v6) = v2;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v6,
      v5,
      *(_QWORD *)(UserSessionState + 69400),
      4,
      14,
      21,
      (__int64)&WPP_c6ad2250ef6e3ae3eb9ff75238ab5e56_Traceguids);
  }
  result = Win32AllocPoolWithQuotaZInitImpl((__int64)v0, 0x500uLL, 0x78747355u);
  v9 = (char *)result;
  if ( result )
  {
    Length = 0;
    DestinationString = 0LL;
    v39 = *(_DWORD *)(W32GetUserSessionState(v8) + 62824);
    while ( 1 )
    {
      v11 = OpenCacheKeyEx(0LL, 10LL, 131097LL, &v39);
      if ( !v11 )
        goto LABEL_17;
      Length = 1226;
      v12 = Win32AllocPoolWithQuotaZInitImpl(v10, 0x4CAuLL, 0x72707355u);
      if ( !v12 )
        goto LABEL_16;
      RtlInitUnicodeString(&DestinationString, L"Windows");
      v13 = ZwQueryValueKey(v11, &DestinationString, KeyValuePartialInformation, (PVOID)v12, Length, &Length);
      v14 = 0;
      if ( v13 != -2147483643 )
        v14 = v13;
      if ( v14 >= 0 )
        break;
      if ( !v39 )
      {
        GreDeleteFastMutex((char *)v12);
LABEL_16:
        ZwClose(v11);
LABEL_17:
        if ( (int)RtlStringCchCopyW(v9, 607LL, (char *)L"SharedSection=,3072") >= 0 )
        {
          v16 = -1LL;
          do
            ++v16;
          while ( *(_WORD *)&v9[2 * v16] );
          v17 = v16 + 1;
          goto LABEL_27;
        }
        goto LABEL_38;
      }
      GreDeleteFastMutex((char *)v12);
      ZwClose(v11);
    }
    v17 = 607;
    if ( *(_DWORD *)(v12 + 8) >> 1 < 0x25Fu )
      v17 = *(_DWORD *)(v12 + 8) >> 1;
    if ( *(_DWORD *)(v12 + 8) < 2u )
    {
      *(_WORD *)v9 = 0;
    }
    else
    {
      *(_WORD *)(v12 + 2LL * (unsigned int)(v17 - 1) + 12) = 0;
      RtlStringCchCopyW(v9, 607LL, (char *)(v12 + 12));
    }
    GreDeleteFastMutex((char *)v12);
    ZwClose(v11);
LABEL_27:
    if ( !v17 )
    {
LABEL_38:
      v1 = 0;
      goto LABEL_33;
    }
    v18 = 512;
    *(_DWORD *)(W32GetUserSessionState(v15) + 62968) = 512;
    v20 = 128;
    *(_DWORD *)(W32GetUserSessionState(v19) + 62972) = 128;
    v21 = wcsstr((const wchar_t *)v9, L"SharedSection");
    if ( v21 )
    {
      v21[32] = 0;
      v22 = wcschr(v21, 0x2Cu);
      v23 = v22;
      if ( v22 )
      {
        RtlInitUnicodeString(&String, v22 + 1);
        v25 = W32GetUserSessionState(v24);
        RtlUnicodeStringToInteger(&String, 0, (PULONG)(v25 + 62968));
        if ( *(_DWORD *)(W32GetUserSessionState(v26) + 62968) >= 0x200u )
          v18 = *(_DWORD *)(W32GetUserSessionState(v27) + 62968);
        *(_DWORD *)(W32GetUserSessionState(v27) + 62968) = v18;
        v29 = *(_DWORD *)(W32GetUserSessionState(v28) + 62968);
        *(_DWORD *)(W32GetUserSessionState(v30) + 62972) = v29;
        v31 = wcschr(v23 + 1, 0x2Cu);
        if ( v31 )
        {
          RtlInitUnicodeString(&String, v31 + 1);
          v33 = W32GetUserSessionState(v32);
          RtlUnicodeStringToInteger(&String, 0, (PULONG)(v33 + 62972));
          if ( *(_DWORD *)(W32GetUserSessionState(v34) + 62972) >= 0x80u )
            v20 = *(_DWORD *)(W32GetUserSessionState(v35) + 62972);
          *(_DWORD *)(W32GetUserSessionState(v35) + 62972) = v20;
        }
      }
    }
LABEL_33:
    GreDeleteFastMutex(v9);
    return v1;
  }
  return result;
}
