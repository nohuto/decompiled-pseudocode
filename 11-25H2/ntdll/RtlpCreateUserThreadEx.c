/*
 * XREFs of RtlpCreateUserThreadEx @ 0x1800B4FC0
 * Callers:
 *     RtlpHeapPerformCrossProcessQuery @ 0x180098190 (RtlpHeapPerformCrossProcessQuery.c)
 *     EtwpCreateEtwThread @ 0x1800B4ED0 (EtwpCreateEtwThread.c)
 *     RtlCreateUserThread @ 0x1800B4F50 (RtlCreateUserThread.c)
 *     RtlpWow64SuspendThread @ 0x1800FAB70 (RtlpWow64SuspendThread.c)
 *     RtlpWow64SuspendProcess @ 0x180133EC8 (RtlpWow64SuspendProcess.c)
 *     DbgUiIssueRemoteBreakin @ 0x180134550 (DbgUiIssueRemoteBreakin.c)
 *     RtlCreateProcessReflection @ 0x1801349F0 (RtlCreateProcessReflection.c)
 *     RtlSetProcessDebugInformation @ 0x180135690 (RtlSetProcessDebugInformation.c)
 * Callees:
 *     NtClose @ 0x180163400 (NtClose.c)
 *     NtCreateThreadEx @ 0x180164B30 (NtCreateThreadEx.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpCreateUserThreadEx(
        __int64 a1,
        __int64 a2,
        int a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        HANDLE *a10,
        _OWORD *a11)
{
  __int64 v12; // rbx
  int v14; // edx
  int v15; // ecx
  int v16; // edx
  int v17; // r10d
  int v18; // ecx
  __int64 result; // rax
  HANDLE Handle; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v21[2]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v22; // [rsp+70h] [rbp-90h]
  __int64 v23; // [rsp+78h] [rbp-88h]
  int v24; // [rsp+80h] [rbp-80h]
  int v25; // [rsp+84h] [rbp-7Ch]
  __int64 v26; // [rsp+88h] [rbp-78h]
  __int64 v27; // [rsp+90h] [rbp-70h]
  __int128 v28; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v29[6]; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v30; // [rsp+E0h] [rbp-20h]
  __int64 v31; // [rsp+F0h] [rbp-10h]

  v12 = a4;
  v29[5] = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v21[1] = 0;
  v25 = 0;
  Handle = 0LL;
  v28 = 0LL;
  if ( (a3 & 0xFFFFFF88) != 0 )
    return 3221225485LL;
  v21[0] = 48;
  v22 = 0LL;
  v24 = 512;
  v14 = a3 & 1 | 2;
  v23 = 0LL;
  v26 = a2;
  v27 = 0LL;
  if ( (a3 & 2) == 0 )
    v14 = a3 & 1;
  v29[3] = &v28;
  v29[1] = 65539LL;
  v15 = v14 | 4;
  v29[2] = 16LL;
  v29[4] = 0LL;
  v29[0] = 40LL;
  if ( (a3 & 4) == 0 )
    v15 = v14;
  v16 = v15 | 0x10;
  if ( (a3 & 0x10) == 0 )
    v16 = v15;
  v17 = v16 | 0x20;
  if ( (a3 & 0x20) == 0 )
    v17 = v16;
  v18 = v17 | 0x40;
  if ( (a3 & 0x40) == 0 )
    v18 = v17;
  result = NtCreateThreadEx(&Handle, 0x1FFFFFLL, v21, a1, a8, a9, v18, v12, a6, a5, v29);
  if ( (int)result >= 0 )
  {
    if ( a10 )
      *a10 = Handle;
    else
      NtClose(Handle);
    if ( a11 )
      *a11 = v28;
    return 0LL;
  }
  return result;
}
