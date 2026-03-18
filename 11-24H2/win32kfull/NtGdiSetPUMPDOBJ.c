/*
 * XREFs of NtGdiSetPUMPDOBJ @ 0x140262E70
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x140060BD4 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?PushThreadUMPDObj@UMPDOBJ@@QEAAXPEAU_GRETHREAD@@@Z @ 0x1400D8694 (-PushThreadUMPDObj@UMPDOBJ@@QEAAXPEAU_GRETHREAD@@@Z.c)
 *     ?Dereference@UMPDOBJ@@QEAAXXZ @ 0x1400D8B68 (-Dereference@UMPDOBJ@@QEAAXXZ.c)
 *     ?FreeNonCachedUserMem@UMPDOBJ@@QEAAXXZ @ 0x1400D8CD0 (-FreeNonCachedUserMem@UMPDOBJ@@QEAAXXZ.c)
 *     ?GetThreadCurrentUMPDObj@UMPDOBJ@@SAPEAV1@PEAU_GRETHREAD@@@Z @ 0x1400D90D0 (-GetThreadCurrentUMPDObj@UMPDOBJ@@SAPEAV1@PEAU_GRETHREAD@@@Z.c)
 *     ?bTryAcquireExclussiveAccess@UMPDOBJ@@QEAA_NXZ @ 0x1400DA518 (-bTryAcquireExclussiveAccess@UMPDOBJ@@QEAA_NXZ.c)
 *     wil::scope_exit__NtGdiSetPUMPDOBJ_::_2_::_lambda_1___ @ 0x1401EB824 (wil--scope_exit__NtGdiSetPUMPDOBJ_--_2_--_lambda_1___.c)
 *     ?bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z @ 0x140228A00 (-bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z.c)
 *     ?bSandboxedCurrentProcess@@YAEXZ @ 0x14025E004 (-bSandboxedCurrentProcess@@YAEXZ.c)
 *     ?bIsProcessLocalSystem@@YAHXZ @ 0x14026BB50 (-bIsProcessLocalSystem@@YAHXZ.c)
 *     ?ReferenceServerProcess@UMPDOBJ@@QEAAXPEAU_EPROCESS@@@Z @ 0x140335D30 (-ReferenceServerProcess@UMPDOBJ@@QEAAXPEAU_EPROCESS@@@Z.c)
 */

