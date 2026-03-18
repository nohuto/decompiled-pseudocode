/*
 * XREFs of ?SendKeyUpDown@@YAXEE@Z @ 0x140214224
 * Callers:
 *     ?MapFlexibleKeys@@YAHPEAUtagKE@@EPEAUDEVICEINFO@@@Z @ 0x1400C88E8 (-MapFlexibleKeys@@YAHPEAUtagKE@@EPEAUDEVICEINFO@@@Z.c)
 * Callees:
 *     InternalMapVirtualKeyEx @ 0x1400969C0 (InternalMapVirtualKeyEx.c)
 *     xxxProcessKeyEvent @ 0x1400FB6E0 (xxxProcessKeyEvent.c)
 *     GetCurrentKbdTables @ 0x140214310 (GetCurrentKbdTables.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

void __fastcall SendKeyUpDown(unsigned __int8 a1, char a2)
{
  unsigned int v2; // ebx
  __int64 CurrentKbdTables; // rax
  _OWORD v4[2]; // [rsp+30h] [rbp-38h] BYREF

  v2 = a1;
  memset(v4, 0, sizeof(v4));
  WORD1(v4[0]) = a1 | 0x4000;
  if ( a2 )
    WORD1(v4[0]) = a1 | 0xC000;
  CurrentKbdTables = GetCurrentKbdTables();
  if ( CurrentKbdTables )
    LOBYTE(v4[0]) = InternalMapVirtualKeyEx(v2, 0, CurrentKbdTables);
  xxxProcessKeyEvent((unsigned __int16 *)v4, 0LL, 1u, 0, 0LL, 0LL);
}
