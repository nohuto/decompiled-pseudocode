/*
 * XREFs of ?CitpSetAudioInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1400B4D78
 * Callers:
 *     CitSetInfo @ 0x1400B3B80 (CitSetInfo.c)
 * Callees:
 *     ?CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROCESS@@G@Z @ 0x140016D60 (-CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT.c)
 *     ?CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z @ 0x1400B3D28 (-CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?CitpAudioStatDecrementStreams@@YAXPEAU_CIT_AUDIO_STATS@@E@Z @ 0x1400B5400 (-CitpAudioStatDecrementStreams@@YAXPEAU_CIT_AUDIO_STATS@@E@Z.c)
 */

__int64 __fastcall CitpSetAudioInfo(union _CIT_SI_INFOFLAGS *a1, union _CIT_SI_INFO *a2)
{
  __int64 UserSessionState; // rax
  __int16 v4; // r14
  __int64 v5; // r15
  struct _CIT_IMPACT_CONTEXT *v6; // rsi
  __int64 v7; // rcx
  __int64 CurrentProcessWin32Process; // rax
  struct tagPROCESSINFO *v9; // rdi
  struct tagPROCESSINFO **v10; // rax
  struct tagPROCESSINFO **v11; // rbp
  struct _CIT_INTERACTION_SUMMARY *v12; // rsi
  __int64 v13; // rbx
  char *v14; // rcx
  __int64 v15; // rdx
  char v16; // al
  char v17; // al
  char v19; // al
  char v20; // al
  char v21; // al

  UserSessionState = W32GetUserSessionState(a1);
  v4 = *((_WORD *)a1 + 1);
  v5 = (unsigned __int16)*(_DWORD *)a1;
  v6 = *(struct _CIT_IMPACT_CONTEXT **)(*(_QWORD *)(UserSessionState + 18968) + 32LL);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v7);
  v9 = (struct tagPROCESSINFO *)CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v9 = (struct tagPROCESSINFO *)(-(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process);
  v10 = (struct tagPROCESSINFO **)CitpProcessEnsureContext(v9);
  v11 = v10;
  if ( !v10 )
    return 3221225473LL;
  v12 = CitpInteractionSummaryEnsure(v6, v10, 16);
  v13 = 0LL;
  if ( v4 )
  {
    if ( (unsigned int)dword_14029B0A4 < MEMORY[0xFFFFF7800000037C] )
      EtwTelemetryCoverageReport(&off_14029B098);
    v15 = 10LL;
    v14 = (char *)(v11 + 13);
    v13 = ((unsigned __int64)v12 + 116) & -(__int64)(v12 != 0LL);
  }
  else
  {
    if ( (unsigned int)dword_14029B0BC < MEMORY[0xFFFFF7800000037C] )
      EtwTelemetryCoverageReport(&off_14029B0B0);
    v14 = (char *)v11 + 105;
    v15 = 11LL;
    if ( v12 )
      v13 = (__int64)v12 + 124;
  }
  v16 = *v14;
  if ( v5 == 3 )
  {
    if ( v16 != -1 )
    {
      v19 = v16 + 1;
      *v14 = v19;
      if ( v19 == 1 )
        PsUpdateComponentPower(*(_QWORD *)v9, v15);
    }
    if ( v13 )
    {
      v20 = *(_BYTE *)(v13 + 3);
      if ( v20 != -1 )
      {
        v21 = v20 + 1;
        *(_BYTE *)(v13 + 3) = v21;
        if ( v21 == 1 )
          *(_DWORD *)(v13 + 4) = (MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0]) / 0x2710uLL;
      }
    }
  }
  else
  {
    if ( v16 )
    {
      v17 = v16 - 1;
      *v14 = v17;
      if ( !v17 )
        PsUpdateComponentPower(*(_QWORD *)v9, v15);
    }
    if ( v13 )
      CitpAudioStatDecrementStreams((struct _CIT_AUDIO_STATS *)v13, 1u);
  }
  return 0LL;
}
