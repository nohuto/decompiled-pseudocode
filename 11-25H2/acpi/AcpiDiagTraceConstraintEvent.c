/*
 * XREFs of AcpiDiagTraceConstraintEvent @ 0x140039A4C
 * Callers:
 *     AcpiDiagTraceActiveCoolingConstraint @ 0x140039278 (AcpiDiagTraceActiveCoolingConstraint.c)
 *     AcpiDiagTracePassiveCoolingConstraint @ 0x140039F70 (AcpiDiagTracePassiveCoolingConstraint.c)
 * Callees:
 *     ACPIAmliBuildObjectPathnameUnicode @ 0x1400394F0 (ACPIAmliBuildObjectPathnameUnicode.c)
 */

void __fastcall AcpiDiagTraceConstraintEvent(
        __int64 a1,
        __int64 a2,
        const EVENT_DESCRIPTOR *a3,
        int a4,
        PEVENT_DATA_DESCRIPTOR a5)
{
  __int64 v8; // rcx
  PEVENT_DATA_DESCRIPTOR UserData; // rcx
  int v10; // edx
  wchar_t *Buffer; // rax
  wchar_t *v12; // rax
  __int16 v13; // [rsp+30h] [rbp-30h] BYREF
  struct _UNICODE_STRING v14; // [rsp+38h] [rbp-28h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-18h] BYREF
  unsigned __int16 v16; // [rsp+98h] [rbp+38h] BYREF
  __int16 v17; // [rsp+9Ah] [rbp+3Ah]

  v17 = HIWORD(a4);
  v13 = 0;
  v16 = 0;
  DestinationString = 0LL;
  v14 = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  RtlInitUnicodeString(&v14, 0LL);
  if ( WPP_MAIN_CB.Queue.Wcb.DeviceContext )
  {
    if ( EtwEventEnabled((REGHANDLE)WPP_MAIN_CB.Queue.Wcb.DeviceContext, a3) )
    {
      if ( (int)ACPIAmliBuildObjectPathnameUnicode(*(_QWORD *)(a1 + 760), (__int64)&v14) >= 0 )
      {
        v8 = *(_QWORD *)(a2 + 760);
        v16 = v14.Length >> 1;
        if ( (int)ACPIAmliBuildObjectPathnameUnicode(v8, (__int64)&DestinationString) >= 0 )
        {
          UserData = a5;
          v10 = DestinationString.Length >> 1;
          a5->Ptr = (unsigned __int64)&v16;
          Buffer = v14.Buffer;
          *(_QWORD *)&UserData->Size = 2LL;
          UserData[1].Ptr = (unsigned __int64)Buffer;
          LODWORD(Buffer) = v16;
          UserData[1].Reserved = 0;
          UserData[1].Size = 2 * (_DWORD)Buffer;
          UserData[2].Ptr = (unsigned __int64)&v13;
          v12 = DestinationString.Buffer;
          *(_QWORD *)&UserData[2].Size = 2LL;
          v13 = v10;
          UserData[3].Size = 2 * v10;
          UserData[3].Ptr = (unsigned __int64)v12;
          UserData[3].Reserved = 0;
          EtwWrite((REGHANDLE)WPP_MAIN_CB.Queue.Wcb.DeviceContext, a3, 0LL, 5u, UserData);
        }
      }
    }
  }
  if ( v14.Buffer )
    ExFreePoolWithTag(v14.Buffer, 0);
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
}
