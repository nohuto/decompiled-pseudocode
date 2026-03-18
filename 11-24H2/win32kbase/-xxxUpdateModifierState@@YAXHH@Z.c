/*
 * XREFs of ?xxxUpdateModifierState@@YAXHH@Z @ 0x1400FB230
 * Callers:
 *     ?xxxStickyKeys@@YAHPEAUtagKE@@KH@Z @ 0x1400FAD40 (-xxxStickyKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     ?xxxUnlatchStickyKeys@@YAXXZ @ 0x140157A10 (-xxxUnlatchStickyKeys@@YAXXZ.c)
 *     ?xxxTurnOffStickyKeys@@YAXXZ @ 0x14019F990 (-xxxTurnOffStickyKeys@@YAXXZ.c)
 *     ?xxxTwoKeysDown@@YAHH@Z @ 0x1401F6230 (-xxxTwoKeysDown@@YAHH@Z.c)
 * Callees:
 *     ?AccessProceduresStream@@YAHPEAUtagKE@@KH@Z @ 0x1400FB410 (-AccessProceduresStream@@YAHPEAUtagKE@@KH@Z.c)
 *     xxxProcessKeyEvent @ 0x1400FB6E0 (xxxProcessKeyEvent.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

void __fastcall xxxUpdateModifierState(__int64 a1, int a2)
{
  int v3; // ebp
  int v4; // ebx
  __int64 v5; // rcx
  int v6; // esi
  _DWORD *v7; // rbx
  unsigned int i; // edi
  int v9; // ecx
  __int16 v10; // ax
  _OWORD v11[2]; // [rsp+30h] [rbp-48h] BYREF

  memset(v11, 0, sizeof(v11));
  v3 = a1;
  v4 = *(unsigned __int8 *)(W32GetUserSessionState(a1) + 21905);
  v6 = v4 | *(unsigned __int8 *)(W32GetUserSessionState(v5) + 21906);
  v7 = &unk_14025EA44;
  for ( i = 0; i < 8; ++i )
  {
    v9 = v6 & *(v7 - 1);
    if ( v9 != (v3 & *(v7 - 1)) )
    {
      LOBYTE(v11[0]) = *(_BYTE *)v7;
      v10 = *((_WORD *)v7 + 1);
      WORD1(v11[0]) = v10;
      if ( v9 )
        WORD1(v11[0]) = v10 | 0x8000;
      if ( (unsigned int)AccessProceduresStream((struct tagKE *)v11, 0, a2) )
        xxxProcessKeyEvent((unsigned int)v11, 0, 0, 0, 0LL, 0LL);
    }
    v7 += 2;
  }
}
