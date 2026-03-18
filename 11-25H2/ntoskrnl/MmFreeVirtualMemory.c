/*
 * XREFs of MmFreeVirtualMemory @ 0x1408F6740
 * Callers:
 *     PsDispatchIumService @ 0x14048F2F0 (PsDispatchIumService.c)
 *     PspFreeCurrentThreadUserShadowStack @ 0x1408F65EC (PspFreeCurrentThreadUserShadowStack.c)
 *     NtFreeVirtualMemory @ 0x1408F6680 (NtFreeVirtualMemory.c)
 *     PspSetupUserFiberShadowStack @ 0x140A14E60 (PspSetupUserFiberShadowStack.c)
 *     PspSetupUserShadowStack @ 0x140A14F44 (PspSetupUserShadowStack.c)
 *     PspReserveAndCommitUserShadowStack @ 0x140A15118 (PspReserveAndCommitUserShadowStack.c)
 *     PspFreeUserFiberShadowStack @ 0x140A537E8 (PspFreeUserFiberShadowStack.c)
 *     PspDeleteUserStack @ 0x140A5F668 (PspDeleteUserStack.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     MiObtainReferencedVadEx @ 0x1402A7A60 (MiObtainReferencedVadEx.c)
 *     KeStackAttachProcess @ 0x140348CD0 (KeStackAttachProcess.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     MiDereferenceEnclaveModule @ 0x1407E77C0 (MiDereferenceEnclaveModule.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14084FA30 (ObpReferenceObjectByHandleWithTag.c)
 *     MiFreeVirtualMemory @ 0x1408F6ADC (MiFreeVirtualMemory.c)
 *     MiCoalescePlaceholderAllocations @ 0x1408F71CC (MiCoalescePlaceholderAllocations.c)
 *     DbgkUnMapViewOfSection @ 0x140A2AB58 (DbgkUnMapViewOfSection.c)
 */

