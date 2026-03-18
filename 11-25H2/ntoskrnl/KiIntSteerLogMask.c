/*
 * XREFs of KiIntSteerLogMask @ 0x1403AF598
 * Callers:
 *     KiIntSteerLogStatus @ 0x1403AE85C (KiIntSteerLogStatus.c)
 *     KeIntSteerPeriodic @ 0x1403AF134 (KeIntSteerPeriodic.c)
 * Callees:
 *     EtwWriteEx @ 0x140256C60 (EtwWriteEx.c)
 *     KeCountSetBitsAffinityEx @ 0x140271370 (KeCountSetBitsAffinityEx.c)
 *     KiIntSteerEtwEventEnabled @ 0x1403AF324 (KiIntSteerEtwEventEnabled.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

char __fastcall KiIntSteerLogMask(char a1)
{
  const EVENT_DESCRIPTOR *v1; // rbx
  char result; // al
  int v3; // [rsp+40h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-9h] BYREF
  int *v5; // [rsp+60h] [rbp+7h]
  int v6; // [rsp+68h] [rbp+Fh]
  int v7; // [rsp+6Ch] [rbp+13h]
  int *v8; // [rsp+70h] [rbp+17h]
  int v9; // [rsp+78h] [rbp+1Fh]
  int v10; // [rsp+7Ch] [rbp+23h]
  __int64 *v11; // [rsp+80h] [rbp+27h]
  int v12; // [rsp+88h] [rbp+2Fh]
  int v13; // [rsp+8Ch] [rbp+33h]
  _QWORD *v14; // [rsp+90h] [rbp+37h]
  int v15; // [rsp+98h] [rbp+3Fh]
  int v16; // [rsp+9Ch] [rbp+43h]

  v1 = &KMPnPRundownEvt_SleepStudy_ParentPdo;
  if ( a1 )
    v1 = &KMPnPRundownEvt_SleepStudy_ConnectionResource;
  result = KiIntSteerEtwEventEnabled((__int64)v1);
  if ( result )
  {
    UserData.Reserved = 0;
    v7 = 0;
    UserData.Ptr = (ULONGLONG)&KiIntSteerLoadPercent;
    UserData.Size = 4;
    v5 = &KiIntTrackRootCount;
    v6 = 4;
    v10 = 0;
    v13 = 0;
    v16 = 0;
    v3 = KeCountSetBitsAffinityEx((unsigned __int16 *)KiIntSteerMask);
    v8 = &v3;
    v14 = qword_140F0F568;
    v15 = 8 * LOWORD(KiIntSteerMask[0]);
    v9 = 4;
    v11 = KiIntSteerMask;
    v12 = 2;
    return EtwWriteEx(KiIntSteerEtwHandle, v1, 0LL, 0, 0LL, 0LL, 5u, &UserData);
  }
  return result;
}
