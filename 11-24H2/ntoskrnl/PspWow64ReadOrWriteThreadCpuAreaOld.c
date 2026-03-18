/*
 * XREFs of PspWow64ReadOrWriteThreadCpuAreaOld @ 0x14077A5B0
 * Callers:
 *     PspWow64SetContextThread @ 0x140913174 (PspWow64SetContextThread.c)
 *     PspWow64GetContextThread @ 0x1409A90C0 (PspWow64GetContextThread.c)
 * Callees:
 *     KiStackAttachProcess @ 0x1403209E0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     PspUnlockThreadSecurityShared @ 0x14041AFC0 (PspUnlockThreadSecurityShared.c)
 *     PspLockThreadSecurityShared @ 0x14041F270 (PspLockThreadSecurityShared.c)
 *     PsGetThreadTeb @ 0x140456DA0 (PsGetThreadTeb.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     ExRaiseDatatypeMisalignment @ 0x14089B1F0 (ExRaiseDatatypeMisalignment.c)
 *     ProbeForWrite @ 0x1408C0590 (ProbeForWrite.c)
 *     RtlWow64GetCpuAreaInfo @ 0x1409E6180 (RtlWow64GetCpuAreaInfo.c)
 */

__int64 __fastcall PspWow64ReadOrWriteThreadCpuAreaOld(
        _KPROCESS *BugCheckParameter1,
        __int64 a2,
        char a3,
        void *a4,
        size_t Size,
        int a6,
        _DWORD *a7,
        bool *a8)
{
  __int64 ThreadTeb; // r15
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  int CpuAreaInfo; // [rsp+20h] [rbp-C8h]
  void *Src[2]; // [rsp+40h] [rbp-A8h] BYREF
  __int128 v22; // [rsp+50h] [rbp-98h]
  __int128 v23; // [rsp+60h] [rbp-88h]
  _OWORD v24[3]; // [rsp+70h] [rbp-78h] BYREF

  memset(v24, 0, sizeof(v24));
  *(_OWORD *)Src = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  PspLockThreadSecurityShared(a2, (__int64)KeGetCurrentThread());
  ThreadTeb = PsGetThreadTeb(a2);
  if ( ThreadTeb )
  {
    KiStackAttachProcess(BugCheckParameter1, 0, (__int64)v24);
    v15 = *(_QWORD *)(ThreadTeb + 5256);
    if ( v15 )
    {
      CpuAreaInfo = RtlWow64GetCpuAreaInfo(v15, v14, Src);
      if ( CpuAreaInfo >= 0 )
      {
        if ( a3 )
        {
          if ( (_DWORD)Size && ((__int64)Src[0] & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          memmove(a4, Src[0], (unsigned int)Size);
          if ( a7 )
          {
            v16 = *((_QWORD *)&v22 + 1);
            if ( *((_QWORD *)&v22 + 1) >= 0x7FFFFFFF0000uLL )
              v16 = 0x7FFFFFFF0000LL;
            *a7 = *(_DWORD *)v16;
          }
        }
        else
        {
          ProbeForWrite(Src[0], (unsigned int)Size, 4u);
          memmove(Src[0], a4, (unsigned int)Size);
          if ( a7 )
          {
            v17 = *((_QWORD *)&v22 + 1);
            if ( *((_QWORD *)&v22 + 1) >= 0x7FFFFFFF0000uLL )
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
    KiUnstackDetachProcess((__int64)v24, 0);
    PspUnlockThreadSecurityShared(a2);
    return (unsigned int)CpuAreaInfo;
  }
  else
  {
    PspUnlockThreadSecurityShared(a2);
    return 3221225547LL;
  }
}
