/*
 * XREFs of sub_140008B20 @ 0x140008B20
 * Callers:
 *     sub_140006AB0 @ 0x140006AB0 (sub_140006AB0.c)
 * Callees:
 *     __security_check_cookie @ 0x140010230 (__security_check_cookie.c)
 */

char __fastcall sub_140008B20(__int64 a1, int a2, __int64 a3)
{
  NTSTATUS ProcessorNumberFromIndex; // eax
  BYTE Number; // [rsp+38h] [rbp-9h] BYREF
  WORD Group; // [rsp+3Ch] [rbp-5h] BYREF
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+40h] [rbp-1h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp+7h] BYREF
  BYTE *p_Number; // [rsp+58h] [rbp+17h]
  int v11; // [rsp+60h] [rbp+1Fh]
  int v12; // [rsp+64h] [rbp+23h]
  int *v13; // [rsp+68h] [rbp+27h]
  int v14; // [rsp+70h] [rbp+2Fh]
  int v15; // [rsp+74h] [rbp+33h]
  __int64 *v16; // [rsp+78h] [rbp+37h]
  int v17; // [rsp+80h] [rbp+3Fh]
  int v18; // [rsp+84h] [rbp+43h]
  int v19; // [rsp+B0h] [rbp+6Fh] BYREF
  __int64 v20; // [rsp+B8h] [rbp+77h] BYREF

  v20 = a3;
  v19 = a2;
  ProcNumber = 0;
  LOBYTE(ProcessorNumberFromIndex) = EtwEventEnabled((REGHANDLE)DeviceObject.Queue.ListEntry.Blink, &stru_1400142F0);
  if ( (_BYTE)ProcessorNumberFromIndex )
  {
    ProcessorNumberFromIndex = KeGetProcessorNumberFromIndex(*(_DWORD *)(a1 + 56), &ProcNumber);
    if ( ProcessorNumberFromIndex >= 0 )
    {
      UserData.Reserved = 0;
      v12 = 0;
      v15 = 0;
      v18 = 0;
      Group = ProcNumber.Group;
      Number = ProcNumber.Number;
      UserData.Ptr = (ULONGLONG)&Group;
      p_Number = &Number;
      v13 = &v19;
      v16 = &v20;
      UserData.Size = 2;
      v11 = 1;
      v14 = 4;
      v17 = 8;
      LOBYTE(ProcessorNumberFromIndex) = EtwWrite(
                                           (REGHANDLE)DeviceObject.Queue.ListEntry.Blink,
                                           &stru_1400142F0,
                                           0LL,
                                           4u,
                                           &UserData);
    }
  }
  return ProcessorNumberFromIndex;
}
