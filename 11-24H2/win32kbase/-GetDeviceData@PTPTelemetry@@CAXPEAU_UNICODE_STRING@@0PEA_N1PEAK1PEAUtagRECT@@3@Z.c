/*
 * XREFs of ?GetDeviceData@PTPTelemetry@@CAXPEAU_UNICODE_STRING@@0PEA_N1PEAK1PEAUtagRECT@@3@Z @ 0x140187948
 * Callers:
 *     ?PTPConfigUpdateEx@PTPTelemetry@@CAXQEAUDEVICEINFO@@@Z @ 0x140142810 (-PTPConfigUpdateEx@PTPTelemetry@@CAXQEAUDEVICEINFO@@@Z.c)
 * Callees:
 *     ?W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x140069000 (-W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     IsLegacyTouchPad @ 0x140121938 (IsLegacyTouchPad.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?GetHidVidPidStrings@RimTelemetry@@SAXQEAURIMDEV@@PEAU_UNICODE_STRING@@1@Z @ 0x1401D13F0 (-GetHidVidPidStrings@RimTelemetry@@SAXQEAURIMDEV@@PEAU_UNICODE_STRING@@1@Z.c)
 */

void __fastcall PTPTelemetry::GetDeviceData(
        struct _UNICODE_STRING *a1,
        struct _UNICODE_STRING *a2,
        bool *a3,
        bool *a4,
        unsigned int *a5,
        bool *a6,
        struct tagRECT *a7,
        struct tagRECT *a8)
{
  char v10; // bp
  struct W32_PUSH_LOCK *v11; // rbx
  __int64 v12; // rcx
  __int64 UserSessionState; // rax
  int v14; // edx
  __int64 v15; // rcx
  __int64 v16; // rdi
  int v17; // eax
  int v18; // ecx
  __int64 v19; // rax
  struct tagRECT v20; // xmm1
  int v21; // eax

  *a8 = 0LL;
  *a5 = 0;
  *a6 = 0;
  v10 = 0;
  *a7 = 0LL;
  *a3 = 0;
  *a4 = 0;
  v11 = *(struct W32_PUSH_LOCK **)(*(_QWORD *)(W32GetUserSessionState(0LL) + 16840) + 1232LL);
  W32AcquirePushLockSharedEx(v11, 0);
  UserSessionState = W32GetUserSessionState(v12);
  v14 = 0;
  v15 = *(_QWORD *)(UserSessionState + 16840);
  v16 = **(_QWORD **)(v15 + 1240);
  if ( !v16 )
    goto LABEL_25;
  do
  {
    if ( (*(_DWORD *)(v16 + 184) & 0x80u) == 0 )
    {
      if ( *(_DWORD *)(v16 + 48) != v14 )
        goto LABEL_21;
      if ( *(_WORD *)(v16 + 864) == (_WORD)v14 )
      {
        *a3 = 1;
        goto LABEL_21;
      }
      LOBYTE(v21) = IsLegacyTouchPad(v16);
      if ( v21 )
      {
        *a6 = 1;
        *(_BYTE *)(W32GetUserSessionState(v15) + 12066) = 1;
LABEL_20:
        v14 = 0;
      }
    }
    else
    {
      v17 = *(_DWORD *)(*(_QWORD *)(v16 + 456) + 24LL);
      if ( v17 == 7 )
      {
        v10 = 1;
        *(_BYTE *)(W32GetUserSessionState(v15) + 12066) = 1;
        v18 = *(_DWORD *)(*(_QWORD *)(v16 + 456) + 964LL);
        switch ( v18 )
        {
          case 1:
            *a5 = 1;
            break;
          case 2:
            *a5 = 2;
            break;
          case 3:
            *a5 = 3;
            break;
          case 0:
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1949LL);
            break;
        }
        v19 = *(_QWORD *)(v16 + 456);
        v20 = *(struct tagRECT *)(v19 + 140);
        *a7 = *(struct tagRECT *)(v19 + 124);
        *a8 = v20;
        RimTelemetry::GetHidVidPidStrings((struct RIMDEV *const)v16, a1, a2);
        goto LABEL_20;
      }
      if ( (unsigned int)(v17 - 1) <= 3 )
        *a4 = 1;
    }
LABEL_21:
    v16 = *(_QWORD *)(v16 + 56);
  }
  while ( v16 );
  if ( v10 && *a6 != (_BYTE)v14 )
    *a6 = v14;
LABEL_25:
  ExReleasePushLockSharedEx(v11, 0LL);
  KeLeaveCriticalRegion();
}
