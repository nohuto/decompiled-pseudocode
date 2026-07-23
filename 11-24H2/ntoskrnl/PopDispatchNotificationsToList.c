/*
 * XREFs of PopDispatchNotificationsToList @ 0x1409A4CC8
 * Callers:
 *     PopDispatchNotifications @ 0x1409A4C80 (PopDispatchNotifications.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x1402C7000 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14031DD30 (ExAcquireFastMutex.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x1406AAFD0 (ZwUpdateWnfStateData.c)
 *     PopFreeRegistration @ 0x14074F664 (PopFreeRegistration.c)
 *     PopMarshalSettingValues @ 0x1409A45C8 (PopMarshalSettingValues.c)
 */

struct _KTHREAD *__fastcall PopDispatchNotificationsToList(WNF_STATE_NAME **a1)
{
  WNF_STATE_NAME *v2; // rdi
  WNF_STATE_NAME *v3; // rsi
  int v4; // eax
  WNF_STATE_NAME **v5; // rax
  struct _KTHREAD *result; // rax
  int v7; // ebx
  ULONG v8; // r8d
  NTSTATUS updated; // ebx
  unsigned int v10; // eax
  ULONG v11; // [rsp+40h] [rbp-58h] BYREF
  WNF_STATE_NAME StateName; // [rsp+48h] [rbp-50h] BYREF
  _DWORD Buffer[10]; // [rsp+50h] [rbp-48h] BYREF

  v11 = 0;
  StateName = 0LL;
  ExAcquireFastMutex(&PopSettingLock);
  v2 = *a1;
  while ( v2 != (WNF_STATE_NAME *)a1 )
  {
    v3 = v2;
    while ( 1 )
    {
      v4 = v2[6].Data[1];
      if ( (v4 & 1) == 0 || (v4 & 2) != 0 )
        break;
      StateName = v2[7];
      v2[6].Data[1] = v2[6].Data[1] & 0xFFFFFFFC | 2;
      v7 = PopMarshalSettingValues((__int64)v2, Buffer, 0x24u, &v11);
      KeReleaseGuardedMutex(&PopSettingLock);
      v8 = v11;
      if ( v7 < 0 )
        v8 = 0;
      v11 = v8;
      updated = ZwUpdateWnfStateData(&StateName, Buffer, v8, 0LL, 0LL, 0, 0);
      if ( KeGetCurrentThread()->WaitBlock[3].SpareLong )
        goto LABEL_18;
      ExAcquireFastMutex(&PopSettingLock);
      v10 = v2[6].Data[1] & 0xFFFFFFFD;
      v2[6].Data[1] = v10;
      if ( updated < 0 )
      {
        v4 = v10 | 1;
        v2[6].Data[1] = v4;
        break;
      }
    }
    v2 = (WNF_STATE_NAME *)*v2;
    if ( (v4 & 2) == 0 && (v4 & 4) != 0 )
    {
      if ( (WNF_STATE_NAME *)v2[1] != v3 || (v5 = (WNF_STATE_NAME **)v3[1], *v5 != v3) )
        __fastfail(3u);
      *v5 = v2;
      v2[1] = (WNF_STATE_NAME)v5;
      PopFreeRegistration(v3);
    }
  }
  KeReleaseGuardedMutex(&PopSettingLock);
  result = KeGetCurrentThread();
  if ( result->WaitBlock[3].SpareLong )
LABEL_18:
    __fastfail(0x20u);
  return result;
}
