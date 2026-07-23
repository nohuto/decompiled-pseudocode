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
  _UNICODE_STRING v17; // [rsp+60h] [rbp-A0h] BYREF
  __int16 v18; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v19[254]; // [rsp+72h] [rbp-8Eh] BYREF

  v16 = a3;
  *(_DWORD *)(&v17.MaximumLength + 1) = 0;
  memset_thunk_772440563353939046(v19, 0, 0xFEuLL);
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
  *(_DWORD *)&v17.Length = 0x1000000;
  v17.Buffer = (wchar_t *)&v18;
  v18 = 0;
  LODWORD(v15) = LdrpPreprocessDllName(a1, &v17, 0LL, &v16);
  if ( (int)v15 >= 0 )
    LdrpLoadDllInternal((int)&v17, a2, v16, 4, 0LL, 0LL, a4, (__int64)&v15, 0LL, v14);
  if ( &v18 != (__int16 *)v17.Buffer )
    RtlpSysVolFree(v17.Buffer);
  *(_DWORD *)&v17.Length = 0x1000000;
  v17.Buffer = (wchar_t *)&v18;
  v18 = 0;
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
