/*
 * XREFs of MiUpdateOldWorkingSetPagesTail @ 0x140296100
 * Callers:
 *     <none>
 * Callees:
 *     MiReleaseProcessorFlushList @ 0x140208120 (MiReleaseProcessorFlushList.c)
 *     MiFreeWsleList @ 0x140297494 (MiFreeWsleList.c)
 *     MiFlushTbList @ 0x1402A1330 (MiFlushTbList.c)
 *     MiQueryVpabAccessedState @ 0x1403994CC (MiQueryVpabAccessedState.c)
 *     MiProcessVpabAccessedInfo @ 0x140480648 (MiProcessVpabAccessedInfo.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiUpdateOldWorkingSetPagesTail(__int64 a1)
{
  _QWORD *v1; // rdi
  int v3; // ebp
  __int64 v4; // rcx
  __int64 v6; // rdx
  _DWORD *v7; // rax
  __int64 v8; // rdx
  unsigned __int64 v9; // rbx
  char v10; // bl
  int VpabAccessedState; // eax

  v1 = *(_QWORD **)(a1 + 184);
  v3 = 1;
  while ( 1 )
  {
    v4 = v1[3];
    if ( !v4 )
      break;
    if ( *(_DWORD *)(v4 + 28) )
      MiFlushTbList(v4);
    v6 = v1[4];
    if ( *(_DWORD *)(v6 + 28) )
      MiFreeWsleList(*(_QWORD *)(a1 + 32), v6, 0LL);
    v7 = (_DWORD *)v1[5];
    if ( !v7
      || !*v7
      || (v10 = *(_BYTE *)(a1 + 9),
          *(_BYTE *)(a1 + 9) = 17,
          VpabAccessedState = MiQueryVpabAccessedState(a1, v1[5], 0LL),
          *(_BYTE *)(a1 + 9) = v10,
          (v3 = VpabAccessedState) == 0) )
    {
      if ( v1[3] )
      {
        MiReleaseProcessorFlushList();
        v1[3] = 0LL;
        v1[4] = 0LL;
        if ( v1[5] )
          v1[5] = 1LL;
        if ( !v3 )
        {
          v9 = *(unsigned __int8 *)(a1 + 9);
          if ( (_BYTE)v9 != 17 )
          {
            if ( KiIrqlFlags )
            {
              LOBYTE(v8) = *(_BYTE *)(a1 + 9);
              KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v8);
            }
            __writecr8(v9);
          }
        }
      }
      return 0LL;
    }
    MiProcessVpabAccessedInfo(a1, v1[5], MiUpdateOldPagesVpabCallback, *(_QWORD *)(a1 + 184));
  }
  return 0LL;
}
