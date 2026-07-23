/*
 * XREFs of MiReserveDriverPtes @ 0x140A5B530
 * Callers:
 *     MmMapLockedRestartPages @ 0x1407D8300 (MmMapLockedRestartPages.c)
 *     MiSelectSystemImageAddress @ 0x140A5B4F0 (MiSelectSystemImageAddress.c)
 * Callees:
 *     MiReturnSystemVa @ 0x1402C0B88 (MiReturnSystemVa.c)
 *     MiAllocatePool @ 0x1402DA740 (MiAllocatePool.c)
 *     RtlSetBits @ 0x140339430 (RtlSetBits.c)
 *     RtlSetAllBits @ 0x1403397C0 (RtlSetAllBits.c)
 *     MiObtainSystemVa @ 0x14038EAA4 (MiObtainSystemVa.c)
 *     MiMakeZeroedPageTables @ 0x14038EACC (MiMakeZeroedPageTables.c)
 *     MiGetPteAddress @ 0x140419EE0 (MiGetPteAddress.c)
 *     ExGenRandom @ 0x14041CDD0 (ExGenRandom.c)
 *     MiUnlockDriverMappings @ 0x1404A9DD4 (MiUnlockDriverMappings.c)
 *     MiLockDriverMappings @ 0x1404AE734 (MiLockDriverMappings.c)
 *     MiReserveExistingDriverPtes @ 0x140A6FB18 (MiReserveExistingDriverPtes.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiReserveDriverPtes(int a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  ULONG v5; // edi
  __int64 v6; // r14
  __int64 v7; // rbx
  unsigned int v8; // r13d
  char *Pool; // rsi
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // r12
  unsigned __int64 PteAddress; // rbx
  _RTL_BITMAP *v13; // rcx
  int v14; // eax
  int v15; // eax
  unsigned __int64 v16; // r14
  unsigned __int64 v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rdx
  ULONG v20; // r8d
  unsigned __int64 v21; // [rsp+70h] [rbp+18h]
  unsigned __int64 v22; // [rsp+78h] [rbp+20h]

  if ( (a2 & 0xFFFFFFFFFFDFFFFFuLL) != 0 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  v5 = (unsigned int)(a1 + 15) >> 4;
  v6 = 0LL;
  MiLockDriverMappings((__int64)CurrentThread);
  if ( !a2 )
  {
    v7 = MiReserveExistingDriverPtes(v5);
    if ( v7 )
      goto LABEL_16;
    v6 = (unsigned __int8)ExGenRandom(1);
  }
  v22 = (16 * (v5 + (_DWORD)v6) + 511) & 0xFFFFFE00;
  v8 = ((16 * (v5 + (_DWORD)v6) + 511) & 0xFFFFFE00) >> 9;
  v21 = ((v22 >> 7) + 63) & 0xFFFFFFFFFFFFFFF8uLL;
  Pool = (char *)MiAllocatePool(
                   (MiFlags & 0x30) != 0 ? 256LL : 64LL,
                   v21 + ((v8 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL),
                   1883532621);
  if ( Pool )
  {
    v10 = MiObtainSystemVa(v8, 0xBu);
    v11 = v10;
    if ( v10 )
    {
      PteAddress = MiGetPteAddress(v10);
      v13 = (_RTL_BITMAP *)(Pool + 16);
      *((_QWORD *)Pool + 3) = Pool + 56;
      *((_DWORD *)Pool + 4) = ((16 * (v5 + (_DWORD)v6) + 511) & 0xFFFFFE00) >> 4;
      *((_DWORD *)Pool + 10) = (v8 + 7) & 0xFFFFFFF8;
      *((_QWORD *)Pool + 6) = &Pool[v21];
      if ( a2 )
      {
        v6 = 0LL;
        RtlSetAllBits(v13);
        v14 = 1;
      }
      else
      {
        RtlSetBits(v13, v6, v5);
        v14 = 0;
      }
      *((_DWORD *)Pool + 9) = v14;
      v15 = v5 + v6;
      *((_QWORD *)Pool + 1) = PteAddress;
      v16 = PteAddress + (v6 << 7);
      *((_DWORD *)Pool + 8) = v15;
      v17 = v16 + 128LL * v5;
      if ( (unsigned int)MiMakeZeroedPageTables(v16, (int)v17 - 8, 1, 11) )
      {
        MiGetPteAddress(v16);
        MiGetPteAddress(v17 - 8);
        v18 = MiGetPteAddress(PteAddress);
        RtlSetBits((PRTL_BITMAP)(Pool + 40), (v19 - v18) >> 3, v20);
        v7 = v16;
        *(_QWORD *)Pool = qword_140E2D620;
        qword_140E2D620 = Pool;
        goto LABEL_16;
      }
      MiReturnSystemVa(v11, (__int64)((PteAddress << 25) + (v22 << 28)) >> 16);
    }
    MiUnlockDriverMappings((__int64)CurrentThread);
    ExFreePoolWithTag(Pool, 0);
    return 0LL;
  }
  v7 = 0LL;
LABEL_16:
  MiUnlockDriverMappings((__int64)CurrentThread);
  return v7;
}
