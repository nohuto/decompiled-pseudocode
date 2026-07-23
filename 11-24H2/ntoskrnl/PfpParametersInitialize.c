/*
 * XREFs of PfpParametersInitialize @ 0x140C2EE60
 * Callers:
 *     PfInitializeSuperfetch @ 0x140C2EA3C (PfInitializeSuperfetch.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     ZwCreateKey @ 0x1406A7750 (ZwCreateKey.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PfSnParametersRead @ 0x140745FC0 (PfSnParametersRead.c)
 *     PfpGetParameter @ 0x1407464D0 (PfpGetParameter.c)
 *     PfpParametersRead @ 0x1407465C0 (PfpParametersRead.c)
 *     PfpSetBaseTime @ 0x14074698C (PfpSetBaseTime.c)
 *     PfpSetParameter @ 0x140746A4C (PfpSetParameter.c)
 *     PfpCreateEvent @ 0x140746AB0 (PfpCreateEvent.c)
 *     PfSnParametersSetDefaults @ 0x140C2ED7C (PfSnParametersSetDefaults.c)
 */

NTSTATUS __fastcall PfpParametersInitialize(__int64 a1)
{
  HANDLE *v2; // rsi
  NTSTATUS result; // eax
  HANDLE v4; // rcx
  _DWORD *v5; // rdi
  __int64 v6; // r8
  ULONG v7; // eax
  HANDLE v8; // rcx
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-9h] BYREF
  UNICODE_STRING v10; // [rsp+50h] [rbp+7h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+17h] BYREF
  ULONG v12; // [rsp+B0h] [rbp+67h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v10 = 0LL;
  DestinationString = 0LL;
  memset_0((void *)a1, 0, 0x220uLL);
  *(_QWORD *)(a1 + 56) = a1;
  *(_QWORD *)(a1 + 48) = PfpParametersWatcher;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_DWORD *)(a1 + 68) = 0x80000000;
  *(_DWORD *)(a1 + 80) = 16;
  *(_DWORD *)(a1 + 76) = 64;
  *(_DWORD *)(a1 + 84) = 5000;
  *(_DWORD *)(a1 + 88) = 10000;
  *(_DWORD *)(a1 + 92) = 10000;
  PfSnParametersSetDefaults(a1);
  RtlInitUnicodeString(&DestinationString, L"\\KernelObjects\\SuperfetchParametersChanged");
  PfpCreateEvent((__int64)&DestinationString, 1LL, a1);
  RtlInitUnicodeString(
    &v10,
    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\Memory Management\\PrefetchParameters");
  v2 = (HANDLE *)(a1 + 8);
  ObjectAttributes.ObjectName = &v10;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwCreateKey((PHANDLE)(a1 + 8), 0xF003Fu, &ObjectAttributes, 0, 0LL, 0, 0LL);
  if ( result < 0 )
  {
    *v2 = 0LL;
  }
  else
  {
    PfpParametersRead(a1);
    PfSnParametersRead(a1);
    v4 = *v2;
    v12 = 4;
    v5 = (_DWORD *)(a1 + 72);
    if ( PfpGetParameter(v4, L"BootId", 4, (void *)(a1 + 72), &v12) < 0 )
      *v5 = 0;
    v7 = v12;
    v8 = *v2;
    ++*v5;
    PfpSetParameter(v8, L"BootId", v6, (void *)(a1 + 72), v7);
    return PfpSetBaseTime(*v2, (_DWORD *)(a1 + 540));
  }
  return result;
}
