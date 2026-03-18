/*
 * XREFs of PopDispatchNotificationsToList @ 0x1409BE678
 * Callers:
 *     PopDispatchNotifications @ 0x1409BE630 (PopDispatchNotifications.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14031E470 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14033E850 (ExAcquireFastMutex.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x1406AA030 (ZwUpdateWnfStateData.c)
 *     PopFreeRegistration @ 0x140751344 (PopFreeRegistration.c)
 *     PopMarshalSettingValues @ 0x1409BDF78 (PopMarshalSettingValues.c)
 */

struct _KTHREAD *__fastcall PopDispatchNotificationsToList(__int64 *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rdi
  __int64 v4; // rsi
  int v5; // eax
  __int64 *v6; // rax
  struct _KTHREAD *result; // rax
  int v8; // ebx
  unsigned int v9; // r8d
  int updated; // ebx
  unsigned int v11; // eax
  unsigned int v12; // [rsp+40h] [rbp-58h] BYREF
  __int64 v13; // [rsp+48h] [rbp-50h] BYREF
  _DWORD v14[10]; // [rsp+50h] [rbp-48h] BYREF

  v12 = 0;
  v13 = 0LL;
  ExAcquireFastMutex(&PopSettingLock);
  v3 = *a1;
  while ( (__int64 *)v3 != a1 )
  {
    v4 = v3;
    while ( 1 )
    {
      v5 = *(_DWORD *)(v3 + 52);
      if ( (v5 & 1) == 0 || (v5 & 2) != 0 )
        break;
      v13 = *(_QWORD *)(v3 + 56);
      *(_DWORD *)(v3 + 52) = *(_DWORD *)(v3 + 52) & 0xFFFFFFFC | 2;
      v8 = PopMarshalSettingValues(v3, v14, 0x24u, &v12);
      KeReleaseGuardedMutex(&PopSettingLock);
      v9 = v12;
      if ( v8 < 0 )
        v9 = 0;
      v12 = v9;
      updated = ZwUpdateWnfStateData((__int64)&v13, (__int64)v14);
      if ( KeGetCurrentThread()->WaitBlock[3].SpareLong )
        goto LABEL_18;
      ExAcquireFastMutex(&PopSettingLock);
      v11 = *(_DWORD *)(v3 + 52) & 0xFFFFFFFD;
      *(_DWORD *)(v3 + 52) = v11;
      if ( updated < 0 )
      {
        v5 = v11 | 1;
        *(_DWORD *)(v3 + 52) = v5;
        break;
      }
    }
    v3 = *(_QWORD *)v3;
    if ( (v5 & 2) == 0 && (v5 & 4) != 0 )
    {
      if ( *(_QWORD *)(v3 + 8) != v4 || (v6 = *(__int64 **)(v4 + 8), *v6 != v4) )
        __fastfail(3u);
      *v6 = v3;
      *(_QWORD *)(v3 + 8) = v6;
      PopFreeRegistration((_DWORD *)v4, v2);
    }
  }
  KeReleaseGuardedMutex(&PopSettingLock);
  result = KeGetCurrentThread();
  if ( result->WaitBlock[3].SpareLong )
LABEL_18:
    __fastfail(0x20u);
  return result;
}
