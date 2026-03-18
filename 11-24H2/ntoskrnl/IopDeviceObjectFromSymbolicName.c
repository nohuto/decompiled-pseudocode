/*
 * XREFs of IopDeviceObjectFromSymbolicName @ 0x140ABCB94
 * Callers:
 *     IopGetSessionIdFromSymbolicName @ 0x1406F9184 (IopGetSessionIdFromSymbolicName.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14045AA10 (RtlInitUnicodeStringEx.c)
 *     PnpUnicodeStringToWstrFree @ 0x1408B7510 (PnpUnicodeStringToWstrFree.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x1408BDDF0 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     _PnpGetObjectProperty @ 0x1408CDFD0 (_PnpGetObjectProperty.c)
 *     PnpUnicodeStringToWstr @ 0x1409D52F0 (PnpUnicodeStringToWstr.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

_QWORD *__fastcall IopDeviceObjectFromSymbolicName(__int64 a1)
{
  _QWORD *v1; // rdi
  const wchar_t *Pool2; // rax
  WCHAR *v4; // r14
  int ObjectProperty; // ebx
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-10h] BYREF
  ULONG v8; // [rsp+A0h] [rbp+30h] BYREF
  int v9; // [rsp+A8h] [rbp+38h] BYREF
  WCHAR *v10; // [rsp+B0h] [rbp+40h] BYREF

  v1 = 0LL;
  v9 = 0;
  v10 = 0LL;
  DestinationString = 0LL;
  if ( a1 )
  {
    if ( *(_QWORD *)(a1 + 8) )
    {
      if ( *(_WORD *)a1 )
      {
        if ( (int)PnpUnicodeStringToWstr(&v10, 0LL, (unsigned __int16 *)a1) >= 0 )
        {
          v8 = 400;
          Pool2 = (const wchar_t *)ExAllocatePool2(0x100uLL);
          v4 = (WCHAR *)Pool2;
          if ( Pool2 )
          {
            ObjectProperty = PnpGetObjectProperty(
                               *(_QWORD **)&PiPnpRtlCtx,
                               v10,
                               3u,
                               0LL,
                               0LL,
                               (__int64)&DEVPKEY_Device_InstanceId,
                               &v9,
                               Pool2,
                               v8,
                               (__int64)&v8,
                               0);
            PnpUnicodeStringToWstrFree(v10, a1);
            if ( ObjectProperty >= 0 && v9 == 18 && RtlInitUnicodeStringEx(&DestinationString, v4) >= 0 )
              v1 = PnpDeviceObjectFromDeviceInstanceWithTag((__int64)&DestinationString, 0x746C6644u);
            ExFreePoolWithTag(v4, 0x47706E50u);
          }
        }
      }
    }
  }
  return v1;
}
