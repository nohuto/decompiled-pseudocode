/*
 * XREFs of NtUserProcessConnect @ 0x1400A5000
 * Callers:
 *     <none>
 * Callees:
 *     ?InitMapSharedSection@@YAJPEAU_EPROCESS@@PEAU_USERCONNECT@@@Z @ 0x1400A563C (-InitMapSharedSection@@YAJPEAU_EPROCESS@@PEAU_USERCONNECT@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400A5B18 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 *     memmove @ 0x140340480 (memmove.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

NTSTATUS __fastcall NtUserProcessConnect(void *a1, unsigned int a2, volatile void *a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  char v6; // bl
  char v7; // r14
  bool v8; // di
  __int64 UserSessionState; // rax
  int v10; // r8d
  int v11; // edx
  __int64 v12; // rbx
  __int64 (*v13)(void); // rax
  int v14; // eax
  int v15; // ebx
  __int64 (*v16)(void); // rax
  NTSTATUS result; // eax
  PVOID v18; // rdi
  int inited; // ebx
  __int64 v20; // rcx
  __int64 v21; // rdx
  bool v22; // di
  __int64 v23; // rax
  int v24; // r8d
  int v25; // edx
  signed __int64 v26; // rsi
  signed __int32 v27[8]; // [rsp+0h] [rbp-3A8h] BYREF
  char v28; // [rsp+40h] [rbp-368h]
  unsigned int v29; // [rsp+48h] [rbp-360h]
  HANDLE Handle; // [rsp+50h] [rbp-358h]
  unsigned __int64 v31; // [rsp+58h] [rbp-350h]
  volatile void *v32; // [rsp+60h] [rbp-348h]
  __int64 ProcessPeb; // [rsp+68h] [rbp-340h]
  volatile void *Address; // [rsp+70h] [rbp-338h]
  PVOID Object; // [rsp+78h] [rbp-330h] BYREF
  SIZE_T Length; // [rsp+80h] [rbp-328h]
  __int128 v37; // [rsp+98h] [rbp-310h]
  int Src; // [rsp+E0h] [rbp-2C8h] BYREF
  _BYTE v39[584]; // [rsp+E8h] [rbp-2C0h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+330h] [rbp-78h] BYREF

  Handle = a1;
  v29 = a2;
  Address = a3;
  memset(&ApcState, 0, sizeof(ApcState));
  memset_0(&Src, 0, 0x248uLL);
  v32 = 0LL;
  ProcessPeb = 0LL;
  Length = a2 + 8;
  v5 = *(_QWORD *)&WPP_GLOBAL_Control;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 4) == 0
    || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
  {
    v6 = 0;
    v7 = 1;
  }
  else
  {
    v7 = 1;
    v6 = 1;
  }
  v8 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v6 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v4);
    LOBYTE(v10) = v8;
    LOBYTE(v11) = v6;
    WPP_RECORDER_AND_TRACE_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v11,
      v10,
      *(_QWORD *)(UserSessionState + 69416),
      4,
      3,
      16,
      (__int64)&WPP_8c46d2143b0735a388a3e4e1a89de128_Traceguids);
  }
  if ( a2 > 0x248 )
    return -1073741823;
  v12 = *(_QWORD *)(W32GetUserGdiSessionState(v5) + 40);
  if ( v12 != PsGetCurrentProcess() )
    return -1073741823;
  v13 = **(__int64 (***)(void))(W32GetWin32kFullApiSetTable()
                              + 24LL * ext_ms_win_moderncore_win32k_base_sysentry_l1_ApiSetTableIndex);
  if ( v13 )
    v14 = v13();
  else
    v14 = -1073741637;
  if ( v14 < 0 )
    return -1073741637;
  ProbeForWrite(Address, Length, 4u);
  v15 = *(_DWORD *)Address;
  Src = *(_DWORD *)Address;
  v16 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kFullApiSetTable()
                                        + 24LL * ext_ms_win_moderncore_win32k_base_sysentry_l1_ApiSetTableIndex)
                            + 8LL);
  if ( v16 )
    LODWORD(v16) = v16();
  if ( v15 != (_DWORD)v16 )
    return -1073741811;
  Object = 0LL;
  result = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)PsProcessType, 1, &Object, 0LL);
  v18 = Object;
  Handle = Object;
  if ( result >= 0 )
  {
    if ( v18 == (PVOID)PsGetCurrentProcess()
      || !(unsigned int)PsIsProtectedProcess(v18)
      || (unsigned int)PsIsProtectedProcessLight(v18) )
    {
      v28 = 0;
    }
    else
    {
      v31 = 0LL;
      v37 = 0LL;
      inited = PsAcquireProcessExitSynchronization(v18);
      if ( inited < 0 )
      {
LABEL_22:
        ObfDereferenceObject(v18);
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 4) == 0
          || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
        {
          v7 = 0;
        }
        v22 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v7 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v23 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v21);
          LOBYTE(v24) = v22;
          LOBYTE(v25) = v7;
          WPP_RECORDER_AND_TRACE_SF_(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v25,
            v24,
            *(_QWORD *)(v23 + 69416),
            4,
            3,
            17,
            (__int64)&WPP_8c46d2143b0735a388a3e4e1a89de128_Traceguids);
        }
        return inited;
      }
      v28 = 1;
      ProcessPeb = PsGetProcessPeb(v18);
      KeStackAttachProcess((PRKPROCESS)v18, &ApcState);
      _m_prefetchw((const void *)(ProcessPeb + 88));
      v26 = _InterlockedAnd64((volatile signed __int64 *)(ProcessPeb + 88), 0xFFFFFFFFFFFFFFFEuLL);
      v31 = v26;
      if ( (v26 & 1) == 0 )
      {
        inited = -1073741823;
        goto LABEL_20;
      }
      v31 = v26 & 0xFFFFFFFFFFFFFFFEuLL;
      ProbeForRead((volatile void *)(v26 & 0xFFFFFFFFFFFFFFFEuLL), 0x10uLL, 4u);
      v37 = *(_OWORD *)(v26 & 0xFFFFFFFFFFFFFFFEuLL);
      if ( (_DWORD)v37 != a2 )
      {
        inited = -1073741823;
        goto LABEL_20;
      }
      v32 = (volatile void *)*((_QWORD *)&v37 + 1);
      ProbeForWrite(*((volatile void **)&v37 + 1), a2, 4u);
    }
    EnterCrit(1LL, 0LL);
    inited = InitMapSharedSection((struct _EPROCESS *)v18, (struct _USERCONNECT *)&Src);
    UserSessionSwitchLeaveCrit(v20);
    if ( inited >= 0 )
    {
      if ( v28 )
      {
        memmove((void *)v32, v39, a2);
        _InterlockedOr(v27, 0);
        *(_QWORD *)(ProcessPeb + 88) = 0LL;
LABEL_21:
        KeUnstackDetachProcess(&ApcState);
        PsReleaseProcessExitSynchronization(v18);
        goto LABEL_22;
      }
      memmove((void *)Address, &Src, Length);
    }
LABEL_20:
    if ( !v28 )
      goto LABEL_22;
    goto LABEL_21;
  }
  return result;
}
