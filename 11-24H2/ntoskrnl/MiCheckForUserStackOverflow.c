/*
 * XREFs of MiCheckForUserStackOverflow @ 0x140A1C9F4
 * Callers:
 *     MiUserFault @ 0x140307CE0 (MiUserFault.c)
 * Callees:
 *     ZwAllocateVirtualMemory @ 0x1406A76B0 (ZwAllocateVirtualMemory.c)
 *     ZwProtectVirtualMemory @ 0x1406A7DB0 (ZwProtectVirtualMemory.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     MiCheckShadowStackOverflow @ 0x140A1CD08 (MiCheckShadowStackOverflow.c)
 */

__int64 __fastcall MiCheckForUserStackOverflow(unsigned __int64 a1, int a2)
{
  char *v3; // rdi
  struct _KTHREAD *CurrentThread; // r14
  char v5; // si
  unsigned int *Teb; // r8
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // rdx
  ULONG_PTR v9; // rcx
  _DWORD *v10; // r15
  ULONG_PTR v11; // rax
  char *v12; // rbx
  NTSTATUS v13; // eax
  char *v14; // rdx
  __int64 result; // rax
  _KPROCESS *Process; // rax
  __int16 v17; // cx
  unsigned __int64 v18; // rax
  unsigned int v19; // edx
  ULONG_PTR v20; // rcx
  void *v21; // rdx
  ULONG_PTR RegionSize; // [rsp+38h] [rbp-40h] BYREF
  PVOID BaseAddress; // [rsp+40h] [rbp-38h] BYREF
  unsigned __int64 v24; // [rsp+48h] [rbp-30h]
  __int64 v25; // [rsp+50h] [rbp-28h]
  unsigned int v26; // [rsp+90h] [rbp+18h] BYREF
  ULONG OldProtect; // [rsp+98h] [rbp+20h] BYREF

  RegionSize = 0LL;
  v26 = 0;
  OldProtect = 0;
  v3 = 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( ((__int64)CurrentThread[1].Queue & 0x4080) != 0 || ((__int64)CurrentThread[1].Queue & 3) != 0 )
    return 2147483649LL;
  v5 = 1;
  if ( CurrentThread->ApcStateIndex == 1 )
    return 2147483649LL;
  if ( !a2 && (unsigned int)MiCheckShadowStackOverflow(a1, &v26) )
    return v26;
  Teb = (unsigned int *)CurrentThread->Teb;
  v7 = *((_QWORD *)Teb + 1);
  v24 = v7;
  v25 = *((_QWORD *)Teb + 655);
  v8 = v25 & 0xFFFFFFFFFFFFF000uLL;
  v9 = (Teb[1490] + 4095LL) & 0xFFFFFFFFFFFFF000uLL;
  RegionSize = v9;
  v10 = Teb + 4;
  v11 = v9;
  if ( v9 )
  {
    v11 = v9 + 4096;
    v9 = v11;
    RegionSize = v11;
  }
  if ( v11 < 0x3000 )
  {
    v9 = 12288LL;
    RegionSize = 12288LL;
    v11 = 12288LL;
  }
  if ( a1 >= v7 || a1 < v8 )
  {
    Process = CurrentThread->ApcState.Process;
    if ( Process[1].ReadyTime )
    {
      v17 = WORD2(Process[3].PerProcessorCycleTimes);
      if ( v17 != 332 && v17 != 452 )
        v5 = 0;
      if ( v5 )
      {
        v3 = (char *)(Teb + 2048);
        if ( ((unsigned __int8)Teb & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v18 = Teb[2049];
        v24 = v18;
        v19 = Teb[2947];
        v25 = v19;
        v20 = Teb[3038];
        RegionSize = v20;
        v8 = v19 & 0xFFFFF000;
        if ( a1 < v18 && a1 >= v8 )
        {
          v9 = (v20 + 4095) & 0xFFFFFFFFFFFFF000uLL;
          v11 = v9;
          RegionSize = v9;
          if ( v9 )
          {
            v9 += 4096LL;
            RegionSize = v9;
            v11 = v9;
          }
          if ( v11 < 0x2000 )
          {
            v9 = 0x2000LL;
            RegionSize = 0x2000LL;
            v11 = 0x2000LL;
          }
          v10 = Teb + 2050;
          goto LABEL_11;
        }
      }
    }
    return 2147483649LL;
  }
LABEL_11:
  v12 = (char *)((a1 & 0xFFFFFFFFFFFFF000uLL) - v11);
  BaseAddress = v12;
  if ( (unsigned __int64)v12 <= v8 )
  {
    v21 = (void *)(v8 + 4096);
  }
  else
  {
    if ( (HIDWORD(CurrentThread->ApcState.Process[1].ProcessListEntry.Blink[11].Blink) & 0x10000) != 0 )
    {
      v13 = -1073741523;
    }
    else
    {
      v13 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 0x104u);
      v9 = RegionSize;
      v12 = (char *)BaseAddress;
    }
    if ( v13 >= 0 )
    {
      v14 = &v12[v9];
      result = 275LL;
      goto LABEL_16;
    }
    RegionSize = v9 - 4096;
    v21 = v12 + 4096;
  }
  BaseAddress = v21;
  ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 4u, &OldProtect);
  v14 = (char *)BaseAddress;
  result = 3221225725LL;
LABEL_16:
  if ( v3 )
    *v10 = (_DWORD)v14;
  else
    *(_QWORD *)v10 = v14;
  return result;
}
