/*
 * XREFs of sub_1407B935C @ 0x1407B935C
 * Callers:
 *     SLUpdateLicenseDataInternal @ 0x1407BA204 (SLUpdateLicenseDataInternal.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     ZwSetValueKey @ 0x1406A7010 (ZwSetValueKey.c)
 *     SpRegOpenRedirectedKey @ 0x1407BB144 (SpRegOpenRedirectedKey.c)
 */

__int64 __fastcall sub_1407B935C(__int64 a1)
{
  signed __int64 *v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  _QWORD *v5; // rsi
  struct _KTHREAD *CurrentThread; // [rsp+30h] [rbp-38h]
  char v8; // [rsp+78h] [rbp+10h]
  NTSTATUS v9; // [rsp+80h] [rbp+18h]
  HANDLE KeyHandle; // [rsp+88h] [rbp+20h] BYREF

  v9 = 0;
  KeyHandle = 0LL;
  v8 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v2 = (signed __int64 *)(a1 + 46840);
  v5 = KeAbPreAcquire(a1 + 46840, 0LL);
  if ( _InterlockedCompareExchange64(v2, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v2, 0, v5, (__int64)v2);
  if ( v5 )
    *((_BYTE *)v5 + 10) = 1;
  if ( *(_QWORD *)(a1 + 46832) )
  {
    v9 = SpRegOpenRedirectedKey(v4, v3, &KeyHandle);
    if ( v9 >= 0 )
    {
      v8 = 1;
      v9 = ZwSetValueKey(
             KeyHandle,
             (PUNICODE_STRING)&stru_140B3BFE8,
             0,
             3u,
             *(PVOID *)(a1 + 46832),
             **(_DWORD **)(a1 + 46832));
    }
  }
  if ( _InterlockedCompareExchange64(v2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v2);
  KeAbPostRelease((ULONG_PTR)v2);
  KeLeaveCriticalRegion();
  if ( v8 == 1 )
    ZwClose(KeyHandle);
  return (unsigned int)v9;
}
