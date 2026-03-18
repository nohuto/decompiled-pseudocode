/*
 * XREFs of DpiIndirectFindDeviceFromInstanceId @ 0x14024F850
 * Callers:
 *     DpiFdoStartAdapterThreadImpl @ 0x14024772C (DpiFdoStartAdapterThreadImpl.c)
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x140041998 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     ?ReleaseMiniportListMutex@@YAXXZ @ 0x1400419DC (-ReleaseMiniportListMutex@@YAXXZ.c)
 *     ?Free@?$AUTO_FREE_POOL@PEAUIDD_COMPLETION_CONTEXT@@@@QEAAXXZ @ 0x14004BC44 (-Free@-$AUTO_FREE_POOL@PEAUIDD_COMPLETION_CONTEXT@@@@QEAAXXZ.c)
 *     wcsncmp_0 @ 0x140064F45 (wcsncmp_0.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 */

__int64 __fastcall DpiIndirectFindDeviceFromInstanceId(PCUNICODE_STRING String2, __int64 a2, _QWORD *a3)
{
  int Length; // r15d
  ULONG v6; // r15d
  char v7; // r14
  void *Data; // rbx
  unsigned int v9; // ebx
  __int64 v10; // rsi
  __int64 *i; // rdi
  int v12; // ecx
  struct _DEVICE_OBJECT *v13; // rcx
  void *v15; // [rsp+40h] [rbp-79h] BYREF
  ULONG Type; // [rsp+48h] [rbp-71h] BYREF
  ULONG RequiredSize; // [rsp+4Ch] [rbp-6Dh] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-69h] BYREF
  void *v19; // [rsp+60h] [rbp-59h] BYREF
  wchar_t Str1[48]; // [rsp+70h] [rbp-49h] BYREF

  Length = String2->Length;
  RequiredSize = 0;
  v15 = 0LL;
  v6 = Length + 2;
  v7 = 0;
  Data = (void *)ExAllocatePool2(256LL, v6, 1953656900LL);
  AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&v15);
  v15 = Data;
  v19 = 0LL;
  AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&v19);
  if ( Data )
  {
    AcquireMiniportListMutex();
    v10 = qword_140160D48;
    if ( *(_QWORD *)v10 != v10 )
    {
      do
      {
        if ( *(_BYTE *)(v10 + 134) )
        {
          KeWaitForSingleObject((PVOID)(v10 + 72), Executive, 0, 0, 0LL);
          for ( i = *(__int64 **)(v10 + 56); *i != *(_QWORD *)(v10 + 56); i = (__int64 *)*i )
          {
            if ( *((_DWORD *)i + 4) == 1953656900 && *((_DWORD *)i + 5) == 2 )
            {
              if ( (v12 = *((_DWORD *)i + 59), v12 == 2)
                || *((_DWORD *)i + 60) == 2 && ((v12 - 3) & 0xFFFFFFFC) == 0 && v12 != 4
                || v12 == 1 )
              {
                v13 = (struct _DEVICE_OBJECT *)i[19];
                Type = 0;
                if ( IoGetDevicePropertyData(v13, &DEVPKEY_Device_InstanceId, 0, 0, v6, Data, &RequiredSize, &Type) >= 0 )
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
                      v7 = 1;
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
          KeReleaseMutex((PRKMUTEX)(v10 + 72), 0);
          if ( v7 )
            break;
        }
        v10 = *(_QWORD *)v10;
      }
      while ( *(_QWORD *)v10 != qword_140160D48 );
    }
    ReleaseMiniportListMutex();
    v9 = v7 == 0 ? 0xC0000225 : 0;
  }
  else
  {
    v9 = -1073741801;
    WdLogSingleEntry1(6LL, -1073741801LL);
    WdLogGlobalForLineNumber = 374;
  }
  AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&v15);
  return v9;
}
