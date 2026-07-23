/*
 * XREFs of LdrpLoadDll @ 0x180037BF0
 * Callers:
 *     LdrpGetProcApphelpCheckModule @ 0x180037690 (LdrpGetProcApphelpCheckModule.c)
 *     LdrLoadDll @ 0x18006EDE0 (LdrLoadDll.c)
 *     AVrfpLoadAndInitializeProvider @ 0x1800ACC7C (AVrfpLoadAndInitializeProvider.c)
 *     LdrpCorInitialize @ 0x1800ACFF8 (LdrpCorInitialize.c)
 *     LdrpLoadWow64 @ 0x1800AD1EC (LdrpLoadWow64.c)
 *     LdrpInitShimEngine @ 0x1800AD3A8 (LdrpInitShimEngine.c)
 *     LdrpLoadShimEngine @ 0x1800AD9B0 (LdrpLoadShimEngine.c)
 *     LdrpInitializeImportRedirection @ 0x1800F56E8 (LdrpInitializeImportRedirection.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180005870 (RtlpSysVolFree.c)
 *     LdrpLogEtwEvent @ 0x180030140 (LdrpLogEtwEvent.c)
 *     LdrpLoadDllInternal @ 0x180037E60 (LdrpLoadDllInternal.c)
 *     RtlGetCurrentServiceSessionId @ 0x18006B600 (RtlGetCurrentServiceSessionId.c)
 *     LdrpPreprocessDllName @ 0x180070150 (LdrpPreprocessDllName.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrpLoadDll(unsigned __int16 *a1, int a2, int a3, __int64 a4)
{
  __int64 v7; // rbx
  _DWORD *SharedData; // rcx
  __int64 v9; // rax
  __int64 v10; // r14
  _DWORD *v11; // rcx
  char *v13; // rcx
  char v14; // [rsp+48h] [rbp-B8h]
  __int64 v15; // [rsp+50h] [rbp-B0h] BYREF
  int v16; // [rsp+58h] [rbp-A8h] BYREF
  int v17[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int16 *v18; // [rsp+68h] [rbp-98h]
  __int16 v19; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v20[254]; // [rsp+72h] [rbp-8Eh] BYREF

  v16 = a3;
  v17[1] = 0;
  memset_thunk_772440563353939046(v20, 0, 0xFEuLL);
  v7 = 2147353476LL;
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v9 = (__int64)NtCurrentPeb()->SharedData + 554;
  else
    v9 = 2147353476LL;
  v10 = 2147353477LL;
  if ( *(_BYTE *)v9 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
  {
    v13 = RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 555 : (char *)2147353477;
    if ( (*v13 & 0x20) != 0 )
      LdrpLogEtwEvent(5288, 0LL, 0, 0, a1, 0LL);
  }
  v17[0] = 0x1000000;
  v18 = &v19;
  v19 = 0;
  LODWORD(v15) = LdrpPreprocessDllName(a1, v17, 0LL, &v16);
  if ( (int)v15 >= 0 )
    LdrpLoadDllInternal((int)v17, a2, v16, 4, 0LL, 0LL, a4, (__int64)&v15, 0LL, v14);
  if ( &v19 != v18 )
    RtlpSysVolFree(v18);
  v17[0] = 0x1000000;
  v18 = &v19;
  v19 = 0;
  v11 = NtCurrentPeb()->SharedData;
  if ( v11 && *v11 )
    v7 = (__int64)NtCurrentPeb()->SharedData + 554;
  if ( *(_BYTE *)v7 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v10 = (__int64)NtCurrentPeb()->SharedData + 555;
    if ( (*(_BYTE *)v10 & 0x20) != 0 )
      LdrpLogEtwEvent(5289, 0LL, 0, 0, a1, 0LL);
  }
  return (unsigned int)v15;
}
