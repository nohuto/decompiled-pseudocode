/*
 * XREFs of ?SetupValidationForProcess@DXGVALIDATION@@QEAAXPEAVDXGPROCESS@@@Z @ 0x14004973C
 * Callers:
 *     ?Initialize@DXGPROCESS@@QEAAJPEAX@Z @ 0x140348958 (-Initialize@DXGPROCESS@@QEAAJPEAX@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 */

void __fastcall DXGVALIDATION::SetupValidationForProcess(DXGVALIDATION *this, struct DXGPROCESS *a2)
{
  __int64 v3; // r9
  struct _UNICODE_STRING *v4; // rax
  struct _UNICODE_STRING *v5; // rbx
  wchar_t *v6; // rax
  struct _CLIENT_ID ClientId; // [rsp+30h] [rbp-69h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-59h] BYREF
  int (*v9)(unsigned __int16 *, unsigned int, void *, unsigned int, void *, void *); // [rsp+70h] [rbp-29h] BYREF
  int v10; // [rsp+78h] [rbp-21h]
  const wchar_t *v11; // [rsp+80h] [rbp-19h]
  struct DXGPROCESS *v12; // [rsp+88h] [rbp-11h]
  int v13; // [rsp+90h] [rbp-9h]
  __int64 v14; // [rsp+98h] [rbp-1h]
  int v15; // [rsp+A0h] [rbp+7h]
  __int64 v16; // [rsp+A8h] [rbp+Fh]
  int v17; // [rsp+B0h] [rbp+17h]
  __int64 v18; // [rsp+B8h] [rbp+1Fh]
  __int128 v19; // [rsp+C0h] [rbp+27h]
  __int128 v20; // [rsp+D0h] [rbp+37h]
  ULONG ProcessInformationLength; // [rsp+100h] [rbp+67h] BYREF
  void *ProcessHandle; // [rsp+110h] [rbp+77h] BYREF

  if ( *(_DWORD *)this == 1 )
  {
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    ProcessHandle = 0LL;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
    ClientId.UniqueThread = 0LL;
    ClientId.UniqueProcess = PsGetCurrentProcessId();
    if ( ZwOpenProcess(&ProcessHandle, 0x1000u, &ObjectAttributes, &ClientId) >= 0 )
    {
      ProcessInformationLength = 0;
      if ( ZwQueryInformationProcess(ProcessHandle, ProcessImageFileNameWin32, 0LL, 0, &ProcessInformationLength) == -1073741820
        && ProcessInformationLength > 0x10 )
      {
        v4 = (struct _UNICODE_STRING *)operator new[](ProcessInformationLength, 0x4B677844u, 256LL, v3);
        v5 = v4;
        if ( v4 )
        {
          if ( ZwQueryInformationProcess(ProcessHandle, ProcessImageFileNameWin32, v4, ProcessInformationLength, 0LL) >= 0 )
          {
            v6 = wcsrchr(v5->Buffer, 0x5Cu);
            if ( v6 )
              RtlInitUnicodeString(v5, v6 + 1);
            v10 = 4;
            v12 = a2;
            v9 = ProcessValidationQueryCallback;
            v13 = 0;
            v11 = L"ProcessName";
            v14 = 0LL;
            v15 = 0;
            v16 = 0LL;
            v17 = 0;
            v18 = 0LL;
            v19 = 0LL;
            v20 = 0LL;
            RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\Validation", &v9, v5, 0LL);
          }
          DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v5);
        }
      }
      ZwClose(ProcessHandle);
    }
  }
}
