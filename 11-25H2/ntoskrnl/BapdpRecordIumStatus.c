/*
 * XREFs of BapdpRecordIumStatus @ 0x140C2E644
 * Callers:
 *     BootApplicationPersistentDataProcess @ 0x140BCD52C (BootApplicationPersistentDataProcess.c)
 * Callees:
 *     EtwWriteEx @ 0x140256C60 (EtwWriteEx.c)
 *     BapdRegisterEtwProvider @ 0x1404A47C8 (BapdRegisterEtwProvider.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     EtwUnregister @ 0x140A01CC0 (EtwUnregister.c)
 */

int BapdpRecordIumStatus()
{
  int result; // eax
  __int64 v1; // rcx
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  const EVENT_DESCRIPTOR *v5; // rdx
  REGHANDLE RegHandle; // [rsp+40h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-38h] BYREF
  __int64 v8; // [rsp+58h] [rbp-28h]
  int v9; // [rsp+60h] [rbp-20h]
  int v10; // [rsp+64h] [rbp-1Ch]
  __int64 v11; // [rsp+68h] [rbp-18h]
  int v12; // [rsp+70h] [rbp-10h]
  int v13; // [rsp+74h] [rbp-Ch]

  RegHandle = 0LL;
  result = BapdRegisterEtwProvider(&BOOTENV_ETW_PROVIDER, 1, &RegHandle);
  if ( result >= 0 )
  {
    v1 = *(_QWORD *)&KeNumberProcessorsGroup0[1];
    v2 = *(_QWORD *)(v1 + 240);
    UserData.Reserved = 0;
    UserData.Ptr = v2 + 2896;
    UserData.Size = 4;
    v3 = *(_QWORD *)(v1 + 240);
    v10 = 0;
    v8 = v3 + 2888;
    v9 = 4;
    v4 = *(_QWORD *)(v1 + 240);
    v13 = 0;
    v11 = v4 + 2892;
    v12 = 4;
    v5 = (const EVENT_DESCRIPTOR *)BOOT_ENVIRONMENT_VSM_POLICY_ENABLEMENT;
    if ( *(int *)(*(_QWORD *)(v1 + 240) + 2896LL) < 0 )
      v5 = &BOOT_ENVIRONMENT_VSM_POLICY_ENABLEMENT_FAILURE;
    result = EtwWriteEx(RegHandle, v5, 0LL, 0, 0LL, 0LL, 3u, &UserData);
  }
  if ( RegHandle )
    return EtwUnregister(RegHandle);
  return result;
}
