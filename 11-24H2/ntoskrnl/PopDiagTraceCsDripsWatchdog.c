/*
 * XREFs of PopDiagTraceCsDripsWatchdog @ 0x1405D1EE8
 * Callers:
 *     PopDripsWatchdogTakeAction @ 0x140765E80 (PopDripsWatchdogTakeAction.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceCsDripsWatchdog(
        int a1,
        int a2,
        int a3,
        unsigned __int8 a4,
        char a5,
        unsigned __int8 a6,
        char a7,
        unsigned __int16 *a8,
        unsigned __int16 *a9,
        char a10,
        char a11)
{
  _UNKNOWN **v11; // rax
  int v12; // ebx
  __int64 v13; // rax
  __int16 v14; // dx
  __int64 v15; // rax
  __int16 v16; // dx
  int v18; // [rsp+48h] [rbp-C0h] BYREF
  int v19; // [rsp+4Ch] [rbp-BCh] BYREF
  int v20; // [rsp+50h] [rbp-B8h] BYREF
  int v21; // [rsp+54h] [rbp-B4h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-B0h] BYREF
  int *v23; // [rsp+68h] [rbp-A0h]
  __int64 v24; // [rsp+70h] [rbp-98h]
  int *v25; // [rsp+78h] [rbp-90h]
  __int64 v26; // [rsp+80h] [rbp-88h]
  int *v27; // [rsp+88h] [rbp-80h]
  __int64 v28; // [rsp+90h] [rbp-78h]
  char *v29; // [rsp+98h] [rbp-70h]
  __int64 v30; // [rsp+A0h] [rbp-68h]
  int *v31; // [rsp+A8h] [rbp-60h]
  __int64 v32; // [rsp+B0h] [rbp-58h]
  char *v33; // [rsp+B8h] [rbp-50h]
  __int64 v34; // [rsp+C0h] [rbp-48h]
  int *v35; // [rsp+C8h] [rbp-40h]
  __int64 v36; // [rsp+D0h] [rbp-38h]
  __int64 v37; // [rsp+D8h] [rbp-30h]
  __int64 v38; // [rsp+E0h] [rbp-28h]
  int *v39; // [rsp+E8h] [rbp-20h]
  __int64 v40; // [rsp+F0h] [rbp-18h]
  __int64 v41; // [rsp+F8h] [rbp-10h]
  __int64 v42; // [rsp+100h] [rbp-8h]
  char *v43; // [rsp+108h] [rbp+0h]
  __int64 v44; // [rsp+110h] [rbp+8h]
  char *v45; // [rsp+118h] [rbp+10h]
  __int64 v46; // [rsp+120h] [rbp+18h]
  _UNKNOWN *retaddr; // [rsp+150h] [rbp+48h] BYREF
  int v48; // [rsp+158h] [rbp+50h] BYREF
  int v49; // [rsp+160h] [rbp+58h] BYREF
  int v50; // [rsp+168h] [rbp+60h] BYREF

  v11 = &retaddr;
  v50 = a3;
  v49 = a2;
  v48 = a1;
  v12 = a4;
  if ( PopDiagHandleRegistered )
  {
    LOBYTE(v11) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_CS_DRIPS_WATCHDOG);
    if ( (_BYTE)v11 )
    {
      v21 = a6;
      UserData.Ptr = (ULONGLONG)&v48;
      v23 = &v49;
      v25 = &v50;
      v27 = &v20;
      v29 = &a5;
      v31 = &v21;
      v33 = &a7;
      v20 = v12;
      *(_QWORD *)&UserData.Size = 4LL;
      v24 = 4LL;
      v26 = 4LL;
      v28 = 4LL;
      v30 = 4LL;
      v32 = 4LL;
      v34 = 4LL;
      v36 = 2LL;
      if ( a8 )
      {
        v13 = *((_QWORD *)a8 + 1);
        v38 = *a8;
        v37 = v13;
        v14 = (unsigned __int16)v38 >> 1;
        v35 = &v18;
      }
      else
      {
        v37 = 0LL;
        v35 = &v18;
        v14 = 0;
        v38 = 0LL;
      }
      LOWORD(v18) = v14;
      v40 = 2LL;
      if ( a9 )
      {
        v15 = *((_QWORD *)a9 + 1);
        v42 = *a9;
        v41 = v15;
        v16 = (unsigned __int16)v42 >> 1;
        v39 = &v19;
      }
      else
      {
        v41 = 0LL;
        v39 = &v19;
        v16 = 0;
        v42 = 0LL;
      }
      v43 = &a10;
      LOWORD(v19) = v16;
      v45 = &a11;
      v44 = 4LL;
      v46 = 4LL;
      LOBYTE(v11) = EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_CS_DRIPS_WATCHDOG, 0LL, 0, 0LL, 0LL, 0xDu, &UserData);
    }
  }
  return (char)v11;
}
