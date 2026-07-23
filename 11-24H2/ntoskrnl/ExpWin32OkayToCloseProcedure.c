/*
 * XREFs of ExpWin32OkayToCloseProcedure @ 0x1408F3ED0
 * Callers:
 *     ObCloseHandleTableEntry @ 0x140848260 (ObCloseHandleTableEntry.c)
 * Callees:
 *     PsSessionGetWin32Callouts @ 0x140463D20 (PsSessionGetWin32Callouts.c)
 *     PspUpdateCalloutParameters @ 0x1404E64C0 (PspUpdateCalloutParameters.c)
 *     ExCallCallBack @ 0x1408F47CC (ExCallCallBack.c)
 */

bool __fastcall ExpWin32OkayToCloseProcedure(unsigned __int64 a1, int *a2, unsigned __int64 a3, char a4)
{
  int v4; // ebx
  unsigned __int64 v5; // r11
  POBJECT_TYPE *v6; // rax
  int v7; // r10d
  _RTL_RUN_ONCE *Win32Callouts; // rax
  __int64 v9; // r10
  __int128 v11; // [rsp+30h] [rbp-30h] BYREF
  __int128 v12; // [rsp+40h] [rbp-20h]
  __int128 v13; // [rsp+50h] [rbp-10h]
  int v14; // [rsp+88h] [rbp+28h] BYREF

  v14 = *a2;
  v4 = -1073741823;
  v12 = a1;
  v5 = *((unsigned __int8 *)a2 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)a2 - 48) >> 8);
  *((_QWORD *)&v12 + 1) = a2;
  v13 = a3;
  v11 = 0LL;
  v6 = (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v5];
  BYTE8(v13) = a4;
  if ( v6 == (POBJECT_TYPE *)ExActivationObjectType )
  {
    v7 = 38;
  }
  else if ( v6 == (POBJECT_TYPE *)ExCoreMessagingObjectType )
  {
    v7 = 34;
  }
  else if ( v6 == (POBJECT_TYPE *)ExRawInputManagerObjectType )
  {
    v7 = 28;
  }
  else if ( v6 == (POBJECT_TYPE *)ExCompositionObjectType )
  {
    v7 = 19;
  }
  else if ( v6 == ExDesktopObjectType )
  {
    v7 = 9;
  }
  else
  {
    if ( v6 != (POBJECT_TYPE *)ExWindowStationObjectType )
      return v4 >= 0;
    v7 = 12;
  }
  if ( (unsigned int)PspUpdateCalloutParameters(v7, (__int64)&v11, 1, (__int64)&v14) )
  {
    Win32Callouts = PsSessionGetWin32Callouts();
    v4 = ExCallCallBack(Win32Callouts, v9, &v11);
  }
  else
  {
    v4 = -1073741811;
  }
  return v4 >= 0;
}
