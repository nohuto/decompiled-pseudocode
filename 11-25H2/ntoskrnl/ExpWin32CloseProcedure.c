/*
 * XREFs of ExpWin32CloseProcedure @ 0x14091D7F0
 * Callers:
 *     <none>
 * Callees:
 *     PsSessionGetWin32Callouts @ 0x14047422C (PsSessionGetWin32Callouts.c)
 *     PspUpdateCalloutParameters @ 0x1404EBC50 (PspUpdateCalloutParameters.c)
 *     ExCallCallBack @ 0x14091E61C (ExCallCallBack.c)
 */

POBJECT_TYPE *__fastcall ExpWin32CloseProcedure(__int64 a1, int *a2, int a3, int a4)
{
  int v4; // eax
  unsigned __int64 v5; // r11
  POBJECT_TYPE *result; // rax
  int v7; // r10d
  _RTL_RUN_ONCE *Win32Callouts; // rax
  __int64 v9; // r10
  _QWORD v10[4]; // [rsp+30h] [rbp-30h] BYREF
  int v11; // [rsp+50h] [rbp-10h]
  int v12; // [rsp+54h] [rbp-Ch]
  int v13; // [rsp+70h] [rbp+10h] BYREF

  v4 = *a2;
  v10[0] = 0LL;
  v10[1] = 0LL;
  v13 = v4;
  v5 = *((unsigned __int8 *)a2 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)a2 - 48) >> 8);
  v10[2] = a1;
  v10[3] = a2;
  v11 = a3;
  v12 = a4;
  result = (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v5];
  if ( result == (POBJECT_TYPE *)ExActivationObjectType )
  {
    v7 = 39;
  }
  else if ( result == (POBJECT_TYPE *)ExCoreMessagingObjectType )
  {
    v7 = 35;
  }
  else if ( result == (POBJECT_TYPE *)ExRawInputManagerObjectType )
  {
    v7 = 29;
  }
  else if ( result == (POBJECT_TYPE *)ExCompositionObjectType )
  {
    v7 = 20;
  }
  else if ( result == ExDesktopObjectType )
  {
    v7 = 10;
  }
  else
  {
    if ( result != (POBJECT_TYPE *)ExWindowStationObjectType )
      return result;
    v7 = 13;
  }
  result = (POBJECT_TYPE *)PspUpdateCalloutParameters(v7, (__int64)v10, 1, (__int64)&v13);
  if ( (_DWORD)result )
  {
    Win32Callouts = PsSessionGetWin32Callouts();
    return (POBJECT_TYPE *)ExCallCallBack(Win32Callouts, v9, v10);
  }
  return result;
}
