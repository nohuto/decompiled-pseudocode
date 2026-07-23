/*
 * XREFs of MiPrefetchPreallocatePages @ 0x1404CEA68
 * Callers:
 *     MiPrefetchVirtualMemory @ 0x140351B80 (MiPrefetchVirtualMemory.c)
 * Callees:
 *     MI_NODE_FROM_PFN @ 0x140251340 (MI_NODE_FROM_PFN.c)
 *     MiGetLargePage @ 0x1402517B0 (MiGetLargePage.c)
 *     MiProtectionToCacheAttribute @ 0x140253A30 (MiProtectionToCacheAttribute.c)
 *     MiThreadIdealNode @ 0x14026AF90 (MiThreadIdealNode.c)
 *     MiConvertLargeActivePageToChain @ 0x1403122A0 (MiConvertLargeActivePageToChain.c)
 *     MiAcquireNonPagedResources @ 0x14033A560 (MiAcquireNonPagedResources.c)
 *     MiObtainReferencedVadEx @ 0x140344D30 (MiObtainReferencedVadEx.c)
 *     MiUnlockAndDereferenceVadShared @ 0x140362A70 (MiUnlockAndDereferenceVadShared.c)
 *     MiPrefetchReleasePreallocatedPages @ 0x1404AE77C (MiPrefetchReleasePreallocatedPages.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
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
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // r10d
  __int64 v20; // r11
  unsigned __int64 v21; // rcx
  __int64 v22; // rcx
  BOOL v23; // eax
  int v24; // ebx
  unsigned int v25; // ebx
  unsigned __int8 CurrentIrql; // r14
  __int64 LargePage; // rax
  __int64 v28; // rdx
  __int64 v29; // rbx
  int v30; // [rsp+78h] [rbp+20h] BYREF

  if ( a4 != 1 )
  {
    v30 = 0;
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
        v15 = MiObtainReferencedVadEx(v9, 6LL, &v30, a4);
        v17 = v15;
        if ( !v15 )
          goto LABEL_37;
        v18 = *(unsigned int *)(v15 + 48);
        LOBYTE(v16) = (v18 & 0x70) == 0;
        if ( ((unsigned __int8)v16 & ((v18 & 0x200000) != 0)) != 0
          && (((*(unsigned int *)(v15 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v15 + 33) << 32)) << 12) | 0xFFF)
           - v9
           + 1 >= 0x200000
          && (((unsigned int)v18 >> 12) & 0x7F) != 0
          && (unsigned int)MiProtectionToCacheAttribute(((unsigned int)v18 >> 7) & 0x1F) == 1 )
        {
          v14 = (int *)(a1 + 40);
          v21 = *(unsigned int *)(v17 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v17 + 32) << 32);
          *(_QWORD *)(a1 + 32) = v20;
          *(_QWORD *)(a1 + 24) = v21 << 12;
          *(_DWORD *)(a1 + 40) = v19;
          MiUnlockAndDereferenceVadShared(v17, v16, v17, v18);
LABEL_17:
          if ( a2[13] )
          {
            v22 = a2[11];
            if ( v22 == *(_QWORD *)(a1 + 8) )
            {
              if ( (unsigned int)MI_NODE_FROM_PFN(v22) == *v14 - 1 )
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
            || (v23 = (int)MiAcquireNonPagedResources(a3, 0x200uLL, 1024LL, 6LL) >= 0, (*(_DWORD *)(a1 + 16) = v23) != 0) )
          {
            v24 = *v14;
            if ( v24 )
              v25 = v24 - 1;
            else
              v25 = MiThreadIdealNode(a4, 0LL);
            CurrentIrql = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( KiIrqlFlags )
            {
              LOBYTE(v13) = CurrentIrql;
              KiRaiseIrqlProcessIrqlFlags(v13, 2LL);
            }
            LargePage = MiGetLargePage((__int64)a3, v9, 1u, v25, 1, 0x12u, a7, 0LL);
            v29 = LargePage;
            if ( LargePage )
            {
              MiConvertLargeActivePageToChain(LargePage);
              a2[11] = v29;
              a2[12] = v29 + 24528;
              a2[13] = 512LL;
            }
            if ( KiIrqlFlags )
            {
              LOBYTE(v28) = CurrentIrql;
              KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v28);
            }
            __writecr8(CurrentIrql);
            *(_QWORD *)a1 = v9;
            *(_QWORD *)(a1 + 8) = v29;
          }
          goto LABEL_37;
        }
        MiUnlockAndDereferenceVadShared(v17, v16, v17, v18);
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
