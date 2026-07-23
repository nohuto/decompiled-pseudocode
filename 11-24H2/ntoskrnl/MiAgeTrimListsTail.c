/*
 * XREFs of MiAgeTrimListsTail @ 0x14020B9B0
 * Callers:
 *     MiReacquireHigherPageTableLock @ 0x14020B170 (MiReacquireHigherPageTableLock.c)
 *     MiYieldPageTableWalk @ 0x14020B840 (MiYieldPageTableWalk.c)
 *     MiWalkPageTablesRecursively @ 0x14023DD10 (MiWalkPageTablesRecursively.c)
 *     MiTrimWorkingSetTail @ 0x140390A50 (MiTrimWorkingSetTail.c)
 *     MiResetAccessBitsTail @ 0x140496CD0 (MiResetAccessBitsTail.c)
 * Callees:
 *     MiReleaseProcessorFlushList @ 0x140208120 (MiReleaseProcessorFlushList.c)
 *     MiTrimWorkingSetTailHelper @ 0x14020D060 (MiTrimWorkingSetTailHelper.c)
 *     MiFreeWsleList @ 0x140297494 (MiFreeWsleList.c)
 *     MiFlushTbList @ 0x1402A1330 (MiFlushTbList.c)
 *     MiQueryVpabAccessedState @ 0x1403994CC (MiQueryVpabAccessedState.c)
 *     MiProcessVpabAccessedInfo @ 0x140480648 (MiProcessVpabAccessedInfo.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall MiAgeTrimListsTail(__int64 a1, __int64 *a2, __int64 (__fastcall *a3)(_QWORD), __int64 a4, __int64 a5)
{
  unsigned int v5; // r15d
  int v9; // r14d
  __int64 v10; // rcx
  __int64 v11; // rdx
  _DWORD *v12; // rax
  __int64 v13; // rdx
  unsigned __int64 v14; // rbx
  char v15; // bl
  int VpabAccessedState; // eax

  v5 = a4;
  v9 = 1;
  while ( 1 )
  {
    if ( a3 )
    {
      if ( a3 == MiTrimWorkingSetTailHelper )
        MiTrimWorkingSetTailHelper(a1);
      else
        guard_dispatch_icall_no_overrides(a1, a2, a3, a4);
    }
    v10 = *a2;
    if ( !*a2 )
      break;
    if ( *(_DWORD *)(v10 + 28) )
      MiFlushTbList(v10);
    v11 = a2[1];
    if ( *(_DWORD *)(v11 + 28) )
      MiFreeWsleList(*(_QWORD *)(a1 + 32), v11, 0LL);
    v12 = (_DWORD *)a2[2];
    if ( !v12
      || !*v12
      || (v15 = *(_BYTE *)(a1 + 9),
          *(_BYTE *)(a1 + 9) = 17,
          VpabAccessedState = MiQueryVpabAccessedState(a1, a2[2], v5),
          *(_BYTE *)(a1 + 9) = v15,
          (v9 = VpabAccessedState) == 0) )
    {
      if ( *a2 )
      {
        MiReleaseProcessorFlushList();
        *a2 = 0LL;
        a2[1] = 0LL;
        if ( a2[2] )
          a2[2] = 1LL;
        if ( !v9 )
        {
          v14 = *(unsigned __int8 *)(a1 + 9);
          if ( (_BYTE)v14 != 17 )
          {
            if ( KiIrqlFlags )
            {
              LOBYTE(v13) = *(_BYTE *)(a1 + 9);
              KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v13);
            }
            __writecr8(v14);
          }
        }
      }
      return;
    }
    MiProcessVpabAccessedInfo(a1, a2[2], a5, *(_QWORD *)(a1 + 184));
  }
}
