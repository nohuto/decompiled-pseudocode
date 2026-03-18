/*
 * XREFs of ExpGetKernelDataProtection @ 0x140973020
 * Callers:
 *     ExpGetLicenseTamperState @ 0x1406557A0 (ExpGetLicenseTamperState.c)
 *     sub_1407B85B0 @ 0x1407B85B0 (sub_1407B85B0.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     sub_1409735B8 @ 0x1409735B8 (sub_1409735B8.c)
 */

__int64 __fastcall ExpGetKernelDataProtection(__int64 a1, _OWORD *a2)
{
  signed __int64 *v4; // rbx
  _QWORD *v5; // r14
  _QWORD *v6; // rax
  _OWORD *v7; // rax
  unsigned int v9; // [rsp+20h] [rbp-48h]
  _OWORD *v10; // [rsp+78h] [rbp+10h] BYREF
  _OWORD *v11; // [rsp+80h] [rbp+18h]

  if ( !a2 )
    return 3221225485LL;
  v4 = (signed __int64 *)(a1 + 47024);
  v5 = KeAbPreAcquire(a1 + 47024, 0LL);
  if ( _InterlockedCompareExchange64(v4, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v4, 0, v5, (__int64)v4);
  if ( v5 )
    *((_BYTE *)v5 + 10) = 1;
  v6 = *(_QWORD **)(a1 + 47016);
  if ( v6 )
  {
    v11 = (_OWORD *)*v6;
    v10 = v11;
    sub_1409735B8(&v10);
    v7 = v10;
    v11 = v10;
    v9 = 0;
    *a2 = *v10;
    a2[1] = v7[1];
    a2[2] = v7[2];
  }
  else
  {
    v9 = -1073741275;
  }
  if ( _InterlockedCompareExchange64(v4, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v4);
  KeAbPostRelease((ULONG_PTR)v4);
  return v9;
}
