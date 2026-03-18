/*
 * XREFs of PiProcessDriverInstance @ 0x1409C9F40
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchPrintfExW @ 0x140424CB0 (RtlStringCchPrintfExW.c)
 *     McTemplateK0zzzd_EtwWriteTransfer @ 0x1405A8674 (McTemplateK0zzzd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     ZwSetValueKey @ 0x1406A7010 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x1406A7FF0 (ZwDeleteValueKey.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     PiFindDevInstMatch @ 0x1409C9A9C (PiFindDevInstMatch.c)
 *     PipOpenServiceEnumKeys @ 0x1409CAB04 (PipOpenServiceEnumKeys.c)
 *     PiRearrangeDeviceInstances @ 0x140A708CC (PiRearrangeDeviceInstances.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePool @ 0x140B72CB0 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiProcessDriverInstance(const UNICODE_STRING *a1, __int64 a2, const wchar_t *a3, char *a4)
{
  int v8; // eax
  __int64 v9; // r8
  int DevInstMatch; // ebx
  NTSTRSAFE_PWSTR v11; // rdi
  PVOID v12; // rcx
  char v13; // al
  wchar_t *Buffer; // r15
  wchar_t *v15; // rbx
  size_t Length; // r14
  size_t v17; // rsi
  signed __int64 v18; // rax
  wchar_t *Pool2; // rax
  unsigned int Data; // [rsp+40h] [rbp-39h] BYREF
  UNICODE_STRING ValueName; // [rsp+48h] [rbp-31h] BYREF
  wchar_t v23[4]; // [rsp+58h] [rbp-21h] BYREF
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+60h] [rbp-19h] BYREF
  PVOID P[2]; // [rsp+68h] [rbp-11h] BYREF
  wchar_t pszDest[12]; // [rsp+78h] [rbp-1h] BYREF

  Data = 0;
  *(_DWORD *)v23 = 0;
  ppszDestEnd = 0LL;
  *(_OWORD *)P = 0LL;
  ValueName = 0LL;
  v8 = PipOpenServiceEnumKeys(a2, 983103LL, 0LL, &ppszDestEnd, 1);
  DevInstMatch = v8;
  if ( v8 >= 0 )
  {
    v11 = ppszDestEnd;
    DevInstMatch = PiFindDevInstMatch(ppszDestEnd, a1, &Data, (__int64)P, v23);
    if ( DevInstMatch < 0 )
    {
LABEL_15:
      ZwClose(v11);
      return (unsigned int)DevInstMatch;
    }
    v12 = P[1];
    v13 = *a4;
    if ( P[1] )
    {
      if ( v13 )
      {
LABEL_12:
        if ( v12 )
        {
          ExFreePool(v12);
          *(_OWORD *)P = 0LL;
        }
        goto LABEL_14;
      }
      ZwDeleteValueKey(v11, (PUNICODE_STRING)P);
      if ( --Data )
        PiRearrangeDeviceInstances(v11);
    }
    else
    {
      if ( !v13 )
      {
LABEL_14:
        DevInstMatch = 0;
        goto LABEL_15;
      }
      Buffer = a1->Buffer;
      v15 = 0LL;
      Length = a1->Length;
      v17 = Length >> 1;
      if ( Buffer[(Length >> 1) - 1] )
      {
        Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL);
        v15 = Pool2;
        if ( Pool2 )
        {
          memmove(Pool2, Buffer, Length);
          LODWORD(Length) = Length + 2;
          v15[v17] = 0;
          Buffer = v15;
        }
      }
      ppszDestEnd = pszDest;
      RtlStringCchPrintfExW(pszDest, 0xAuLL, &ppszDestEnd, 0LL, 0, L"%u", Data);
      v18 = ppszDestEnd - pszDest;
      ValueName.MaximumLength = 20;
      if ( (_DWORD)v18 == -1 )
        ValueName.Length = 20;
      else
        ValueName.Length = 2 * v18;
      ValueName.Buffer = pszDest;
      ZwSetValueKey(v11, &ValueName, 0, 1u, Buffer, Length);
      if ( v15 )
        ExFreePoolWithTag(v15, 0);
      ++Data;
    }
    *(_DWORD *)&ValueName.Length = 786442;
    ValueName.Buffer = L"Count";
    ZwSetValueKey(v11, &ValueName, 0, 4u, &Data, 4u);
    ValueName.Buffer = L"NextInstance";
    *(_DWORD *)&ValueName.Length = 1703960;
    ZwSetValueKey(v11, &ValueName, 0, 4u, &Data, 4u);
    v12 = P[1];
    goto LABEL_12;
  }
  if ( *a4 && (byte_140EEFD23 & 0x40) != 0 )
    McTemplateK0zzzd_EtwWriteTransfer(
      *(_QWORD *)(a2 + 8),
      (const EVENT_DESCRIPTOR *)KMPnPEvt_ServiceOpenFailure,
      v9,
      a1->Buffer,
      *(const wchar_t **)(a2 + 8),
      a3,
      v8);
  return (unsigned int)DevInstMatch;
}
