/*
 * XREFs of MiPrefetchPreallocatePages @ 0x1404D5F34
 * Callers:
 *     MiPrefetchVirtualMemory @ 0x1403799D0 (MiPrefetchVirtualMemory.c)
 * Callees:
 *     MI_NODE_FROM_PFN @ 0x14021CB00 (MI_NODE_FROM_PFN.c)
 *     MiConvertLargeActivePageToChain @ 0x1402220D4 (MiConvertLargeActivePageToChain.c)
 *     MiGetLargePage @ 0x140222688 (MiGetLargePage.c)
 *     MiAcquireNonPagedResources @ 0x14022E560 (MiAcquireNonPagedResources.c)
 *     MiProtectionToCacheAttribute @ 0x14023B5F0 (MiProtectionToCacheAttribute.c)
 *     MiObtainReferencedVadEx @ 0x1402A7A60 (MiObtainReferencedVadEx.c)
 *     MiUnlockAndDereferenceVadShared @ 0x140320840 (MiUnlockAndDereferenceVadShared.c)
 *     MiThreadIdealNode @ 0x140405E30 (MiThreadIdealNode.c)
 *     MiPrefetchReleasePreallocatedPages @ 0x14045B210 (MiPrefetchReleasePreallocatedPages.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

void __fastcall MiPrefetchPreallocatePages(
        __int64 a1,
        _QWORD *a2,
        ULONG *a3,
        __int64 a4,
        _QWORD *a5,
        unsigned __int64 a6,
        __int64 a7)
{
  unsigned __int64 v9; // rsi
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  int *v14; // rbx
  __int64 v15; // rax
  __int64 v16; // r8
  unsigned int v17; // r9d
  int v18; // r10d
  __int64 v19; // r11
  unsigned __int64 v20; // rcx
  __int64 v21; // rcx
  BOOL v22; // eax
  int v23; // ebx
  unsigned int v24; // ebx
  unsigned __int8 CurrentIrql; // r14
  __int64 LargePage; // rax
  __int64 v27; // rdx
  __int64 v28; // rbx
  int v29; // [rsp+78h] [rbp+20h] BYREF

  if ( a4 != 1 )
  {
    v29 = 0;
    v9 = a6;
    if ( (*(_DWORD *)(a4 + 184) & 0xF) == 0 )
    {
      v12 = a6 & 0xFFFFFFFFFFE00000uLL;
      if ( *(_QWORD *)a1 && v12 == *(_QWORD *)a1 )
        goto LABEL_37;
      if ( a6 - 1 <= 0x7FFFFFFEFFFELL && v12 == a6 && (v13 = *a5 + a5[1] - a6, v13 >= 0x200000) )
      {
        *(_QWORD *)a1 = 0LL;
        if ( v9 >= *(_QWORD *)(a1 + 24) && v9 <= *(_QWORD *)(a1 + 32) )
        {
          v14 = (int *)(a1 + 40);
          goto LABEL_17;
        }
        v15 = MiObtainReferencedVadEx(v9, 6, &v29);
        v16 = v15;
        if ( !v15 )
          goto LABEL_37;
        v17 = *(_DWORD *)(v15 + 48);
        if ( (v17 & 0x70) == 0
          && (v17 & 0x200000) != 0
          && (((*(unsigned int *)(v15 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v15 + 33) << 32)) << 12) | 0xFFF)
           - v9
           + 1 >= 0x200000
          && ((v17 >> 12) & 0x7F) != 0
          && (unsigned int)MiProtectionToCacheAttribute((v17 >> 7) & 0x1F) == 1 )
        {
          v14 = (int *)(a1 + 40);
          v20 = *(unsigned int *)(v16 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v16 + 32) << 32);
          *(_QWORD *)(a1 + 32) = v19;
          *(_QWORD *)(a1 + 24) = v20 << 12;
          *(_DWORD *)(a1 + 40) = v18;
          MiUnlockAndDereferenceVadShared((PVOID)v16);
LABEL_17:
          if ( a2[13] )
          {
            v21 = a2[11];
            if ( v21 == *(_QWORD *)(a1 + 8) )
            {
              if ( (unsigned int)MI_NODE_FROM_PFN(v21) == *v14 - 1 )
              {
                *(_QWORD *)a1 = v9;
                goto LABEL_37;
              }
              v14 = (int *)(a1 + 40);
            }
            MiPrefetchReleasePreallocatedPages(a1, (__int64)a2, (__int64)a3, 0);
          }
          *(_QWORD *)(a1 + 8) = 0LL;
          if ( *(_DWORD *)(a1 + 16)
            || (v22 = (int)MiAcquireNonPagedResources(a3, 0x200uLL, 1024LL, 6LL) >= 0, (*(_DWORD *)(a1 + 16) = v22) != 0) )
          {
            v23 = *v14;
            if ( v23 )
              v24 = v23 - 1;
            else
              v24 = MiThreadIdealNode(a4, 0LL);
            CurrentIrql = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( KiIrqlFlags )
            {
              LOBYTE(v13) = CurrentIrql;
              KiRaiseIrqlProcessIrqlFlags(v13);
            }
            LargePage = MiGetLargePage((__int64)a3, v9, 1u, v24, 1, 0x12u, a7, 0LL);
            v28 = LargePage;
            if ( LargePage )
            {
              MiConvertLargeActivePageToChain(LargePage);
              a2[11] = v28;
              a2[12] = v28 + 24528;
              a2[13] = 512LL;
            }
            if ( KiIrqlFlags )
            {
              LOBYTE(v27) = CurrentIrql;
              KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v27);
            }
            __writecr8(CurrentIrql);
            *(_QWORD *)a1 = v9;
            *(_QWORD *)(a1 + 8) = v28;
          }
          goto LABEL_37;
        }
        MiUnlockAndDereferenceVadShared((PVOID)v16);
      }
      else
      {
        *(_QWORD *)a1 = 0LL;
      }
LABEL_37:
      if ( !*(_QWORD *)a1 )
        MiPrefetchReleasePreallocatedPages(a1, (__int64)a2, (__int64)a3, 0);
    }
  }
}
