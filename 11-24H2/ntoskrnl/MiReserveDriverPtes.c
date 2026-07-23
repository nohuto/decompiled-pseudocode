/*
 * XREFs of MiReserveDriverPtes @ 0x140A555D0
 * Callers:
 *     MmMapLockedRestartPages @ 0x1407E8790 (MmMapLockedRestartPages.c)
 *     MiSelectSystemImageAddress @ 0x140A55590 (MiSelectSystemImageAddress.c)
 * Callees:
 *     MiReturnSystemVa @ 0x14020AB44 (MiReturnSystemVa.c)
 *     MiObtainSystemVa @ 0x14026CAF4 (MiObtainSystemVa.c)
 *     MiMakeZeroedPageTables @ 0x14026CB1C (MiMakeZeroedPageTables.c)
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     RtlSetBits @ 0x14027C2D0 (RtlSetBits.c)
 *     RtlSetAllBits @ 0x140347620 (RtlSetAllBits.c)
 *     ExGenRandom @ 0x14040A540 (ExGenRandom.c)
 *     MiGetPteAddress @ 0x140429FD0 (MiGetPteAddress.c)
 *     MiUnlockDriverMappings @ 0x1404A51C8 (MiUnlockDriverMappings.c)
 *     MiLockDriverMappings @ 0x1404A9FD0 (MiLockDriverMappings.c)
 *     MiReserveExistingDriverPtes @ 0x140A6AEB8 (MiReserveExistingDriverPtes.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiReserveDriverPtes(int a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  ULONG v5; // edi
  __int64 v6; // r14
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // r13d
  char *Pool; // rsi
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // r12
  unsigned __int64 PteAddress; // rbx
  _RTL_BITMAP *v16; // rcx
  int v17; // eax
  int v18; // eax
  unsigned __int64 v19; // r14
  unsigned __int64 v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rdx
  ULONG v23; // r8d
  unsigned __int64 v24; // [rsp+70h] [rbp+18h]
  unsigned __int64 v25; // [rsp+78h] [rbp+20h]

  if ( (a2 & 0xFFFFFFFFFFDFFFFFuLL) != 0 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  v5 = (unsigned int)(a1 + 15) >> 4;
  v6 = 0LL;
  MiLockDriverMappings((__int64)CurrentThread);
  if ( !a2 )
  {
    v8 = MiReserveExistingDriverPtes(v5);
    if ( v8 )
      goto LABEL_16;
    v6 = (unsigned __int8)ExGenRandom(1, v7, v9, v10);
  }
  v25 = (16 * (v5 + (_DWORD)v6) + 511) & 0xFFFFFE00;
  v11 = ((16 * (v5 + (_DWORD)v6) + 511) & 0xFFFFFE00) >> 9;
  v24 = ((v25 >> 7) + 63) & 0xFFFFFFFFFFFFFFF8uLL;
  Pool = (char *)MiAllocatePool(
                   (MiFlags & 0x30) != 0 ? 256LL : 64LL,
                   v24 + ((v11 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL),
                   1883532621);
  if ( Pool )
  {
    v13 = MiObtainSystemVa(v11, 0xBu);
    v14 = v13;
    if ( v13 )
    {
      PteAddress = MiGetPteAddress(v13);
      v16 = (_RTL_BITMAP *)(Pool + 16);
      *((_QWORD *)Pool + 3) = Pool + 56;
      *((_DWORD *)Pool + 4) = ((16 * (v5 + (_DWORD)v6) + 511) & 0xFFFFFE00) >> 4;
      *((_DWORD *)Pool + 10) = (v11 + 7) & 0xFFFFFFF8;
      *((_QWORD *)Pool + 6) = &Pool[v24];
      if ( a2 )
      {
        v6 = 0LL;
        RtlSetAllBits(v16);
        v17 = 1;
      }
      else
      {
        RtlSetBits(v16, v6, v5);
        v17 = 0;
      }
      *((_DWORD *)Pool + 9) = v17;
      v18 = v5 + v6;
      *((_QWORD *)Pool + 1) = PteAddress;
      v19 = PteAddress + (v6 << 7);
      *((_DWORD *)Pool + 8) = v18;
      v20 = v19 + 128LL * v5;
      if ( (unsigned int)MiMakeZeroedPageTables(v19, (int)v20 - 8, 1, 11) )
      {
        MiGetPteAddress(v19);
        MiGetPteAddress(v20 - 8);
        v21 = MiGetPteAddress(PteAddress);
        RtlSetBits((PRTL_BITMAP)(Pool + 40), (v22 - v21) >> 3, v23);
        v8 = v19;
        *(_QWORD *)Pool = qword_140E2D9A0;
        qword_140E2D9A0 = Pool;
        goto LABEL_16;
      }
      MiReturnSystemVa(v14, (__int64)((PteAddress << 25) + (v25 << 28)) >> 16);
    }
    MiUnlockDriverMappings((__int64)CurrentThread);
    ExFreePoolWithTag(Pool, 0);
    return 0LL;
  }
  v8 = 0LL;
LABEL_16:
  MiUnlockDriverMappings((__int64)CurrentThread);
  return v8;
}
