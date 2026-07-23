/*
 * XREFs of MmFreeVirtualMemory @ 0x1408D9AD0
 * Callers:
 *     PsDispatchIumService @ 0x1404E66B4 (PsDispatchIumService.c)
 *     PspFreeUserFiberShadowStack @ 0x1408D959C (PspFreeUserFiberShadowStack.c)
 *     PspFreeCurrentThreadUserShadowStack @ 0x1408D9978 (PspFreeCurrentThreadUserShadowStack.c)
 *     NtFreeVirtualMemory @ 0x1408D9A10 (NtFreeVirtualMemory.c)
 *     PspSetupUserFiberShadowStack @ 0x140914A90 (PspSetupUserFiberShadowStack.c)
 *     PspSetupUserShadowStack @ 0x140914B74 (PspSetupUserShadowStack.c)
 *     PspReserveAndCommitUserShadowStack @ 0x140914D48 (PspReserveAndCommitUserShadowStack.c)
 *     PspDeleteUserStack @ 0x140A59AF8 (PspDeleteUserStack.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     KeStackAttachProcess @ 0x1402E1C90 (KeStackAttachProcess.c)
 *     MiObtainReferencedVadEx @ 0x140344D30 (MiObtainReferencedVadEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     MiDereferenceEnclaveModule @ 0x1407F7DC4 (MiDereferenceEnclaveModule.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140847AA0 (ObpReferenceObjectByHandleWithTag.c)
 *     MiFreeVirtualMemory @ 0x1408D9E68 (MiFreeVirtualMemory.c)
 *     MiCoalescePlaceholderAllocations @ 0x1408DA56C (MiCoalescePlaceholderAllocations.c)
 *     DbgkUnMapViewOfSection @ 0x140A25518 (DbgkUnMapViewOfSection.c)
 */

