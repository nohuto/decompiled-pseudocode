/*
 * XREFs of MiLookupIoPageNode @ 0x14038F750
 * Callers:
 *     MiInsertPhysicalPteMapping @ 0x1403910B8 (MiInsertPhysicalPteMapping.c)
 *     MmProtectMdlSystemAddress @ 0x1404063A0 (MmProtectMdlSystemAddress.c)
 *     MiMapMdlWithLargePages @ 0x1404C0630 (MiMapMdlWithLargePages.c)
 *     MiMapMdlCommon @ 0x1404EDDA4 (MiMapMdlCommon.c)
 *     MmGetCacheAttributeEx @ 0x1406707F0 (MmGetCacheAttributeEx.c)
 * Callees:
 *     MiIoSpaceGetBounds @ 0x14038F8B0 (MiIoSpaceGetBounds.c)
 *     MiUnlockIoPfnTree @ 0x14038F980 (MiUnlockIoPfnTree.c)
 *     MiLockIoPfnTree @ 0x14038FA2C (MiLockIoPfnTree.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall MiLookupIoPageNode(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  int v2; // ebp
  ULONG_PTR v3; // rsi
  unsigned __int8 CurrentIrql; // bl
  unsigned __int8 v5; // di
  unsigned int v6; // r14d
  __int64 v7; // rdx
  char v8; // r10
  unsigned int v9; // r11d
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v12; // rbx
  __int64 v13; // rcx
  int v14; // ebx
  ULONG_PTR v16; // rax
  _BYTE v17[16]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v18; // [rsp+40h] [rbp-28h]

  v2 = a2;
  v18 = 0LL;
  v3 = BugCheckParameter2;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = 2;
    LOBYTE(BugCheckParameter2) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(BugCheckParameter2, a2);
  }
  v5 = CurrentIrql;
  if ( CurrentIrql == 2 )
    v5 = 17;
  v6 = 5;
  if ( CurrentIrql != 2 )
    v6 = 1;
  MiIoSpaceGetBounds(v17, v3);
  if ( HIDWORD(v18) == 3 )
  {
    MiLockIoPfnTree(v9);
    v12 = (_QWORD *)qword_140E37300;
    while ( v12 )
    {
      v16 = v12[3];
      if ( v3 < v16 )
      {
        v12 = (_QWORD *)*v12;
      }
      else
      {
        if ( v3 < v16 + 512 )
          break;
        v12 = (_QWORD *)v12[1];
      }
    }
    if ( v12 )
    {
      v13 = (2
           * (((unsigned __int8)v3 & (unsigned __int8)((1LL << ((unsigned __int8)dword_140E2DC78 - 12)) - 1))
            - *((_BYTE *)v12 + 24))) & 0x1F;
      v14 = *((_DWORD *)v12
            + ((unsigned __int64)(2
                                * (((unsigned int)v3 & ((unsigned int)(1LL << ((unsigned __int8)dword_140E2DC78 - 12))
                                                      - 1))
                                 - *((_DWORD *)v12 + 6))) >> 5)
            + 11) >> v13;
      LOBYTE(v13) = v5;
      MiUnlockIoPfnTree(v13, v6, v10, v11);
      return v14 & 3;
    }
    else
    {
      if ( v2 )
        KeBugCheckEx(0x1Au, 0x61949uLL, v3, 1uLL, 0LL);
      return 3LL;
    }
  }
  else
  {
    if ( v5 != v8 )
    {
      if ( KiIrqlFlags )
      {
        LOBYTE(v7) = v5;
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v7);
      }
      __writecr8(v5);
    }
    return (unsigned int)v18;
  }
}
