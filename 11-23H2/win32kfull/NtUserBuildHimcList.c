/*
 * XREFs of NtUserBuildHimcList @ 0x1C008DE10
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C0042ABC (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?_BuildHimcList@@YAIPEBUtagTHREADINFO@@IPEAPEAUHIMC__@@@Z @ 0x1C008DF00 (-_BuildHimcList@@YAIPEBUtagTHREADINFO@@IPEAPEAUHIMC__@@@Z.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A6788 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EB194 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 */

__int64 __fastcall NtUserBuildHimcList(__int64 a1, __int64 a2, volatile void *a3, unsigned int *a4)
{
  __int64 v6; // rsi
  unsigned int v7; // ebx
  const struct tagTHREADINFO *v8; // rbx
  _DWORD *v9; // rdx
  unsigned int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v17; // rax
  _BYTE v18[4]; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v19; // [rsp+24h] [rbp-24h]

  v6 = (unsigned int)a2;
  v7 = a1;
  EnterSharedCrit(a1, a2, a3);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v18);
  if ( (*gpsi & 4) != 0 )
  {
    if ( v7 )
    {
      if ( v7 == -1 )
      {
        v8 = 0LL;
      }
      else
      {
        v17 = PtiFromThreadId(v7);
        v8 = (const struct tagTHREADINFO *)v17;
        if ( !v17 || !*(_QWORD *)(v17 + 456) )
        {
          v11 = -1073741811;
          goto LABEL_7;
        }
        if ( *(_QWORD *)(v17 + 456) != *((_QWORD *)PtiCurrentShared() + 57) )
        {
          v11 = -1073741790;
          goto LABEL_7;
        }
      }
    }
    else
    {
      v8 = PtiCurrentShared();
    }
    ProbeForWrite(a3, 8 * v6, 4u);
    v9 = a4;
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      v9 = (_DWORD *)MmUserProbeAddress;
    *v9 = *v9;
    v10 = _BuildHimcList(v8, v6, (struct HIMC__ **)a3);
    v11 = (unsigned int)v6 < v10 ? 0xC0000023 : 0;
    v19 = v11;
    *a4 = v10;
  }
  else
  {
    UserSetLastError(120LL);
    v11 = -1073741823;
  }
LABEL_7:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v18);
  UserSessionSwitchLeaveCrit(v13, v12, v14, v15);
  return v11;
}