__int64 __fastcall MmFreeVirtualMemory(
        ULONG_PTR BugCheckParameter1,
        unsigned __int64 *a2,
        _QWORD *a3,
        unsigned int a4,
        unsigned __int8 a5,
        int a6)
{
  unsigned int v6; // esi
  int v7; // eax
  __int64 *v9; // r9
  __int64 v10; // r8
  __int64 v11; // r14
  unsigned __int64 v12; // rdi
  bool v13; // zf
  _KPROCESS *v14; // rdx
  __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  int v17; // r12d
  int v18; // ebx
  __int64 v19; // r15
  unsigned __int64 v20; // rdi
  PRKPROCESS v21; // r13
  __int64 v22; // rax
  unsigned __int64 v23; // rax
  volatile signed __int32 *v24; // rbx
  __int64 result; // rax
  __int64 v26; // rcx
  volatile signed __int32 **v27; // rax
  unsigned int v28; // [rsp+60h] [rbp-79h] BYREF
  PRKPROCESS PROCESS; // [rsp+68h] [rbp-71h] BYREF
  __int64 v30; // [rsp+70h] [rbp-69h] BYREF
  unsigned __int64 v31; // [rsp+78h] [rbp-61h] BYREF
  _QWORD v32[2]; // [rsp+80h] [rbp-59h] BYREF
  struct _KPROCESS *v33; // [rsp+90h] [rbp-49h]
  _QWORD *v34; // [rsp+98h] [rbp-41h]
  unsigned __int64 *v35; // [rsp+A0h] [rbp-39h]
  ULONG_PTR v36; // [rsp+A8h] [rbp-31h]
  struct _KAPC_STATE ApcState; // [rsp+B0h] [rbp-29h] BYREF

  v36 = BugCheckParameter1;
  v6 = a4;
  v34 = a3;
  v35 = a2;
  v7 = a4 & 0xC000;
  memset(&ApcState, 0, 32);
  *(_QWORD *)&ApcState.InProgressFlags = 0LL;
  PROCESS = 0LL;
  v28 = 0;
  v32[1] = 0LL;
  v32[0] = 0LL;
  v9 = a3;
  v10 = (__int64)a2;
  if ( v7 == 49152 || v7 == 0 )
    return 3221225714LL;
  v11 = *v9;
  v12 = *a2;
  v13 = *v9 == 0;
  v14 = KeGetCurrentThread()->ApcState.Process;
  v15 = *v9 - 1;
  v33 = v14;
  if ( v13 )
    v15 = 0LL;
  v16 = v12 + v15;
  if ( v16 < v12 || v16 > 0x7FFFFFFEFFFFLL )
    return 3221225485LL;
  if ( (v6 & 2) != 0 )
  {
    if ( (v6 & 1) != 0 )
      return 3221225485LL;
    v17 = a6 | 0x4000000;
    v6 &= ~2u;
  }
  else
  {
    v17 = a6;
  }
  if ( (v6 & 1) == 0 )
    goto LABEL_9;
  if ( (v6 & 2) != 0 )
    return 3221225485LL;
  v17 |= 0xC000000u;
  v6 &= ~1u;
LABEL_9:
  if ( (v17 & 0x4000000) == 0 )
    goto LABEL_10;
  if ( v6 != 0x8000 )
    return 3221225714LL;
  if ( !v11 || v11 != (v11 & 0xFFFFFFFFFFFFF000uLL) )
    return 3221225713LL;
  if ( v12 != (v12 & 0xFFFFFFFFFFFFF000uLL) )
    return 3221225712LL;
LABEL_10:
  v18 = 0;
  ApcState.Process = 0LL;
  v19 = (v12 + v11 - 1) | 0xFFF;
  v20 = v12 & 0xFFFFFFFFFFFFF000uLL;
  v30 = v19;
  v31 = v20;
  if ( BugCheckParameter1 == -1LL )
  {
    v21 = v14;
  }
  else
  {
    result = ObpReferenceObjectByHandleWithTag(
               BugCheckParameter1,
               8,
               (__int64)PsProcessType,
               a5,
               0x6D566D4Du,
               &PROCESS,
               0LL,
               0LL);
    v28 = result;
    if ( (int)result < 0 )
      return result;
    v21 = PROCESS;
    if ( v33 != PROCESS )
    {
      v18 = 1;
      KeStackAttachProcess(PROCESS, &ApcState);
    }
  }
  if ( (v6 & 0xFFFF3FFF) == 0 || v21[3].Padding[5] && (v6 & 0x10000) != 0 && (v6 & 0x4000) == 0 )
  {
    if ( (v17 & 0xC000000) == 0xC000000 )
    {
      v28 = MiCoalescePlaceholderAllocations(v21, v20, v19, a5);
    }
    else
    {
      v22 = MiObtainReferencedVadEx(v20, (v6 >> 15) & 1, (int *)&v28, (__int64)v9);
      if ( v22 )
      {
        v28 = MiFreeVirtualMemory(v21, v22, &v31, &v30, v11, v6, v17, (v6 >> 15) & 1, a5, v32, 0LL);
        if ( (v28 & 0x80000000) == 0 )
        {
          v23 = v31;
          *v34 = v30 - v31 + 1;
          *v35 = v23;
        }
      }
    }
  }
  else
  {
    v28 = -1073741582;
  }
  if ( v18 )
    KiUnstackDetachProcess((__int64)&ApcState, 0, v10, (__int64)v9);
  v24 = (volatile signed __int32 *)v32[0];
  if ( v32[0] )
  {
    while ( v24 != (volatile signed __int32 *)v32 )
    {
      if ( v21 )
        DbgkUnMapViewOfSection(v21);
      v26 = *(_QWORD *)v24;
      if ( *(volatile signed __int32 **)(*(_QWORD *)v24 + 8LL) != v24
        || (v27 = (volatile signed __int32 **)*((_QWORD *)v24 + 1), *v27 != v24) )
      {
        __fastfail(3u);
      }
      *v27 = (volatile signed __int32 *)v26;
      *(_QWORD *)(v26 + 8) = v27;
      MiDereferenceEnclaveModule(v24);
      v24 = (volatile signed __int32 *)v32[0];
    }
  }
  if ( v36 != -1LL )
    ObfDereferenceObjectWithTag(v21, 0x6D566D4Du);
  return v28;
}
