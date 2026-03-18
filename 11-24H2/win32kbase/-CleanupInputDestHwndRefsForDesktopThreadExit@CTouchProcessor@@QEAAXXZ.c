/*
 * XREFs of ?CleanupInputDestHwndRefsForDesktopThreadExit@CTouchProcessor@@QEAAXXZ @ 0x1401F7E10
 * Callers:
 *     <none>
 * Callees:
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1400C47E4 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x1401F6318 (--0CInpLockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z.c)
 *     _lambda_eba40ec2e57c463160aa5102b24468e6_::operator() @ 0x1401F6640 (_lambda_eba40ec2e57c463160aa5102b24468e6_--operator().c)
 */

void __fastcall CTouchProcessor::CleanupInputDestHwndRefsForDesktopThreadExit(PERESOURCE *this)
{
  __int64 v2; // rcx
  PERESOURCE Flink; // rdi
  char v4; // al
  unsigned int v5; // r14d
  char *SharedWaiters; // r12
  __int64 i; // r15
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rcx
  PERESOURCE v11; // rbx
  PERESOURCE *v12[6]; // [rsp+20h] [rbp-58h] BYREF
  int v13; // [rsp+80h] [rbp+8h] BYREF

  CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)v12, this + 4, 0LL);
  Flink = this[6];
  v4 = 0;
  LOBYTE(v13) = 0;
  if ( Flink != (PERESOURCE)(this + 6) )
  {
    do
    {
      v5 = 0;
      SharedWaiters = (char *)Flink[2].SharedWaiters;
      for ( i = *(_QWORD *)&Flink[2].ActiveCount; v5 < LODWORD(Flink->ExclusiveWaiters); ++v5 )
      {
        lambda_eba40ec2e57c463160aa5102b24468e6_::operator()(
          v2,
          (CInputDest *)&SharedWaiters[160 * v5 + 16],
          (char *)&v13);
        v8 = 480LL * v5;
        lambda_eba40ec2e57c463160aa5102b24468e6_::operator()(v9, (CInputDest *)(i + v8 + 24), (char *)&v13);
        lambda_eba40ec2e57c463160aa5102b24468e6_::operator()(v10, (CInputDest *)(i + v8 + 352), (char *)&v13);
      }
      Flink = (PERESOURCE)Flink->SystemResourcesList.Flink;
    }
    while ( Flink != (PERESOURCE)(this + 6) );
    v4 = v13;
  }
  if ( !gbIgnoreStressedOutStuff && v4 )
  {
    v13 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 17309);
  }
  LOBYTE(v13) = 0;
  v11 = this[8];
  if ( v11 != (PERESOURCE)(this + 8) )
  {
    do
    {
      lambda_eba40ec2e57c463160aa5102b24468e6_::operator()(v2, (CInputDest *)&v11->NumberOfSharedWaiters, (char *)&v13);
      v11 = (PERESOURCE)v11->SystemResourcesList.Flink;
    }
    while ( v11 != (PERESOURCE)(this + 8) );
    if ( (_BYTE)v13 )
    {
      v13 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 17319);
    }
  }
  CInpLockGuardExclusive::~CInpLockGuardExclusive(v12);
}
