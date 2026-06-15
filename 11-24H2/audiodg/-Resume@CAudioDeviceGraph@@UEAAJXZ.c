/*
 * XREFs of ?Resume@CAudioDeviceGraph@@UEAAJXZ @ 0x140014A70
 * Callers:
 *     <none>
 * Callees:
 *     ?Provider@AudioDgTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x1400073E4 (-Provider@AudioDgTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Start@DurationTracker@CAudioDeviceGraph@@QEAAXXZ @ 0x140014BFC (-Start@DurationTracker@CAudioDeviceGraph@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x140058CF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAudioDeviceGraph::Resume(CAudioDeviceGraph *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbx
  int v3; // eax
  unsigned int v4; // edi
  __int64 v5; // rcx
  const struct _tlgProvider_t *v6; // rax
  _DWORD v8[2]; // [rsp+38h] [rbp-40h] BYREF
  __int64 v9; // [rsp+40h] [rbp-38h]
  unsigned __int16 *v10; // [rsp+48h] [rbp-30h] BYREF
  int v11; // [rsp+50h] [rbp-28h]
  int v12; // [rsp+54h] [rbp-24h]
  void *v13; // [rsp+58h] [rbp-20h]
  int v14; // [rsp+60h] [rbp-18h]
  int v15; // [rsp+64h] [rbp-14h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 264);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 264));
  v3 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 19) + 56LL))(*((_QWORD *)this + 19));
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x32C,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)(unsigned int)v3);
    if ( v1 )
      LeaveCriticalSection(v1);
    return v4;
  }
  else
  {
    CAudioDeviceGraph::DurationTracker::Start((CAudioDeviceGraph *)((char *)this + 80));
    v6 = AudioDgTelemetryProvider::Provider(v5);
    if ( *(_DWORD *)v6 > 4u && (*((_BYTE *)v6 + 16) & 1) != 0 && (*((_QWORD *)v6 + 3) & 1LL) == *((_QWORD *)v6 + 3) )
    {
      v8[1] = 4;
      v10 = (unsigned __int16 *)*((_QWORD *)v6 + 1);
      v9 = 1LL;
      v8[0] = 184549376;
      v11 = *v10;
      v13 = &unk_1400AFF9E;
      v12 = 2;
      v15 = 1;
      v14 = 21;
      ((void (__fastcall *)(_QWORD, _DWORD *, char *, _QWORD, int, unsigned __int16 **, unsigned int))EtwEventWriteTransfer)(
        *((_QWORD *)v6 + 4),
        v8,
        (char *)this + 344,
        0LL,
        2,
        &v10,
        (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata);
    }
    if ( v1 )
      LeaveCriticalSection(v1);
    return 0LL;
  }
}
