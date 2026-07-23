/*
 * XREFs of MiAgeWorkingSetTail @ 0x140296210
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

__int64 __fastcall MiAgeWorkingSetTail(__int64 a1)
{
  __int64 v1; // rbx
  BOOL v3; // ebp
  int v4; // r14d
  __int64 v5; // rcx
  __int64 v7; // rdx
  _DWORD *v8; // rax
  bool v9; // zf
  unsigned __int64 v10; // rdi
  char v11; // di
  int VpabAccessedState; // eax

  v1 = *(_QWORD *)(a1 + 184);
  v3 = (*(_DWORD *)v1 & 3) != 0 || *(__int64 (__fastcall **)())(a1 + 168) == MiSimpleAgePte;
  v4 = 1;
  while ( 1 )
  {
    v5 = *(_QWORD *)(v1 + 56);
    if ( !v5 )
      break;
    if ( *(_DWORD *)(v5 + 28) )
      MiFlushTbList(v5);
    v7 = *(_QWORD *)(v1 + 64);
    if ( *(_DWORD *)(v7 + 28) )
      MiFreeWsleList(*(_QWORD *)(a1 + 32), v7, 0LL);
    v8 = *(_DWORD **)(v1 + 72);
    if ( !v8
      || !*v8
      || (v11 = *(_BYTE *)(a1 + 9),
          *(_BYTE *)(a1 + 9) = 17,
          VpabAccessedState = MiQueryVpabAccessedState(a1, *(_QWORD *)(v1 + 72), v3),
          *(_BYTE *)(a1 + 9) = v11,
          (v4 = VpabAccessedState) == 0) )
    {
      if ( *(_QWORD *)(v1 + 56) )
      {
        MiReleaseProcessorFlushList();
        v9 = *(_QWORD *)(v1 + 72) == 0LL;
        *(_QWORD *)(v1 + 56) = 0LL;
        *(_QWORD *)(v1 + 64) = 0LL;
        if ( !v9 )
          *(_QWORD *)(v1 + 72) = 1LL;
        if ( !v4 )
        {
          v10 = *(unsigned __int8 *)(a1 + 9);
          if ( (_BYTE)v10 != 17 )
          {
            if ( KiIrqlFlags )
              KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v10);
            __writecr8(v10);
          }
        }
      }
      break;
    }
    MiProcessVpabAccessedInfo(a1, *(_QWORD *)(v1 + 72), MiAgeWorkingSetVpabCallback, *(_QWORD *)(a1 + 184));
  }
  if ( (*(_DWORD *)(a1 + 4) & 0x20) != 0 )
    *(_BYTE *)(v1 + 6) = 1;
  return 0LL;
}
