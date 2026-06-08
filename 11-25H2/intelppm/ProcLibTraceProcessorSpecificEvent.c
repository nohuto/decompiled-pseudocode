/*
 * XREFs of ProcLibTraceProcessorSpecificEvent @ 0x140003A48
 * Callers:
 *     ProcLibTracePccCapChange @ 0x140003A10 (ProcLibTracePccCapChange.c)
 *     PccInitiateExecuteCallback @ 0x14000F920 (PccInitiateExecuteCallback.c)
 *     AcpiTStateNotifyWorker @ 0x140033BF0 (AcpiTStateNotifyWorker.c)
 *     AcpiCStateNotifyWorker @ 0x14003E9A0 (AcpiCStateNotifyWorker.c)
 *     ProcLibDeviceStart @ 0x1400408BC (ProcLibDeviceStart.c)
 *     AcpiPStateNotifyWorker @ 0x140044660 (AcpiPStateNotifyWorker.c)
 *     CpcHighestNotifyWorker @ 0x1400454CC (CpcHighestNotifyWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x14000FEF0 (__security_check_cookie.c)
 */

char __fastcall ProcLibTraceProcessorSpecificEvent(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        const EVENT_DESCRIPTOR *a3,
        int a4,
        __int64 a5)
{
  ULONG v5; // edi
  int *v7; // rax
  int v11; // [rsp+30h] [rbp-30h] BYREF
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+34h] [rbp-2Ch] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-28h] BYREF
  __int64 v14; // [rsp+48h] [rbp-18h]
  int v15; // [rsp+50h] [rbp-10h]
  int v16; // [rsp+54h] [rbp-Ch]

  v11 = 0;
  v5 = 1;
  ProcNumber = 0;
  LODWORD(v7) = *(_DWORD *)(a1 + 80);
  if ( (_DWORD)v7 == 1 )
  {
    v11 = *(_DWORD *)(a1 + 72);
    UserData.Size = 4;
  }
  else
  {
    if ( (_DWORD)v7 == 2 )
      return (char)v7;
    LODWORD(v7) = KeGetProcessorNumberFromIndex(*(ULONG *)(a1 + 56), &ProcNumber);
    if ( (int)v7 < 0 )
      return (char)v7;
    a3 = a2;
    LOWORD(v11) = ProcNumber.Group;
    BYTE2(v11) = ProcNumber.Number;
    UserData.Size = 3;
  }
  UserData.Reserved = 0;
  v7 = &v11;
  UserData.Ptr = (unsigned __int64)&v11;
  if ( a3 )
  {
    LOBYTE(v7) = EtwEventEnabled((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Blink, a3);
    if ( (_BYTE)v7 )
    {
      if ( a5 && a4 )
      {
        v16 = 0;
        v5 = 2;
        v14 = a5;
        v15 = a4;
      }
      LOBYTE(v7) = EtwWrite((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Blink, a3, 0LL, v5, &UserData);
    }
  }
  return (char)v7;
}
