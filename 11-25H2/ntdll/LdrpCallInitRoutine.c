/*
 * XREFs of LdrpCallInitRoutine @ 0x180074730
 * Callers:
 *     LdrShutdownThread @ 0x180009100 (LdrShutdownThread.c)
 *     LdrpInitializeNode @ 0x180073610 (LdrpInitializeNode.c)
 *     LdrpInitializeThread @ 0x180073EB0 (LdrpInitializeThread.c)
 *     LdrpCallTlsInitializers @ 0x180074330 (LdrpCallTlsInitializers.c)
 *     AVrfpLoadAndInitializeProvider @ 0x1800D04C4 (AVrfpLoadAndInitializeProvider.c)
 *     LdrpProcessDetachNode @ 0x1800DFDC4 (LdrpProcessDetachNode.c)
 *     LdrShutdownProcess @ 0x1800FDE80 (LdrShutdownProcess.c)
 *     AvrfMiniLoadDll @ 0x18010B9A4 (AvrfMiniLoadDll.c)
 * Callees:
 *     LdrpLogEtwEvent @ 0x180006960 (LdrpLogEtwEvent.c)
 *     RtlGetCurrentServiceSessionId @ 0x180011660 (RtlGetCurrentServiceSessionId.c)
 *     LdrpLogError @ 0x1800FD63C (LdrpLogError.c)
 *     Feature_Arm64RestoreRegistersAroundDllMain__private_IsEnabledDeviceUsageNoInline @ 0x180160E78 (Feature_Arm64RestoreRegistersAroundDllMain__private_IsEnabledDeviceUsageNoInline.c)
 *     LdrpCallInitRoutineInternal @ 0x180160EBC (LdrpCallInitRoutineInternal.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall LdrpCallInitRoutine(
        __int64 (__fastcall *a1)(__int64, _QWORD, __int64),
        __int64 a2,
        unsigned int a3,
        __int64 a4)
{
  _DWORD *SharedData; // r8
  __int64 v9; // r8
  __int64 v10; // rdi
  _DWORD *v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rbx
  unsigned __int8 v14; // al
  _DWORD *v15; // rcx
  _DWORD *v16; // rcx
  unsigned __int8 v18; // [rsp+30h] [rbp-38h]

  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
  {
    v9 = (__int64)NtCurrentPeb()->SharedData + 554;
    v10 = 2147353476LL;
  }
  else
  {
    v10 = 2147353476LL;
    v9 = 2147353476LL;
  }
  if ( *(_BYTE *)v9 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
  {
    v11 = NtCurrentPeb()->SharedData;
    if ( v11 && *v11 )
    {
      v12 = (__int64)NtCurrentPeb()->SharedData + 555;
      v13 = 2147353477LL;
    }
    else
    {
      v13 = 2147353477LL;
      v12 = 2147353477LL;
    }
    if ( (*(_BYTE *)v12 & 0x20) != 0 )
      LdrpLogEtwEvent(5283, a2, 0, a3, 0LL, 0LL);
  }
  else
  {
    v13 = 2147353477LL;
  }
  if ( (unsigned int)Feature_Arm64RestoreRegistersAroundDllMain__private_IsEnabledDeviceUsageNoInline() )
    v14 = LdrpCallInitRoutineInternal(a1, a2, a3, a4);
  else
    v14 = a1(a2, a3, a4);
  v18 = v14;
  v15 = NtCurrentPeb()->SharedData;
  if ( v15 && *v15 )
    v10 = (__int64)NtCurrentPeb()->SharedData + 554;
  if ( *(_BYTE *)v10 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
  {
    v16 = NtCurrentPeb()->SharedData;
    if ( v16 && *v16 )
      v13 = (__int64)NtCurrentPeb()->SharedData + 555;
    if ( (*(_BYTE *)v13 & 0x20) != 0 )
      LdrpLogEtwEvent(5270, a2, 255, 255, 0LL, 0LL);
  }
  if ( !v18 && a3 == 1 )
    LdrpLogError(3221225794LL, 5270LL, 1LL, 0LL);
  return v18;
}
