/*
 * XREFs of EtwpSampledProfileRunDown @ 0x140A6857C
 * Callers:
 *     EtwpKernelTraceRundown @ 0x140A15E44 (EtwpKernelTraceRundown.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x140257180 (EtwpLogKernelEvent.c)
 *     KeReleaseMutex @ 0x1403379B0 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

int __fastcall EtwpSampledProfileRunDown(__int64 a1, char a2, char a3)
{
  __int16 v3; // si
  unsigned int v6; // eax
  char *v7; // rcx
  __int16 *v8; // rdi
  __int64 v9; // r15
  unsigned int v10; // r14d
  unsigned int v11; // eax
  const WCHAR *v12; // rcx
  const WCHAR *v13; // rdx
  __int64 v14; // rax
  unsigned int v15; // r8d
  __int64 v16; // rdx
  int result; // eax
  int v18; // [rsp+38h] [rbp-29h] BYREF
  __int128 v19; // [rsp+40h] [rbp-21h] BYREF
  const WCHAR *v20; // [rsp+50h] [rbp-11h]
  unsigned __int64 v21; // [rsp+58h] [rbp-9h] BYREF
  unsigned int v22; // [rsp+60h] [rbp-1h]
  _QWORD v23[3]; // [rsp+68h] [rbp+7h] BYREF
  int v24; // [rsp+80h] [rbp+1Fh]
  int v25; // [rsp+84h] [rbp+23h]

  v21 = 0LL;
  v22 = 0;
  v20 = 0LL;
  v3 = 3914 - (a2 != 0);
  v18 = 0;
  v19 = 0LL;
  if ( a3 )
  {
    v7 = (char *)&EtwpProfileObject;
    v6 = 1;
  }
  else
  {
    KeWaitForSingleObject(&EtwpGroupMaskMutex, Executive, 0, 0, 0LL);
    v6 = EtwpPmcProfile;
    v7 = (char *)qword_140EFF4D8;
    if ( !EtwpPmcProfile )
      return KeReleaseMutex(&EtwpGroupMaskMutex, 0);
  }
  v8 = (__int16 *)(v7 + 608);
  v9 = v6;
  do
  {
    v10 = *v8;
    v18 = 0;
    LODWORD(v19) = v10;
    if ( (int)guard_dispatch_icall_no_overrides(1LL, 24LL, &v19, &v18) < 0 )
    {
      v11 = 0;
      v12 = L"Unknown";
    }
    else
    {
      v11 = DWORD2(v19);
      v12 = v20;
    }
    v13 = L"Unknown";
    v22 = v11;
    v21 = __PAIR64__(v11, v10);
    if ( v12 )
      v13 = v12;
    v23[0] = &v21;
    v14 = -1LL;
    v23[1] = 12LL;
    do
      ++v14;
    while ( v13[v14] );
    v15 = *(_DWORD *)a1;
    v23[2] = v13;
    v16 = *(_QWORD *)(a1 + 1360);
    v24 = 2 * v14 + 2;
    v25 = 0;
    result = EtwpLogKernelEvent((__int64)v23, v16, v15, 2u, v3, 0x501903u);
    v8 += 308;
    --v9;
  }
  while ( v9 );
  if ( !a3 )
    return KeReleaseMutex(&EtwpGroupMaskMutex, 0);
  return result;
}
