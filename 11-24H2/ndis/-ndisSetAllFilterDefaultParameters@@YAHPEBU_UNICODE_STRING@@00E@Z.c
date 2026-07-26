/*
 * XREFs of ?ndisSetAllFilterDefaultParameters@@YAHPEBU_UNICODE_STRING@@00E@Z @ 0x14009A280
 * Callers:
 *     ?ndisCreateFilterAdapterRegistry@@YAHPEBU_UNICODE_STRING@@PEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x14002A980 (-ndisCreateFilterAdapterRegistry@@YAHPEBU_UNICODE_STRING@@PEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisCreateFilterInstanceRegistry@@YAHPEBU_UNICODE_STRING@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14008BA00 (-ndisCreateFilterInstanceRegistry@@YAHPEBU_UNICODE_STRING@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MIN.c)
 *     ?ndisCreateFilterDriverRegistry@@YAHPEBU_UNICODE_STRING@@E@Z @ 0x14008C660 (-ndisCreateFilterDriverRegistry@@YAHPEBU_UNICODE_STRING@@E@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qqq @ 0x14003E6D0 (WPP_RECORDER_SF_qqq.c)
 *     WPP_RECORDER_SF_qqqL @ 0x140045670 (WPP_RECORDER_SF_qqqL.c)
 *     ?ndisSetFilterDefaultParameter@@YAHPEBU_UNICODE_STRING@@PEAX0E@Z @ 0x14009A558 (-ndisSetFilterDefaultParameter@@YAHPEBU_UNICODE_STRING@@PEAX0E@Z.c)
 *     memset @ 0x1400E7500 (memset.c)
 */

__int64 __fastcall ndisSetAllFilterDefaultParameters(
        const struct _UNICODE_STRING *a1,
        const struct _UNICODE_STRING *a2,
        const struct _UNICODE_STRING *a3,
        unsigned __int8 a4)
{
  ULONG v4; // esi
  unsigned int v9; // ebx
  unsigned __int16 *Pool2; // rdi
  int v11; // edx
  NTSTATUS v12; // eax
  _UNICODE_STRING Destination; // [rsp+50h] [rbp-39h] BYREF
  struct _UNICODE_STRING v15; // [rsp+60h] [rbp-29h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-19h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-9h] BYREF
  ULONG ResultLength; // [rsp+F0h] [rbp+67h] BYREF
  HANDLE KeyHandle; // [rsp+100h] [rbp+77h] BYREF

  v4 = 0;
  KeyHandle = 0LL;
  *(_DWORD *)(&Destination.MaximumLength + 1) = 0;
  Destination.Length = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v9 = 0;
  ResultLength = 0;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  Pool2 = 0LL;
  *(_QWORD *)&v15.Length = 0LL;
  v15.Buffer = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x5Eu,
      (struct _GUID *)&WPP_eb6c2b45b1cb37f84b883a16c84334bd_Traceguids,
      (char)a1,
      (char)a2,
      a3);
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\");
  Destination.MaximumLength = DestinationString.Length + a3->Length + 2 + a1->Length;
  Destination.Buffer = (wchar_t *)ExAllocatePool2(64LL, Destination.MaximumLength, 538985550LL);
  if ( !Destination.Buffer )
    goto LABEL_4;
  RtlCopyUnicodeString(&Destination, &DestinationString);
  RtlAppendUnicodeStringToString(&Destination, a1);
  RtlAppendUnicodeStringToString(&Destination, a3);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &Destination;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x80000000, &ObjectAttributes) )
  {
    KeyHandle = 0LL;
    goto LABEL_15;
  }
  Pool2 = (unsigned __int16 *)ExAllocatePool2(66LL, 536LL, 538985550LL);
  if ( Pool2 )
  {
    while ( 1 )
    {
      memset(Pool2, 0, 0x218uLL);
      ResultLength = 0;
      v12 = ZwEnumerateKey(KeyHandle, v4, KeyBasicInformation, Pool2, 0x216u, &ResultLength);
      if ( v12 == -2147483622 )
        break;
      if ( v12 )
      {
        v9 = -1073741823;
        break;
      }
      v15.Length = Pool2[6];
      v15.MaximumLength = v15.Length + 2;
      v15.Buffer = Pool2 + 8;
      v9 = ndisSetFilterDefaultParameter(a2, KeyHandle, &v15, a4);
      if ( v9 )
        break;
      ++v4;
    }
  }
  else
  {
LABEL_4:
    v9 = -1073741670;
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
LABEL_15:
  if ( Destination.Buffer )
    ExFreePoolWithTag(Destination.Buffer, 0);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v11,
      1u,
      0x5Fu,
      (struct _GUID *)&WPP_eb6c2b45b1cb37f84b883a16c84334bd_Traceguids,
      (char)a1,
      (char)a2,
      (char)a3,
      v9);
  return v9;
}
