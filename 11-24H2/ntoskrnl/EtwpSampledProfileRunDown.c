/*
 * XREFs of EtwpSampledProfileRunDown @ 0x140A6192C
 * Callers:
 *     EtwpKernelTraceRundown @ 0x140A0F024 (EtwpKernelTraceRundown.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x140287790 (EtwpLogKernelEvent.c)
 *     KeReleaseMutex @ 0x1402DEA60 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

int __fastcall EtwpSampledProfileRunDown(__int64 a1, char a2, char a3)
{
  __int16 v3; // si
  unsigned int v6; // eax
  char *v7; // rcx
  __int16 *v8; // rdi
  __int64 v9; // r15
  unsigned int v10; // r14d
  const WCHAR *v11; // rcx
  const WCHAR *v12; // rdx
  __int64 v13; // rax
  unsigned int v14; // r8d
  __int64 v15; // rdx
  int result; // eax
  __int64 v17; // [rsp+58h] [rbp-9h] BYREF
  int v18; // [rsp+60h] [rbp-1h]
  _QWORD v19[3]; // [rsp+68h] [rbp+7h] BYREF
  int v20; // [rsp+80h] [rbp+1Fh]
  int v21; // [rsp+84h] [rbp+23h]

  v17 = 0LL;
  v18 = 0;
  v3 = 3914 - (a2 != 0);
  if ( a3 )
  {
    v7 = (char *)&EtwpProfileObject;
    v6 = 1;
  }
  else
  {
    KeWaitForSingleObject(&EtwpGroupMaskMutex, Executive, 0, 0, 0LL);
    v6 = EtwpPmcProfile;
    v7 = (char *)qword_140EFF5C8;
    if ( !EtwpPmcProfile )
      return KeReleaseMutex(&EtwpGroupMaskMutex, 0);
  }
  v8 = (__int16 *)(v7 + 608);
  v9 = v6;
  do
  {
    v10 = *v8;
    if ( (int)guard_dispatch_icall_no_overrides(1LL, 24LL) < 0 )
      v11 = L"Unknown";
    else
      v11 = 0LL;
    v12 = L"Unknown";
    v18 = 0;
    v17 = v10;
    if ( v11 )
      v12 = v11;
    v19[0] = &v17;
    v13 = -1LL;
    v19[1] = 12LL;
    do
      ++v13;
    while ( v12[v13] );
    v14 = *(_DWORD *)a1;
    v19[2] = v12;
    v15 = *(_QWORD *)(a1 + 1360);
    v20 = 2 * v13 + 2;
    v21 = 0;
    result = EtwpLogKernelEvent((__int64)v19, v15, v14, 2u, v3, 0x501903u);
    v8 += 308;
    --v9;
  }
  while ( v9 );
  if ( !a3 )
    return KeReleaseMutex(&EtwpGroupMaskMutex, 0);
  return result;
}
