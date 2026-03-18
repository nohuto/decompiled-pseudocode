/*
 * XREFs of ApiSetEditionCommitMousePosAndMove @ 0x14019151C
 * Callers:
 *     ?CommitMousePosAndMoveCursor@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@PEAUMouseInputProcessingState@@AEAU_MousePacketPerf@@@Z @ 0x14018BA34 (-CommitMousePosAndMoveCursor@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@PEAUMouseInputProcessi.c)
 * Callees:
 *     EditionCommitMousePosAndMove @ 0x1400E1DA8 (EditionCommitMousePosAndMove.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetEditionCommitMousePosAndMove(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        int a7,
        __int64 a8)
{
  unsigned int v12; // ebx
  int (*v13)(void); // rax

  v12 = 0;
  v13 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 6864LL);
  if ( v13 && v13() >= 0 )
    return (unsigned int)EditionCommitMousePosAndMove(a1, a2, a3, a4, a5, a6, a7, a8);
  return v12;
}
