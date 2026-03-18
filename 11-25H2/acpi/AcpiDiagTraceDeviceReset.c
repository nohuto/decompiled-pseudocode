/*
 * XREFs of AcpiDiagTraceDeviceReset @ 0x14004EDF0
 * Callers:
 *     AcpiDeviceReset @ 0x1400C0D40 (AcpiDeviceReset.c)
 * Callees:
 *     GetObjectPath @ 0x140011F58 (GetObjectPath.c)
 *     __security_check_cookie @ 0x140070B10 (__security_check_cookie.c)
 *     memmove @ 0x140070C40 (memmove.c)
 */

void __fastcall AcpiDiagTraceDeviceReset(__int64 a1, int a2, int a3)
{
  __int64 *v3; // rcx
  void *ObjectPath; // rax
  void *v5; // rbx
  __int64 v6; // r8
  __int64 v7; // rcx
  int v8; // esi
  __int64 v9; // rcx
  _BYTE *v10; // rax
  __int64 v11; // rdx
  _WORD *v12; // r8
  unsigned __int16 v13; // r9
  unsigned __int16 v14; // dx
  __int64 v15; // rcx
  _QWORD DestinationString[3]; // [rsp+38h] [rbp-D0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v18; // [rsp+68h] [rbp-A0h]
  __int64 v19; // [rsp+70h] [rbp-98h]
  int *v20; // [rsp+78h] [rbp-90h]
  __int64 v21; // [rsp+80h] [rbp-88h]
  int *v22; // [rsp+88h] [rbp-80h]
  __int64 v23; // [rsp+90h] [rbp-78h]
  _BYTE v24[128]; // [rsp+98h] [rbp-70h] BYREF
  int v25; // [rsp+160h] [rbp+58h] BYREF
  int v26; // [rsp+168h] [rbp+60h] BYREF

  v26 = a3;
  v25 = a2;
  v3 = *(__int64 **)(a1 + 760);
  *(_OWORD *)&DestinationString[1] = 0LL;
  if ( v3 )
  {
    ObjectPath = (void *)GetObjectPath(*v3);
    v5 = ObjectPath;
    if ( ObjectPath )
    {
      v6 = -1LL;
      v7 = -1LL;
      do
        ++v7;
      while ( *((_BYTE *)ObjectPath + v7) );
      if ( (unsigned __int64)(v7 + 1) > 0x80 )
      {
        v8 = -1073741789;
      }
      else
      {
        do
          ++v6;
        while ( *((_BYTE *)ObjectPath + v6) );
        memmove(v24, ObjectPath, v6 + 1);
        v8 = 0;
      }
      ExFreePoolWithTag(v5, 0);
      if ( v8 >= 0 )
      {
        RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], 0LL);
        v9 = 128LL;
        v10 = v24;
        do
        {
          if ( !*v10 )
            break;
          ++v10;
          --v9;
        }
        while ( v9 );
        v11 = (128 - v9) & ((unsigned __int128)-(__int128)(unsigned __int64)v9 >> 64);
        if ( !v9 )
          LOWORD(v11) = 512;
        LOWORD(DestinationString[0]) = v11;
        DestinationString[2] = ExAllocatePool2(64LL, 2LL * (unsigned __int16)v11 + 2, 1399874369LL);
        v12 = (_WORD *)DestinationString[2];
        if ( DestinationString[2] )
        {
          v13 = DestinationString[0];
          v14 = 0;
          LOWORD(DestinationString[1]) = 2 * LOWORD(DestinationString[0]);
          for ( WORD1(DestinationString[1]) = 2 * LOWORD(DestinationString[0]) + 2;
                v14 < LOWORD(DestinationString[0]);
                v12 = (_WORD *)DestinationString[2] )
          {
            v15 = v14++;
            v12[v15] = (char)v24[v15];
            v13 = DestinationString[0];
          }
          v12[v13] = 0;
          UserData.Ptr = (unsigned __int64)DestinationString;
          v18 = DestinationString[2];
          *(_QWORD *)&UserData.Size = 2LL;
          v19 = 2 * (unsigned int)LOWORD(DestinationString[0]);
          v20 = &v25;
          v22 = &v26;
          v21 = 2LL;
          v23 = 4LL;
          EtwWrite((REGHANDLE)WPP_MAIN_CB.Queue.Wcb.DeviceContext, &ACPI_ETW_EVENT_DEVICE_RESET, 0LL, 4u, &UserData);
          v12 = (_WORD *)DestinationString[2];
        }
        if ( v12 )
          ExFreePoolWithTag(v12, 0);
      }
    }
  }
}
