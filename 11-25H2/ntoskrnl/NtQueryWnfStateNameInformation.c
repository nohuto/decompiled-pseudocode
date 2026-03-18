/*
 * XREFs of NtQueryWnfStateNameInformation @ 0x140AD2130
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExpCaptureWnfStateName @ 0x1408E29E0 (ExpCaptureWnfStateName.c)
 *     ExpWnfLookupNameInstance @ 0x1408E33E0 (ExpWnfLookupNameInstance.c)
 *     ExpWnfResolveScopeInstance @ 0x1408E4E70 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfCheckCrossScopeAccess @ 0x1408E6080 (ExpWnfCheckCrossScopeAccess.c)
 *     ExpWnfLookupPermanentName @ 0x14091BC30 (ExpWnfLookupPermanentName.c)
 *     ProbeForWrite @ 0x140934CF0 (ProbeForWrite.c)
 *     ExpWnfCaptureScopeInstanceId @ 0x1409F6738 (ExpWnfCaptureScopeInstanceId.c)
 *     ExpWnfReleaseCapturedScopeInstanceId @ 0x1409FCF74 (ExpWnfReleaseCapturedScopeInstanceId.c)
 *     ExpWnfCheckCallerAccess @ 0x140A01000 (ExpWnfCheckCallerAccess.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtQueryWnfStateNameInformation(__int64 *a1, int a2, _BYTE *a3, int *a4, unsigned int Length)
{
  int *v5; // rsi
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // r15
  int v10; // edi
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

  v5 = a4;
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
  v10 = ExpCaptureWnfStateName(a1, &v25, PreviousMode);
  if ( v10 >= 0 )
  {
    v12 = v25;
    v26 = (v25 >> 4) & 3;
    v22 = (v25 >> 6) & 0xF;
    LOBYTE(v11) = PreviousMode;
    v10 = ExpWnfCaptureScopeInstanceId(v22, a3, v11, (__int64)&Sid, (__int64)v30);
    if ( v10 >= 0 )
    {
      if ( a2 && (unsigned int)(a2 - 1) >= 2 )
      {
        v10 = -1073741821;
        goto LABEL_47;
      }
      if ( Length < 4 )
      {
        v10 = -1073741811;
        goto LABEL_47;
      }
      if ( PreviousMode )
        ProbeForWrite(v5, Length, 4u);
      v13 = 1;
      if ( a2 )
      {
        v23 = 0;
      }
      else
      {
        v23 = 1;
        if ( a3 )
        {
          v10 = -1073741811;
LABEL_46:
          v5 = a4;
          goto LABEL_47;
        }
      }
      if ( PreviousMode && a2 )
      {
        v14 = 0;
        if ( a3 )
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
      if ( !v14 && (unsigned int)(a2 - 1) <= 1 )
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
      if ( a2 )
      {
        if ( a2 == 1 )
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
      *a4 = v13;
      v10 = 0;
      v5 = a4;
    }
  }
LABEL_47:
  if ( v10 == -1073741772 && !a2 )
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
  return (unsigned int)v10;
}
