/*
 * XREFs of DifObjTrkRemoveItem @ 0x140616780
 * Callers:
 *     <none>
 * Callees:
 *     RtlDeleteElementGenericTableAvl @ 0x1403E4330 (RtlDeleteElementGenericTableAvl.c)
 *     RtlGetElementGenericTableAvl @ 0x1404860C0 (RtlGetElementGenericTableAvl.c)
 *     DifIsValidTrackingObject @ 0x14061617C (DifIsValidTrackingObject.c)
 *     DifObjTrkGetPluginContext @ 0x140616290 (DifObjTrkGetPluginContext.c)
 *     DifAcquireSpinLockAtDpcLevelSafe @ 0x1406183A4 (DifAcquireSpinLockAtDpcLevelSafe.c)
 *     DifReleaseSpinLockFromDpcLevelSafe @ 0x14061845C (DifReleaseSpinLockFromDpcLevelSafe.c)
 *     MmGetVaTypeForVerifier @ 0x140676814 (MmGetVaTypeForVerifier.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

BOOLEAN __fastcall DifObjTrkRemoveItem(unsigned int a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 v3; // r14
  unsigned int *PluginContext; // r15
  __int64 v7; // rdx
  int VaTypeForVerifier; // eax
  _RTL_AVL_TABLE *v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rax
  BOOLEAN v12; // di
  unsigned int NumberGenericTableElements; // ecx
  PVOID ElementGenericTableAvl; // rax
  _RTL_BALANCED_LINKS *v15; // rax
  __int16 v17; // [rsp+20h] [rbp-30h] BYREF
  _DWORD Buffer[2]; // [rsp+28h] [rbp-28h] BYREF
  _RTL_BALANCED_LINKS *v19; // [rsp+30h] [rbp-20h]
  __int64 v20; // [rsp+38h] [rbp-18h]

  v3 = a3;
  Buffer[1] = 0;
  v17 = 0;
  if ( KeGetCurrentIrql() > 2u )
    return 0;
  if ( (int)DifIsValidTrackingObject(a1, a2) < 0 )
    return 0;
  PluginContext = (unsigned int *)DifObjTrkGetPluginContext(a1);
  VaTypeForVerifier = MmGetVaTypeForVerifier(v7);
  if ( VaTypeForVerifier == 5 )
    return 0;
  v9 = (_RTL_AVL_TABLE *)&DifObjTrkContext[30 * VaTypeForVerifier + 16];
  if ( !v9->NumberGenericTableElements
    || (_RTL_BALANCED_LINKS *)a2 < v9[1].BalancedRoot.Parent
    || (_RTL_BALANCED_LINKS *)a2 > v9[1].BalancedRoot.LeftChild )
  {
    return 0;
  }
  Buffer[0] = a1;
  v19 = (_RTL_BALANCED_LINKS *)a2;
  v10 = *PluginContext;
  if ( (_DWORD)v10 )
    v11 = a2 + v10;
  else
    v11 = a2 + v3;
  v20 = v11;
  DifAcquireSpinLockAtDpcLevelSafe(&v17);
  v12 = RtlDeleteElementGenericTableAvl(v9, Buffer);
  if ( v12 )
  {
    --*((_DWORD *)DifObjTrkContext + 206);
    NumberGenericTableElements = v9->NumberGenericTableElements;
    if ( NumberGenericTableElements )
    {
      if ( NumberGenericTableElements == 1 )
      {
        ElementGenericTableAvl = RtlGetElementGenericTableAvl(v9, 0);
        v9[1].BalancedRoot.Parent = (_RTL_BALANCED_LINKS *)*((_QWORD *)ElementGenericTableAvl + 1);
        v9[1].BalancedRoot.LeftChild = (_RTL_BALANCED_LINKS *)*((_QWORD *)ElementGenericTableAvl + 1);
      }
      else
      {
        v15 = v19;
        if ( v19 <= v9[1].BalancedRoot.Parent )
        {
          v9[1].BalancedRoot.Parent = (_RTL_BALANCED_LINKS *)*((_QWORD *)RtlGetElementGenericTableAvl(v9, 0) + 1);
          v15 = v19;
        }
        if ( v15 >= v9[1].BalancedRoot.LeftChild )
          v9[1].BalancedRoot.LeftChild = (_RTL_BALANCED_LINKS *)*((_QWORD *)RtlGetElementGenericTableAvl(
                                                                              v9,
                                                                              v9->NumberGenericTableElements - 1)
                                                                + 1);
      }
    }
    else
    {
      v9[1].BalancedRoot.LeftChild = 0LL;
      v9[1].BalancedRoot.Parent = 0LL;
    }
  }
  DifReleaseSpinLockFromDpcLevelSafe(&v17);
  return v12;
}
