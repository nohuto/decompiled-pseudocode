/*
 * XREFs of KasaniSendTelemetryDriver @ 0x1405A7CB0
 * Callers:
 *     KasanDriverLoadImageInternal @ 0x1404B24C0 (KasanDriverLoadImageInternal.c)
 *     KasanInitSystem @ 0x140C286E0 (KasanInitSystem.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall KasaniSendTelemetryDriver(__int64 a1)
{
  int v3; // ecx
  __int64 v4; // [rsp+48h] [rbp-80h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-78h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-68h] BYREF
  char *v7; // [rsp+70h] [rbp-58h]
  int v8; // [rsp+78h] [rbp-50h]
  int v9; // [rsp+7Ch] [rbp-4Ch]
  __int64 *v10; // [rsp+80h] [rbp-48h]
  __int64 v11; // [rsp+88h] [rbp-40h]
  _DWORD *v12; // [rsp+90h] [rbp-38h]
  __int64 v13; // [rsp+98h] [rbp-30h]
  __int64 v14; // [rsp+A0h] [rbp-28h]
  _DWORD v15[2]; // [rsp+A8h] [rbp-20h] BYREF

  if ( (unsigned int)dword_140E07000 > 5
    && (qword_140E07010 & 0x400000000000LL) != 0
    && (qword_140E07018 & 0x400000000000LL) == qword_140E07018 )
  {
    v3 = *(unsigned __int16 *)(a1 + 88);
    v10 = &v4;
    v14 = *(_QWORD *)(a1 + 96);
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = (ULONGLONG)off_140E07008;
    v15[0] = v3;
    v12 = v15;
    v4 = 0x2000000LL;
    v11 = 8LL;
    v13 = 2LL;
    v15[1] = 0;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 0x400000000000LL;
    UserData.Size = *(unsigned __int16 *)off_140E07008;
    v7 = byte_140047165;
    UserData.Reserved = 2;
    v8 = 43;
    v9 = 1;
    EtwWriteEx(qword_140E07020, &EventDescriptor, 0LL, 0, 0LL, 0LL, 5u, &UserData);
  }
}
