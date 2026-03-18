/*
 * XREFs of ApiSetEditionPostKeyboardInputMessage @ 0x1402220B8
 * Callers:
 *     NtUserPostKeyboardInputMessage @ 0x1401BCB10 (NtUserPostKeyboardInputMessage.c)
 * Callees:
 *     EditionPostKeyboardInputMessage @ 0x14023B078 (EditionPostKeyboardInputMessage.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetEditionPostKeyboardInputMessage(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 a4,
        __int16 a5,
        __int16 a6,
        __int16 a7,
        int a8,
        __int16 a9,
        __int64 a10)
{
  char v11; // si
  int v12; // ebp
  unsigned int v13; // ebx
  int (*v14)(void); // rax
  int v15; // edx
  int v16; // r8d

  v11 = a2;
  v12 = a1;
  v13 = -1073741637;
  v14 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 7392LL);
  if ( v14 && v14() >= 0 )
  {
    LOBYTE(v15) = v11;
    return (unsigned int)EditionPostKeyboardInputMessage(v12, v15, v16, a4, a5, a6, a7, a8, a9, a10);
  }
  return v13;
}
