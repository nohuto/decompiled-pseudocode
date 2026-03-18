/*
 * XREFs of PpmEventHgsHardwareTableResonChanged @ 0x1404CD078
 * Callers:
 *     PpmHeteroUpdateHgsConfiguration @ 0x140267B4C (PpmHeteroUpdateHgsConfiguration.c)
 *     PpmEventTraceControlCallback @ 0x140AC4110 (PpmEventTraceControlCallback.c)
 * Callees:
 *     EtwEventEnabled @ 0x140252BF0 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140256C60 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PpmEventHgsHardwareTableResonChanged(char a1)
{
  const EVENT_DESCRIPTOR *v1; // rbx
  _BYTE *Pool2; // rdi
  _BYTE *v3; // r8
  __int64 v4; // r9
  __int64 v5; // rdx
  char v6; // al
  unsigned int v7; // [rsp+40h] [rbp-40h] BYREF
  int v8; // [rsp+44h] [rbp-3Ch] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-38h] BYREF
  int *v10; // [rsp+58h] [rbp-28h]
  int i; // [rsp+60h] [rbp-20h]
  int v12; // [rsp+64h] [rbp-1Ch]
  _BYTE *v13; // [rsp+68h] [rbp-18h]
  int v14; // [rsp+70h] [rbp-10h]
  int v15; // [rsp+74h] [rbp-Ch]

  v1 = (const EVENT_DESCRIPTOR *)PPM_ETW_WPS_DYNAMIC_UPDATE_REASON_RUNDOWN;
  if ( !a1 )
    v1 = &PPM_ETW_WPS_DYNAMIC_UPDATE_REASON;
  if ( PpmEtwRegistered )
  {
    if ( EtwEventEnabled(PpmEtwHandle, v1) )
    {
      v7 = PpmHeteroWorkloadClasses;
      v8 = PpmHeteroWorkloadClasses;
      Pool2 = (_BYTE *)ExAllocatePool2(0x100uLL);
      if ( Pool2 )
      {
        v3 = PpmHeteroHgsOldUpdateReason;
        if ( PpmHeteroHgsOldUpdateReason && PpmHeteroHgsNewUpdateReason )
        {
          UserData.Reserved = 0;
          v12 = 0;
          UserData.Ptr = (ULONGLONG)&v7;
          v4 = 0LL;
          UserData.Size = 4;
          v10 = &v8;
          for ( i = 4; (unsigned int)v4 < v7; Pool2[2 * v5 + 5] = v6 )
          {
            v5 = 3 * v4;
            *(_DWORD *)&Pool2[2 * v5] = v4;
            Pool2[2 * v5 + 4] = v3[2 * v4];
            v6 = v3[2 * v4 + 1];
            v4 = (unsigned int)(v4 + 1);
          }
          v15 = 0;
          v13 = Pool2;
          v14 = 6 * v8;
          EtwWriteEx(PpmEtwHandle, v1, 0LL, 0, 0LL, 0LL, 3u, &UserData);
        }
        ExFreePoolWithTag(Pool2, 0x654D5050u);
      }
    }
  }
}
