/*
 * XREFs of DifObjTrkQeuryInvokeDeleteRange @ 0x140616450
 * Callers:
 *     VfDriverUnloadImage @ 0x140B8C5C0 (VfDriverUnloadImage.c)
 *     VfPtFreePoolNotification @ 0x140BAB6EC (VfPtFreePoolNotification.c)
 * Callees:
 *     RtlDeleteElementGenericTableAvlEx @ 0x1403E4650 (RtlDeleteElementGenericTableAvlEx.c)
 *     RtlLookupElementGenericTableFullAvl @ 0x1403E5040 (RtlLookupElementGenericTableFullAvl.c)
 *     DifAvlRealSuccessor @ 0x14044E0CC (DifAvlRealSuccessor.c)
 *     RtlGetElementGenericTableAvl @ 0x1404860C0 (RtlGetElementGenericTableAvl.c)
 *     DifObjTrkGetPluginContext @ 0x140616290 (DifObjTrkGetPluginContext.c)
 *     DifObjTrkIsExceptionPluginId @ 0x14061641C (DifObjTrkIsExceptionPluginId.c)
 *     DifAcquireSpinLockAtDpcLevelSafe @ 0x1406183A4 (DifAcquireSpinLockAtDpcLevelSafe.c)
 *     DifReleaseSpinLockFromDpcLevelSafe @ 0x14061845C (DifReleaseSpinLockFromDpcLevelSafe.c)
 *     DifAvlRealPredecessor @ 0x1406184CC (DifAvlRealPredecessor.c)
 *     MmGetVaTypeForVerifier @ 0x140676814 (MmGetVaTypeForVerifier.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

void __fastcall DifObjTrkQeuryInvokeDeleteRange(unsigned __int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  PEX_SPIN_LOCK v4; // rsi
  int VaTypeForVerifier; // eax
  _RTL_AVL_TABLE *v10; // rsi
  int *v11; // rbx
  PEX_SPIN_LOCK v12; // r14
  int *v13; // rdi
  int *i; // rcx
  int v15; // r11d
  int *v16; // rax
  unsigned int v17; // r11d
  int *v18; // rbx
  __int64 j; // rcx
  unsigned int v20; // r11d
  __int64 v21; // rax
  __int64 v22; // rbx
  __int64 v23; // r15
  __int64 v24; // r12
  __int64 v25; // r14
  unsigned int *PluginContext; // rax
  unsigned int NumberGenericTableElements; // eax
  PVOID ElementGenericTableAvl; // rax
  unsigned __int64 v29; // rdi
  _RTL_BALANCED_LINKS *Parent; // rbx
  unsigned __int64 v31; // r13
  _WORD v32[2]; // [rsp+20h] [rbp-30h] BYREF
  TABLE_SEARCH_RESULT SearchResult; // [rsp+24h] [rbp-2Ch] BYREF
  PVOID NodeOrParent; // [rsp+28h] [rbp-28h] BYREF
  __int64 Buffer; // [rsp+30h] [rbp-20h] BYREF
  unsigned __int64 v36; // [rsp+38h] [rbp-18h]
  unsigned __int64 v37; // [rsp+40h] [rbp-10h]

  v4 = DifObjTrkContext;
  Buffer = 0LL;
  v32[0] = 0;
  if ( DifObjTrkContext )
  {
    if ( DifObjTrkInitialized )
    {
      if ( a1 )
      {
        if ( a2 )
        {
          if ( a1 >= 0xFFFF800000000000uLL )
          {
            VaTypeForVerifier = MmGetVaTypeForVerifier(a1);
            if ( VaTypeForVerifier != 5 )
            {
              v10 = (_RTL_AVL_TABLE *)&v4[30 * VaTypeForVerifier + 16];
              if ( v10->NumberGenericTableElements )
              {
                v36 = a1;
                v37 = a1 + a2;
                if ( (_RTL_BALANCED_LINKS *)(a1 + a2) > v10[1].BalancedRoot.Parent
                  && (_RTL_BALANCED_LINKS *)a1 <= v10[1].BalancedRoot.LeftChild )
                {
                  DifAcquireSpinLockAtDpcLevelSafe(v32);
                  NodeOrParent = 0LL;
                  SearchResult = TableEmptyTree;
                  v11 = (int *)RtlLookupElementGenericTableFullAvl(v10, &Buffer, &NodeOrParent, &SearchResult);
                  if ( v11 )
                  {
                    v12 = DifObjTrkContext;
                    memset_0((void *)(DifObjTrkContext + 166), 0, 0xA0uLL);
                    v13 = v11 - 8;
                    if ( !DifObjTrkIsExceptionPluginId(*v11, a3, a4) )
                      *((_QWORD *)v12 + 83) = v13;
                    for ( i = v11 - 8; ; i = v18 )
                    {
                      v16 = (int *)DifAvlRealSuccessor(i);
                      v18 = v16;
                      if ( !v16 || v17 > 0x14 || v36 > *((_QWORD *)v16 + 5) || v37 < *((_QWORD *)v16 + 6) )
                        break;
                      if ( !DifObjTrkIsExceptionPluginId(v16[8], a3, a4) )
                      {
                        if ( v15 == 20 )
                          break;
                        *(_QWORD *)&DifObjTrkContext[2 * v15 + 166] = v18;
                      }
                    }
                    for ( j = (__int64)v13; ; j = v22 )
                    {
                      v21 = DifAvlRealPredecessor(j);
                      v22 = v21;
                      if ( !v21 || v20 > 0x14 || v36 > *(_QWORD *)(v21 + 40) || v37 < *(_QWORD *)(v21 + 48) )
                        break;
                      if ( !DifObjTrkIsExceptionPluginId(*(_DWORD *)(v21 + 32), a3, a4) )
                      {
                        if ( v20 == 20 )
                          break;
                        *(_QWORD *)&DifObjTrkContext[2 * v20 + 166] = v22;
                      }
                    }
                    if ( v20 )
                    {
                      v23 = 166LL;
                      v24 = v20;
                      do
                      {
                        v25 = *(_QWORD *)&DifObjTrkContext[v23];
                        if ( v25 )
                        {
                          PluginContext = (unsigned int *)DifObjTrkGetPluginContext(*(_DWORD *)(v25 + 32));
                          if ( PluginContext )
                          {
                            if ( *((_QWORD *)PluginContext + 1) )
                              guard_dispatch_icall_no_overrides(*(_QWORD *)(v25 + 40), *PluginContext);
                          }
                        }
                        NumberGenericTableElements = v10->NumberGenericTableElements;
                        if ( NumberGenericTableElements == 1 )
                        {
                          RtlDeleteElementGenericTableAvlEx(v10, (_RTL_BALANCED_LINKS *)v25);
                          --*((_DWORD *)DifObjTrkContext + 206);
                          v10[1].BalancedRoot.LeftChild = 0LL;
                          v10[1].BalancedRoot.Parent = 0LL;
                        }
                        else if ( NumberGenericTableElements == 2 )
                        {
                          RtlDeleteElementGenericTableAvlEx(v10, (_RTL_BALANCED_LINKS *)v25);
                          --*((_DWORD *)DifObjTrkContext + 206);
                          ElementGenericTableAvl = RtlGetElementGenericTableAvl(v10, 0);
                          v10[1].BalancedRoot.LeftChild = (_RTL_BALANCED_LINKS *)*((_QWORD *)ElementGenericTableAvl + 2);
                          v10[1].BalancedRoot.Parent = (_RTL_BALANCED_LINKS *)*((_QWORD *)ElementGenericTableAvl + 1);
                        }
                        else
                        {
                          v29 = *(_QWORD *)(v25 + 40);
                          Parent = v10[1].BalancedRoot.Parent;
                          v31 = *(_QWORD *)(v25 + 48);
                          NodeOrParent = v10[1].BalancedRoot.LeftChild;
                          RtlDeleteElementGenericTableAvlEx(v10, (_RTL_BALANCED_LINKS *)v25);
                          --*((_DWORD *)DifObjTrkContext + 206);
                          if ( v29 <= (unsigned __int64)Parent )
                            v10[1].BalancedRoot.Parent = (_RTL_BALANCED_LINKS *)*((_QWORD *)RtlGetElementGenericTableAvl(
                                                                                              v10,
                                                                                              0)
                                                                                + 1);
                          if ( v31 >= (unsigned __int64)NodeOrParent )
                            v10[1].BalancedRoot.LeftChild = (_RTL_BALANCED_LINKS *)*((_QWORD *)RtlGetElementGenericTableAvl(
                                                                                                 v10,
                                                                                                 v10->NumberGenericTableElements
                                                                                               - 1)
                                                                                   + 1);
                        }
                        v23 += 2LL;
                        --v24;
                      }
                      while ( v24 );
                    }
                  }
                  DifReleaseSpinLockFromDpcLevelSafe(v32);
                }
              }
            }
          }
        }
      }
    }
  }
}
