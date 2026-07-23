/*
 * XREFs of PspOneDirectionSecurityDomainCombine @ 0x1408F2544
 * Callers:
 *     PspDisablePrimaryTokenExchange @ 0x1409213E0 (PspDisablePrimaryTokenExchange.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     PsReferencePrimaryTokenWithTag @ 0x14031F4D0 (PsReferencePrimaryTokenWithTag.c)
 *     PspSynchronizeThreadIsolationDomains @ 0x14032C988 (PspSynchronizeThreadIsolationDomains.c)
 *     SepCreateAccessStateFromSubjectContext @ 0x1403E0270 (SepCreateAccessStateFromSubjectContext.c)
 *     PspIsParentProcess @ 0x140447928 (PspIsParentProcess.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     SeDeleteAccessState @ 0x14083D240 (SeDeleteAccessState.c)
 *     ObOpenObjectByPointer @ 0x1408511D0 (ObOpenObjectByPointer.c)
 *     ObCloseHandle @ 0x1408AB1B0 (ObCloseHandle.c)
 *     PsLookupProcessByProcessId @ 0x1408F21F0 (PsLookupProcessByProcessId.c)
 */

char __fastcall PspOneDirectionSecurityDomainCombine(__int64 Object)
{
  void *v2; // rcx
  int v3; // eax
  PEPROCESS v4; // rbx
  struct _LIST_ENTRY *Flink; // rax
  _DWORD *v6; // rsi
  ULONG_PTR v7; // rax
  __int64 v8; // rax
  signed __int64 v9; // rax
  signed __int32 v11[8]; // [rsp+8h] [rbp-100h] BYREF
  PEPROCESS Process; // [rsp+48h] [rbp-C0h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v14; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v15; // [rsp+60h] [rbp-A8h]
  struct _LIST_ENTRY *v16; // [rsp+70h] [rbp-98h]
  struct _ACCESS_STATE PassedAccessState; // [rsp+78h] [rbp-90h] BYREF
  _QWORD v18[28]; // [rsp+118h] [rbp+10h] BYREF

  memset_0(&PassedAccessState, 0, sizeof(PassedAccessState));
  memset_0(v18, 0, sizeof(v18));
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
  _InterlockedOr(v11, 0);
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
    v14 = 0LL;
    v6 = (_DWORD *)PsProcessType + 19;
    v16 = Flink;
    v15 = 0LL;
    v7 = PsReferencePrimaryTokenWithTag((__int64)Process, 0x75536553u);
    *((_QWORD *)&v15 + 1) = v7;
    if ( SeTokenLeakTracking && v7 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v7 + 1144) + 284LL));
      if ( v7 == SepTokenLeakToken )
      {
        __debugbreak();
        if ( v14 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v14 + 1144) + 284LL));
          if ( v14 == SepTokenLeakToken )
            __debugbreak();
        }
      }
      v4 = Process;
    }
    v3 = SepCreateAccessStateFromSubjectContext(&v14, &PassedAccessState, v18, 40, v6);
    if ( v3 >= 0 )
    {
      if ( ObOpenObjectByPointer((PVOID)Object, 0x600u, &PassedAccessState, 0, (POBJECT_TYPE)PsProcessType, 0, &Handle) >= 0 )
      {
        v8 = *(_QWORD *)&v4[4].ProcessLock;
        v4 = Process;
        *(_QWORD *)(Object + 1896) = v8;
        if ( (*(_DWORD *)(Object + 1872) | LODWORD(v4[4].ThreadListHead.Flink)) < 0 )
        {
          _InterlockedOr((volatile signed __int32 *)(Object + 1532), 0x200000u);
          v9 = _InterlockedIncrement64(&PsNextSecurityDomain);
          *(_QWORD *)(Object + 1888) = v9;
          *(_QWORD *)(Object + 1896) = v9;
          PspSynchronizeThreadIsolationDomains(Object);
          v4 = Process;
        }
      }
      LOBYTE(v3) = SeDeleteAccessState((__int64)&PassedAccessState);
    }
    if ( Handle )
      LOBYTE(v3) = ObCloseHandle(Handle, 0);
  }
LABEL_14:
  if ( v4 )
    LOBYTE(v3) = ObfDereferenceObject(v4);
  return v3;
}
