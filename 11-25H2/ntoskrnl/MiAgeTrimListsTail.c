/*
 * XREFs of MiAgeTrimListsTail @ 0x1402E8290
 * Callers:
 *     MiWalkPageTablesRecursively @ 0x1402B2770 (MiWalkPageTablesRecursively.c)
 *     MiReacquireHigherPageTableLock @ 0x1402E7AC0 (MiReacquireHigherPageTableLock.c)
 *     MiYieldPageTableWalk @ 0x1402E8120 (MiYieldPageTableWalk.c)
 *     MiFastTrimWorkingSet @ 0x1403C4B40 (MiFastTrimWorkingSet.c)
 *     MiTrimWorkingSetTail @ 0x1404830D0 (MiTrimWorkingSetTail.c)
 *     MiResetAccessBitsTail @ 0x14049CCF0 (MiResetAccessBitsTail.c)
 * Callees:
 *     MiReleaseProcessorFlushList @ 0x140237CC0 (MiReleaseProcessorFlushList.c)
 *     MiFlushTbList @ 0x14032BCA0 (MiFlushTbList.c)
 *     MiFreeWsleList @ 0x1403815C4 (MiFreeWsleList.c)
 *     MiQueryVpabAccessedState @ 0x14042AF30 (MiQueryVpabAccessedState.c)
 *     MiProcessVpabAccessedInfo @ 0x1404851C8 (MiProcessVpabAccessedInfo.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall MiAgeTrimListsTail(__int64 a1, __int64 *a2, __int64 a3, unsigned int a4, __int64 a5)
{
  int v9; // ebp
  __int64 v10; // rcx
  __int64 v11; // rdx
  _DWORD *v12; // rax
  __int64 v13; // rdx
  unsigned __int64 v14; // rbx
  char v15; // bl
  int VpabAccessedState; // eax

  v9 = 1;
  while ( 1 )
  {
    if ( a3 )
      guard_dispatch_icall_no_overrides(a1, a2);
    v10 = *a2;
    if ( !*a2 )
      break;
    if ( *(_DWORD *)(v10 + 28) )
      MiFlushTbList(v10, a2, a3);
    v11 = a2[1];
    if ( *(_DWORD *)(v11 + 28) )
      MiFreeWsleList(*(_QWORD *)(a1 + 32), v11, 0LL);
    v12 = (_DWORD *)a2[2];
    if ( !v12
      || !*v12
      || (v15 = *(_BYTE *)(a1 + 9),
          *(_BYTE *)(a1 + 9) = 17,
          VpabAccessedState = MiQueryVpabAccessedState(a1, a2[2], a4),
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
