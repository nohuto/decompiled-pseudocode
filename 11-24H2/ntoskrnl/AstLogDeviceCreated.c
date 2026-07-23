/*
 * XREFs of AstLogDeviceCreated @ 0x1408AC7C4
 * Callers:
 *     IoCreateDevice @ 0x1408ABEC0 (IoCreateDevice.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     AstIsRecording @ 0x1408AC9F0 (AstIsRecording.c)
 *     ObQueryNameStringMode @ 0x1409524C0 (ObQueryNameStringMode.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     ExAllocatePool3 @ 0x140B76270 (ExAllocatePool3.c)
 */

void __fastcall AstLogDeviceCreated(__int64 a1, int a2, int a3)
{
  int v6; // ecx
  int NameStringMode; // eax
  char v8; // di
  __int64 Pool3; // rax
  UNICODE_STRING *v10; // rbx
  const WCHAR *v11; // rdx
  unsigned int v12; // [rsp+30h] [rbp-99h] BYREF
  int v13; // [rsp+34h] [rbp-95h] BYREF
  int v14; // [rsp+38h] [rbp-91h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-89h] BYREF
  __int64 v16; // [rsp+50h] [rbp-79h]
  __int64 v17; // [rsp+58h] [rbp-71h]
  __int64 v18; // [rsp+60h] [rbp-69h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+70h] [rbp-59h] BYREF
  __int64 *v20; // [rsp+90h] [rbp-39h]
  __int64 v21; // [rsp+98h] [rbp-31h]
  _DWORD *v22; // [rsp+A0h] [rbp-29h]
  __int64 v23; // [rsp+A8h] [rbp-21h]
  wchar_t *Buffer; // [rsp+B0h] [rbp-19h]
  _DWORD v25[2]; // [rsp+B8h] [rbp-11h] BYREF
  int *v26; // [rsp+C0h] [rbp-9h]
  __int64 v27; // [rsp+C8h] [rbp-1h]
  int *v28; // [rsp+D0h] [rbp+7h]
  __int64 v29; // [rsp+D8h] [rbp+Fh]
  UNICODE_STRING *p_DestinationString; // [rsp+E0h] [rbp+17h]
  __int64 v31; // [rsp+E8h] [rbp+1Fh]

  DestinationString = 0LL;
  v12 = 0;
  HIDWORD(v17) = 0;
  if ( !(unsigned __int8)AstIsRecording() )
    return;
  NameStringMode = ObQueryNameStringMode(v6, 0, 0, (unsigned int)&v12, 0);
  if ( v12 <= 0x10 || NameStringMode != -1073741820 )
    return;
  v8 = 1;
  v17 = 0LL;
  v16 = 1LL;
  Pool3 = ExAllocatePool3(0x100uLL, 1);
  v10 = (UNICODE_STRING *)Pool3;
  if ( !Pool3 )
  {
    v11 = L"Storage allocation failed";
LABEL_16:
    RtlInitUnicodeString(&DestinationString, v11);
    goto LABEL_8;
  }
  if ( (int)ObQueryNameStringMode(a1, Pool3, v12, (unsigned int)&v12, 0) < 0 )
  {
    v11 = L"Query failed";
    goto LABEL_16;
  }
  DestinationString = *v10;
LABEL_8:
  if ( (unsigned int)dword_140E06EF0 > 5 )
  {
    if ( (qword_140E06F00 & 0x200000000000LL) == 0 || (qword_140E06F08 & 0x200000000000LL) != qword_140E06F08 )
      v8 = 0;
    if ( v8 )
    {
      v23 = 2LL;
      v21 = 8LL;
      v18 = 0x80000000LL;
      v31 = 8LL;
      v20 = &v18;
      v25[1] = 0;
      v22 = v25;
      Buffer = DestinationString.Buffer;
      v25[0] = DestinationString.Length;
      v26 = &v13;
      v28 = &v14;
      p_DestinationString = &DestinationString;
      v13 = a2;
      v27 = 4LL;
      v14 = a3;
      v29 = 4LL;
      *(_QWORD *)&DestinationString.Length = a1;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E06EF0,
        (unsigned __int8 *)word_1400467E2,
        0LL,
        0LL,
        8u,
        &v19);
    }
  }
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
}
