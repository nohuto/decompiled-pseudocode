/*
 * XREFs of ExpWin32OpenProcedure @ 0x1408F4100
 * Callers:
 *     <none>
 * Callees:
 *     PsSessionGetWin32Callouts @ 0x140463D20 (PsSessionGetWin32Callouts.c)
 *     PspUpdateCalloutParameters @ 0x1404E64C0 (PspUpdateCalloutParameters.c)
 *     ExCallCallBack @ 0x1408F47CC (ExCallCallBack.c)
 *     PsInvokeWin32Callout @ 0x1409A1420 (PsInvokeWin32Callout.c)
 */

__int64 __fastcall ExpWin32OpenProcedure(int a1, __int64 a2, __int64 a3, _DWORD *a4, int *a5, int a6)
{
  unsigned int v6; // r11d
  unsigned __int64 v7; // r10
  POBJECT_TYPE *v8; // rdx
  int v9; // ecx
  int v10; // r11d
  _RTL_RUN_ONCE *Win32Callouts; // rax
  __int64 v12; // r11
  _QWORD v15[2]; // [rsp+30h] [rbp-30h] BYREF
  int v16; // [rsp+40h] [rbp-20h]
  int v17; // [rsp+44h] [rbp-1Ch]
  __int64 v18; // [rsp+48h] [rbp-18h]
  _DWORD *v19; // [rsp+50h] [rbp-10h]
  int v20; // [rsp+58h] [rbp-8h]
  int v21; // [rsp+5Ch] [rbp-4h]
  int v22; // [rsp+70h] [rbp+10h] BYREF

  v22 = *a4;
  v6 = -1073741823;
  v16 = a1;
  v7 = *((unsigned __int8 *)a4 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)a4 - 48) >> 8);
  v18 = a3;
  v19 = a4;
  v8 = (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v7];
  v9 = *a5;
  v15[0] = 0LL;
  v15[1] = 0LL;
  v17 = 0;
  v20 = v9;
  v21 = a6;
  if ( v8 == (POBJECT_TYPE *)ExActivationObjectType )
  {
    v10 = 37;
LABEL_6:
    if ( !(unsigned int)PspUpdateCalloutParameters(v10, (__int64)v15, 1, (__int64)&v22) )
      return (unsigned int)-1073741811;
    Win32Callouts = PsSessionGetWin32Callouts();
    return (unsigned int)ExCallCallBack(Win32Callouts, v12, v15);
  }
  if ( v8 != (POBJECT_TYPE *)ExCoreMessagingObjectType )
  {
    if ( v8 == (POBJECT_TYPE *)ExRawInputManagerObjectType )
    {
      v10 = 27;
    }
    else if ( v8 == (POBJECT_TYPE *)ExCompositionObjectType )
    {
      v10 = 18;
    }
    else if ( v8 == ExDesktopObjectType )
    {
      v10 = 8;
    }
    else
    {
      if ( v8 != (POBJECT_TYPE *)ExWindowStationObjectType )
        return v6;
      v10 = 16;
    }
    goto LABEL_6;
  }
  return (unsigned int)PsInvokeWin32Callout(33LL, v15, 1LL, &v22);
}
