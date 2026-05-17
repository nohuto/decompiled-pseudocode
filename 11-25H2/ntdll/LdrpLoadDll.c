/*
 * XREFs of LdrpLoadDll @ 0x18004A090
 * Callers:
 *     LdrLoadDll @ 0x180014E40 (LdrLoadDll.c)
 *     LdrpGetProcApphelpCheckModule @ 0x180049B30 (LdrpGetProcApphelpCheckModule.c)
 *     AVrfpLoadAndInitializeProvider @ 0x1800D04C4 (AVrfpLoadAndInitializeProvider.c)
 *     LdrpCorInitialize @ 0x1800D0840 (LdrpCorInitialize.c)
 *     LdrpLoadWow64 @ 0x1800D0A34 (LdrpLoadWow64.c)
 *     LdrpInitShimEngine @ 0x1800D0BF0 (LdrpInitShimEngine.c)
 *     LdrpLoadShimEngine @ 0x1800D1760 (LdrpLoadShimEngine.c)
 *     LdrpInitializeImportRedirection @ 0x1800FC888 (LdrpInitializeImportRedirection.c)
 * Callees:
 *     LdrpLogEtwEvent @ 0x180006960 (LdrpLogEtwEvent.c)
 *     RtlGetCurrentServiceSessionId @ 0x180011660 (RtlGetCurrentServiceSessionId.c)
 *     RtlpSysVolFree @ 0x180015880 (RtlpSysVolFree.c)
 *     LdrpPreprocessDllName @ 0x1800161D0 (LdrpPreprocessDllName.c)
 *     LdrpLoadDllInternal @ 0x18004A300 (LdrpLoadDllInternal.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrpLoadDll(unsigned __int16 *a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v6; // rbx
  _DWORD *SharedData; // rcx
  __int64 v8; // rax
  __int64 v9; // r14
  _DWORD *v10; // rcx
  char *v12; // rcx
  int v13; // [rsp+50h] [rbp-B0h] BYREF
  int v14; // [rsp+58h] [rbp-A8h] BYREF
  _DWORD v15[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int16 *v16; // [rsp+68h] [rbp-98h]
  __int16 v17; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v18[254]; // [rsp+72h] [rbp-8Eh] BYREF

  v14 = a3;
  v15[1] = 0;
  memset_thunk_772440563353939046(v18, 0, 0xFEuLL);
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
      LdrpLogEtwEvent(5288, 0LL, 0, 0, a1, 0LL);
  }
  v15[0] = 0x1000000;
  v16 = &v17;
  v17 = 0;
  v13 = LdrpPreprocessDllName(a1, (unsigned __int16 *)v15, 0LL, &v14);
  if ( v13 >= 0 )
    LdrpLoadDllInternal((char)v15, 0LL, 0LL, a4, (__int64)&v13, 0LL);
  if ( &v17 != v16 )
    RtlpSysVolFree((__int64)v16);
  v15[0] = 0x1000000;
  v16 = &v17;
  v17 = 0;
  v10 = NtCurrentPeb()->SharedData;
  if ( v10 && *v10 )
    v6 = (__int64)NtCurrentPeb()->SharedData + 554;
  if ( *(_BYTE *)v6 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v9 = (__int64)NtCurrentPeb()->SharedData + 555;
    if ( (*(_BYTE *)v9 & 0x20) != 0 )
      LdrpLogEtwEvent(5289, 0LL, 0, 0, a1, 0LL);
  }
  return (unsigned int)v13;
}