__int64 __fastcall MmFreeVirtualMemory(
        ULONG_PTR BugCheckParameter1,
        unsigned __int64 *a2,
        _QWORD *a3,
        unsigned int a4,
        unsigned __int8 a5,
        int a6)
{
  unsigned int v6; // edi
  __int64 v8; // r14
  unsigned __int64 v9; // rsi
  bool v10; // zf
  _KPROCESS *v11; // rdx
  __int64 v12; // rcx
  unsigned __int64 v13; // rcx
  int v14; // r12d
  int v15; // ebx
  __int64 v16; // r15
  unsigned __int64 v17; // rsi
  PRKPROCESS v18; // r13
  __int64 v19; // rax
  unsigned __int64 v20; // rax
  volatile signed __int32 *v21; // rbx
  __int64 result; // rax
  __int64 v23; // rcx
  volatile signed __int32 **v24; // rax
  unsigned int v25; // [rsp+60h] [rbp-79h] BYREF
  PRKPROCESS PROCESS; // [rsp+68h] [rbp-71h] BYREF
  __int64 v27; // [rsp+70h] [rbp-69h] BYREF
  unsigned __int64 v28; // [rsp+78h] [rbp-61h] BYREF
  _QWORD v29[2]; // [rsp+80h] [rbp-59h] BYREF
  struct _KPROCESS *v30; // [rsp+90h] [rbp-49h]
  _QWORD *v31; // [rsp+98h] [rbp-41h]
  unsigned __int64 *v32; // [rsp+A0h] [rbp-39h]
  ULONG_PTR v33; // [rsp+A8h] [rbp-31h]
  struct _KAPC_STATE ApcState; // [rsp+B0h] [rbp-29h] BYREF

  v33 = BugCheckParameter1;
  v6 = a4;
  v31 = a3;
  v32 = a2;
  memset(&ApcState, 0, 32);
  *(_QWORD *)&ApcState.InProgressFlags = 0LL;
  PROCESS = 0LL;
  v25 = 0;
  v29[1] = 0LL;
  v29[0] = 0LL;
  if ( (a4 & 0xC000) == 49152 || (a4 & 0xC000) == 0 )
    return 3221225714LL;
  v8 = *a3;
  v9 = *a2;
  v10 = *a3 == 0LL;
  v11 = KeGetCurrentThread()->ApcState.Process;
  v12 = *a3 - 1LL;
  v30 = v11;
  if ( v10 )
    v12 = 0LL;
  v13 = v9 + v12;
  if ( v13 < v9 || v13 > 0x7FFFFFFEFFFFLL )
    return 3221225485LL;
  if ( (a4 & 2) != 0 )
  {
    if ( (a4 & 1) != 0 )
      return 3221225485LL;
    v14 = a6 | 0x4000000;
    v6 = a4 & 0xFFFFFFFD;
  }
  else
  {
    v14 = a6;
  }
  if ( (v6 & 1) == 0 )
    goto LABEL_9;
  if ( (v6 & 2) != 0 )
    return 3221225485LL;
  v14 |= 0xC000000u;
  v6 &= ~1u;
LABEL_9:
  if ( (v14 & 0x4000000) == 0 )
    goto LABEL_10;
  if ( v6 != 0x8000 )
    return 3221225714LL;
  if ( !v8 || v8 != (v8 & 0xFFFFFFFFFFFFF000uLL) )
    return 3221225713LL;
  if ( v9 != (v9 & 0xFFFFFFFFFFFFF000uLL) )
    return 3221225712LL;
LABEL_10:
  v15 = 0;
  ApcState.Process = 0LL;
  v16 = (v9 + v8 - 1) | 0xFFF;
  v17 = v9 & 0xFFFFFFFFFFFFF000uLL;
  v27 = v16;
  v28 = v17;
  if ( BugCheckParameter1 == -1LL )
  {
    v18 = v11;
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
    v25 = result;
    if ( (int)result < 0 )
      return result;
    v18 = PROCESS;
    if ( v30 != PROCESS )
    {
      v15 = 1;
      KeStackAttachProcess(PROCESS, &ApcState);
    }
  }
  if ( (v6 & 0xFFFF3FFF) == 0 || v18[3].Padding[5] && (v6 & 0x10000) != 0 && (v6 & 0x4000) == 0 )
  {
    if ( (v14 & 0xC000000) == 0xC000000 )
    {
      v25 = MiCoalescePlaceholderAllocations(v18, v17, v16, a5);
    }
    else
    {
      v19 = MiObtainReferencedVadEx(v17, (v6 & 0x8000) != 0, (int *)&v25);
      if ( v19 )
      {
        v25 = MiFreeVirtualMemory(v18, v19, &v28, &v27, v8, v6, v14, (v6 >> 15) & 1, a5, v29, 0LL);
        if ( (v25 & 0x80000000) == 0 )
        {
          v20 = v28;
          *v31 = v27 - v28 + 1;
          *v32 = v20;
        }
      }
    }
  }
  else
  {
    v25 = -1073741582;
  }
  if ( v15 )
    KiUnstackDetachProcess((__int64)&ApcState, 0LL);
  v21 = (volatile signed __int32 *)v29[0];
  if ( v29[0] )
  {
    while ( v21 != (volatile signed __int32 *)v29 )
    {
      if ( v18 )
        DbgkUnMapViewOfSection(v18);
      v23 = *(_QWORD *)v21;
      if ( *(volatile signed __int32 **)(*(_QWORD *)v21 + 8LL) != v21
        || (v24 = (volatile signed __int32 **)*((_QWORD *)v21 + 1), *v24 != v21) )
      {
        __fastfail(3u);
      }
      *v24 = (volatile signed __int32 *)v23;
      *(_QWORD *)(v23 + 8) = v24;
      MiDereferenceEnclaveModule(v21);
      v21 = (volatile signed __int32 *)v29[0];
    }
  }
  if ( v33 != -1LL )
    ObfDereferenceObjectWithTag(v18, 0x6D566D4Du);
  return v25;
}
