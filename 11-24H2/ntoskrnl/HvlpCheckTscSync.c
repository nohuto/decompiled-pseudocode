/*
 * XREFs of HvlpCheckTscSync @ 0x140588350
 * Callers:
 *     HvlpPowerStateCallback @ 0x1404BF230 (HvlpPowerStateCallback.c)
 *     HvlPhase2Initialize @ 0x14057FF00 (HvlPhase2Initialize.c)
 * Callees:
 *     HvlpReleaseHypercallPage @ 0x14039DEB0 (HvlpReleaseHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14039DF20 (HvcallInitiateHypercall.c)
 *     HvlpAcquireHypercallPage @ 0x14045D900 (HvlpAcquireHypercallPage.c)
 *     HvlpWriteEventLog @ 0x140588A34 (HvlpWriteEventLog.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 HvlpCheckTscSync()
{
  _QWORD *v0; // rbx
  _QWORD *v1; // rdi
  __int64 result; // rax
  __int128 v3; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v4; // [rsp+30h] [rbp-D0h]
  __int64 v5; // [rsp+38h] [rbp-C8h]
  __int128 v6; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v7; // [rsp+50h] [rbp-B0h]
  __int64 v8; // [rsp+58h] [rbp-A8h]
  __int128 v9; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v10; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+78h] [rbp-88h] BYREF
  __int64 *v12; // [rsp+88h] [rbp-78h]
  __int64 v13; // [rsp+90h] [rbp-70h]
  _BYTE v14[32]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v15[2064]; // [rsp+B8h] [rbp-48h] BYREF

  v7 = 0LL;
  LODWORD(v8) = 0;
  v6 = 0LL;
  v4 = 0LL;
  LODWORD(v5) = 0;
  v3 = 0LL;
  v10 = 0LL;
  v9 = 0LL;
  v0 = HvlpAcquireHypercallPage((__int64)&v6, 1, (__int64)v14, 16LL);
  v1 = HvlpAcquireHypercallPage((__int64)&v3, 2, (__int64)v15, 1032LL);
  *(_DWORD *)v0 = 14;
  if ( !(unsigned __int16)HvcallInitiateHypercall(123) )
  {
    v9 = *(_OWORD *)v1;
    v10 = v1[2];
  }
  HvlpReleaseHypercallPage((unsigned int *)&v3);
  result = HvlpReleaseHypercallPage((unsigned int *)&v6);
  if ( BYTE1(v9) )
  {
    if ( (_BYTE)v9 )
    {
      *(_QWORD *)&UserData.Size = 8LL;
      UserData.Ptr = (ULONGLONG)&v9 + 8;
      v13 = 8LL;
      v12 = &v10;
      return HvlpWriteEventLog(&HV_EVENTLOG_TSC_SYNC_FAILED, 2u, &UserData);
    }
  }
  return result;
}
