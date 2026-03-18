/*
 * XREFs of ParseUnload @ 0x14006F0D0
 * Callers:
 *     <none>
 * Callees:
 *     HeapFree @ 0x140004AB0 (HeapFree.c)
 *     FreeOwnedObjects @ 0x140005570 (FreeOwnedObjects.c)
 *     FreeObjOwner @ 0x140005670 (FreeObjOwner.c)
 *     Simulator_RefreshTree @ 0x14006B4BC (Simulator_RefreshTree.c)
 *     AMLIApplyNamespaceOverride @ 0x14006C4CC (AMLIApplyNamespaceOverride.c)
 *     NotifyObjectDestruction @ 0x14006CC48 (NotifyObjectDestruction.c)
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ParseUnload(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbp
  _DWORD *v4; // rsi
  int v7; // edx
  _DWORD *v9; // r15
  _DWORD *v10; // rcx
  _DWORD *v11; // r12
  KIRQL v12; // al
  _QWORD *v13; // rcx

  v3 = *(_QWORD *)(a2 + 32);
  v4 = (_DWORD *)(a2 + 16);
  v7 = *(_DWORD *)(a2 + 16);
  v9 = v4;
  v10 = v4;
  v11 = v4;
  switch ( v7 & 0xF )
  {
    case 0:
      *v4 = v7 + 1;
      if ( (unsigned int)((__int64 (__fastcall *)(__int64, __int64, __int64))ghUnloadTable)(19LL, 1LL, a1) == 259 )
        return 32772;
      v9 = (_DWORD *)(a2 + 16);
      goto LABEL_11;
    case 1:
LABEL_11:
      ++*v4;
      NotifyObjectDestruction(v3);
      v10 = v9;
LABEL_12:
      ++*v4;
      v11 = v10;
      AMLIApplyNamespaceOverride();
      if ( (unsigned int)((__int64 (__fastcall *)(__int64, __int64, __int64))ghUnloadTable)(19LL, 2LL, a1) != 259 )
      {
LABEL_13:
        v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 40));
        if ( *(_DWORD *)(v3 + 48) )
        {
          *(_QWORD *)(v3 + 56) = a1;
          a3 = 32772;
        }
        else
        {
          *v11 = *v4 + 1;
          a3 = 0;
        }
        KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 40), v12);
        v4 = v11;
        if ( a3 == 32772 )
          return a3;
        goto LABEL_17;
      }
      return 32772;
    case 2:
      goto LABEL_12;
    case 3:
      goto LABEL_13;
    case 4:
LABEL_17:
      ++*v4;
      FreeOwnedObjects((_QWORD *)v3);
      a3 = FreeObjOwner(a1, (struct _EX_RUNDOWN_REF *)v3);
      if ( a3 == 32772 )
        return a3;
      goto LABEL_18;
  }
  if ( (v7 & 0xF) != 5 )
    return a3;
LABEL_18:
  if ( g_SimulatorCallbackObject )
    Simulator_RefreshTree();
  v13 = *(_QWORD **)(a1 + 416);
  *(_QWORD *)(a1 + 416) = v13[1];
  HeapFree(v13);
  return a3;
}
