/*
 * XREFs of IopErrorLogThread @ 0x140A3FC00
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     RtlStringCchCopyNW @ 0x14045EEEC (RtlStringCchCopyNW.c)
 *     IopErrorLogGetEntry @ 0x1404A2F18 (IopErrorLogGetEntry.c)
 *     IopErrorLogRequeueEntry @ 0x1404C801C (IopErrorLogRequeueEntry.c)
 *     _wcsicmp @ 0x1404FBC70 (_wcsicmp.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ObQueryNameStringMode @ 0x1409524C0 (ObQueryNameStringMode.c)
 *     EtwWriteErrorLogEntry @ 0x140A3FFE4 (EtwWriteErrorLogEntry.c)
 *     IopErrorLogQueueRequest @ 0x140A40394 (IopErrorLogQueueRequest.c)
 *     EtwQueryTraceHandleByLoggerName @ 0x140A866D8 (EtwQueryTraceHandleByLoggerName.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

_QWORD *IopErrorLogThread()
{
  _QWORD *result; // rax
  _QWORD *v1; // rsi
  __int64 v2; // r12
  unsigned __int16 Length; // di
  wchar_t *Buffer; // rbx
  __int16 v5; // ax
  const WCHAR *v6; // rdx
  UNICODE_STRING *v7; // r14
  char v8; // r15
  char *v9; // rcx
  int v10; // ecx
  void *v11; // rcx
  int v12; // eax
  __int64 Pool2; // rax
  __int16 v14; // r9
  unsigned int DestinationString; // [rsp+48h] [rbp-C0h] BYREF
  __int16 DestinationString_4; // [rsp+4Ch] [rbp-BCh]
  UNICODE_STRING DestinationString_8; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v18; // [rsp+60h] [rbp-A8h]
  _QWORD *v19; // [rsp+68h] [rbp-A0h]
  UNICODE_STRING v20; // [rsp+70h] [rbp-98h] BYREF
  _QWORD *v21; // [rsp+80h] [rbp-88h]
  UNICODE_STRING v22; // [rsp+88h] [rbp-80h] BYREF
  UNICODE_STRING v23; // [rsp+98h] [rbp-70h] BYREF
  _BYTE P[272]; // [rsp+1A8h] [rbp+A0h] BYREF
  wchar_t pszDest[256]; // [rsp+2B8h] [rbp+1B0h] BYREF
  wchar_t v26[256]; // [rsp+4B8h] [rbp+3B0h] BYREF

  DestinationString_8 = 0LL;
  DestinationString_4 = 0;
  v20 = 0LL;
  v19 = 0LL;
  v22 = 0LL;
  if ( ErrorLogSessionOpened )
  {
    while ( 1 )
    {
LABEL_2:
      DestinationString = 0;
      result = (_QWORD *)IopErrorLogGetEntry();
      v21 = result;
      if ( !result )
        return result;
      v1 = result - 1;
      v2 = result[3];
      LODWORD(v18) = *((unsigned __int16 *)result - 3) - 48;
      if ( !v2 )
        break;
      RtlInitUnicodeString(&DestinationString_8, 0LL);
      if ( *(_QWORD *)(v2 + 64) )
        DestinationString_8 = *(UNICODE_STRING *)(v2 + 56);
      Length = DestinationString_8.Length;
      if ( DestinationString_8.Length )
        goto LABEL_7;
      DestinationString = 0;
      if ( (int)ObQueryNameStringMode((char *)v2, (__int64)&v23, 0x110u, &DestinationString, 0) < 0
        || !DestinationString )
      {
        v6 = &word_140AEDAC0;
        goto LABEL_14;
      }
      DestinationString_8 = v23;
LABEL_15:
      Length = DestinationString_8.Length;
      if ( !DestinationString_8.Length )
      {
        Buffer = DestinationString_8.Buffer;
        goto LABEL_17;
      }
LABEL_7:
      Buffer = &DestinationString_8.Buffer[((unsigned __int64)Length >> 1) - 1];
      if ( *Buffer == 92 )
        goto LABEL_11;
      do
      {
        if ( Buffer == DestinationString_8.Buffer )
          break;
        --Buffer;
      }
      while ( *Buffer != 92 );
      if ( *Buffer == 92 )
LABEL_11:
        ++Buffer;
      v5 = LOWORD(DestinationString_8.Buffer) - (_WORD)Buffer;
      DestinationString_8.Buffer = Buffer;
      Length += v5;
      DestinationString_8.Length = Length;
LABEL_17:
      v7 = (UNICODE_STRING *)P;
      DestinationString = 0;
      v8 = 0;
      v9 = (char *)v1[3];
      if ( v9
        && ((v12 = ObQueryNameStringMode(v9, (__int64)P, 0x110u, &DestinationString, 0), v12 != -1073741820)
         || (Pool2 = ExAllocatePool2(0x100uLL, DestinationString, 0x20206F49u), (v7 = (UNICODE_STRING *)Pool2) != 0LL)
         && (v8 = 1,
             v12 = ObQueryNameStringMode((char *)v1[3], Pool2, DestinationString, &DestinationString, 0),
             v12 != -1073741820))
        && (v10 = 0, v12 >= 0)
        && DestinationString )
      {
        v20 = *v7;
      }
      else
      {
        RtlInitUnicodeString(&v20, &word_140AEDAC0);
        v10 = 0;
      }
      pszDest[0] = 0;
      v26[0] = 0;
      if ( Buffer )
        RtlStringCchCopyNW(pszDest, 0x100uLL, Buffer, (unsigned __int64)Length >> 1);
      if ( v20.Buffer )
        RtlStringCchCopyNW(v26, 0x100uLL, v20.Buffer, (unsigned __int64)v20.Length >> 1);
      if ( v8 == 1 )
        ExFreePoolWithTag(v7, 0);
      if ( (unsigned int)(*((_DWORD *)v1 + 15) - 1074004004) <= 1 && !wcsicmp(pszDest, L"NTFS") )
      {
        v14 = *((_WORD *)v1 + 46);
        *((_WORD *)v1 + 25) -= v14;
        DestinationString_4 = v14;
        v19 = v1 + 16;
      }
      if ( (int)EtwWriteErrorLogEntry(
                  v10,
                  (int)v1 + 48,
                  v18,
                  (int)v1 + 40,
                  (__int64)pszDest,
                  (__int64)v26,
                  DestinationString_4,
                  (__int64)v19) < 0 )
      {
        IopErrorLogRequeueEntry(v21);
        return (_QWORD *)IopErrorLogQueueRequest();
      }
      _InterlockedAdd(&IopErrorLogAllocation, -*((unsigned __int16 *)v1 + 1));
      v11 = (void *)v1[3];
      if ( v11 )
        ObfDereferenceObject(v11);
      if ( v2 )
        ObfDereferenceObject((PVOID)v1[4]);
      ExFreePoolWithTag(v1, 0);
    }
    v6 = L"Application Popup";
LABEL_14:
    RtlInitUnicodeString(&DestinationString_8, v6);
    goto LABEL_15;
  }
  RtlInitUnicodeString(&v22, L"Eventlog-System");
  if ( (int)EtwQueryTraceHandleByLoggerName(&v22, &IopErrorLogSession) >= 0 )
  {
    ErrorLogSessionOpened = 1;
    goto LABEL_2;
  }
  return (_QWORD *)IopErrorLogQueueRequest();
}
