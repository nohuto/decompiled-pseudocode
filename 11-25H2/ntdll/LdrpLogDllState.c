/*
 * XREFs of LdrpLogDllState @ 0x180071900
 * Callers:
 *     LdrpSnapModule @ 0x180012B70 (LdrpSnapModule.c)
 *     LdrpPreprocessDllName @ 0x1800161D0 (LdrpPreprocessDllName.c)
 *     LdrpLoadDependentModuleInternal @ 0x18004C180 (LdrpLoadDependentModuleInternal.c)
 *     LdrpLoadKnownDll @ 0x18006CF10 (LdrpLoadKnownDll.c)
 *     LdrpMapDllWithSectionHandle @ 0x18006D3E0 (LdrpMapDllWithSectionHandle.c)
 *     LdrpProcessMappedModule @ 0x18006DF80 (LdrpProcessMappedModule.c)
 *     LdrpCorProcessImports @ 0x18006EF20 (LdrpCorProcessImports.c)
 *     LdrpSendPostSnapNotifications @ 0x1800713A0 (LdrpSendPostSnapNotifications.c)
 *     LdrpSnapKernelBaseExtensions @ 0x180071520 (LdrpSnapKernelBaseExtensions.c)
 *     LdrpMapDllNtFileName @ 0x180072240 (LdrpMapDllNtFileName.c)
 *     LdrpInitializeNode @ 0x180073610 (LdrpInitializeNode.c)
 *     _LdrpInitialize @ 0x1800D2584 (_LdrpInitialize.c)
 *     LdrpInitializeProcess @ 0x1800D29F4 (LdrpInitializeProcess.c)
 *     ApiSetQueryApiSetPresence @ 0x1800F0FF0 (ApiSetQueryApiSetPresence.c)
 *     LdrpInitializeNtdllDataTableEntry @ 0x1800F6570 (LdrpInitializeNtdllDataTableEntry.c)
 *     AvrfMiniLoadDll @ 0x18010B9A4 (AvrfMiniLoadDll.c)
 * Callees:
 *     LdrpLogEtwEvent @ 0x180006960 (LdrpLogEtwEvent.c)
 *     RtlGetCurrentServiceSessionId @ 0x180011660 (RtlGetCurrentServiceSessionId.c)
 */

int __fastcall LdrpLogDllState(__int64 a1, unsigned __int16 *a2, __int16 a3)
{
  _DWORD *SharedData; // r9
  __int64 v7; // rax
  __int64 v8; // rcx

  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v7 = (__int64)NtCurrentPeb()->SharedData + 554;
  else
    v7 = 2147353476LL;
  if ( *(_BYTE *)v7 )
  {
    v7 = (__int64)NtCurrentPeb();
    if ( (*(_BYTE *)(v7 + 888) & 4) != 0 )
    {
      LODWORD(v7) = RtlGetCurrentServiceSessionId();
      if ( (_DWORD)v7 )
      {
        v7 = (__int64)NtCurrentPeb();
        v8 = *(_QWORD *)(v7 + 144) + 555LL;
      }
      else
      {
        v8 = 2147353477LL;
      }
      if ( (*(_BYTE *)v8 & 0x20) != 0 )
        LODWORD(v7) = LdrpLogEtwEvent(a3, a1, 0, 0, a2, 0LL);
    }
  }
  return v7;
}
