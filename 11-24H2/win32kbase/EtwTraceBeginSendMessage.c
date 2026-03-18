/*
 * XREFs of EtwTraceBeginSendMessage @ 0x1401691D0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCallbackCount@@YACXZ @ 0x1400A5190 (-GetCallbackCount@@YACXZ.c)
 *     McTemplateK0cppppqqqqq_EtwWriteTransfer @ 0x1400E76F8 (McTemplateK0cppppqqqqq_EtwWriteTransfer.c)
 *     Feature_AllowWM_SYSCOMMANDSC_MonitorPowerETWPayload__private_IsEnabledDeviceUsageNoInline @ 0x1401B5440 (Feature_AllowWM_SYSCOMMANDSC_MonitorPowerETWPayload__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall EtwTraceBeginSendMessage(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // edi
  __int64 v5; // rbx
  char v6; // bp
  char ThreadId; // r12
  __int64 v8; // rcx
  int v9; // r13d
  char v10; // r14
  __int64 v11; // r15
  __int64 *v12; // rax
  char CallbackCount; // al
  __int64 v14; // rdx
  __int64 v15; // r8
  unsigned __int8 v16; // al
  __int64 v17; // rcx
  char v18; // r14
  __int64 *v19; // rbp
  int v20; // r12d
  int v21; // r15d
  __int64 v22; // rbp
  char v23; // al
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  unsigned int v27; // [rsp+C8h] [rbp+20h]

  if ( ((__int64)*(&WPP_MAIN_CB.Reserved + 1) & 0x400000000400000LL) == 0 )
    return;
  LOBYTE(v4) = 1;
  if ( (unsigned __int8)(byte_14029ADC8 - 1) <= 2u
    || (qword_14029ADB0 & 0x400000000400000LL) == 0
    || (qword_14029ADB8 & 0x400000000400000LL) != qword_14029ADB8 )
  {
    return;
  }
  LOBYTE(v5) = 0;
  if ( a2 )
  {
    if ( a3 && *(_DWORD *)(a3 + 36) )
      LOBYTE(v4) = 3;
  }
  else
  {
    v4 = a3 != 0 ? 2 : 0;
  }
  if ( (unsigned int)Feature_AllowWM_SYSCOMMANDSC_MonitorPowerETWPayload__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( (Microsoft_Windows_Win32kEnableBits & 0x800) == 0 )
      return;
    v6 = 112;
    ThreadId = (unsigned __int8)PsGetThreadId(**(PETHREAD **)(a1 + 40));
    v27 = *(_DWORD *)(a1 + 80);
    v8 = *(unsigned int *)(a1 + 104);
    v9 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 464LL) + 56LL);
    if ( (_DWORD)v8 == 274 && *(_QWORD *)(a1 + 88) == 61808LL )
    {
      v10 = 18;
    }
    else
    {
      v10 = 0;
      if ( (_DWORD)v8 != 274 || *(_QWORD *)(a1 + 88) != 61808LL )
      {
        LOBYTE(v11) = 0;
        if ( (_DWORD)v8 != 274 || *(_QWORD *)(a1 + 88) != 61808LL )
          v6 = 0;
        goto LABEL_21;
      }
    }
    v11 = *(_QWORD *)(a1 + 96);
LABEL_21:
    v12 = *(__int64 **)(a1 + 112);
    if ( v12 )
      v5 = *v12;
    CallbackCount = GetCallbackCount(v8);
    McTemplateK0cppppqqqqq_EtwWriteTransfer(v27, v14, v15, CallbackCount, a1, v5, v6, v11, v10, v27, v4, v9, ThreadId);
    return;
  }
  if ( (Microsoft_Windows_Win32kEnableBits & 0x800) != 0 )
  {
    v16 = (unsigned __int8)PsGetThreadId(**(PETHREAD **)(a1 + 40));
    v17 = *(_QWORD *)(a1 + 40);
    v18 = v16;
    v19 = *(__int64 **)(a1 + 112);
    v20 = *(_DWORD *)(a1 + 80);
    v21 = *(_DWORD *)(*(_QWORD *)(v17 + 464) + 56LL);
    if ( v19 )
      v22 = *v19;
    else
      LOBYTE(v22) = 0;
    v23 = GetCallbackCount(v17);
    McTemplateK0cppppqqqqq_EtwWriteTransfer(v25, v24, v26, v23, a1, v22, 0, 0, 0, v20, v4, v21, v18);
  }
}
