/*
 * XREFs of LdrpProcessWork @ 0x18006FC70
 * Callers:
 *     LdrpLoadDllInternal @ 0x18004A300 (LdrpLoadDllInternal.c)
 *     LdrpLoadDependentModuleInternal @ 0x18004C180 (LdrpLoadDependentModuleInternal.c)
 *     LdrpWorkCallback @ 0x18006F910 (LdrpWorkCallback.c)
 *     LdrpDrainWorkQueue @ 0x18006FAA0 (LdrpDrainWorkQueue.c)
 *     TppWorkpExecuteCallback @ 0x18007CF90 (TppWorkpExecuteCallback.c)
 * Callees:
 *     LdrpReportError @ 0x180008910 (LdrpReportError.c)
 *     LdrpSnapModule @ 0x180012B70 (LdrpSnapModule.c)
 *     LdrpMapDllSearchPath @ 0x18006FE50 (LdrpMapDllSearchPath.c)
 *     LdrpMapDllFullPath @ 0x1800702A8 (LdrpMapDllFullPath.c)
 *     LdrpLogInternal @ 0x18007B390 (LdrpLogInternal.c)
 *     RtlEnterCriticalSection @ 0x18007BF00 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18007C000 (RtlLeaveCriticalSection.c)
 *     LdrpLogLoadFailureEtwEvent @ 0x1800D1E14 (LdrpLogLoadFailureEtwEvent.c)
 *     LdrpMapDllRetry @ 0x1800EDE7C (LdrpMapDllRetry.c)
 *     LdrpLogDeprecatedDllEtwEvent @ 0x1800FB5AC (LdrpLogDeprecatedDllEtwEvent.c)
 *     LdrpLogError @ 0x1800FD63C (LdrpLogError.c)
 *     LdrpMapDllPatchImage @ 0x18011741C (LdrpMapDllPatchImage.c)
 *     ZwSetEvent @ 0x1801633E0 (ZwSetEvent.c)
 */

void __fastcall LdrpProcessWork(__int64 a1, char a2)
{
  __int64 v4; // rcx
  int v5; // eax
  int v6; // eax
  int v7; // esi
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  int v12; // eax
  bool v13; // bl
  int v14; // [rsp+20h] [rbp-38h]

  if ( **(int **)(a1 + 40) < 0 )
    goto LABEL_22;
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
        v6 = LdrpMapDllSearchPath((PCUNICODE_STRING)a1);
      }
    }
    v7 = v6;
    if ( v6 >= 0 || v6 == -1073741267 )
      goto LABEL_22;
    v8 = *(_QWORD *)(a1 + 48);
    v9 = v8 + 72;
    if ( !v8 )
      v9 = 0LL;
    LdrpLogInternal(
      "minkernel\\ldr\\ldrmap.c",
      2158LL,
      "LdrpProcessWork",
      0LL,
      "Unable to load DLL: \"%wZ\", Parent Module: \"%wZ\", Status: 0x%x\n",
      a1,
      v9,
      v7);
    if ( v7 == -1073741515 )
    {
      LdrpLogError(3221225781LL, 25LL, 0LL, a1);
      LdrpLogDeprecatedDllEtwEvent(a1);
      v10 = *(_QWORD *)(a1 + 48);
      v11 = v10 + 72;
      if ( !v10 )
        v11 = 0LL;
      LOBYTE(v14) = 0;
      LdrpLogLoadFailureEtwEvent(a1, v11, 3221225781LL, &LoadFailure, v14);
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 56) + 104LL) & 0x20) != 0 )
        LdrpReportError((__int128 *)a1, 0LL, -1073741515);
    }
  }
  if ( v7 < 0 )
    **(_DWORD **)(a1 + 40) = v7;
LABEL_22:
  if ( !a2 )
  {
    RtlEnterCriticalSection(&LdrpWorkQueueLock);
    v12 = --LdrpWorkInProgress;
    v13 = (__int64 *)LdrpWorkQueue == &LdrpWorkQueue && v12 == 1;
    RtlLeaveCriticalSection(&LdrpWorkQueueLock);
    if ( v13 )
      ZwSetEvent(LdrpWorkCompleteEvent, 0LL);
  }
}
