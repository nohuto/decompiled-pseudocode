/*
 * XREFs of CitProcessCallout @ 0x1400B5AC4
 * Callers:
 *     DestroyProcessInfo @ 0x14015D490 (DestroyProcessInfo.c)
 *     xxxInitProcessInfo @ 0x140161084 (xxxInitProcessInfo.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ?CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x1400B26AC (-CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@@Z.c)
 *     ?CitIsEnabled@@YAEXZ @ 0x1400B3CFC (-CitIsEnabled@@YAEXZ.c)
 *     ?CitpProcessInfoIsValid@@YA_NPEAU_CIT_PROCESS@@@Z @ 0x1400B5CDC (-CitpProcessInfoIsValid@@YA_NPEAU_CIT_PROCESS@@@Z.c)
 *     ?CitpProcessInfoCleanup@@YAXPEAU_CIT_PROCESS@@@Z @ 0x1400B5D00 (-CitpProcessInfoCleanup@@YAXPEAU_CIT_PROCESS@@@Z.c)
 *     ?CitpClearDelegation@@YAXPEAU_CIT_PROCESS@@@Z @ 0x1400B5E4C (-CitpClearDelegation@@YAXPEAU_CIT_PROCESS@@@Z.c)
 *     ?CitpGetInteractiveUserLUID@@YA?AU_LUID@@XZ @ 0x1400B5F10 (-CitpGetInteractiveUserLUID@@YA-AU_LUID@@XZ.c)
 *     ?CitpInitialize@@YAJPEBG@Z @ 0x1400B6048 (-CitpInitialize@@YAJPEBG@Z.c)
 *     ?CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z @ 0x1400B612C (-CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z.c)
 *     ?CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x140151F2C (-CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@I@Z.c)
 *     ?CitpCleanup@@YAXXZ @ 0x14023C244 (-CitpCleanup@@YAXXZ.c)
 */

void __fastcall CitProcessCallout(__int64 a1, char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // rbx
  struct _CIT_PROCESS *v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  char IsStateSeparationEnabled; // al
  const WCHAR *v13; // rcx
  __int64 v14; // rbp
  struct _LUID InteractiveUserLUID; // [rsp+50h] [rbp+18h] BYREF

  v5 = *(_QWORD *)(W32GetUserSessionState(a1) + 18968);
  if ( a2 )
  {
    *(_QWORD *)(a1 + 920) = 52976LL;
    if ( *(_QWORD *)(W32GetUserSessionState(v4) + 36424) )
    {
      v6 = *(_QWORD *)(W32GetUserSessionState(v6) + 36424);
      if ( !*(_QWORD *)(v6 + 368) && !*(_BYTE *)v5 )
      {
        IsStateSeparationEnabled = RtlIsStateSeparationEnabled();
        v13 = L"\\Registry\\Machine\\OSDATA\\Software\\Microsoft\\Windows NT\\CurrentVersion\\AppCompatFlags\\CIT";
        if ( !IsStateSeparationEnabled )
          v13 = L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\AppCompatFlags\\CIT";
        CitpInitialize(v13);
      }
    }
    if ( CitIsEnabled(v6) )
    {
      v7 = *(_QWORD *)(v5 + 32);
      if ( !*(_QWORD *)(v7 + 96) )
      {
        InteractiveUserLUID = CitpGetInteractiveUserLUID();
        if ( InteractiveUserLUID )
          CitpContextUserLogon((struct _CIT_IMPACT_CONTEXT *)v7, &InteractiveUserLUID);
      }
    }
  }
  else
  {
    v8 = *(struct _CIT_PROCESS **)(a1 + 920);
    if ( CitpProcessInfoIsValid(v8) )
    {
      if ( CitIsEnabled(v9) )
      {
        v14 = *(_QWORD *)(v5 + 32);
        if ( a1 == *(_QWORD *)(v14 + 120) )
          CitpSetForegroundProcess(
            *(struct _CIT_IMPACT_CONTEXT **)(v5 + 32),
            (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24,
            0LL,
            0LL);
        if ( a1 == *(_QWORD *)(v14 + 128) )
          *(_QWORD *)(v14 + 128) = 0LL;
        CitpClearDelegation(v8);
      }
      CitpProcessInfoCleanup(v8);
      GreDeleteFastMutex((char *)v8);
    }
    *(_QWORD *)(a1 + 920) = 52977LL;
    if ( *(_QWORD *)(W32GetUserSessionState(v9) + 36424) )
    {
      v11 = *(_QWORD *)(W32GetUserSessionState(v10) + 36424);
      if ( !*(_QWORD *)(v11 + 368) )
      {
        if ( CitIsEnabled(v11) )
          CitpContextFlush(
            *(struct _CIT_IMPACT_CONTEXT **)(v5 + 32),
            (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
        CitpCleanup();
      }
    }
  }
}
