/*
 * XREFs of PatchThreadWindows @ 0x1C00DF900
 * Callers:
 *     <none>
 * Callees:
 *     SetOrClrWF @ 0x1C00B5D8C (SetOrClrWF.c)
 *     ?FindShellFrameAppThreadsAssociation@@YAPEAU_THREADSASSOCIATION@@PEAUtagTHREADINFO@@@Z @ 0x1C00DFADC (-FindShellFrameAppThreadsAssociation@@YAPEAU_THREADSASSOCIATION@@PEAUtagTHREADINFO@@@Z.c)
 *     Feature_Backport_UserModeTooltips__private_IsEnabledDeviceUsage @ 0x1C0139A10 (Feature_Backport_UserModeTooltips__private_IsEnabledDeviceUsage.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C014083C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

char __fastcall PatchThreadWindows(struct tagTHREADINFO *a1)
{
  __int64 v1; // r14
  __int64 v2; // r15
  struct _THREADSASSOCIATION *i; // rax
  __int64 v5; // rdx
  __int64 v6; // r9
  __int64 v7; // rdx
  struct _THREADSASSOCIATION **v8; // rcx
  unsigned __int64 v9; // rdi
  __int64 v10; // rax
  unsigned __int64 v11; // r14
  __int64 v12; // rsi
  __int64 *v13; // r15
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v18; // [rsp+20h] [rbp-28h]
  __int64 v19; // [rsp+28h] [rbp-20h]

  for ( i = FindShellFrameAppThreadsAssociation(a1); i; i = FindShellFrameAppThreadsAssociation(a1) )
  {
    v7 = *(_QWORD *)i;
    if ( *(struct _THREADSASSOCIATION **)(*(_QWORD *)i + 8LL) != i
      || (v8 = (struct _THREADSASSOCIATION **)*((_QWORD *)i + 1), *v8 != i) )
    {
      __fastfail(3u);
    }
    *v8 = (struct _THREADSASSOCIATION *)v7;
    *(_QWORD *)(v7 + 8) = v8;
    Win32FreePool(i);
  }
  v19 = v1;
  v9 = gSharedInfo[1];
  LOBYTE(v10) = gpKernelHandleTable;
  v11 = v9 + 32LL * giheLast;
  v12 = gpKernelHandleTable;
  if ( v9 <= v11 )
  {
    v18 = v2;
    while ( 1 )
    {
      if ( *(_BYTE *)(v9 + 24) == 1 && *(struct tagTHREADINFO **)(v12 + 8) == a1 )
      {
        v13 = *(__int64 **)v12;
        if ( (*(_BYTE *)(v9 + 25) & 1) == 0 )
          goto LABEL_13;
        v10 = v13[5];
        if ( *(_QWORD *)(v10 + 120) || (*(_BYTE *)(v10 + 18) & 4) == 0 )
          break;
      }
LABEL_21:
      v9 += 32LL;
      v12 += 24LL;
      if ( v9 > v11 )
        return v10;
    }
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 5485LL);
LABEL_13:
    v14 = v13[5];
    v15 = *(unsigned __int16 *)(v14 + 42);
    if ( (unsigned __int16)(v15 - 666) > 6u )
    {
      if ( (unsigned int)Feature_Backport_UserModeTooltips__private_IsEnabledDeviceUsage(v15, v5, v14, v6, v18, v19)
        || (v16 = v13[5], *(_WORD *)(v16 + 42) != 694) )
      {
        *(_QWORD *)(v13[5] + 120) = 0LL;
      }
      else
      {
        *(_QWORD *)(v16 + 120) = 5LL;
      }
    }
    else
    {
      *(_QWORD *)(v14 + 120) = *(_QWORD *)(gpsi + 8LL * (((unsigned int)v15 & 0xFFFF2FFF) - 666) + 272);
    }
    SetOrClrWF(1, v13, 0x204u, 1);
    LOBYTE(v10) = SetOrClrWF(0, v13, 0x208u, 1);
    goto LABEL_21;
  }
  return v10;
}
