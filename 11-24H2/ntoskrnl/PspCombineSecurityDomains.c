/*
 * XREFs of PspCombineSecurityDomains @ 0x1408AB200
 * Callers:
 *     NtSetInformationProcess @ 0x1408EBA70 (NtSetInformationProcess.c)
 * Callees:
 *     PsReferencePrimaryTokenWithTag @ 0x14031F4D0 (PsReferencePrimaryTokenWithTag.c)
 *     PspSynchronizeThreadIsolationDomains @ 0x14032C988 (PspSynchronizeThreadIsolationDomains.c)
 *     SepCreateAccessStateFromSubjectContext @ 0x1403E0270 (SepCreateAccessStateFromSubjectContext.c)
 *     KeSynchronizeSecurityDomain @ 0x1404A1ABC (KeSynchronizeSecurityDomain.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     SeDeleteAccessState @ 0x14083D240 (SeDeleteAccessState.c)
 *     ObOpenObjectByPointer @ 0x1408511D0 (ObOpenObjectByPointer.c)
 *     ObCloseHandle @ 0x1408AB1B0 (ObCloseHandle.c)
 */

__int64 __fastcall PspCombineSecurityDomains(__int64 Object, signed __int32 *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  _DWORD *v6; // rbx
  ULONG_PTR v7; // rax
  int v8; // ebx
  NTSTATUS v9; // eax
  _DWORD *v11; // rbx
  ULONG_PTR v12; // rax
  signed __int64 v13; // rax
  signed __int32 v14[8]; // [rsp+0h] [rbp-100h] BYREF
  HANDLE v15; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v17; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v18; // [rsp+58h] [rbp-A8h]
  __int64 v19; // [rsp+68h] [rbp-98h]
  __int64 v20; // [rsp+70h] [rbp-90h] BYREF
  __int128 v21; // [rsp+78h] [rbp-88h]
  __int64 v22; // [rsp+88h] [rbp-78h]
  struct _ACCESS_STATE PassedAccessState; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v24[28]; // [rsp+130h] [rbp+30h] BYREF

  memset_0(&PassedAccessState, 0, sizeof(PassedAccessState));
  memset_0(v24, 0, sizeof(v24));
  if ( !_bittest((const signed __int32 *)(Object + 1532), 0x16u) || !_bittest(a2 + 383, 0x16u) )
    return 3221225596LL;
  _InterlockedOr(v14, 0);
  v4 = *(_QWORD *)(Object + 1888);
  v5 = *((_QWORD *)a2 + 236);
  if ( v4 == v5 )
    return 0LL;
  if ( !v4 || !v5 || *(int *)(Object + 1872) < 0 || a2[468] < 0 )
    return 3221226597LL;
  v19 = *((_QWORD *)a2 + 58);
  v6 = (_DWORD *)PsProcessType + 19;
  Handle = 0LL;
  v18 = 0LL;
  v15 = 0LL;
  v17 = 0LL;
  v7 = PsReferencePrimaryTokenWithTag((__int64)a2, 0x75536553u);
  *((_QWORD *)&v18 + 1) = v7;
  if ( SeTokenLeakTracking )
  {
    if ( v7 )
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
    }
  }
  v8 = SepCreateAccessStateFromSubjectContext(&v17, &PassedAccessState, v24, 40, v6);
  if ( v8 >= 0 )
  {
    v9 = ObOpenObjectByPointer((PVOID)Object, 0x600u, &PassedAccessState, 0, (POBJECT_TYPE)PsProcessType, 0, &Handle);
    v8 = v9;
    if ( v9 >= 0 )
    {
      SeDeleteAccessState((__int64)&PassedAccessState);
      v22 = *(_QWORD *)(Object + 464);
      v21 = 0LL;
      v11 = (_DWORD *)PsProcessType + 19;
      v20 = 0LL;
      v12 = PsReferencePrimaryTokenWithTag(Object, 0x75536553u);
      *((_QWORD *)&v21 + 1) = v12;
      if ( SeTokenLeakTracking )
      {
        if ( v12 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v12 + 1144) + 284LL));
          if ( v12 == SepTokenLeakToken )
          {
            __debugbreak();
            if ( v20 )
            {
              _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v20 + 1144) + 284LL));
              if ( v20 == SepTokenLeakToken )
                __debugbreak();
            }
          }
        }
      }
      v8 = SepCreateAccessStateFromSubjectContext(&v20, &PassedAccessState, v24, 40, v11);
      if ( v8 < 0 )
        goto LABEL_15;
      v9 = ObOpenObjectByPointer(a2, 0x600u, &PassedAccessState, 0, (POBJECT_TYPE)PsProcessType, 0, &v15);
      v8 = v9;
      if ( v9 >= 0 )
      {
        _InterlockedOr((volatile signed __int32 *)(Object + 1532), 0x200000u);
        *(_QWORD *)(Object + 1888) = *((_QWORD *)a2 + 236);
        if ( (a2[468] | *(_DWORD *)(Object + 1872)) < 0 )
        {
          v13 = _InterlockedIncrement64(&PsNextSecurityDomain);
          v8 = -1073740699;
          *(_QWORD *)(Object + 1888) = v13;
          *(_QWORD *)(Object + 1896) = v13;
        }
        KeSynchronizeSecurityDomain((_KPROCESS *)Object);
        PspSynchronizeThreadIsolationDomains(Object);
        goto LABEL_14;
      }
      v15 = 0LL;
    }
    else
    {
      Handle = 0LL;
    }
    if ( v9 == -1073741790 )
      v8 = -1073740699;
LABEL_14:
    SeDeleteAccessState((__int64)&PassedAccessState);
  }
LABEL_15:
  if ( v15 )
    ObCloseHandle(v15, 0);
  if ( Handle )
    ObCloseHandle(Handle, 0);
  return (unsigned int)v8;
}
