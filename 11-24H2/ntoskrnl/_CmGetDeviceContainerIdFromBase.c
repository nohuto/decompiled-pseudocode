/*
 * XREFs of _CmGetDeviceContainerIdFromBase @ 0x140990A40
 * Callers:
 *     PiDcUpdateDeviceContainerMembership @ 0x140990834 (PiDcUpdateDeviceContainerMembership.c)
 *     _CmDeleteDeviceWorker @ 0x1409B2CB8 (_CmDeleteDeviceWorker.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1409B4770 (_CmGetDeviceMappedPropertyFromComposite.c)
 *     PiDcHandleCustomDeviceEvent @ 0x1409EEF24 (PiDcHandleCustomDeviceEvent.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x14043FE9C (RtlStringCchCopyW.c)
 *     wcscmp @ 0x1404FFE20 (wcscmp.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     PnpIsValidGuidString @ 0x1408B7FF0 (PnpIsValidGuidString.c)
 *     _PnpCtxGetCachedNodeBaseKey @ 0x1408C7D10 (_PnpCtxGetCachedNodeBaseKey.c)
 *     _CmIsDeviceInContainer @ 0x14098FEA4 (_CmIsDeviceInContainer.c)
 *     _RegRtlEnumKey @ 0x140992974 (_RegRtlEnumKey.c)
 */

__int64 __fastcall CmGetDeviceContainerIdFromBase(_QWORD *a1, const WCHAR *a2, const wchar_t *a3, wchar_t *a4)
{
  int v4; // esi
  int CachedNodeBaseKey; // ebx
  _QWORD *v10; // rdx
  int v12; // eax
  _QWORD *v13; // rdx
  char v14; // [rsp+40h] [rbp-51h] BYREF
  _BYTE v15[3]; // [rsp+41h] [rbp-50h] BYREF
  int v16; // [rsp+44h] [rbp-4Dh]
  HANDLE KeyHandle; // [rsp+48h] [rbp-49h] BYREF
  wchar_t Str2[40]; // [rsp+50h] [rbp-41h] BYREF

  v4 = 0;
  KeyHandle = 0LL;
  v15[0] = 0;
  v14 = 0;
  CachedNodeBaseKey = RtlStringCchCopyW(a4, 0x27uLL, a3);
  if ( CachedNodeBaseKey >= 0 && wcscmp(L"{00000000-0000-0000-0000-000000000000}", a3) )
  {
    v10 = (_QWORD *)a1[22];
    if ( !v10 )
    {
      v13 = (_QWORD *)a1[7];
      if ( v13 == a1 + 7 )
        v10 = (_QWORD *)a1[11];
      else
        v10 = v13 - 2;
      a1[22] = v10;
    }
    CachedNodeBaseKey = PnpCtxGetCachedNodeBaseKey((__int64)a1, v10, 10, &KeyHandle);
    if ( CachedNodeBaseKey >= 0 )
    {
      CachedNodeBaseKey = CmIsDeviceInContainer((__int64)a1, (__int64)KeyHandle, a3, a3, a2, v15, &v14);
      if ( CachedNodeBaseKey >= 0 && !v14 )
      {
        while ( 1 )
        {
          v16 = 39;
          v12 = RegRtlEnumKey(KeyHandle);
          CachedNodeBaseKey = v12;
          if ( v12 != -1073741789 )
          {
            if ( v12 == -2147483622 )
              return 0;
            if ( v12 < 0 )
              return (unsigned int)CachedNodeBaseKey;
            if ( PnpIsValidGuidString(Str2) && wcscmp(L"{00000000-0000-0000-0000-000000000000}", Str2) )
            {
              CachedNodeBaseKey = CmIsDeviceInContainer((__int64)a1, (__int64)KeyHandle, Str2, a3, a2, v15, &v14);
              if ( CachedNodeBaseKey < 0 )
                return (unsigned int)CachedNodeBaseKey;
              if ( v15[0] )
              {
                CachedNodeBaseKey = RtlStringCchCopyW(a4, 0x27uLL, Str2);
                if ( CachedNodeBaseKey < 0 )
                  return (unsigned int)CachedNodeBaseKey;
              }
              if ( v14 )
                return (unsigned int)CachedNodeBaseKey;
            }
          }
          ++v4;
        }
      }
    }
  }
  return (unsigned int)CachedNodeBaseKey;
}
