/*
 * XREFs of ?StartOrStop@TracingSessionHelper@@SAJAEBUTraceSessionConfig@@_N@Z @ 0x1800D5974
 * Callers:
 *     ?OnDeviceAttach@SpatialRimDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800D48A0 (-OnDeviceAttach@SpatialRimDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnFinalRelease@SpatialRimDeviceCollection@@MEAAXXZ @ 0x1800D4A50 (-OnFinalRelease@SpatialRimDeviceCollection@@MEAAXXZ.c)
 *     ?StartTracingSession@SpatialRimDeviceCollection@@UEAAXXZ @ 0x1800D5C90 (-StartTracingSession@SpatialRimDeviceCollection@@UEAAXXZ.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x180067C94 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x18007FAB0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800856B0 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18009D3C8 (memset_0.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x18009D5CC (--2@YAPEAX_K@Z.c)
 *     ??$_Traits_find_last_of@U?$char_traits@G@std@@$00@std@@YA_KQEBG_K101@Z @ 0x1800D17A8 (--$_Traits_find_last_of@U-$char_traits@G@std@@$00@std@@YA_KQEBG_K101@Z.c)
 *     ??1?$unique_ptr@U_EVENT_TRACE_PROPERTIES@@U?$default_delete@U_EVENT_TRACE_PROPERTIES@@@std@@@std@@QEAA@XZ @ 0x1800D2184 (--1-$unique_ptr@U_EVENT_TRACE_PROPERTIES@@U-$default_delete@U_EVENT_TRACE_PROPERTIES@@@std@@@std.c)
 *     ??1?$unique_storage@U?$resource_policy@_K$$A6AK_K@Z$1?CloseTrace@@YAK0@ZU?$integral_constant@_K$0A@@wistd@@_K_K$0?0$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1800D21A8 (--1-$unique_storage@U-$resource_policy@_K$$A6AK_K@Z$1-CloseTrace@@YAK0@ZU-$integral_constant@_K$.c)
 *     ?CreateDirectoryDeepNoThrow@wil@@YAJPEBG@Z @ 0x1800D29A8 (-CreateDirectoryDeepNoThrow@wil@@YAJPEBG@Z.c)
 *     ?substr@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA?AV12@_K0@Z @ 0x1800D65F4 (-substr@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA-AV12@_K0@Z.c)
 *     memmove_0 @ 0x1801C7D08 (memmove_0.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TracingSessionHelper::StartOrStop(
        const struct TraceSessionConfig *a1,
        char a2,
        __int64 a3,
        __int64 a4)
{
  char *v6; // r15
  _WORD *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // rax
  const unsigned __int16 *v11; // rdx
  int DirectoryDeepNoThrow; // eax
  int v13; // r14d
  unsigned int v14; // esi
  unsigned int *v15; // rbx
  char *v16; // rcx
  char *v17; // r8
  const WCHAR *v18; // rdx
  const WCHAR *v19; // rdx
  ULONG started; // eax
  __int64 v21; // rdx
  int v22; // ebx
  __int64 v23; // rbx
  __int64 v24; // rdi
  const WCHAR *v25; // rdx
  signed int v26; // eax
  ULONG64 TraceHandle; // [rsp+48h] [rbp-39h] BYREF
  unsigned int *v29; // [rsp+50h] [rbp-31h] BYREF
  struct _ENABLE_TRACE_PARAMETERS EnableParameters; // [rsp+58h] [rbp-29h] BYREF
  LPCWSTR InstanceName[2]; // [rsp+88h] [rbp+7h] BYREF
  int v32; // [rsp+98h] [rbp+17h]
  unsigned __int64 v33; // [rsp+A0h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  v6 = (char *)a1 + 48;
  v7 = v6;
  if ( *((_QWORD *)v6 + 3) > 7uLL )
    v7 = *(_WORD **)v6;
  v8 = std::_Traits_find_last_of<std::char_traits<unsigned short>,1>(v7, *((_QWORD *)v6 + 2), a3, a4, 1LL);
  v10 = std::wstring::substr(v6, &EnableParameters, v9, v8);
  if ( *(_QWORD *)(v10 + 24) > 7uLL )
    v10 = *(_QWORD *)v10;
  DirectoryDeepNoThrow = wil::CreateDirectoryDeepNoThrow((const WCHAR *)v10, v11);
  if ( DirectoryDeepNoThrow < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x56,
      (__int64)"onecoreuap\\internal\\analog\\inc\\tracingsessionhelper.h",
      (const char *)(unsigned int)DirectoryDeepNoThrow);
  std::wstring::_Tidy_deallocate((__int64)&EnableParameters);
  std::wstring::wstring((__int64)InstanceName, a1);
  v13 = 2 * v32;
  v14 = 2 * v32 + 644;
  v15 = (unsigned int *)operator new(v14);
  v29 = v15;
  memset_0(v15, 0, v14);
  *v15 = v14;
  v15[11] = 0x20000;
  v15[10] = 1;
  *(_OWORD *)(v15 + 6) = *((_OWORD *)a1 + 2);
  v15[12] = *((_DWORD *)a1 + 20);
  v15[17] = *((_DWORD *)a1 + 21);
  v15[16] = *((_DWORD *)a1 + 22);
  v15[14] = *((_DWORD *)a1 + 23);
  v15[13] = *((_DWORD *)a1 + 24);
  v15[15] = *((_DWORD *)a1 + 25);
  v15[29] = 120;
  v15[28] = v13 + 122;
  v16 = v6;
  if ( *((_QWORD *)v6 + 3) > 7uLL )
    v16 = *(char **)v6;
  v17 = &v16[2 * *((_QWORD *)v6 + 2)];
  if ( *((_QWORD *)v6 + 3) > 7uLL )
    v6 = *(char **)v6;
  memmove_0((char *)v15 + (unsigned int)(v13 + 122), v6, v17 - v6);
  TraceHandle = -1LL;
  if ( !a2 )
  {
    v25 = (const WCHAR *)InstanceName;
    if ( v33 > 7 )
      v25 = InstanceName[0];
    v26 = ControlTraceW(0LL, v25, (PEVENT_TRACE_PROPERTIES)v15, 1u);
    v22 = v26;
    if ( v26 > 0 )
      v22 = (unsigned __int16)v26 | 0x80070000;
    if ( v22 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x99,
        (__int64)"onecoreuap\\internal\\analog\\inc\\tracingsessionhelper.h",
        (const char *)(unsigned int)v22);
      goto LABEL_33;
    }
LABEL_32:
    v22 = 0;
    goto LABEL_33;
  }
  v18 = (const WCHAR *)a1;
  if ( *((_QWORD *)a1 + 3) > 7uLL )
    v18 = *(const WCHAR **)a1;
  if ( ControlTraceW(0LL, v18, (PEVENT_TRACE_PROPERTIES)v15, 0) != 4201 )
  {
    v22 = 1;
    goto LABEL_33;
  }
  v19 = (const WCHAR *)a1;
  if ( *((_QWORD *)a1 + 3) > 7uLL )
    v19 = *(const WCHAR **)a1;
  started = StartTraceW(&TraceHandle, v19, (PEVENT_TRACE_PROPERTIES)v15);
  if ( !started )
  {
    v23 = *((_QWORD *)a1 + 13);
    v24 = *((_QWORD *)a1 + 14);
    while ( v23 != v24 )
    {
      memset(&EnableParameters.ControlFlags, 0, 40);
      *(_QWORD *)&EnableParameters.Version = 2LL;
      started = EnableTraceEx2(
                  TraceHandle,
                  (LPCGUID)v23,
                  1u,
                  *(_BYTE *)(v23 + 16),
                  *(_QWORD *)(v23 + 24),
                  *(_QWORD *)(v23 + 32),
                  0,
                  &EnableParameters);
      if ( started )
      {
        v21 = 148LL;
        goto LABEL_19;
      }
      v23 += 40LL;
    }
    goto LABEL_32;
  }
  v21 = 131LL;
LABEL_19:
  v22 = wil::details::in1diag3::Return_Win32(
          retaddr,
          (void *)v21,
          (int)"onecoreuap\\internal\\analog\\inc\\tracingsessionhelper.h",
          (const char *)started);
LABEL_33:
  wil::details::unique_storage<wil::details::resource_policy<unsigned __int64,unsigned long (unsigned __int64),&unsigned long CloseTrace(unsigned __int64),wistd::integral_constant<unsigned __int64,0>,unsigned __int64,unsigned __int64,-1,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned __int64,unsigned long (unsigned __int64),&unsigned long CloseTrace(unsigned __int64),wistd::integral_constant<unsigned __int64,0>,unsigned __int64,unsigned __int64,-1,std::nullptr_t>>(&TraceHandle);
  std::wstring::_Tidy_deallocate((__int64)InstanceName);
  std::unique_ptr<_EVENT_TRACE_PROPERTIES>::~unique_ptr<_EVENT_TRACE_PROPERTIES>((void **)&v29);
  return (unsigned int)v22;
}
