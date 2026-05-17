/*
 * XREFs of LdrpLogDllState @ 0x180070D00
 * Callers:
 *     LdrpLoadDependentModuleInternal @ 0x18000D2E0 (LdrpLoadDependentModuleInternal.c)
 *     LdrpSnapModule @ 0x180056F30 (LdrpSnapModule.c)
 *     LdrpPreprocessDllName @ 0x18005A570 (LdrpPreprocessDllName.c)
 *     _LdrpInitialize @ 0x180066904 (_LdrpInitialize.c)
 *     LdrpInitializeProcess @ 0x180066D74 (LdrpInitializeProcess.c)
 *     LdrpInitializeNode @ 0x18006FB00 (LdrpInitializeNode.c)
 *     LdrpSendPostSnapNotifications @ 0x1800707A0 (LdrpSendPostSnapNotifications.c)
 *     LdrpSnapKernelBaseExtensions @ 0x180070920 (LdrpSnapKernelBaseExtensions.c)
 *     LdrpMapDllNtFileName @ 0x180071640 (LdrpMapDllNtFileName.c)
 *     LdrpMapDllWithSectionHandle @ 0x180072B70 (LdrpMapDllWithSectionHandle.c)
 *     LdrpProcessMappedModule @ 0x180073700 (LdrpProcessMappedModule.c)
 *     LdrpCorProcessImports @ 0x1800746A0 (LdrpCorProcessImports.c)
 *     LdrpLoadKnownDll @ 0x180074A60 (LdrpLoadKnownDll.c)
 *     ApiSetQueryApiSetPresence @ 0x1800EF740 (ApiSetQueryApiSetPresence.c)
 *     LdrpInitializeNtdllDataTableEntry @ 0x1800F4990 (LdrpInitializeNtdllDataTableEntry.c)
 *     AvrfMiniLoadDll @ 0x180108F94 (AvrfMiniLoadDll.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180055A20 (RtlGetCurrentServiceSessionId.c)
 *     LdrpLogEtwEvent @ 0x18009B2F0 (LdrpLogEtwEvent.c)
 */

__int64 __fastcall LdrpLogDllState(int a1, __int64 a2, unsigned __int16 a3)
{
  _DWORD *SharedData; // r9
  __int64 result; // rax
  __int64 v8; // rcx

  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    result = (__int64)NtCurrentPeb()->SharedData + 554;
  else
    result = 2147353476LL;
  if ( *(_BYTE *)result )
  {
    result = (__int64)NtCurrentPeb();
    if ( (*(_BYTE *)(result + 888) & 4) != 0 )
    {
      result = (__int64)RtlGetCurrentServiceSessionId();
      if ( (_DWORD)result )
      {
        result = (__int64)NtCurrentPeb();
        v8 = *(_QWORD *)(result + 144) + 555LL;
      }
      else
      {
        v8 = 2147353477LL;
      }
      if ( (*(_BYTE *)v8 & 0x20) != 0 )
        return LdrpLogEtwEvent(a3, a1, 0, 0, a2, 0LL);
    }
  }
  return result;
}
