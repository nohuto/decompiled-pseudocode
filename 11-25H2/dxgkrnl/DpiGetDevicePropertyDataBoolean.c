/*
 * XREFs of DpiGetDevicePropertyDataBoolean @ 0x1403BE4BC
 * Callers:
 *     DpiFdoInitializeFdo @ 0x14023C19C (DpiFdoInitializeFdo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiGetDevicePropertyDataBoolean(struct _DEVICE_OBJECT *a1, const DEVPROPKEY *a2, char *a3)
{
  char v4; // di
  NTSTATUS DevicePropertyData; // eax
  unsigned int v6; // ebx
  ULONG v8[6]; // [rsp+40h] [rbp-18h] BYREF
  char v9; // [rsp+60h] [rbp+8h] BYREF
  ULONG v10; // [rsp+78h] [rbp+20h] BYREF

  v8[0] = 0;
  v10 = 0;
  v9 = 0;
  if ( a1 && a2 && a3 )
  {
    v4 = 1;
    DevicePropertyData = IoGetDevicePropertyData(a1, a2, 0, 0, 1u, &v9, v8, &v10);
    v6 = DevicePropertyData;
    if ( DevicePropertyData == -1073741772 )
    {
      v6 = 0;
    }
    else
    {
      if ( DevicePropertyData < 0 )
      {
        WdLogSingleEntry1(2LL, DevicePropertyData);
        WdLogGlobalForLineNumber = 1406;
        return v6;
      }
      if ( v10 != 17 )
      {
        v6 = -1073741788;
        WdLogSingleEntry1(2LL, -1073741788LL);
        WdLogGlobalForLineNumber = 1416;
        return v6;
      }
      if ( v9 == -1 )
      {
LABEL_8:
        *a3 = v4;
        return v6;
      }
    }
    v4 = 0;
    goto LABEL_8;
  }
  return 3221225485LL;
}
