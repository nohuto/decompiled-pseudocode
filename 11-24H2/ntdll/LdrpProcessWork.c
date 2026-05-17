/*
 * XREFs of LdrpProcessWork @ 0x180021E60
 * Callers:
 *     LdrpDrainWorkQueue @ 0x180003E20 (LdrpDrainWorkQueue.c)
 *     LdrpLoadDllInternal @ 0x18000B460 (LdrpLoadDllInternal.c)
 *     LdrpLoadDependentModuleInternal @ 0x18000D2E0 (LdrpLoadDependentModuleInternal.c)
 *     TppWorkpExecuteCallback @ 0x180022BB0 (TppWorkpExecuteCallback.c)
 *     LdrpWorkCallback @ 0x1800EAD70 (LdrpWorkCallback.c)
 * Callees:
 *     LdrpReportError @ 0x180005D20 (LdrpReportError.c)
 *     LdrpLogInternal @ 0x180013D80 (LdrpLogInternal.c)
 *     RtlEnterCriticalSection @ 0x1800148F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800149F0 (RtlLeaveCriticalSection.c)
 *     LdrpSnapModule @ 0x180056F30 (LdrpSnapModule.c)
 *     LdrpLogLoadFailureEtwEvent @ 0x180066194 (LdrpLogLoadFailureEtwEvent.c)
 *     LdrpMapDllSearchPath @ 0x180074F30 (LdrpMapDllSearchPath.c)
 *     LdrpMapDllFullPath @ 0x180075388 (LdrpMapDllFullPath.c)
 *     LdrpMapDllRetry @ 0x1800D5ED0 (LdrpMapDllRetry.c)
 *     LdrpLogDeprecatedDllEtwEvent @ 0x1800F980C (LdrpLogDeprecatedDllEtwEvent.c)
 *     LdrpLogError @ 0x1800FB40C (LdrpLogError.c)
 *     LdrpMapDllPatchImage @ 0x18011446C (LdrpMapDllPatchImage.c)
 *     ZwSetEvent @ 0x180161E50 (ZwSetEvent.c)
 */

void __fastcall LdrpProcessWork(__int64 a1, char a2)
{
  __int64 v4; // rcx
  int v5; // eax
  int v6; // eax
  int v7; // esi
  __int64 v8; // rax
  int v9; // edx
  int v10; // eax
  bool v11; // bl

  if ( **(int **)(a1 + 40) < 0 )
    goto LABEL_20;
  v4 = *(_QWORD *)(a1 + 56);
  if ( *(_DWORD *)(*(_QWORD *)(v4 + 152) + 56LL) )
  {
    v7 = LdrpSnapModule(a1);
  }
  else
  {
    if ( *(_DWORD *)(v4 + 268) == 9 )
    {
      v6 = LdrpMapDllPatchImage(a1);
    }
    else
    {
      v5 = *(_DWORD *)(a1 + 32);
      if ( (v5 & 0x100000) != 0 )
      {
        v6 = LdrpMapDllRetry(a1);
      }
      else if ( (v5 & 0x200) != 0 )
      {
        v6 = LdrpMapDllFullPath(a1);
      }
      else
      {
        v6 = LdrpMapDllSearchPath(a1);
      }
    }
    v7 = v6;
    if ( v6 >= 0 || v6 == -1073741267 )
      goto LABEL_20;
    LdrpLogInternal(
      (__int64)"minkernel\\ldr\\ldrmap.c",
      2148,
      (__int64)"LdrpProcessWork",
      0,
      "Unable to load DLL: \"%wZ\", Parent Module: \"%wZ\", Status: 0x%x\n",
      a1);
    if ( v7 == -1073741515 )
    {
      LdrpLogError(3221225781LL, 25LL, 0LL, a1);
      LdrpLogDeprecatedDllEtwEvent(a1);
      v8 = *(_QWORD *)(a1 + 48);
      v9 = v8 + 72;
      if ( !v8 )
        v9 = 0;
      LdrpLogLoadFailureEtwEvent(a1, v9, -1073741515, (unsigned int)&LoadFailure, 0);
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 56) + 104LL) & 0x20) != 0 )
        LdrpReportError((__int128 *)a1, 0LL, -1073741515);
    }
  }
  if ( v7 < 0 )
    **(_DWORD **)(a1 + 40) = v7;
LABEL_20:
  if ( !a2 )
  {
    RtlEnterCriticalSection((__int64)&LdrpWorkQueueLock);
    v10 = --LdrpWorkInProgress;
    v11 = (__int64 *)LdrpWorkQueue == &LdrpWorkQueue && v10 == 1;
    RtlLeaveCriticalSection((__int64)&LdrpWorkQueueLock);
    if ( v11 )
      ZwSetEvent(LdrpWorkCompleteEvent, 0LL);
  }
}