__int64 __fastcall NtGdiSetPUMPDOBJ(__int64 a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  int v6; // r14d
  UMPDOBJ *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  int v11; // ecx
  struct _GRETHREAD *CurrentThread; // rsi
  __int64 v13; // rcx
  __int64 v14; // rdx
  _DWORD *v15; // rdi
  UMPDOBJ **v16; // rbx
  __int64 v18; // rcx
  struct _EPROCESS *CurrentProcess; // rax
  UMPDOBJ **v20; // rbx
  UMPDOBJ *ThreadCurrentUMPDObj; // rax
  _BYTE **v22; // rdx
  struct UMPDOBJ *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  struct UMPDOBJ *v26; // rbx
  struct UMPDOBJ **v27; // rdx
  struct UMPDOBJ **v28; // rcx
  void *v29; // rcx
  UMPDOBJ *v30; // [rsp+20h] [rbp-58h] BYREF
  PEPROCESS Process; // [rsp+28h] [rbp-50h] BYREF
  _QWORD v32[3]; // [rsp+30h] [rbp-48h] BYREF
  UMPDOBJ **v33; // [rsp+48h] [rbp-30h] BYREF
  char v34; // [rsp+50h] [rbp-28h]

  v6 = a2;
  if ( a1 )
  {
    LOBYTE(a2) = 17;
    v7 = (UMPDOBJ *)HmgShareLock(a1, a2);
  }
  else
  {
    v7 = 0LL;
  }
  v30 = v7;
  v32[0] = &v30;
  wil::scope_exit__NtGdiSetPUMPDOBJ_::_2_::_lambda_1___((__int64)&v33, v32);
  CurrentThread = GreGetCurrentThread(v9, v8);
  if ( !CurrentThread )
    goto LABEL_29;
  if ( v6 )
  {
    if ( v30 )
      goto LABEL_9;
LABEL_29:
    if ( v34 )
    {
      v16 = v33;
      if ( *v33 )
      {
        UMPDOBJ::Dereference(*v33);
        *v16 = 0LL;
      }
    }
    return 0LL;
  }
  if ( !a3 )
    goto LABEL_29;
LABEL_9:
  if ( *(_DWORD *)(*(_QWORD *)(W32GetSessionState(v11, v10) + 96) + 4752LL) == 1 )
  {
    if ( v30 )
    {
      Process = 0LL;
      PsLookupProcessByProcessId((HANDLE)*((int *)v30 + 110), &Process);
      if ( (unsigned int)bIsProcessLocalSystem(Process) )
      {
        if ( !(unsigned int)bIsProcessLocalSystem() )
          goto LABEL_29;
      }
    }
  }
  if ( v6 )
  {
    v32[2] = 0LL;
    v13 = *((unsigned __int8 *)v30 + 456);
    if ( a4 )
    {
      if ( (unsigned __int64)(a4 + 1) > MmUserProbeAddress || a4 + 1 <= a4 )
        *(_BYTE *)MmUserProbeAddress = 0;
      *a4 = v13;
    }
    if ( (_DWORD)v13 )
    {
      if ( bSandboxedCurrentProcess(v13) )
        goto LABEL_29;
      if ( *((_DWORD *)v30 + 110) == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
        goto LABEL_29;
      if ( *((struct _GRETHREAD **)CurrentThread + 9) != (struct _GRETHREAD *)((char *)CurrentThread + 72) )
        goto LABEL_29;
      v15 = (_DWORD *)Win32AllocPoolZInit(16LL, 1684631623LL);
      v32[1] = v15;
      if ( !v15 )
        goto LABEL_29;
      if ( (unsigned __int64)(a3 + 1) > MmUserProbeAddress || a3 + 1 <= a3 )
        *(_BYTE *)MmUserProbeAddress = 0;
      *a3 = 0LL;
      if ( !UMPDOBJ::bTryAcquireExclussiveAccess(v30, v14) )
      {
        Win32FreePool(v15);
        goto LABEL_29;
      }
      *(_QWORD *)v15 = *((_QWORD *)v30 + 54);
      v18 = *((unsigned int *)v30 + 110);
      v15[2] = v18;
      *((_QWORD *)CurrentThread + 8) = v15;
      CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v18);
      UMPDOBJ::ReferenceServerProcess(v30, CurrentProcess);
      UMPDOBJ::PushThreadUMPDObj(v30, CurrentThread);
      v30 = 0LL;
    }
    else
    {
      ThreadCurrentUMPDObj = UMPDOBJ::GetThreadCurrentUMPDObj(CurrentThread);
      if ( ThreadCurrentUMPDObj != v30 )
        goto LABEL_29;
      if ( a3 + 1 > (_QWORD *)*v22 || a3 + 1 <= a3 )
        **v22 = 0;
      *a3 = 0LL;
    }
  }
  else
  {
    if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    v23 = UMPDOBJ::GetThreadCurrentUMPDObj(CurrentThread);
    v26 = v23;
    if ( !v23 || v24 != *(_QWORD *)v23 )
      goto LABEL_29;
    if ( *((_BYTE *)v23 + 456) )
    {
      if ( *((struct _GRETHREAD **)v23 + 5) != GreGetCurrentThread(v25, v24) )
        goto LABEL_29;
      *((_BYTE *)v26 + 48) |= 2u;
      v27 = (struct UMPDOBJ **)*((_QWORD *)v26 + 7);
      v28 = (struct UMPDOBJ **)*((_QWORD *)v26 + 8);
      if ( v27[1] != (struct UMPDOBJ *)((char *)v26 + 56) || *v28 != (struct UMPDOBJ *)((char *)v26 + 56) )
        __fastfail(3u);
      *v28 = (struct UMPDOBJ *)v27;
      v27[1] = (struct UMPDOBJ *)v28;
      UMPDOBJ::FreeNonCachedUserMem(v26);
      UMPDOBJ::Dereference(v26);
      v29 = (void *)*((_QWORD *)CurrentThread + 8);
      if ( v29 )
      {
        Win32FreePool(v29);
        *((_QWORD *)CurrentThread + 8) = 0LL;
      }
    }
  }
  if ( v34 )
  {
    v20 = v33;
    if ( *v33 )
    {
      UMPDOBJ::Dereference(*v33);
      *v20 = 0LL;
    }
  }
  return 1LL;
}
