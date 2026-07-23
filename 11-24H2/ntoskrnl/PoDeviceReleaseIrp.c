/*
 * XREFs of PoDeviceReleaseIrp @ 0x1403CC27C
 * Callers:
 *     PoHandleIrp @ 0x1403CBD64 (PoHandleIrp.c)
 *     IopfCompleteRequest @ 0x1403CCDE0 (IopfCompleteRequest.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall PoDeviceReleaseIrp(__int64 a1, char a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // [rsp+40h] [rbp-48h] BYREF
  __int64 v6; // [rsp+48h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-38h] BYREF
  __int64 *v8; // [rsp+60h] [rbp-28h]
  int v9; // [rsp+68h] [rbp-20h]
  int v10; // [rsp+6Ch] [rbp-1Ch]

  if ( (unsigned __int8)(a2 - 2) <= 1u )
  {
    v3 = *(char *)(a1 + 66);
    v6 = a3;
    v5 = a1;
    v4 = *(_QWORD *)(a1 + 72 * v3 + 200);
    if ( PopDiagHandleRegistered )
    {
      if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_IRP_DRIVERRELEASE) )
      {
        UserData.Reserved = 0;
        v10 = 0;
        UserData.Ptr = (ULONGLONG)&v5;
        UserData.Size = 8;
        v8 = &v6;
        v9 = 8;
        EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_IRP_DRIVERRELEASE, 0LL, 0, 0LL, 0LL, 2u, &UserData);
      }
    }
    *(_QWORD *)(v4 + 40) = 0LL;
  }
}
