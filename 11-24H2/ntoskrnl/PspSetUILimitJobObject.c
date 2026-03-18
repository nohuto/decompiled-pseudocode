/*
 * XREFs of PspSetUILimitJobObject @ 0x1407785C8
 * Callers:
 *     PsSystemSetUILimitJobObject @ 0x140777390 (PsSystemSetUILimitJobObject.c)
 *     NtSetInformationJobObject @ 0x140ACE760 (NtSetInformationJobObject.c)
 * Callees:
 *     Feature_SysSetJobUILimits__private_IsEnabledDeviceUsageNoInline @ 0x1405E57CC (Feature_SysSetJobUILimits__private_IsEnabledDeviceUsageNoInline.c)
 *     PspBindProcessSessionToJob @ 0x1408E67B0 (PspBindProcessSessionToJob.c)
 *     PspLockJobChain @ 0x1408E76DC (PspLockJobChain.c)
 *     PspUnlockJobChain @ 0x1408E7884 (PspUnlockJobChain.c)
 *     PspUnlockJob @ 0x1408ED360 (PspUnlockJob.c)
 *     PsInvokeWin32Callout @ 0x1409BADD0 (PsInvokeWin32Callout.c)
 *     PspDoesJobHierarchyPermitUILimits @ 0x140AD10F4 (PspDoesJobHierarchyPermitUILimits.c)
 */

__int64 __fastcall PspSetUILimitJobObject(__int64 a1, __int64 a2, unsigned int a3, char a4)
{
  char v4; // r13
  __int64 v5; // r14
  unsigned int v9; // edi
  char v10; // r15
  _DWORD *v11; // rsi
  _QWORD v13[3]; // [rsp+20h] [rbp-58h] BYREF
  int v14; // [rsp+38h] [rbp-40h]
  int v15; // [rsp+3Ch] [rbp-3Ch]
  __int64 v16; // [rsp+40h] [rbp-38h]
  unsigned int v17; // [rsp+90h] [rbp+18h] BYREF

  v17 = 0;
  v4 = 0;
  v5 = a3;
  if ( (a3 & 0xFFFFFC00) == 0 )
  {
    PspLockJobChain(a1, a2, 0LL);
    v10 = 1;
    Feature_SysSetJobUILimits__private_IsEnabledDeviceUsageNoInline();
    if ( !(unsigned __int8)PspDoesJobHierarchyPermitUILimits(a1) )
    {
      v9 = -1073741637;
LABEL_17:
      PspUnlockJobChain(a1, a2, 0LL);
      return v9;
    }
    if ( *(_DWORD *)(a1 + 576) == -2 )
    {
      v9 = -1073741790;
      goto LABEL_17;
    }
    PspBindProcessSessionToJob(a1, KeGetCurrentThread()->ApcState.Process);
    v11 = (_DWORD *)(a1 + 544);
    v17 = *(_DWORD *)(a1 + 576);
    if ( v17 <= 0xFFFFFFFD && *v11 != (_DWORD)v5 )
    {
      if ( (unsigned __int8)IsWin32kJobNotifyCallOutPresent() )
      {
        *v11 = v5;
        _InterlockedOr((volatile signed __int32 *)(a1 + 1552), 0x10u);
        if ( (a4 & 1) != 0 )
          _InterlockedOr((volatile signed __int32 *)(a1 + 1556), 0x10u);
        PspUnlockJobChain(a1, a2, 0LL);
        v10 = 0;
        Win32kJobUpdateUIRestrictionsNotify(a1);
      }
      else
      {
        v13[1] = 0LL;
        v15 = 0;
        v13[0] = 0LL;
        PspUnlockJobChain(a1, a2, 1LL);
        v14 = 0;
        v13[2] = a1;
        v4 = 1;
        v16 = v5;
        v10 = 0;
        v9 = PsInvokeWin32Callout(6LL, v13, 1LL, &v17);
        if ( (v9 & 0x80000000) != 0 )
          goto LABEL_19;
      }
    }
    if ( !(unsigned __int8)IsWin32kJobNotifyCallOutPresent() )
    {
      *v11 = v5;
      _InterlockedOr((volatile signed __int32 *)(a1 + 1552), 0x10u);
    }
    v9 = 0;
    if ( v10 )
      goto LABEL_17;
    if ( !v4 )
      return v9;
LABEL_19:
    PspUnlockJob(a1, a2);
    return v9;
  }
  return (unsigned int)-1073741811;
}
