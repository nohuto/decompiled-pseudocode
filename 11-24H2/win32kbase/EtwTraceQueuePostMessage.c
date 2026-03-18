/*
 * XREFs of EtwTraceQueuePostMessage @ 0x1400A4EF8
 * Callers:
 *     EtwTraceQueueMessage @ 0x1400A4C80 (EtwTraceQueueMessage.c)
 * Callees:
 *     McTemplateK0cppppqq_EtwWriteTransfer @ 0x14003365C (McTemplateK0cppppqq_EtwWriteTransfer.c)
 *     ?GetCallbackCount@@YACXZ @ 0x1400A5190 (-GetCallbackCount@@YACXZ.c)
 *     Feature_AllowWM_SYSCOMMANDSC_MonitorPowerETWPayload__private_IsEnabledDeviceUsageNoInline @ 0x1401B5440 (Feature_AllowWM_SYSCOMMANDSC_MonitorPowerETWPayload__private_IsEnabledDeviceUsageNoInline.c)
 */

NTSTATUS __fastcall EtwTraceQueuePostMessage(__int64 a1)
{
  NTSTATUS result; // eax
  __int64 v3; // rbp
  int v4; // ecx
  int v5; // r15d
  char v6; // si
  __int64 v7; // r14
  bool v8; // zf
  int v9; // ecx
  __int64 v10; // rbx
  char CallbackCount; // al
  __int64 v12; // rcx
  __int64 v13; // r8

  result = Feature_AllowWM_SYSCOMMANDSC_MonitorPowerETWPayload__private_IsEnabledDeviceUsageNoInline();
  LOBYTE(v3) = 0;
  if ( !result )
  {
    if ( (Microsoft_Windows_Win32kEnableBits & 0x800) == 0 )
      return result;
    v9 = *(_DWORD *)(a1 + 24);
    v5 = *(_DWORD *)(a1 + 48);
    if ( (unsigned int)(v9 - 581) <= 2 )
    {
      v6 = *(_DWORD *)(a1 + 24);
      if ( v9 == 582 || v9 == 581 || v9 == 583 )
      {
        v7 = *(_QWORD *)(a1 + 40);
        if ( v9 == 582 || v9 == 581 )
          goto LABEL_29;
        v8 = v9 == 583;
        goto LABEL_28;
      }
    }
    else
    {
      v6 = 0;
    }
    LOBYTE(v7) = 0;
    goto LABEL_30;
  }
  if ( (Microsoft_Windows_Win32kEnableBits & 0x800) == 0 )
    return result;
  v4 = *(_DWORD *)(a1 + 24);
  v5 = *(_DWORD *)(a1 + 48);
  if ( (unsigned int)(v4 - 581) <= 2 || v4 == 274 && *(_QWORD *)(a1 + 32) == 61808LL )
  {
    v6 = *(_DWORD *)(a1 + 24);
    if ( v4 == 582 || v4 == 581 || v4 == 583 )
    {
LABEL_13:
      v7 = *(_QWORD *)(a1 + 40);
      if ( v4 == 582 || v4 == 581 || v4 == 583 )
        goto LABEL_29;
      goto LABEL_16;
    }
  }
  else
  {
    v6 = 0;
  }
  if ( v4 == 274 && *(_QWORD *)(a1 + 32) == 61808LL )
    goto LABEL_13;
  LOBYTE(v7) = 0;
LABEL_16:
  if ( v4 != 274 )
    goto LABEL_30;
  v8 = *(_QWORD *)(a1 + 32) == 61808LL;
LABEL_28:
  if ( v8 )
LABEL_29:
    v3 = *(_QWORD *)(a1 + 32);
LABEL_30:
  v10 = *(_QWORD *)(a1 + 16);
  CallbackCount = GetCallbackCount();
  return McTemplateK0cppppqq_EtwWriteTransfer(v12, &QueuePostMessage, v13, CallbackCount, a1, v10, v3, v7, v6, v5);
}
