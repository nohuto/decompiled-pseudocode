/*
 * XREFs of ?DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z @ 0x14004F4DC
 * Callers:
 *     DrvGetDisplayDriverParameters @ 0x140012FAC (DrvGetDisplayDriverParameters.c)
 *     ?DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z @ 0x14004E834 (-DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z.c)
 *     ?ldevLoadImageInternal@@YAPEAU_LDEV@@PEBGHPEAHHH@Z @ 0x14010204C (-ldevLoadImageInternal@@YAPEAU_LDEV@@PEBGHPEAHHH@Z.c)
 *     DrvBuildDevmodeList @ 0x1401180B8 (DrvBuildDevmodeList.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x140176D8C (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 * Callees:
 *     <none>
 */

void __fastcall DrvLogDisplayDriverEvent(__int64 a1)
{
  int v1; // ebx
  int v2; // ebx
  int v3; // ebx
  int v4; // ebx
  int v5; // ebx
  int v6; // ebx
  __int64 v7; // rcx
  __int64 v8; // rbx
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp+7h] BYREF
  struct _UNICODE_STRING v10; // [rsp+50h] [rbp+17h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+27h] BYREF
  int Data; // [rsp+A8h] [rbp+6Fh] BYREF
  void *KeyHandle; // [rsp+B0h] [rbp+77h] BYREF

  Data = 1;
  KeyHandle = 0LL;
  v1 = a1;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v10 = 0LL;
  DestinationString = 0LL;
  if ( *(_DWORD *)(*(_QWORD *)(W32GetSessionState(a1) + 88) + 2848LL) )
  {
    RtlInitUnicodeString(&DestinationString, &word_14025E168);
    v2 = v1 - 1;
    if ( v2 )
    {
      v3 = v2 - 1;
      if ( v3 )
      {
        v4 = v3 - 1;
        if ( v4 )
        {
          v5 = v4 - 1;
          if ( v5 )
          {
            v6 = v5 - 1;
            if ( v6 )
            {
              if ( v6 != 1 )
                return;
              WdLogSingleEntry0(4LL);
              WdLogGlobalForLineNumber = 431;
            }
            else
            {
              WdLogSingleEntry0(4LL);
              WdLogGlobalForLineNumber = 449;
            }
          }
          else
          {
            WdLogSingleEntry0(4LL);
            WdLogGlobalForLineNumber = 455;
          }
        }
        else
        {
          RtlInitUnicodeString(&DestinationString, L"OldDisplayDriver");
          WdLogSingleEntry0(4LL);
          WdLogGlobalForLineNumber = 443;
        }
      }
      else
      {
        WdLogSingleEntry0(4LL);
        WdLogGlobalForLineNumber = 437;
      }
    }
    else
    {
      WdLogSingleEntry0(4LL);
      WdLogGlobalForLineNumber = 461;
    }
    if ( DestinationString.Length )
    {
      v8 = *(_QWORD *)(W32GetSessionState(v7) + 88);
      RtlInitUnicodeString(
        &v10,
        L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\InvalidDisplay");
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &v10;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      ObjectAttributes.SecurityDescriptor = *(PVOID *)(v8 + 1736);
      ObjectAttributes.SecurityQualityOfService = 0LL;
      if ( ZwCreateKey(&KeyHandle, 0x2000000u, &ObjectAttributes, 0, 0LL, 1u, 0LL) >= 0 )
      {
        ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &Data, 4u);
        ZwClose(KeyHandle);
      }
    }
  }
}
