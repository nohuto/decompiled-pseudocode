/*
 * XREFs of PspCombineSecurityDomains @ 0x14094706C
 * Callers:
 *     NtSetInformationProcess @ 0x140947500 (NtSetInformationProcess.c)
 * Callees:
 *     PspSynchronizeThreadIsolationDomains @ 0x1402053A8 (PspSynchronizeThreadIsolationDomains.c)
 *     PsReferencePrimaryTokenWithTag @ 0x14033FFF0 (PsReferencePrimaryTokenWithTag.c)
 *     SepCreateAccessStateFromSubjectContext @ 0x1403EBC80 (SepCreateAccessStateFromSubjectContext.c)
 *     KeSynchronizeSecurityDomain @ 0x1404A7090 (KeSynchronizeSecurityDomain.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     SeDeleteAccessState @ 0x140840F80 (SeDeleteAccessState.c)
 *     ObOpenObjectByPointer @ 0x140854F10 (ObOpenObjectByPointer.c)
 *     ObCloseHandle @ 0x1408A2B10 (ObCloseHandle.c)
 */

__int64 __fastcall PspCombineSecurityDomains(__int64 Object, signed __int32 *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  _DWORD *v6; // rbx
  ULONG_PTR v7; // rax
  int v8; // ebx
  NTSTATUS v9; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  _DWORD *v14; // rbx
  ULONG_PTR v15; // rax
  signed __int64 v16; // rax
  signed __int32 v17[8]; // [rsp+0h] [rbp-100h] BYREF
  HANDLE v18; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v20; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v21; // [rsp+58h] [rbp-A8h]
  __int64 v22; // [rsp+68h] [rbp-98h]
  __int64 v23; // [rsp+70h] [rbp-90h] BYREF
  __int128 v24; // [rsp+78h] [rbp-88h]
  __int64 v25; // [rsp+88h] [rbp-78h]
  struct _ACCESS_STATE PassedAccessState; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v27[28]; // [rsp+130h] [rbp+30h] BYREF

  memset_0(&PassedAccessState, 0, sizeof(PassedAccessState));
  memset_0(v27, 0, sizeof(v27));
  if ( !_bittest((const signed __int32 *)(Object + 1532), 0x16u) || !_bittest(a2 + 383, 0x16u) )
    return 3221225596LL;
  _InterlockedOr(v17, 0);
  v4 = *(_QWORD *)(Object + 1888);
  v5 = *((_QWORD *)a2 + 236);
  if ( v4 == v5 )
    return 0LL;
  if ( !v4 || !v5 || *(int *)(Object + 1872) < 0 || a2[468] < 0 )
    return 3221226597LL;
  v22 = *((_QWORD *)a2 + 58);
  v6 = (_DWORD *)PsProcessType + 19;
  Handle = 0LL;
  v21 = 0LL;
  v18 = 0LL;
  v20 = 0LL;
  v7 = PsReferencePrimaryTokenWithTag((__int64)a2, 0x75536553u);
  *((_QWORD *)&v21 + 1) = v7;
  if ( SeTokenLeakTracking )
  {
    if ( v7 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v7 + 1144) + 284LL));
      if ( v7 == SepTokenLeakToken )
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
  v8 = SepCreateAccessStateFromSubjectContext(&v20, &PassedAccessState, v27, 40, v6);
  if ( v8 >= 0 )
  {
    v9 = ObOpenObjectByPointer((PVOID)Object, 0x600u, &PassedAccessState, 0, (POBJECT_TYPE)PsProcessType, 0, &Handle);
    v8 = v9;
    if ( v9 >= 0 )
    {
      SeDeleteAccessState((__int64)&PassedAccessState, v10, v11, v12);
      v25 = *(_QWORD *)(Object + 464);
      v24 = 0LL;
      v14 = (_DWORD *)PsProcessType + 19;
      v23 = 0LL;
      v15 = PsReferencePrimaryTokenWithTag(Object, 0x75536553u);
      *((_QWORD *)&v24 + 1) = v15;
      if ( SeTokenLeakTracking )
      {
        if ( v15 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v15 + 1144) + 284LL));
          if ( v15 == SepTokenLeakToken )
          {
            __debugbreak();
            if ( v23 )
            {
              _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v23 + 1144) + 284LL));
              if ( v23 == SepTokenLeakToken )
                __debugbreak();
            }
          }
        }
      }
      v8 = SepCreateAccessStateFromSubjectContext(&v23, &PassedAccessState, v27, 40, v14);
      if ( v8 < 0 )
        goto LABEL_15;
      v9 = ObOpenObjectByPointer(a2, 0x600u, &PassedAccessState, 0, (POBJECT_TYPE)PsProcessType, 0, &v18);
      v8 = v9;
      if ( v9 >= 0 )
      {
        _InterlockedOr((volatile signed __int32 *)(Object + 1532), 0x200000u);
        *(_QWORD *)(Object + 1888) = *((_QWORD *)a2 + 236);
        if ( (a2[468] | *(_DWORD *)(Object + 1872)) < 0 )
        {
          v16 = _InterlockedIncrement64(&PsNextSecurityDomain);
          v8 = -1073740699;
          *(_QWORD *)(Object + 1888) = v16;
          *(_QWORD *)(Object + 1896) = v16;
        }
        KeSynchronizeSecurityDomain((_KPROCESS *)Object);
        PspSynchronizeThreadIsolationDomains(Object);
        goto LABEL_14;
      }
      v18 = 0LL;
    }
    else
    {
      Handle = 0LL;
    }
    if ( v9 == -1073741790 )
      v8 = -1073740699;
LABEL_14:
    SeDeleteAccessState((__int64)&PassedAccessState, v10, v11, v12);
  }
LABEL_15:
  if ( v18 )
    ObCloseHandle(v18, 0);
  if ( Handle )
    ObCloseHandle(Handle, 0);
  return (unsigned int)v8;
}
