/*
 * XREFs of ?ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C00458AC
 * Callers:
 *     NtUserDeferWindowPosAndBand @ 0x1C00461C0 (NtUserDeferWindowPosAndBand.c)
 *     NtUserSetWindowBand @ 0x1C0083000 (NtUserSetWindowBand.c)
 * Callees:
 *     ValidateHwndIAM @ 0x1C0030BB8 (ValidateHwndIAM.c)
 */

__int64 __fastcall ValidateHWNDIA(struct tagWND *a1, struct tagWND **a2)
{
  unsigned int v3; // ebx
  struct tagWND *v5; // rax

  v3 = 1;
  if ( (unsigned __int64)a1 - 2 <= 0xFFFFFFFFFFFFFFFBuLL )
  {
    v5 = (struct tagWND *)ValidateHwndIAM((__int64)a1);
    *a2 = v5;
    if ( !v5 || (((*(_WORD *)(*((_QWORD *)v5 + 5) + 42LL) & 0x2FFF) - 669) & 0xFFFFFFFD) == 0 )
      return 0;
  }
  else
  {
    *a2 = a1;
  }
  return v3;
}
