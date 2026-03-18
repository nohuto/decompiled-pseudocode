/*
 * XREFs of ?WaitAndDispatch@LegacyInputDispatcher@@QEAAJXZ @ 0x1401878A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Dispatch@LegacyInputDispatcher@@QEBAJI@Z @ 0x14018719C (-Dispatch@LegacyInputDispatcher@@QEBAJI@Z.c)
 *     ?HasInputDispatcherObjects@LegacyInputDispatcher@@AEBA_NXZ @ 0x140187324 (-HasInputDispatcherObjects@LegacyInputDispatcher@@AEBA_NXZ.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall LegacyInputDispatcher::WaitAndDispatch(LegacyInputDispatcher *this)
{
  NTSTATUS v2; // eax
  __int64 v3; // rdi
  void (*v4)(void); // rax

  while ( 1 )
  {
    v2 = KeWaitForMultipleObjects(
           *((_DWORD *)this + 13),
           *((PVOID **)this + 1),
           WaitAny,
           WrUserRequest,
           *((_BYTE *)this + 56),
           *((_BYTE *)this + 57),
           0LL,
           *((PKWAIT_BLOCK *)this + 3));
    v3 = (unsigned int)v2;
    if ( v2 < 0 )
      return (unsigned int)v3;
    if ( (unsigned int)v2 < *((_DWORD *)this + 13) && LegacyInputDispatcher::HasInputDispatcherObjects(this) )
    {
      if ( (unsigned int)v3 < *((_DWORD *)this + 10) )
        goto LABEL_7;
      LegacyInputDispatcher::Dispatch(this, v3);
    }
    else
    {
      if ( (unsigned int)v3 >= *((_DWORD *)this + 10) )
        return (unsigned int)v3;
LABEL_7:
      v4 = *(void (**)(void))(*((_QWORD *)this + 4) + 16 * v3);
      if ( !v4 )
        return (unsigned int)v3;
      v4();
    }
  }
}
