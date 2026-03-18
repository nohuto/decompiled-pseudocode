/*
 * XREFs of rimValidateFrameTransition @ 0x1401EDC30
 * Callers:
 *     rimDispatchCompleteFrame @ 0x140130970 (rimDispatchCompleteFrame.c)
 *     rimFindOtherQueuedFrames @ 0x1401ED5E8 (rimFindOtherQueuedFrames.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall rimValidateFrameTransition(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v3; // rbx
  __int64 *v6; // r13
  unsigned int v7; // ebp
  __int64 v8; // r10
  __int64 v9; // r8
  int v10; // r9d
  unsigned int v11; // edx
  unsigned int v12; // ebp
  __int64 v13; // r10
  __int64 v14; // rdx
  int v15; // r8d
  unsigned int v16; // ecx
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rdx

  v2 = *(_DWORD *)(a1 + 196);
  v3 = 0LL;
  if ( v2 == *(_DWORD *)(a2 + 196) )
  {
    v6 = (__int64 *)(a1 + 232);
    v7 = 0;
    if ( *(_DWORD *)(a1 + 24) )
    {
      do
      {
        v8 = *v6;
        v9 = 192LL * v7;
        if ( (*(_DWORD *)(v9 + *v6 + 28) & 0x2000006) != 0 )
        {
          v10 = *(_DWORD *)(a2 + 24);
          v11 = 0;
          if ( v10 )
          {
            while ( *(_WORD *)(192LL * v11 + *(_QWORD *)(a2 + 232) + 8) != *(_WORD *)(v9 + v8 + 8) )
            {
              if ( ++v11 == v10 )
                goto LABEL_7;
            }
          }
          else
          {
LABEL_7:
            MicrosoftTelemetryAssertTriggeredArgsKM(
              "IXPTelAssert",
              196616,
              *(unsigned __int16 *)(v9 + v8 + 8) | 0x3E40000);
          }
        }
        ++v7;
      }
      while ( v7 != *(_DWORD *)(a1 + 24) );
    }
    v12 = 0;
    if ( *(_DWORD *)(a2 + 24) )
    {
      do
      {
        v13 = *(_QWORD *)(a2 + 232);
        v14 = 192LL * v12;
        if ( (*(_DWORD *)(v14 + v13 + 28) & 0x2000006) == 0 )
        {
          v15 = *(_DWORD *)(a1 + 24);
          v16 = 0;
          if ( !v15 )
            goto LABEL_17;
          v17 = *v6;
          while ( 1 )
          {
            v18 = 192LL * v16;
            if ( *(_WORD *)(v14 + v13 + 8) == *(_WORD *)(v18 + v17 + 8) )
              break;
            if ( ++v16 == v15 )
              goto LABEL_17;
          }
          if ( (*(_DWORD *)(v18 + v17 + 28) & 0x2000006) == 0 )
LABEL_17:
            MicrosoftTelemetryAssertTriggeredArgsKM(
              "IXPTelAssert",
              196616,
              *(unsigned __int16 *)(v14 + v13 + 8) | 0x3FC0000);
        }
        ++v12;
      }
      while ( v12 != *(_DWORD *)(a2 + 24) );
    }
  }
  else if ( v2 )
  {
    if ( *(_DWORD *)(a2 + 24) )
    {
      do
      {
        v19 = *(_QWORD *)(a2 + 232);
        if ( (*(_DWORD *)(192 * v3 + v19 + 28) & 0x2000006) == 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM(
            "IXPTelAssert",
            196616,
            *(unsigned __int16 *)(192 * v3 + v19 + 8) | 0x4070000);
        v3 = (unsigned int)(v3 + 1);
      }
      while ( (_DWORD)v3 != *(_DWORD *)(a2 + 24) );
    }
  }
  else if ( *(_DWORD *)(a1 + 24) )
  {
    do
    {
      v20 = *(_QWORD *)(a1 + 232);
      if ( (*(_DWORD *)(192 * v3 + v20 + 28) & 0x2000006) != 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM(
          "IXPTelAssert",
          196616,
          *(unsigned __int16 *)(192 * v3 + v20 + 8) | 0x4110000);
      v3 = (unsigned int)(v3 + 1);
    }
    while ( (_DWORD)v3 != *(_DWORD *)(a1 + 24) );
  }
}
