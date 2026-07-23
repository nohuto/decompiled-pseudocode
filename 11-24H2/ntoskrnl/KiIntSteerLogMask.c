/*
 * XREFs of KiIntSteerLogMask @ 0x1402B1728
 * Callers:
 *     KiIntSteerLogStatus @ 0x1402AF804 (KiIntSteerLogStatus.c)
 *     KeIntSteerPeriodic @ 0x1402B1294 (KeIntSteerPeriodic.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     KiIntSteerEtwEventEnabled @ 0x1402B14A8 (KiIntSteerEtwEventEnabled.c)
 *     KeCountSetBitsAffinityEx @ 0x14039E490 (KeCountSetBitsAffinityEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall KiIntSteerLogMask(char a1, __int64 a2)
{
  const EVENT_DESCRIPTOR *v2; // rbx
  char result; // al
  int v4; // [rsp+40h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-9h] BYREF
  int *v6; // [rsp+60h] [rbp+7h]
  int v7; // [rsp+68h] [rbp+Fh]
  int v8; // [rsp+6Ch] [rbp+13h]
  int *v9; // [rsp+70h] [rbp+17h]
  int v10; // [rsp+78h] [rbp+1Fh]
  int v11; // [rsp+7Ch] [rbp+23h]
  __int64 *v12; // [rsp+80h] [rbp+27h]
  int v13; // [rsp+88h] [rbp+2Fh]
  int v14; // [rsp+8Ch] [rbp+33h]
  void *v15; // [rsp+90h] [rbp+37h]
  int v16; // [rsp+98h] [rbp+3Fh]
  int v17; // [rsp+9Ch] [rbp+43h]

  v2 = &KMPnPRundownEvt_SleepStudy_ParentPdo;
  if ( a1 )
    v2 = &KMPnPRundownEvt_SleepStudy_ConnectionResource;
  result = KiIntSteerEtwEventEnabled((__int64)v2, a2);
  if ( result )
  {
    UserData.Reserved = 0;
    v8 = 0;
    UserData.Ptr = (ULONGLONG)&KiIntSteerLoadPercent;
    UserData.Size = 4;
    v6 = &KiIntTrackRootCount;
    v7 = 4;
    v11 = 0;
    v14 = 0;
    v17 = 0;
    v4 = KeCountSetBitsAffinityEx(KiIntSteerMask);
    v9 = &v4;
    v15 = &unk_140F100E8;
    v16 = 8 * LOWORD(KiIntSteerMask[0]);
    v10 = 4;
    v12 = KiIntSteerMask;
    v13 = 2;
    return EtwWriteEx(KiIntSteerEtwHandle, v2, 0LL, 0, 0LL, 0LL, 5u, &UserData);
  }
  return result;
}
