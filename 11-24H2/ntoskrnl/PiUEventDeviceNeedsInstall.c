/*
 * XREFs of PiUEventDeviceNeedsInstall @ 0x140A6F6E8
 * Callers:
 *     PiUEventNotifyUserMode @ 0x1409ECA04 (PiUEventNotifyUserMode.c)
 * Callees:
 *     _PnpGetObjectProperty @ 0x1408CB9C0 (_PnpGetObjectProperty.c)
 */

__int64 __fastcall PiUEventDeviceNeedsInstall(WCHAR *a1, _BYTE *a2)
{
  int ObjectProperty; // ecx
  int v6; // [rsp+60h] [rbp-10h] BYREF
  wchar_t v7[6]; // [rsp+64h] [rbp-Ch] BYREF
  int v8; // [rsp+98h] [rbp+28h] BYREF
  int v9; // [rsp+A0h] [rbp+30h] BYREF
  int v10; // [rsp+A8h] [rbp+38h] BYREF

  *a2 = 0;
  v8 = 0;
  v6 = 0;
  *(_DWORD *)v7 = 0;
  v10 = 0;
  v9 = 0;
  ObjectProperty = PnpGetObjectProperty(
                     *(_QWORD **)&PiPnpRtlCtx,
                     a1,
                     1u,
                     0LL,
                     0LL,
                     (__int64)&DEVPKEY_Device_DevNodeStatus,
                     &v10,
                     (const wchar_t *)&v8,
                     4u,
                     (__int64)&v9,
                     0);
  if ( ObjectProperty >= 0 )
  {
    ObjectProperty = PnpGetObjectProperty(
                       *(_QWORD **)&PiPnpRtlCtx,
                       a1,
                       1u,
                       0LL,
                       0LL,
                       (__int64)&DEVPKEY_Device_ProblemCode,
                       &v10,
                       (const wchar_t *)&v6,
                       4u,
                       (__int64)&v9,
                       0);
    if ( ObjectProperty >= 0 )
    {
      if ( (v8 & 0x40000) == 0 )
      {
        if ( (v8 & 0x400) == 0 )
        {
LABEL_6:
          ObjectProperty = PnpGetObjectProperty(
                             *(_QWORD **)&PiPnpRtlCtx,
                             a1,
                             1u,
                             0LL,
                             0LL,
                             (__int64)&DEVPKEY_Device_ConfigFlags,
                             &v10,
                             v7,
                             4u,
                             (__int64)&v9,
                             0);
          if ( ObjectProperty < 0 || (v7[0] & 0x420) == 0 )
            return (unsigned int)ObjectProperty;
LABEL_13:
          *a2 = 1;
          return (unsigned int)ObjectProperty;
        }
        if ( v6 != 22 )
        {
          if ( v6 == 18 || v6 == 1 )
            goto LABEL_13;
          goto LABEL_6;
        }
      }
      *a2 = 0;
    }
  }
  return (unsigned int)ObjectProperty;
}
