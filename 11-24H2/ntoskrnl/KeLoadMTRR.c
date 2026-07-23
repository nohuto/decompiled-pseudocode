/*
 * XREFs of KeLoadMTRR @ 0x140B6F790
 * Callers:
 *     KiLoadMTRRTarget @ 0x140B599B0 (KiLoadMTRRTarget.c)
 *     HalpPostSleepMP @ 0x140B70824 (HalpPostSleepMP.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     KeDisableInterrupts @ 0x1402CAA10 (KeDisableInterrupts.c)
 *     KeFlushCurrentTbImmediately @ 0x1404A8590 (KeFlushCurrentTbImmediately.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     KiCompareVarMtrr @ 0x140B598FC (KiCompareVarMtrr.c)
 *     KiLockStepExecution @ 0x140B599C8 (KiLockStepExecution.c)
 *     KiReadFixedMtrr @ 0x140B59A3C (KiReadFixedMtrr.c)
 *     KiWriteFixedMtrr @ 0x140B59B98 (KiWriteFixedMtrr.c)
 */

__int64 __fastcall KeLoadMTRR(__int64 a1)
{
  __int64 i; // rdx
  bool v3; // r15
  unsigned __int64 v4; // r14
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rbx
  unsigned int v7; // r12d
  __int64 v8; // r9
  unsigned int v9; // r10d
  _QWORD *v10; // r8
  __int64 v11; // r9
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v14; // eax
  signed __int32 v15; // ett
  _QWORD v17[12]; // [rsp+20h] [rbp-98h] BYREF

  if ( byte_140F103D0 )
  {
    if ( !KiCompareVarMtrr() )
      KeMtrrComparisonFailed = 1;
    if ( qword_140F103E0 )
    {
      KiReadFixedMtrr(v17);
      if ( !KeGetCurrentPrcb()->Number )
      {
        for ( i = 0LL; (unsigned int)i < 0xB; i = (unsigned int)(i + 1) )
        {
          if ( *((_QWORD *)qword_140F103E0 + i) != v17[i] )
          {
            KeMtrrComparisonFailed = 1;
            break;
          }
        }
      }
    }
    v3 = KeDisableInterrupts();
    KiLockStepExecution(a1);
    v4 = __readcr0();
    __writecr0(v4 & 0xFFFFFFFF9FFFFFFFuLL | 0x40000000);
    __wbinvd();
    v5 = __readcr4();
    if ( (v5 & 0x80) != 0 )
      __writecr4(v5 & 0xFFFFFFFFFFFFFF7FuLL);
    else
      KeFlushCurrentTbImmediately();
    v6 = KiMtrrInfo & 0xFFFFFFFFFFFFF7FFuLL;
    __writemsr(0x2FFu, KiMtrrInfo & 0xFFFFFFFFFFFFF7FFuLL);
    v7 = 0;
    if ( (_BYTE)qword_140F103C8 )
    {
      v8 = 0LL;
      v9 = 513;
      do
      {
        v10 = qword_140F103D8;
        v11 = 2 * v8;
        __writemsr(v9 - 1, *((_QWORD *)qword_140F103D8 + v11));
        __writemsr(v9, v10[v11 + 1]);
        v8 = ++v7;
        v9 += 2;
      }
      while ( v7 < (unsigned __int64)(unsigned __int8)qword_140F103C8 );
    }
    if ( qword_140F103E0 )
      KiWriteFixedMtrr((unsigned __int64 *)qword_140F103E0);
    __writemsr(0x2FFu, v6 | 0x800);
    __wbinvd();
    KeFlushCurrentTbImmediately();
    __writecr0(v4);
    if ( (v5 & 0x80) != 0 )
      __writecr4(v5);
    KiLockStepExecution(a1);
    if ( v3 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        v14 = *SchedulerAssist;
        do
        {
          v15 = v14;
          v14 = _InterlockedCompareExchange(SchedulerAssist, v14 & 0xFFDFFFFF, v14);
        }
        while ( v15 != v14 );
        if ( (v14 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      _enable();
    }
  }
  return 0LL;
}
