/*
 * XREFs of EtwTraceRetrievePostMessage @ 0x14016A590
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0cppppqqq_EtwWriteTransfer @ 0x1400332AC (McTemplateK0cppppqqq_EtwWriteTransfer.c)
 *     Feature_AllowWM_SYSCOMMANDSC_MonitorPowerETWPayload__private_IsEnabledDeviceUsageNoInline @ 0x1401B5440 (Feature_AllowWM_SYSCOMMANDSC_MonitorPowerETWPayload__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall EtwTraceRetrievePostMessage(__int64 a1, char a2)
{
  __int64 result; // rax
  int v5; // eax
  char v6; // si
  int v7; // r12d
  __int64 v8; // rdi
  char v9; // bp
  __int64 v10; // r14
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  char v14; // r9
  int v15; // edi
  __int64 v16; // rsi
  __int64 *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  char v20; // r9

  result = Feature_AllowWM_SYSCOMMANDSC_MonitorPowerETWPayload__private_IsEnabledDeviceUsageNoInline();
  if ( (_DWORD)result )
  {
    if ( (Microsoft_Windows_Win32kEnableBits & 0x800) != 0 )
    {
      v5 = *(_DWORD *)(a1 + 24);
      v6 = 112;
      v7 = *(_DWORD *)(a1 + 48);
      if ( v5 == 274 && *(_QWORD *)(a1 + 32) == 61808LL )
      {
        v8 = *(_QWORD *)(a1 + 40);
        v9 = 18;
      }
      else
      {
        LOBYTE(v8) = 0;
        v9 = 0;
        if ( v5 == 274 && *(_QWORD *)(a1 + 32) == 61808LL )
          v8 = *(_QWORD *)(a1 + 40);
        else
          v6 = 0;
      }
      v10 = *(_QWORD *)(a1 + 16);
      CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread();
      if ( CurrentThreadWin32Thread && (v12 = *CurrentThreadWin32Thread) != 0 )
        v14 = *(_BYTE *)(v12 + 1456);
      else
        v14 = -1;
      return McTemplateK0cppppqqq_EtwWriteTransfer(
               v12,
               (__int64)&RetrievePostMessage,
               v13,
               v14,
               a1,
               v10,
               v6,
               v8,
               v9,
               v7,
               a2);
    }
  }
  else if ( (Microsoft_Windows_Win32kEnableBits & 0x800) != 0 )
  {
    v15 = *(_DWORD *)(a1 + 48);
    v16 = *(_QWORD *)(a1 + 16);
    v17 = (__int64 *)PsGetCurrentThreadWin32Thread();
    if ( v17 && (v18 = *v17) != 0 )
      v20 = *(_BYTE *)(v18 + 1456);
    else
      v20 = -1;
    return McTemplateK0cppppqqq_EtwWriteTransfer(
             v18,
             (__int64)&RetrievePostMessage,
             v19,
             v20,
             a1,
             v16,
             0,
             0,
             0,
             v15,
             a2);
  }
  return result;
}
