/*
 * XREFs of MiResolveAwePageConflict @ 0x1406840F8
 * Callers:
 *     MiIncrementAweMapCount @ 0x140683750 (MiIncrementAweMapCount.c)
 * Callees:
 *     MiChangePageAttribute @ 0x14024C2DC (MiChangePageAttribute.c)
 *     KeWaitForGate @ 0x140271C4C (KeWaitForGate.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     MiChangeAwePageAttributes @ 0x140682958 (MiChangeAwePageAttributes.c)
 *     MiWakeWaitersForAweCacheAttributeChange @ 0x1406843F8 (MiWakeWaitersForAweCacheAttributeChange.c)
 */

__int64 __fastcall MiResolveAwePageConflict(__int64 a1, unsigned __int64 a2, unsigned int a3, unsigned __int8 a4)
{
  bool v5; // zf
  int v9; // edx
  unsigned __int8 v10; // cl
  __int64 result; // rax
  __int64 v12; // r9
  int v13; // r14d
  int v14; // edx
  unsigned __int8 CurrentIrql; // cl
  _QWORD v16[2]; // [rsp+20h] [rbp-30h] BYREF
  __int16 v17; // [rsp+30h] [rbp-20h] BYREF
  char v18; // [rsp+32h] [rbp-1Eh]
  char v19; // [rsp+33h] [rbp-1Dh]
  int v20; // [rsp+34h] [rbp-1Ch]
  _QWORD v21[3]; // [rsp+38h] [rbp-18h] BYREF
  int v22; // [rsp+78h] [rbp+28h]

  v16[0] = 0LL;
  v5 = (*(_BYTE *)(a2 + 34) & 0x20) == 0;
  v19 = 0;
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
      v22 = *(_DWORD *)(a2 + 32);
      BYTE2(v22) |= 0x20u;
      *(_DWORD *)(a2 + 32) = v22;
      MiUnlockPage(a2, a4);
      v13 = MiChangeAwePageAttributes(a1, a2, a3, v12);
      MiWakeWaitersForAweCacheAttributeChange(a1, a2);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v14) = 2;
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v14);
      }
      result = 3221226029LL;
      if ( v13 < 0 )
        return (unsigned int)v13;
    }
  }
  else
  {
    v20 = 0;
    v21[1] = v21;
    v16[1] = a2;
    v21[0] = v21;
    v17 = 263;
    v18 = 6;
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 48));
    v16[0] = *(_QWORD *)(a1 + 80);
    *(_QWORD *)(a1 + 80) = v16;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 48));
    MiUnlockPage(a2, a4);
    KeWaitForGate((__int64)&v17, 18LL);
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
