/*
 * XREFs of NtUserBuildHimcList @ 0x14020A6F0
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x14005F724 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x14005F740 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     ?_BuildHimcList@@YAIPEBUtagTHREADINFO@@IPECREAUHIMC__@@@Z @ 0x14027FABC (-_BuildHimcList@@YAIPEBUtagTHREADINFO@@IPECREAUHIMC__@@@Z.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028A53C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

__int64 __fastcall NtUserBuildHimcList(unsigned int a1, unsigned int a2, volatile void *a3, unsigned int *a4)
{
  __int64 v5; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // ebx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct tagTHREADINFO *v15; // rbx
  _DWORD *v16; // rdx
  unsigned int v17; // eax
  __int64 v18; // rcx
  unsigned int v20[6]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v21[32]; // [rsp+38h] [rbp-20h] BYREF

  v5 = a2;
  EnterLeaveCritShared::EnterLeaveCritShared(v20, 1LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v21);
  if ( (**(_DWORD **)(W32GetUserSessionState(v8, v7) + 19928) & 4) != 0 )
  {
    if ( a1 )
    {
      if ( a1 == -1 )
      {
        v15 = 0LL;
      }
      else
      {
        v12 = PtiFromThreadId(a1);
        v15 = (struct tagTHREADINFO *)v12;
        if ( !v12 || !*(_QWORD *)(v12 + 496) )
        {
          v11 = -1073741811;
          goto LABEL_15;
        }
        if ( *(_QWORD *)(v12 + 496) != *((_QWORD *)PtiCurrent(v14, v13) + 62) )
        {
          v11 = -1073741790;
          goto LABEL_15;
        }
      }
    }
    else
    {
      v15 = PtiCurrent(v10, v9);
    }
    ProbeForWrite(a3, 8 * v5, 4u);
    v16 = a4;
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      v16 = (_DWORD *)MmUserProbeAddress;
    *v16 = *v16;
    v17 = _BuildHimcList(v15, v5, (struct HIMC__ *volatile *)a3);
    v11 = (unsigned int)v5 < v17 ? 0xC0000023 : 0;
    v20[0] = v11;
    *a4 = v17;
  }
  else
  {
    UserSetLastError(120);
    v11 = -1073741823;
  }
LABEL_15:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v21);
  UserSessionSwitchLeaveCrit(v18);
  return v11;
}
