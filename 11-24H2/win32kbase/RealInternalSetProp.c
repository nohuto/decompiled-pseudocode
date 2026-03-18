/*
 * XREFs of RealInternalSetProp @ 0x140168EA0
 * Callers:
 *     InternalSetProp @ 0x14019CC3C (InternalSetProp.c)
 * Callees:
 *     CreateProp @ 0x14004135C (CreateProp.c)
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z @ 0x140042B50 (-LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z.c)
 *     _FindProp @ 0x140042BA0 (_FindProp.c)
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 *     ?HasUILimit@tagPROCESSINFO@@QEBA_NK@Z @ 0x1401A3340 (-HasUILimit@tagPROCESSINFO@@QEBA_NK@Z.c)
 *     Feature_JobAtomTableSwitchBitUpdate__private_IsEnabledDeviceUsageNoInline @ 0x1401AA508 (Feature_JobAtomTableSwitchBitUpdate__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall RealInternalSetProp(struct _KTHREAD **a1, __int64 a2, __int64 a3, __int16 a4)
{
  __int16 v6; // di
  __int64 Prop; // rbx
  char *v10; // rax
  __int64 v11; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v13; // rcx
  tagPROCESSINFO *v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rax

  v6 = a2;
  if ( !a2 )
  {
    UserSetLastError(87);
    return 0LL;
  }
  LockRefactorStagingAssertOwned(a1);
  Prop = FindProp((__int64)a1, v6, a4 & 1);
  if ( !Prop )
  {
    v10 = CreateProp((const void **)a1);
    Prop = (__int64)v10;
    if ( !v10 )
      return 0LL;
    *((_WORD *)v10 + 4) = v6;
    *((_WORD *)v10 + 5) = a4;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v11);
    v14 = (tagPROCESSINFO *)CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
    {
      v13 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      v14 = (tagPROCESSINFO *)(v13 & CurrentProcessWin32Process);
    }
    if ( (unsigned int)Feature_JobAtomTableSwitchBitUpdate__private_IsEnabledDeviceUsageNoInline(v13) )
    {
      if ( (*((_DWORD *)v14 + 204) & 0x4000000) != 0 || tagPROCESSINFO::HasUILimit(v14, 0x20u) )
        *(_WORD *)(Prop + 10) |= 0x10u;
    }
    else
    {
      v16 = PsGetCurrentProcessWin32Process(v15);
      v18 = v16;
      if ( v16 )
      {
        v17 = -(__int64)(*(_QWORD *)v16 != 0LL);
        v18 = v17 & v16;
      }
      if ( (*(_DWORD *)(v18 + 816) & 0x4000000) != 0 )
        *(_WORD *)(Prop + 10) |= 0x10u;
      v19 = PsGetCurrentProcessWin32Process(v17);
      if ( v19 )
        v19 &= -(__int64)(*(_QWORD *)v19 != 0LL);
      *(_DWORD *)(Prop + 12) = *(_DWORD *)(v19 + 876);
    }
  }
  *(_QWORD *)Prop = a3;
  return 1LL;
}
