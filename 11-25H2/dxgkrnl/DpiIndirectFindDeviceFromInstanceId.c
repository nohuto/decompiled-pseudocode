/*
 * XREFs of DpiIndirectFindDeviceFromInstanceId @ 0x140248A20
 * Callers:
 *     DpiFdoStartAdapterThreadImpl @ 0x14024092C (DpiFdoStartAdapterThreadImpl.c)
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x140042008 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     ?ReleaseMiniportListMutex@@YAXXZ @ 0x14004204C (-ReleaseMiniportListMutex@@YAXXZ.c)
 *     ?Free@?$AUTO_FREE_POOL@PEAUIDD_COMPLETION_CONTEXT@@@@QEAAXXZ @ 0x14004C190 (-Free@-$AUTO_FREE_POOL@PEAUIDD_COMPLETION_CONTEXT@@@@QEAAXXZ.c)
 *     wcsncmp_0 @ 0x140065325 (wcsncmp_0.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 */

__int64 __fastcall DpiIndirectFindDeviceFromInstanceId(PCUNICODE_STRING String2, __int64 a2, _QWORD *a3, __int64 a4)
{
  int Length; // r15d
  ULONG v7; // r15d
  char v8; // r14
  void *Data; // rbx
  unsigned int v10; // ebx
  __int64 v11; // rsi
  __int64 *i; // rdi
  int v13; // ecx
  struct _DEVICE_OBJECT *v14; // rcx
  void *v16; // [rsp+40h] [rbp-79h] BYREF
  ULONG Type; // [rsp+48h] [rbp-71h] BYREF
  ULONG RequiredSize; // [rsp+4Ch] [rbp-6Dh] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-69h] BYREF
  void *v20; // [rsp+60h] [rbp-59h] BYREF
  wchar_t Str1[48]; // [rsp+70h] [rbp-49h] BYREF

  Length = String2->Length;
  RequiredSize = 0;
  v16 = 0LL;
  v7 = Length + 2;
  v8 = 0;
  Data = (void *)ExAllocatePool2(256LL, v7, 1953656900LL, a4);
  AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&v16);
  v16 = Data;
  v20 = 0LL;
  AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&v20);
  if ( Data )
  {
    AcquireMiniportListMutex();
    v11 = qword_14015DD88;
    if ( *(_QWORD *)v11 != v11 )
    {
      do
      {
        if ( *(_BYTE *)(v11 + 134) )
        {
          KeWaitForSingleObject((PVOID)(v11 + 72), Executive, 0, 0, 0LL);
          for ( i = *(__int64 **)(v11 + 56); *i != *(_QWORD *)(v11 + 56); i = (__int64 *)*i )
          {
            if ( *((_DWORD *)i + 4) == 1953656900 && *((_DWORD *)i + 5) == 2 )
            {
              if ( (v13 = *((_DWORD *)i + 59), v13 == 2)
                || *((_DWORD *)i + 60) == 2 && ((v13 - 3) & 0xFFFFFFFC) == 0 && v13 != 4
                || v13 == 1 )
              {
                v14 = (struct _DEVICE_OBJECT *)i[19];
                Type = 0;
                if ( IoGetDevicePropertyData(v14, &DEVPKEY_Device_InstanceId, 0, 0, v7, Data, &RequiredSize, &Type) >= 0 )
                {
                  DestinationString = 0LL;
                  RtlInitUnicodeString(&DestinationString, (PCWSTR)Data);
                  if ( !*((_BYTE *)i + 1159)
                    || (wcscpy(Str1, L"SWD\\VirtualDisplayAdapter\\VirtualDisplayDevice_"),
                        DestinationString.Length >= 0x60u)
                    && !wcsncmp_0(Str1, DestinationString.Buffer, 0x2FuLL) )
                  {
                    if ( !RtlCompareUnicodeString(&DestinationString, String2, 1u) )
                    {
                      ObfReferenceObject((PVOID)i[3]);
                      v8 = 1;
                      *a3 = i[3];
                      break;
                    }
                  }
                  else
                  {
                    WdLogSingleEntry0(2LL);
                    WdLogGlobalForLineNumber = 443;
                  }
                }
              }
            }
          }
          KeReleaseMutex((PRKMUTEX)(v11 + 72), 0);
          if ( v8 )
            break;
        }
        v11 = *(_QWORD *)v11;
      }
      while ( *(_QWORD *)v11 != qword_14015DD88 );
    }
    ReleaseMiniportListMutex();
    v10 = v8 == 0 ? 0xC0000225 : 0;
  }
  else
  {
    v10 = -1073741801;
    WdLogSingleEntry1(6LL, -1073741801LL);
    WdLogGlobalForLineNumber = 374;
  }
  AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&v16);
  return v10;
}
