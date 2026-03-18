/*
 * XREFs of PspOneDirectionSecurityDomainCombine @ 0x14094DFD4
 * Callers:
 *     PspDisablePrimaryTokenExchange @ 0x1408FEB00 (PspDisablePrimaryTokenExchange.c)
 * Callees:
 *     PspSynchronizeThreadIsolationDomains @ 0x1402053A8 (PspSynchronizeThreadIsolationDomains.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     PsReferencePrimaryTokenWithTag @ 0x14033FFF0 (PsReferencePrimaryTokenWithTag.c)
 *     SepCreateAccessStateFromSubjectContext @ 0x1403EBC80 (SepCreateAccessStateFromSubjectContext.c)
 *     PspIsParentProcess @ 0x140452878 (PspIsParentProcess.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     SeDeleteAccessState @ 0x140840F80 (SeDeleteAccessState.c)
 *     ObOpenObjectByPointer @ 0x140854F10 (ObOpenObjectByPointer.c)
 *     ObCloseHandle @ 0x1408A2B10 (ObCloseHandle.c)
 *     PsLookupProcessByProcessId @ 0x14094DC80 (PsLookupProcessByProcessId.c)
 */

char __fastcall PspOneDirectionSecurityDomainCombine(__int64 Object)
{
  void *v2; // rcx
  int v3; // eax
  PEPROCESS v4; // rbx
  struct _LIST_ENTRY *Flink; // rax
  _DWORD *v6; // rsi
  ULONG_PTR v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  signed __int64 v12; // rax
  signed __int32 v14[8]; // [rsp+8h] [rbp-100h] BYREF
  PEPROCESS Process; // [rsp+48h] [rbp-C0h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v17; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v18; // [rsp+60h] [rbp-A8h]
  struct _LIST_ENTRY *v19; // [rsp+70h] [rbp-98h]
  struct _ACCESS_STATE PassedAccessState; // [rsp+78h] [rbp-90h] BYREF
  _QWORD v21[28]; // [rsp+118h] [rbp+10h] BYREF

  memset_0(&PassedAccessState, 0, sizeof(PassedAccessState));
  memset_0(v21, 0, sizeof(v21));
  v2 = *(void **)(Object + 720);
  Process = 0LL;
  Handle = 0LL;
  v3 = PsLookupProcessByProcessId(v2, &Process);
  if ( v3 < 0 )
    goto LABEL_17;
  v4 = Process;
  LOBYTE(v3) = PspIsParentProcess((__int64)Process, Object);
  if ( !(_BYTE)v3 || (v4[3].ActiveGroupsMask.Masks[1] & 0x40000000000000LL) == 0 )
    goto LABEL_14;
  _InterlockedOr(v14, 0);
  if ( *(int *)(Object + 1872) < 0 )
  {
LABEL_17:
    v4 = Process;
    goto LABEL_14;
  }
  v4 = Process;
  if ( SLODWORD(Process[4].ThreadListHead.Flink) >= 0 )
  {
    Flink = Process[1].Header.WaitListHead.Flink;
    v17 = 0LL;
    v6 = (_DWORD *)PsProcessType + 19;
    v19 = Flink;
    v18 = 0LL;
    v7 = PsReferencePrimaryTokenWithTag((__int64)Process, 0x75536553u);
    *((_QWORD *)&v18 + 1) = v7;
    if ( SeTokenLeakTracking && v7 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v7 + 1144) + 284LL));
      if ( v7 == SepTokenLeakToken )
      {
        __debugbreak();
        if ( v17 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v17 + 1144) + 284LL));
          if ( v17 == SepTokenLeakToken )
            __debugbreak();
        }
      }
      v4 = Process;
    }
    v3 = SepCreateAccessStateFromSubjectContext(&v17, &PassedAccessState, v21, 40, v6);
    if ( v3 >= 0 )
    {
      if ( ObOpenObjectByPointer((PVOID)Object, 0x600u, &PassedAccessState, 0, (POBJECT_TYPE)PsProcessType, 0, &Handle) >= 0 )
      {
        v11 = *(_QWORD *)&v4[4].ProcessLock;
        v4 = Process;
        *(_QWORD *)(Object + 1896) = v11;
        if ( (*(_DWORD *)(Object + 1872) | LODWORD(v4[4].ThreadListHead.Flink)) < 0 )
        {
          _InterlockedOr((volatile signed __int32 *)(Object + 1532), 0x200000u);
          v12 = _InterlockedIncrement64(&PsNextSecurityDomain);
          *(_QWORD *)(Object + 1888) = v12;
          *(_QWORD *)(Object + 1896) = v12;
          PspSynchronizeThreadIsolationDomains(Object);
          v4 = Process;
        }
      }
      LOBYTE(v3) = SeDeleteAccessState((__int64)&PassedAccessState, v8, v9, v10);
    }
    if ( Handle )
      LOBYTE(v3) = ObCloseHandle(Handle, 0);
  }
LABEL_14:
  if ( v4 )
    LOBYTE(v3) = ObfDereferenceObject(v4);
  return v3;
}
