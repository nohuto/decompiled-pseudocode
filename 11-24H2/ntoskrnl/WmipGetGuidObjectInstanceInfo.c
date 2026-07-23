/*
 * XREFs of WmipGetGuidObjectInstanceInfo @ 0x140A69890
 * Callers:
 *     WmipTranslateFileHandle @ 0x1407A5604 (WmipTranslateFileHandle.c)
 *     IoWMIDeviceObjectToInstanceName @ 0x140A697E0 (IoWMIDeviceObjectToInstanceName.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402DEA60 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     IoGetDeviceInstanceName @ 0x14049B9DC (IoGetDeviceInstanceName.c)
 *     _wcsnicmp @ 0x1404FBDB0 (_wcsnicmp.c)
 *     RtlFreeAnsiString @ 0x1408B69C0 (RtlFreeAnsiString.c)
 */

__int64 __fastcall WmipGetGuidObjectInstanceInfo(__int64 a1, ULONG_PTR a2, UNICODE_STRING *a3, _DWORD *a4)
{
  _DWORD *v5; // r14
  UNICODE_STRING *v6; // rbp
  int DeviceInstanceName; // ebx
  __int64 v9; // rdi
  unsigned __int16 v10; // r15
  int v11; // r12d
  wchar_t *Buffer; // rsi
  UNICODE_STRING v13; // xmm0
  __int64 *v14; // r13
  __int64 *i; // rdi
  __int64 v16; // r14
  __int64 v17; // rbp
  UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-48h] BYREF

  v5 = a4;
  v6 = a3;
  UnicodeString = 0LL;
  DeviceInstanceName = IoGetDeviceInstanceName(a2, &UnicodeString);
  if ( DeviceInstanceName >= 0 )
  {
    v9 = *(_QWORD *)(a1 + 56);
    v10 = UnicodeString.Length >> 1;
    v11 = 0;
    DeviceInstanceName = -1073741162;
    KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
    Buffer = UnicodeString.Buffer;
    if ( *(_DWORD *)(v9 + 36) )
    {
      v14 = (__int64 *)(v9 + 56);
      for ( i = *(__int64 **)(v9 + 56); i != v14; i = (__int64 *)*i )
      {
        if ( (i[2] & 1) != 0 )
        {
          v16 = i[11];
          v17 = -1LL;
          do
            ++v17;
          while ( *(_WORD *)(v16 + 2 * v17 + 4) );
          if ( !wcsnicmp((const wchar_t *)(v16 + 4), Buffer, v10)
            && (unsigned __int16)v17 == v10 + 1
            && *(_WORD *)(v16 + 2LL * (unsigned __int16)v17 + 2) == 95 )
          {
            DeviceInstanceName = 0;
            v11 = *(_DWORD *)i[11];
            break;
          }
        }
      }
      v6 = a3;
      v5 = a4;
    }
    KeReleaseMutex((PRKMUTEX)&WmipSMMutex, 0);
    if ( DeviceInstanceName >= 0 )
    {
      v13 = UnicodeString;
      *v5 = v11;
      Buffer = 0LL;
      UnicodeString.Buffer = 0LL;
      DeviceInstanceName = 0;
      *v6 = v13;
    }
    if ( Buffer )
      RtlFreeAnsiString(&UnicodeString);
  }
  return (unsigned int)DeviceInstanceName;
}
