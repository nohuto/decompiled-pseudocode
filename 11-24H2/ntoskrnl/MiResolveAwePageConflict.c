/*
 * XREFs of MiResolveAwePageConflict @ 0x140682F08
 * Callers:
 *     MiIncrementAweMapCount @ 0x140682560 (MiIncrementAweMapCount.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiChangePageAttribute @ 0x14021F58C (MiChangePageAttribute.c)
 *     MiUnlockPage @ 0x1402915F0 (MiUnlockPage.c)
 *     KeWaitForGate @ 0x140415DEC (KeWaitForGate.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     MiChangeAwePageAttributes @ 0x140681768 (MiChangeAwePageAttributes.c)
 *     MiWakeWaitersForAweCacheAttributeChange @ 0x140683208 (MiWakeWaitersForAweCacheAttributeChange.c)
 */

__int64 __fastcall MiResolveAwePageConflict(__int64 a1, unsigned __int64 a2, unsigned int a3, unsigned __int8 a4)
{
  bool v5; // zf
  int v9; // edx
  unsigned __int8 v10; // cl
  __int64 result; // rax
  int v12; // r14d
  int v13; // edx
  unsigned __int8 CurrentIrql; // cl
  _QWORD v15[2]; // [rsp+20h] [rbp-30h] BYREF
  __int16 v16; // [rsp+30h] [rbp-20h] BYREF
  char v17; // [rsp+32h] [rbp-1Eh]
  char v18; // [rsp+33h] [rbp-1Dh]
  int v19; // [rsp+34h] [rbp-1Ch]
  _QWORD v20[3]; // [rsp+38h] [rbp-18h] BYREF
  int v21; // [rsp+78h] [rbp+28h]

  v15[0] = 0LL;
  v5 = (*(_BYTE *)(a2 + 34) & 0x20) == 0;
  v18 = 0;
  if ( v5 )
  {
    if ( (unsigned __int16)*(_DWORD *)(a2 + 32) > 2u
      || (*(_QWORD *)(a2 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1
      || (*(_QWORD *)(a2 + 24) & 0x4000000000000000LL) != 0 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      return 3221225496LL;
    }
    else if ( *(_QWORD *)(a1 + 16) == 1LL )
    {
      MiChangePageAttribute(a2, a3);
      return 0LL;
    }
    else
    {
      v21 = *(_DWORD *)(a2 + 32);
      BYTE2(v21) |= 0x20u;
      *(_DWORD *)(a2 + 32) = v21;
      MiUnlockPage(a2, a4);
      v12 = MiChangeAwePageAttributes(a1, a2, a3);
      MiWakeWaitersForAweCacheAttributeChange(a1, a2);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v13) = 2;
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v13);
      }
      result = 3221226029LL;
      if ( v12 < 0 )
        return (unsigned int)v12;
    }
  }
  else
  {
    v19 = 0;
    v20[1] = v20;
    v15[1] = a2;
    v20[0] = v20;
    v16 = 263;
    v17 = 6;
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 48));
    v15[0] = *(_QWORD *)(a1 + 80);
    *(_QWORD *)(a1 + 80) = v15;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 48));
    MiUnlockPage(a2, a4);
    KeWaitForGate((__int64)&v16, 18LL, 0);
    v10 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v9) = 2;
      KiRaiseIrqlProcessIrqlFlags(v10, v9);
    }
    return 3221226029LL;
  }
  return result;
}
