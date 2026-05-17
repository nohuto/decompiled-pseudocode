/*
 * XREFs of LdrpLoadDll @ 0x18000B1F0
 * Callers:
 *     LdrpGetProcApphelpCheckModule @ 0x18000AC90 (LdrpGetProcApphelpCheckModule.c)
 *     LdrLoadDll @ 0x180059200 (LdrLoadDll.c)
 *     AVrfpLoadAndInitializeProvider @ 0x180064DAC (AVrfpLoadAndInitializeProvider.c)
 *     LdrpCorInitialize @ 0x180065128 (LdrpCorInitialize.c)
 *     LdrpLoadWow64 @ 0x18006531C (LdrpLoadWow64.c)
 *     LdrpInitShimEngine @ 0x1800654D8 (LdrpInitShimEngine.c)
 *     LdrpLoadShimEngine @ 0x180065AE0 (LdrpLoadShimEngine.c)
 *     LdrpInitializeImportRedirection @ 0x1800FA988 (LdrpInitializeImportRedirection.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180001470 (RtlpSysVolFree.c)
 *     LdrpLoadDllInternal @ 0x18000B460 (LdrpLoadDllInternal.c)
 *     RtlGetCurrentServiceSessionId @ 0x180055A20 (RtlGetCurrentServiceSessionId.c)
 *     LdrpPreprocessDllName @ 0x18005A570 (LdrpPreprocessDllName.c)
 *     LdrpLogEtwEvent @ 0x18009B2F0 (LdrpLogEtwEvent.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrpLoadDll(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v6; // rbx
  _DWORD *SharedData; // rcx
  __int64 v8; // rax
  __int64 v9; // r14
  _DWORD *v10; // rcx
  char *v12; // rcx
  _DWORD v13[4]; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD v14[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int16 *v15; // [rsp+68h] [rbp-98h]
  __int16 v16; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v17[254]; // [rsp+72h] [rbp-8Eh] BYREF

  v13[2] = a3;
  v14[1] = 0;
  memset_thunk_772440563353939046(v17, 0, 0xFEuLL);
  v6 = 2147353476LL;
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v8 = (__int64)NtCurrentPeb()->SharedData + 554;
  else
    v8 = 2147353476LL;
  v9 = 2147353477LL;
  if ( *(_BYTE *)v8 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
  {
    v12 = (unsigned int)RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 555 : (char *)2147353477;
    if ( (*v12 & 0x20) != 0 )
      LdrpLogEtwEvent(5288, 0, 0, 0, a1, 0LL);
  }
  v14[0] = 0x1000000;
  v15 = &v16;
  v16 = 0;
  v13[0] = LdrpPreprocessDllName(a1);
  if ( v13[0] >= 0 )
    LdrpLoadDllInternal((char)v14, 0LL, 0LL, a4, (__int64)v13, 0LL);
  if ( &v16 != v15 )
    RtlpSysVolFree((__int64)v15);
  v14[0] = 0x1000000;
  v15 = &v16;
  v16 = 0;
  v10 = NtCurrentPeb()->SharedData;
  if ( v10 && *v10 )
    v6 = (__int64)NtCurrentPeb()->SharedData + 554;
  if ( *(_BYTE *)v6 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v9 = (__int64)NtCurrentPeb()->SharedData + 555;
    if ( (*(_BYTE *)v9 & 0x20) != 0 )
      LdrpLogEtwEvent(5289, 0, 0, 0, a1, 0LL);
  }
  return v13[0];
}
