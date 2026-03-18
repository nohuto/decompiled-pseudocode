/*
 * XREFs of NtUserShutdownBlockReasonCreate @ 0x1C003B0B0
 * Callers:
 *     <none>
 * Callees:
 *     InternalRemoveProp @ 0x1C0026C40 (InternalRemoveProp.c)
 *     _GetAncestor @ 0x1C003B268 (_GetAncestor.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C003B918 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     InternalSetProp @ 0x1C003C0AC (InternalSetProp.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     QueueShutdownData @ 0x1C01B2B28 (QueueShutdownData.c)
 */

__int64 __fastcall NtUserShutdownBlockReasonCreate(__int64 a1, volatile void *a2, unsigned int a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rbx
  __int64 CurrentProcessWin32Process; // rax
  unsigned __int16 *v13; // rax
  unsigned __int16 *v14; // r14
  void *v15; // rax
  int v16; // edi
  __int64 v18; // rcx

  EnterCrit(0LL, 0LL);
  v8 = ValidateHwnd(a1);
  v11 = 0LL;
  if ( !v8 )
    goto LABEL_18;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v7);
  v9 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
  {
    v7 = -*(_QWORD *)CurrentProcessWin32Process;
    v6 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    v9 = v6 & CurrentProcessWin32Process;
  }
  if ( *(_QWORD *)(*(_QWORD *)(v8 + 16) + 424LL) != v9 )
  {
    v11 = 5LL;
    goto LABEL_18;
  }
  if ( v8 != GetAncestor(v8, 2LL) || a3 > 0x101 )
  {
    v18 = 87LL;
LABEL_23:
    UserSetLastError(v18);
    goto LABEL_18;
  }
  v13 = (unsigned __int16 *)Win32AllocPoolZInit(2LL * (a3 + 1), 1919054677LL);
  v14 = v13;
  if ( !v13 )
  {
    v18 = 8LL;
    goto LABEL_23;
  }
  if ( a3 )
  {
    ProbeForRead(a2, 2LL * (a3 + 1), 2u);
    RtlStringCchCopyW(v14, a3 + 1, (const unsigned __int16 *)a2);
  }
  else
  {
    *v13 = 0;
  }
  v15 = (void *)InternalRemoveProp(v8, (unsigned __int16)gatomShutdownBlockingReason, 1u);
  if ( v15 )
    Win32FreePool(v15);
  if ( (unsigned int)InternalSetProp(v8, (unsigned __int16)gatomShutdownBlockingReason, v14, 1LL) )
  {
    v16 = 0;
    if ( gptiShutdownWaiter )
      QueueShutdownData(a1, 1uLL);
  }
  else
  {
    v16 = -1073741823;
  }
  if ( v16 < 0 )
    Win32FreePool(v14);
  else
    v11 = 1LL;
LABEL_18:
  UserSessionSwitchLeaveCrit(v7, v6, v9, v10);
  return v11;
}
