/*
 * XREFs of CiIsTestSigningEnabled @ 0x14000D3C0
 * Callers:
 *     CiDispatchFastIoDeviceControl @ 0x14000DEF0 (CiDispatchFastIoDeviceControl.c)
 * Callees:
 *     <none>
 */

__int64 CiIsTestSigningEnabled()
{
  ULONG v1; // [rsp+30h] [rbp+8h] BYREF
  __int64 v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 8LL;
  v1 = 0;
  if ( ZwQuerySystemInformation(MaxSystemInfoClass|SystemProcessInformation, &v2, 8u, &v1) < 0 )
    return 0LL;
  else
    return (HIDWORD(v2) >> 1) & 1;
}
