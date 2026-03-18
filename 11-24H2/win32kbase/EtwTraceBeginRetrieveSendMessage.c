/*
 * XREFs of EtwTraceBeginRetrieveSendMessage @ 0x1401690C0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0cppppqq_EtwWriteTransfer @ 0x14003365C (McTemplateK0cppppqq_EtwWriteTransfer.c)
 *     ?GetCallbackCount@@YACXZ @ 0x1400A5190 (-GetCallbackCount@@YACXZ.c)
 *     Feature_AllowWM_SYSCOMMANDSC_MonitorPowerETWPayload__private_IsEnabledDeviceUsageNoInline @ 0x1401B5440 (Feature_AllowWM_SYSCOMMANDSC_MonitorPowerETWPayload__private_IsEnabledDeviceUsageNoInline.c)
 */

NTSTATUS __fastcall EtwTraceBeginRetrieveSendMessage(__int64 a1)
{
  NTSTATUS result; // eax
  __int64 v3; // rcx
  __int64 v4; // rbx
  int v5; // eax
  int v6; // r15d
  char v7; // si
  char v8; // bp
  __int64 v9; // r14
  __int64 *v10; // rax
  char CallbackCount; // al
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 *v14; // rax
  __int64 v15; // rsi
  int v16; // ebp
  char v17; // al
  __int64 v18; // rcx
  __int64 v19; // r8

  result = Feature_AllowWM_SYSCOMMANDSC_MonitorPowerETWPayload__private_IsEnabledDeviceUsageNoInline();
  LOBYTE(v4) = 0;
  if ( result )
  {
    if ( (Microsoft_Windows_Win32kEnableBits & 0x800) == 0 )
      return result;
    v5 = *(_DWORD *)(a1 + 104);
    v6 = *(_DWORD *)(a1 + 80);
    v7 = 112;
    if ( v5 == 274 && *(_QWORD *)(a1 + 88) == 61808LL )
    {
      v8 = 18;
    }
    else
    {
      v8 = 0;
      if ( v5 != 274 || *(_QWORD *)(a1 + 88) != 61808LL )
      {
        LOBYTE(v9) = 0;
        if ( v5 != 274 || *(_QWORD *)(a1 + 88) != 61808LL )
          v7 = 0;
        goto LABEL_12;
      }
    }
    v9 = *(_QWORD *)(a1 + 96);
LABEL_12:
    v10 = *(__int64 **)(a1 + 112);
    if ( v10 )
      v4 = *v10;
    CallbackCount = GetCallbackCount(274LL);
    return McTemplateK0cppppqq_EtwWriteTransfer(
             v12,
             &BeginRetrieveSendMessage,
             v13,
             CallbackCount,
             a1,
             v4,
             v7,
             v9,
             v8,
             v6);
  }
  if ( (Microsoft_Windows_Win32kEnableBits & 0x800) != 0 )
  {
    v14 = *(__int64 **)(a1 + 112);
    LOBYTE(v15) = 0;
    v16 = *(_DWORD *)(a1 + 80);
    if ( v14 )
      v15 = *v14;
    v17 = GetCallbackCount(v3);
    return McTemplateK0cppppqq_EtwWriteTransfer(v18, &BeginRetrieveSendMessage, v19, v17, a1, v15, 0, 0, 0, v16);
  }
  return result;
}
