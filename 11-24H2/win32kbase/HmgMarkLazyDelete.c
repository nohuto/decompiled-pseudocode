/*
 * XREFs of HmgMarkLazyDelete @ 0x1400B6D00
 * Callers:
 *     <none>
 * Callees:
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x14002DFB0 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x14002E8D0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIW4HandleLockOptions@@@Z @ 0x1400307E0 (-vLockHandle@HANDLELOCK@@AEAAXIW4HandleLockOptions@@@Z.c)
 *     ?ShareCount@HANDLELOCK@@QEAAKXZ @ 0x1400B6DF0 (-ShareCount@HANDLELOCK@@QEAAKXZ.c)
 */

__int64 __fastcall HmgMarkLazyDelete(__int64 a1, char a2, _DWORD *a3)
{
  unsigned int v5; // esi
  int v6; // eax
  __int64 v7; // rbx
  unsigned int v8; // edi
  __int64 v10; // [rsp+20h] [rbp-20h] BYREF
  int v11; // [rsp+28h] [rbp-18h]
  __int16 v12; // [rsp+2Ch] [rbp-14h]
  __int64 v13; // [rsp+30h] [rbp-10h]

  v10 = 0LL;
  v11 = 0;
  v12 = 0;
  v5 = a1;
  v13 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  HANDLELOCK::vLockHandle(&v10, (unsigned __int16)v5 | (v5 >> 8) & 0xFF0000, 0);
  v6 = v11;
  if ( !v11 )
    goto LABEL_9;
  v7 = v10;
  v8 = 1;
  if ( *(_BYTE *)(v10 + 14) != a2 || *(_WORD *)(v10 + 12) != HIWORD(v5) )
  {
    HIBYTE(v12) = 1;
    HANDLELOCK::vUnlock((HANDLELOCK *)&v10);
    v6 = v11;
    v7 = v10;
  }
  if ( v6 )
  {
    *a3 = 0;
    if ( HANDLELOCK::ShareCount((HANDLELOCK *)&v10) )
    {
      *(_BYTE *)(v7 + 15) |= 2u;
      *a3 = 1;
    }
    *(_QWORD *)(v7 + 16) = 0LL;
    HANDLELOCK::vUnlock((HANDLELOCK *)&v10);
  }
  else
  {
LABEL_9:
    v8 = 0;
  }
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v10);
  return v8;
}
