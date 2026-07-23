/*
 * XREFs of ExpGetKernelDataProtection @ 0x14095B830
 * Callers:
 *     ExpGetLicenseTamperState @ 0x140653EA0 (ExpGetLicenseTamperState.c)
 *     sub_1407B8A00 @ 0x1407B8A00 (sub_1407B8A00.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     sub_14095BDC8 @ 0x14095BDC8 (sub_14095BDC8.c)
 */

__int64 __fastcall ExpGetKernelDataProtection(__int64 a1, _OWORD *a2)
{
  signed __int64 *v4; // rbx
  char *v5; // r14
  _QWORD *v6; // rax
  _OWORD *v7; // rax
  unsigned int v9; // [rsp+20h] [rbp-48h]
  _OWORD *v10; // [rsp+78h] [rbp+10h] BYREF
  _OWORD *v11; // [rsp+80h] [rbp+18h]

  if ( !a2 )
    return 3221225485LL;
  v4 = (signed __int64 *)(a1 + 47024);
  v5 = (char *)KeAbPreAcquire(a1 + 47024, 0LL);
  if ( _InterlockedCompareExchange64(v4, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v4, 0, v5, (__int64)v4);
  if ( v5 )
    v5[10] = 1;
  v6 = *(_QWORD **)(a1 + 47016);
  if ( v6 )
  {
    v11 = (_OWORD *)*v6;
    v10 = v11;
    sub_14095BDC8(&v10);
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
