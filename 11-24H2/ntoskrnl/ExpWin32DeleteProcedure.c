/*
 * XREFs of ExpWin32DeleteProcedure @ 0x1408F4010
 * Callers:
 *     <none>
 * Callees:
 *     PsSessionGetWin32Callouts @ 0x140463D20 (PsSessionGetWin32Callouts.c)
 *     PspUpdateCalloutParameters @ 0x1404E64C0 (PspUpdateCalloutParameters.c)
 *     ExCallCallBack @ 0x1408F47CC (ExCallCallBack.c)
 *     PsInvokeWin32Callout @ 0x1409A1420 (PsInvokeWin32Callout.c)
 */

POBJECT_TYPE *__fastcall ExpWin32DeleteProcedure(int *a1)
{
  int v1; // eax
  unsigned __int64 v2; // r8
  POBJECT_TYPE *result; // rax
  int v4; // r10d
  _RTL_RUN_ONCE *Win32Callouts; // rax
  __int64 v6; // r10
  __int64 v7; // rcx
  _QWORD v8[4]; // [rsp+30h] [rbp-20h] BYREF
  int v9; // [rsp+60h] [rbp+10h] BYREF

  v1 = *a1;
  v8[0] = 0LL;
  v8[1] = 0LL;
  v9 = v1;
  v2 = *((unsigned __int8 *)a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)a1 - 48) >> 8);
  v8[2] = a1;
  result = (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v2];
  if ( result == (POBJECT_TYPE *)ExActivationObjectType )
  {
    v4 = 40;
  }
  else if ( result == (POBJECT_TYPE *)ExCoreMessagingObjectType )
  {
    v4 = 36;
  }
  else if ( result == (POBJECT_TYPE *)ExRawInputManagerObjectType )
  {
    v4 = 30;
  }
  else
  {
    if ( result != (POBJECT_TYPE *)ExCompositionObjectType )
    {
      if ( result == ExDesktopObjectType )
      {
        v7 = 11LL;
      }
      else
      {
        if ( result != (POBJECT_TYPE *)ExWindowStationObjectType )
          return result;
        v7 = 14LL;
      }
      return (POBJECT_TYPE *)PsInvokeWin32Callout(v7, v8, 1LL, &v9);
    }
    v4 = 21;
  }
  result = (POBJECT_TYPE *)PspUpdateCalloutParameters(v4, (__int64)v8, 1, (__int64)&v9);
  if ( (_DWORD)result )
  {
    Win32Callouts = PsSessionGetWin32Callouts();
    return (POBJECT_TYPE *)ExCallCallBack(Win32Callouts, v6, v8);
  }
  return result;
}
