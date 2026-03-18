/*
 * XREFs of ?CitpResetTracking@@YAJXZ @ 0x14023CCE0
 * Callers:
 *     ?CitEtwEnableCallback@@YAXPEBU_GUID@@_K@Z @ 0x14023C0F8 (-CitEtwEnableCallback@@YAXPEBU_GUID@@_K@Z.c)
 * Callees:
 *     ?CitIsEnabled@@YAEXZ @ 0x1400B3CFC (-CitIsEnabled@@YAEXZ.c)
 *     ?CitpProcessInfoIsValid@@YA_NPEAU_CIT_PROCESS@@@Z @ 0x1400B5CDC (-CitpProcessInfoIsValid@@YA_NPEAU_CIT_PROCESS@@@Z.c)
 *     ?CitpInteractionSummaryDelete@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z @ 0x1400B5DE8 (-CitpInteractionSummaryDelete@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z.c)
 *     ?CitpParametersLoad@@YAXPEAU_CIT_PARAMETERS@@PEBG@Z @ 0x1400B6354 (-CitpParametersLoad@@YAXPEAU_CIT_PARAMETERS@@PEBG@Z.c)
 *     ?CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x140151F2C (-CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@I@Z.c)
 *     ?CitpContextTrackingDataCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x140159890 (-CitpContextTrackingDataCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpContextTrackingDataStart@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x140199F58 (-CitpContextTrackingDataStart@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpCleanup@@YAXXZ @ 0x14023C244 (-CitpCleanup@@YAXXZ.c)
 */

__int64 __fastcall CitpResetTracking(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  __int64 v3; // rcx
  __int64 v4; // rcx
  int v5; // ebx
  struct _CIT_IMPACT_CONTEXT *v7; // rsi
  __int64 v8; // rcx
  __int64 i; // rbx
  __int64 v10; // rcx
  char IsStateSeparationEnabled; // al
  const WCHAR *v12; // rdx

  v1 = *(_QWORD *)(W32GetUserSessionState(a1) + 18968);
  v2 = v1 + 4;
  if ( !CitIsEnabled(v3) )
    goto LABEL_2;
  v7 = *(struct _CIT_IMPACT_CONTEXT **)(v1 + 32);
  CitpContextFlush(v7, (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  for ( i = *(_QWORD *)(W32GetUserSessionState(v8) + 36424); i; i = *(_QWORD *)(i + 368) )
  {
    if ( CitpProcessInfoIsValid(*(struct _CIT_PROCESS **)(i + 920)) )
    {
      *(_DWORD *)(v10 + 40) = 0;
      CitpInteractionSummaryDelete((struct _CIT_INTERACTION_SUMMARY **)(*(_QWORD *)(i + 920) + 32LL));
    }
  }
  CitpContextTrackingDataCleanup(v7);
  *(_WORD *)(v2 + 20) = 0;
  IsStateSeparationEnabled = RtlIsStateSeparationEnabled();
  v12 = L"\\Registry\\Machine\\OSDATA\\Software\\Microsoft\\Windows NT\\CurrentVersion\\AppCompatFlags\\CIT";
  if ( !IsStateSeparationEnabled )
    v12 = L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\AppCompatFlags\\CIT";
  CitpParametersLoad((struct _CIT_PARAMETERS *)v2, v12);
  if ( *(_BYTE *)(v2 + 20) )
  {
    v5 = CitpContextTrackingDataStart(v7);
    if ( v5 >= 0 )
      return 0;
  }
  else
  {
LABEL_2:
    v5 = -1073741637;
  }
  CitpCleanup(v4);
  return (unsigned int)v5;
}
