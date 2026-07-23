/*
 * XREFs of PpmEventBiosCapChange @ 0x140418DBC
 * Callers:
 *     PpmRegisterPerfCap @ 0x1404188A0 (PpmRegisterPerfCap.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall PpmEventBiosCapChange(__int64 a1, int a2)
{
  const EVENT_DESCRIPTOR *v2; // rbx
  int *v3; // rax
  int v5; // [rsp+40h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-28h] BYREF
  int *v7; // [rsp+58h] [rbp-18h]
  int v8; // [rsp+60h] [rbp-10h]
  int v9; // [rsp+64h] [rbp-Ch]
  int v10; // [rsp+88h] [rbp+18h] BYREF

  v10 = a2;
  v5 = 0;
  if ( *(_BYTE *)(a1 + 68) )
  {
    v2 = &PPM_ETW_BIOS_CAP_CHANGE;
    LOWORD(v5) = *(unsigned __int8 *)(a1 - 35040);
    BYTE2(v5) = *(_BYTE *)(a1 - 35039);
    UserData.Size = 3;
  }
  else
  {
    v2 = (const EVENT_DESCRIPTOR *)PPM_ETW_BIOS_CAP_CHANGE_HV;
    v5 = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 20LL);
    UserData.Size = 4;
  }
  UserData.Reserved = 0;
  v3 = &v5;
  UserData.Ptr = (ULONGLONG)&v5;
  if ( PpmEtwRegistered )
  {
    LOBYTE(v3) = EtwEventEnabled(PpmEtwHandle, v2);
    if ( (_BYTE)v3 )
    {
      v9 = 0;
      v7 = &v10;
      v8 = 4;
      LOBYTE(v3) = EtwWriteEx(PpmEtwHandle, v2, 0LL, 0, 0LL, 0LL, 2u, &UserData);
    }
  }
  return (char)v3;
}
