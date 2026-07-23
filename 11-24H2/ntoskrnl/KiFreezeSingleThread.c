/*
 * XREFs of KiFreezeSingleThread @ 0x1402DD7D8
 * Callers:
 *     KeStartThread @ 0x1403A1E70 (KeStartThread.c)
 *     KeFreezeProcess @ 0x14048E57C (KeFreezeProcess.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x1402C72D0 (KiAcquireKobjectLockSafe.c)
 *     KiSuspendThread @ 0x1402DE060 (KiSuspendThread.c)
 */

char __fastcall KiFreezeSingleThread(__int64 a1, __int64 a2, char a3)
{
  _UNKNOWN **v3; // rax
  volatile signed __int32 *v7; // rsi
  char v8; // di
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  v3 = &retaddr;
  if ( a3 || (*(_DWORD *)(a2 + 116) & 0x200000) == 0 )
  {
    v7 = (volatile signed __int32 *)(a2 + 736);
    KiAcquireKobjectLockSafe((volatile signed __int32 *)(a2 + 736));
    v8 = *(_BYTE *)(a2 + 794);
    LOBYTE(v3) = v8 | (a3 != 0 ? 4 : 2);
    *(_BYTE *)(a2 + 794) = (_BYTE)v3;
    if ( (v8 & 2) == 0 && (v8 & 4) == 0 )
    {
      _interlockedbittestandset((volatile signed __int32 *)(a2 + 120), 0xEu);
      LOBYTE(v3) = KiSuspendThread(a2, a1);
      if ( !(_BYTE)v3 )
      {
        _interlockedbittestandreset((volatile signed __int32 *)(a2 + 120), 0xEu);
        LOBYTE(v3) = *(_BYTE *)(a2 + 794);
        *(_BYTE *)(a2 + 794) = (unsigned __int8)v3 ^ (v8 ^ (unsigned __int8)v3) & 4 ^ ((unsigned __int8)v3 ^ (v8 ^ (unsigned __int8)v3) & 4 ^ v8) & 2;
      }
    }
    _InterlockedAnd(v7, 0xFFFFFF7F);
  }
  return (char)v3;
}
