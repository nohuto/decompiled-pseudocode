/*
 * XREFs of ApiSetEditionParseDesktop @ 0x140106DB0
 * Callers:
 *     ParseWindowStation @ 0x140106C90 (ParseWindowStation.c)
 * Callees:
 *     EditionParseDesktop @ 0x140111750 (EditionParseDesktop.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetEditionParseDesktop(
        __int64 a1,
        __int64 a2,
        int a3,
        char a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  int v12; // ebp
  int v13; // r14d
  unsigned int v14; // ebx
  int (*v15)(void); // rax
  int v16; // r9d

  v12 = a2;
  v13 = a1;
  v14 = 0;
  v15 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 2120LL);
  if ( v15 && v15() >= 0 )
  {
    LOBYTE(v16) = a4;
    return (unsigned int)EditionParseDesktop(v13, v12, a3, v16, a5, a6, a7, a8, a9, a10);
  }
  return v14;
}
