/*
 * XREFs of NtQueryWnfStateNameInformation @ 0x140AE4930
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExpWnfLookupPermanentName @ 0x140833714 (ExpWnfLookupPermanentName.c)
 *     ProbeForWrite @ 0x1408BDF50 (ProbeForWrite.c)
 *     ExpWnfLookupNameInstance @ 0x140900CF0 (ExpWnfLookupNameInstance.c)
 *     ExpCaptureWnfStateName @ 0x1409013E0 (ExpCaptureWnfStateName.c)
 *     ExpWnfResolveScopeInstance @ 0x1409032C0 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfCheckCrossScopeAccess @ 0x140904A84 (ExpWnfCheckCrossScopeAccess.c)
 *     ExpWnfCheckCallerAccess @ 0x1409E0090 (ExpWnfCheckCallerAccess.c)
 *     ExpWnfCaptureScopeInstanceId @ 0x1409E62A0 (ExpWnfCaptureScopeInstanceId.c)
 *     ExpWnfReleaseCapturedScopeInstanceId @ 0x1409E8C7C (ExpWnfReleaseCapturedScopeInstanceId.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtQueryWnfStateNameInformation(
        PCWNF_STATE_NAME StateName,
        WNF_STATE_NAME_INFORMATION NameInfoClass,
        const void *ExplicitScope,
        PVOID InfoBuffer,
        ULONG InfoBufferSize)
{
  _DWORD *v5; // rsi
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // r15
  NTSTATUS v10; // edi
  __int64 v11; // r8
  unsigned __int64 v12; // rbx
  int v13; // esi
  int v14; // r13d
  ACCESS_MASK v15; // r12d
  __int64 v16; // r8
  PEPROCESS Process; // rdx
  struct _KTHREAD *v18; // rax
  int v19; // eax
  void *Ptr; // rcx
  int v22; // [rsp+3Ch] [rbp-7Ch]
  int v23; // [rsp+40h] [rbp-78h]
  struct _EX_RUNDOWN_REF *v24; // [rsp+48h] [rbp-70h] BYREF
  unsigned __int64 v25; // [rsp+50h] [rbp-68h] BYREF
  int v26; // [rsp+58h] [rbp-60h]
  int v27[2]; // [rsp+60h] [rbp-58h] BYREF
  PVOID P; // [rsp+68h] [rbp-50h] BYREF
  PSID Sid; // [rsp+70h] [rbp-48h] BYREF
  PVOID v30[3]; // [rsp+78h] [rbp-40h] BYREF

  v5 = InfoBuffer;
  v25 = 0LL;
  Sid = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  P = 0LL;
  *(_QWORD *)v27 = 0LL;
  v24 = 0LL;
  v22 = 0;
  *(_OWORD *)v30 = 0LL;
  v10 = ExpCaptureWnfStateName((__int64 *)StateName, &v25, PreviousMode);
  if ( v10 >= 0 )
  {
    v12 = v25;
    v26 = (v25 >> 4) & 3;
    v22 = (v25 >> 6) & 0xF;
    LOBYTE(v11) = PreviousMode;
    v10 = ExpWnfCaptureScopeInstanceId(v22, ExplicitScope, v11, (__int64)&Sid, (__int64)v30);
    if ( v10 >= 0 )
    {
      if ( NameInfoClass && (unsigned int)(NameInfoClass - 1) >= 2 )
      {
        v10 = -1073741821;
        goto LABEL_47;
      }
      if ( InfoBufferSize < 4 )
      {
        v10 = -1073741811;
        goto LABEL_47;
      }
      if ( PreviousMode )
        ProbeForWrite(v5, InfoBufferSize, 4u);
      v13 = 1;
      if ( NameInfoClass )
      {
        v23 = 0;
      }
      else
      {
        v23 = 1;
        if ( ExplicitScope )
        {
          v10 = -1073741811;
LABEL_46:
          v5 = InfoBuffer;
          goto LABEL_47;
        }
      }
      if ( PreviousMode && NameInfoClass )
      {
        v14 = 0;
        if ( ExplicitScope )
        {
          v10 = ExpWnfCheckCrossScopeAccess(v12);
          if ( v10 < 0 )
            goto LABEL_46;
        }
      }
      else
      {
        v14 = 1;
      }
      v15 = 0;
      if ( !v14 && (unsigned int)(NameInfoClass - 1) <= 1 )
        v15 = 2;
      v16 = 0LL;
      if ( PreviousMode )
      {
        v18 = KeGetCurrentThread();
        Process = v18->ApcState.Process;
        v12 = v25;
        if ( !v23 )
          v16 = (__int64)v18;
      }
      else
      {
        Process = PsInitialSystemProcess;
      }
      v10 = ExpWnfResolveScopeInstance(v27, (__int64)Process, v16, v22, (__int64 *)Sid);
      if ( v10 < 0 )
        goto LABEL_46;
      v19 = ExpWnfLookupNameInstance(*(__int64 *)v27, v12, &v24);
      v10 = v19;
      if ( v19 != -1073741772 || v26 == 3 )
      {
        if ( v19 < 0 )
          goto LABEL_46;
        if ( !v14 )
        {
          Ptr = v24[9].Ptr;
LABEL_36:
          v10 = ExpWnfCheckCallerAccess(Ptr, v15);
          if ( v10 < 0 )
            goto LABEL_46;
        }
      }
      else
      {
        v10 = ExpWnfLookupPermanentName(v12, (PSECURITY_DESCRIPTOR **)&P);
        if ( v10 < 0 )
          goto LABEL_46;
        if ( !v14 )
        {
          Ptr = (void *)*((_QWORD *)P + 2);
          goto LABEL_36;
        }
      }
      if ( NameInfoClass )
      {
        if ( NameInfoClass == WnfInfoSubscribersPresent )
        {
          if ( v24 && LODWORD(v24[20].Count) )
            goto LABEL_45;
        }
        else if ( !v24 || !HIDWORD(v24[20].Ptr) )
        {
          goto LABEL_45;
        }
        v13 = 0;
      }
LABEL_45:
      *(_DWORD *)InfoBuffer = v13;
      v10 = 0;
      v5 = InfoBuffer;
    }
  }
LABEL_47:
  if ( v10 == -1073741772 && NameInfoClass == WnfInfoStateNameExist )
  {
    *v5 = 0;
    v10 = 0;
  }
  if ( v24 )
    ExReleaseRundownProtection_0(v24 + 1);
  if ( *(_QWORD *)v27 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)v27 + 8LL));
  if ( P )
    ExFreePoolWithTag(P, 0x20666E57u);
  KeLeaveCriticalRegion();
  ExpWnfReleaseCapturedScopeInstanceId(v22, v30, PreviousMode);
  return v10;
}
