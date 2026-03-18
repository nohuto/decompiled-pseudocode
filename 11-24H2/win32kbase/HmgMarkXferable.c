/*
 * XREFs of HmgMarkXferable @ 0x140143340
 * Callers:
 *     <none>
 * Callees:
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x14002DFB0 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x14002E8D0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ??0HANDLELOCK@@QEAA@PEAUHOBJ__@@W4HandleLockOptions@@@Z @ 0x1400306B0 (--0HANDLELOCK@@QEAA@PEAUHOBJ__@@W4HandleLockOptions@@@Z.c)
 */

__int64 __fastcall HmgMarkXferable(unsigned int a1, char a2)
{
  __int16 v3; // ebx^2
  unsigned int v4; // edi
  __int64 v6; // [rsp+20h] [rbp-28h] BYREF
  int v7; // [rsp+28h] [rbp-20h]
  char v8; // [rsp+2Dh] [rbp-1Bh]

  v3 = HIWORD(a1);
  v4 = 0;
  HANDLELOCK::HANDLELOCK((__int64)&v6, a1, 0);
  if ( v7 )
  {
    if ( *(_BYTE *)(v6 + 14) == a2 && *(_WORD *)(v6 + 12) == v3 )
    {
      *(_BYTE *)(v6 + 15) |= 0x20u;
      v4 = 1;
    }
    else
    {
      v8 = 1;
    }
    HANDLELOCK::vUnlock((HANDLELOCK *)&v6);
  }
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v6);
  return v4;
}
