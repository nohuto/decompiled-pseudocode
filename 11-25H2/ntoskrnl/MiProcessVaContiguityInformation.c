/*
 * XREFs of MiProcessVaContiguityInformation @ 0x14068184C
 * Callers:
 *     NtSetInformationVirtualMemory @ 0x1409FCFF0 (NtSetInformationVirtualMemory.c)
 * Callees:
 *     MiReleaseNonPagedResources @ 0x14021133C (MiReleaseNonPagedResources.c)
 *     MiConvertLargeActivePageToChain @ 0x1402220D4 (MiConvertLargeActivePageToChain.c)
 *     MiGetLargePage @ 0x140222688 (MiGetLargePage.c)
 *     MiAcquireNonPagedResources @ 0x14022E560 (MiAcquireNonPagedResources.c)
 *     MiObtainReferencedVadEx @ 0x1402A7A60 (MiObtainReferencedVadEx.c)
 *     MiVadPagesTradable @ 0x1402CA000 (MiVadPagesTradable.c)
 *     MiUnlockAndDereferenceVadShared @ 0x140320840 (MiUnlockAndDereferenceVadShared.c)
 *     MiInitializeDemandCoalesceContext @ 0x140378AD0 (MiInitializeDemandCoalesceContext.c)
 *     MiThreadIdealNode @ 0x140405E30 (MiThreadIdealNode.c)
 *     MiGetVadCacheAttribute @ 0x1404A60A4 (MiGetVadCacheAttribute.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiQueryVaPhysicalContiguity @ 0x1406755A0 (MiQueryVaPhysicalContiguity.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x14068156C (MiMakeVaRangePhysicallyContiguous.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     MiVadSupportsPhysicalContiguityQuery @ 0x1407E81E0 (MiVadSupportsPhysicalContiguityQuery.c)
 */

__int64 __fastcall MiProcessVaContiguityInformation(unsigned __int64 *a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // r13
  __int64 v6; // rsi
  int v7; // ebx
  struct _LIST_ENTRY **p_Blink; // r12
  __int64 v9; // rdx
  unsigned __int64 v10; // r15
  unsigned __int64 *v11; // rdi
  unsigned __int64 v12; // r8
  __int64 v13; // rax
  int VadCacheAttribute; // eax
  unsigned int v15; // edi
  unsigned __int64 v16; // r15
  unsigned __int64 v17; // rax
  int v18; // edx
  unsigned __int8 CurrentIrql; // r13
  __int64 LargePage; // rax
  __int64 v21; // r12
  __int64 v22; // r9
  unsigned int v23; // ebx
  unsigned int VaRangePhysicallyContiguous; // [rsp+40h] [rbp-69h] BYREF
  int v26; // [rsp+44h] [rbp-65h]
  unsigned int v27; // [rsp+48h] [rbp-61h]
  ULONG *v28; // [rsp+50h] [rbp-59h]
  __int64 v29; // [rsp+58h] [rbp-51h]
  struct _LIST_ENTRY **v30; // [rsp+60h] [rbp-49h]
  unsigned __int64 i; // [rsp+68h] [rbp-41h]
  unsigned __int64 *v32; // [rsp+70h] [rbp-39h]
  __int64 v33; // [rsp+78h] [rbp-31h]
  _OWORD v34[3]; // [rsp+80h] [rbp-29h] BYREF
  __int64 v35; // [rsp+B0h] [rbp+7h]
  int v36; // [rsp+B8h] [rbp+Fh]

  VaRangePhysicallyContiguous = 0;
  v35 = 0LL;
  v36 = 0;
  memset(v34, 0, sizeof(v34));
  v4 = a3;
  v6 = 0LL;
  v7 = 0;
  v26 = 0;
  v27 = a3;
  v33 = a3;
  p_Blink = &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
  v30 = p_Blink;
  v9 = MiPageSizes[a3];
  v28 = (ULONG *)*((_QWORD *)qword_140E2FD48 + *((unsigned __int16 *)p_Blink + 87));
  v10 = v9 << 12;
  v29 = v9 << 12;
  MiInitializeDemandCoalesceContext(v34, v9, 1uLL, 1);
  if ( (int)MiAcquireNonPagedResources(v28, MiPageSizes[v4], 1024LL, 6LL) < 0 )
    return (unsigned int)-1073741670;
  v11 = &a1[2 * a2];
  v32 = v11;
LABEL_3:
  if ( a1 >= v11 )
  {
    v23 = 0;
  }
  else
  {
    if ( !(a1[1] % v10) )
    {
      v12 = *a1;
      if ( (*a1 & ~(v10 - 1)) == *a1 )
      {
        if ( v6 )
        {
          if ( v12 >= (*(unsigned int *)(v6 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v6 + 32) << 32)) << 12
            && v12 <= (((*(unsigned int *)(v6 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v6 + 33) << 32)) << 12) | 0xFFF) )
          {
LABEL_15:
            if ( v7 )
              v15 = v7 - 1;
            else
              v15 = MiThreadIdealNode((__int64)p_Blink, 0LL);
            v16 = *a1;
            v17 = *a1 + a1[1];
            for ( i = v17; ; v17 = i )
            {
              if ( v16 >= v17 )
              {
                v11 = v32;
                a1 += 2;
                v10 = v29;
                goto LABEL_3;
              }
              if ( !(unsigned int)MiQueryVaPhysicalContiguity((__int64)p_Blink, v16, v4, 1) )
              {
                CurrentIrql = KeGetCurrentIrql();
                __writecr8(2uLL);
                if ( KiIrqlFlags )
                {
                  LOBYTE(v18) = 2;
                  KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v18);
                }
                LargePage = MiGetLargePage((__int64)v28, v16, v27, v15, v26, 0x14u, (__int64)v34, 0LL);
                v21 = LargePage;
                if ( LargePage )
                  MiConvertLargeActivePageToChain(LargePage);
                if ( KiIrqlFlags )
                  KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
                __writecr8(CurrentIrql);
                if ( !v21 )
                {
                  v23 = -1073741801;
                  goto LABEL_37;
                }
                LODWORD(v4) = v27;
                v22 = v21;
                p_Blink = v30;
                VaRangePhysicallyContiguous = MiMakeVaRangePhysicallyContiguous((__int64)v30, v16, v27, v22);
              }
              v16 += v29;
            }
          }
          MiUnlockAndDereferenceVadShared((PVOID)v6);
        }
        v13 = MiObtainReferencedVadEx(*a1, 2, (int *)&VaRangePhysicallyContiguous);
        v6 = v13;
        if ( v13 )
        {
          if ( *a1 + a1[1] - 1 > (((*(unsigned int *)(v13 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v13 + 33) << 32)) << 12) | 0xFFF) )
          {
            v23 = -1073741800;
          }
          else
          {
            if ( (unsigned int)MiVadSupportsPhysicalContiguityQuery(v13) && MiVadPagesTradable(v6) )
            {
              VadCacheAttribute = MiGetVadCacheAttribute(v6);
              v7 = (*(_DWORD *)(v6 + 48) >> 12) & 0x7F;
              v26 = VadCacheAttribute;
              goto LABEL_15;
            }
            v23 = -1073741637;
          }
          goto LABEL_38;
        }
        v23 = VaRangePhysicallyContiguous;
        goto LABEL_39;
      }
    }
    v23 = -1073741811;
  }
LABEL_37:
  if ( v6 )
LABEL_38:
    MiUnlockAndDereferenceVadShared((PVOID)v6);
LABEL_39:
  MiReleaseNonPagedResources((__int64)v28, MiPageSizes[v33]);
  return v23;
}
