/*
 * XREFs of AstLogDeviceSDDLUpdated @ 0x1408AE644
 * Callers:
 *     IopGetSetSecurityObject @ 0x14087DA20 (IopGetSetSecurityObject.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     SeConvertSecurityDescriptorToStringSecurityDescriptor @ 0x140491960 (SeConvertSecurityDescriptorToStringSecurityDescriptor.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     AstIsRecording @ 0x1408AC9F0 (AstIsRecording.c)
 *     ObQuerySecurityObject @ 0x1408AEA1C (ObQuerySecurityObject.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     ExAllocatePool3 @ 0x140B76270 (ExAllocatePool3.c)
 */

void __fastcall AstLogDeviceSDDLUpdated(__int64 a1)
{
  int v2; // ecx
  WCHAR *v3; // rsi
  void *Pool3; // rbx
  char v5; // di
  const WCHAR *v6; // rdx
  __int64 v7; // [rsp+30h] [rbp-59h] BYREF
  PCWSTR SourceString; // [rsp+38h] [rbp-51h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-49h] BYREF
  __int64 v10; // [rsp+50h] [rbp-39h]
  int v11; // [rsp+58h] [rbp-31h]
  int v12; // [rsp+5Ch] [rbp-2Dh]
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+60h] [rbp-29h] BYREF
  PCWSTR *p_SourceString; // [rsp+80h] [rbp-9h]
  int v15; // [rsp+88h] [rbp-1h]
  int v16; // [rsp+8Ch] [rbp+3h]
  __int64 *v17; // [rsp+90h] [rbp+7h]
  int v18; // [rsp+98h] [rbp+Fh]
  int v19; // [rsp+9Ch] [rbp+13h]
  _DWORD *v20; // [rsp+A0h] [rbp+17h]
  int v21; // [rsp+A8h] [rbp+1Fh]
  int v22; // [rsp+ACh] [rbp+23h]
  wchar_t *Buffer; // [rsp+B0h] [rbp+27h]
  _DWORD v24[2]; // [rsp+B8h] [rbp+2Fh] BYREF

  LODWORD(v7) = 0;
  DestinationString = 0LL;
  if ( AstIsRecording() )
  {
    v3 = 0LL;
    SourceString = 0LL;
    Pool3 = 0LL;
    v5 = 1;
    if ( (unsigned int)ObQuerySecurityObject(v2, -1, 0, 0, (__int64)&v7) == -1073741789 )
    {
      v12 = 0;
      v11 = 0;
      v10 = 1LL;
      Pool3 = (void *)ExAllocatePool3(0x100uLL, 1);
      if ( Pool3 )
      {
        if ( (int)ObQuerySecurityObject(a1, -1, (_DWORD)Pool3, v7, (__int64)&v7) < 0 )
        {
          v6 = L"Query failed";
        }
        else
        {
          SeConvertSecurityDescriptorToStringSecurityDescriptor((__int64)Pool3, 1LL, 0xFFFFFFFFLL, &SourceString, 0LL);
          v3 = (WCHAR *)SourceString;
          v6 = SourceString;
        }
      }
      else
      {
        v6 = L"Storage allocation failed";
      }
    }
    else
    {
      v6 = L"Length query failed";
    }
    RtlInitUnicodeString(&DestinationString, v6);
    if ( (unsigned int)dword_140E06EF0 > 5 )
    {
      if ( (qword_140E06F00 & 0x200000000000LL) == 0 || (qword_140E06F08 & 0x200000000000LL) != qword_140E06F08 )
        v5 = 0;
      if ( v5 )
      {
        v16 = 0;
        v19 = 0;
        v22 = 0;
        v24[1] = 0;
        SourceString = (PCWSTR)0x80000000LL;
        v15 = 8;
        p_SourceString = &SourceString;
        v17 = &v7;
        v20 = v24;
        Buffer = DestinationString.Buffer;
        v24[0] = DestinationString.Length;
        v18 = 8;
        v7 = a1;
        v21 = 2;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140E06EF0,
          (unsigned __int8 *)&word_14004677E,
          0LL,
          0LL,
          6u,
          &v13);
      }
    }
    if ( Pool3 )
      ExFreePoolWithTag(Pool3, 0);
    if ( v3 )
      ExFreePoolWithTag(v3, 0);
  }
}
