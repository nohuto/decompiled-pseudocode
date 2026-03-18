/*
 * XREFs of PspWow64ReadOrWriteThreadCpuArea @ 0x1409EBC24
 * Callers:
 *     PspWow64GetContextThread_BeforeFix @ 0x14076CC9C (PspWow64GetContextThread_BeforeFix.c)
 *     PspWow64SetContextThread_BeforeFix @ 0x14076D0C0 (PspWow64SetContextThread_BeforeFix.c)
 *     PspWow64SetContextThread @ 0x1408B96E4 (PspWow64SetContextThread.c)
 *     PspWow64GetContextThread @ 0x1409C4730 (PspWow64GetContextThread.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140289A10 (KiStackAttachProcess.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     PspUnlockThreadSecurityShared @ 0x14041DA20 (PspUnlockThreadSecurityShared.c)
 *     PsGetThreadTeb @ 0x140456940 (PsGetThreadTeb.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     ProbeForWrite @ 0x140934CF0 (ProbeForWrite.c)
 *     RtlWow64GetCpuAreaInfo @ 0x1409EBEDC (RtlWow64GetCpuAreaInfo.c)
 */

__int64 __fastcall PspWow64ReadOrWriteThreadCpuArea(
        _KPROCESS *BugCheckParameter1,
        __int64 a2,
        char a3,
        void *a4,
        SIZE_T Length,
        int a6,
        _DWORD *a7,
        bool *a8)
{
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v12; // rsi
  __int64 *v13; // rbx
  __int64 ThreadTeb; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  int CpuAreaInfo; // [rsp+24h] [rbp-C4h]
  volatile void *Address[2]; // [rsp+40h] [rbp-A8h] BYREF
  __int128 v25; // [rsp+50h] [rbp-98h]
  __int128 v26; // [rsp+60h] [rbp-88h]
  _OWORD v27[3]; // [rsp+70h] [rbp-78h] BYREF

  memset(v27, 0, sizeof(v27));
  *(_OWORD *)Address = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v12 = (signed __int64 *)(a2 + 1424);
  v13 = KeAbPreAcquire(a2 + 1424, 0LL);
  if ( _InterlockedCompareExchange64(v12, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v12, 0, v13, (unsigned __int64)v12);
  if ( v13 )
    *((_BYTE *)v13 + 10) = 1;
  ThreadTeb = PsGetThreadTeb(a2);
  if ( ThreadTeb )
  {
    KiStackAttachProcess(BugCheckParameter1, 0, (__int64)v27);
    v16 = *(_QWORD *)(ThreadTeb + 5256);
    if ( v16 )
    {
      CpuAreaInfo = RtlWow64GetCpuAreaInfo(v16, v15, Address);
      if ( CpuAreaInfo >= 0 )
      {
        if ( a3 )
        {
          if ( (_DWORD)Length && ((__int64)Address[0] & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          memmove(a4, (const void *)Address[0], (unsigned int)Length);
          if ( a7 )
          {
            v20 = *((_QWORD *)&v25 + 1);
            if ( *((_QWORD *)&v25 + 1) >= 0x7FFFFFFF0000uLL )
              v20 = 0x7FFFFFFF0000LL;
            *a7 = *(_DWORD *)v20;
          }
        }
        else
        {
          ProbeForWrite(Address[0], (unsigned int)Length, 4u);
          memmove((void *)Address[0], a4, (unsigned int)Length);
          if ( a7 )
          {
            v17 = *((_QWORD *)&v25 + 1);
            if ( *((_QWORD *)&v25 + 1) >= 0x7FFFFFFF0000uLL )
              v17 = 0x7FFFFFFF0000LL;
            *(_DWORD *)v17 = *a7;
          }
        }
        if ( a8 )
        {
          v18 = *(_QWORD *)(ThreadTeb + 5328);
          v19 = v18;
          if ( v18 )
          {
            if ( (v18 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( (unsigned __int64)(v18 + 8) > 0x7FFFFFFF0000LL || v18 + 8 < (unsigned __int64)(v18 + 4) )
              v19 = *(_QWORD *)(ThreadTeb + 5328);
            *a8 = (*(_DWORD *)(v19 + 4) & 2) != 0;
          }
          else
          {
            *a8 = 0;
          }
        }
      }
    }
    else
    {
      CpuAreaInfo = -1073741811;
    }
    KiUnstackDetachProcess((__int64)v27, 0LL);
    PspUnlockThreadSecurityShared(a2, (__int64)KeGetCurrentThread());
    return (unsigned int)CpuAreaInfo;
  }
  else
  {
    PspUnlockThreadSecurityShared(a2, (__int64)KeGetCurrentThread());
    return 3221225547LL;
  }
}
