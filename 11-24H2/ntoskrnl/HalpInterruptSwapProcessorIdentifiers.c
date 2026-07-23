/*
 * XREFs of HalpInterruptSwapProcessorIdentifiers @ 0x140B52110
 * Callers:
 *     HalpDpReplaceControl @ 0x140B51CB0 (HalpDpReplaceControl.c)
 * Callees:
 *     HalpInterruptIsRemappingRequired @ 0x1404A7B00 (HalpInterruptIsRemappingRequired.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     HalpUpdateIrtDestinationId @ 0x1405537EC (HalpUpdateIrtDestinationId.c)
 *     HalpInterruptRestoreAllControllerState @ 0x140B4E180 (HalpInterruptRestoreAllControllerState.c)
 *     HalpInterruptEnsureLineSwapComplete @ 0x140B52080 (HalpInterruptEnsureLineSwapComplete.c)
 *     HalpInterruptUpdateLinesPostSwap @ 0x140B52274 (HalpInterruptUpdateLinesPostSwap.c)
 *     HalpInterruptUpdateLocalUnitIdentifier @ 0x140B523DC (HalpInterruptUpdateLocalUnitIdentifier.c)
 */

__int64 __fastcall HalpInterruptSwapProcessorIdentifiers(
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter4,
        unsigned int a3)
{
  int updated; // esi
  __int64 v4; // r9
  unsigned int j; // r8d
  __int64 i; // rbx
  ULONG_PTR *v11; // rdi
  ULONG_PTR *v12; // r12
  _QWORD **v13; // r12
  _QWORD *v14; // r15
  int v15; // ecx
  __int128 v16; // [rsp+30h] [rbp-58h] BYREF
  int v17; // [rsp+40h] [rbp-48h]
  __int128 v18; // [rsp+48h] [rbp-40h] BYREF
  int v19; // [rsp+58h] [rbp-30h]

  updated = 0;
  v17 = 0;
  v16 = 0LL;
  v19 = 0;
  v4 = 0LL;
  v18 = 0LL;
LABEL_2:
  if ( (unsigned int)v4 >= a3 )
  {
    if ( HalpInterruptIsRemappingRequired() )
      HalpUpdateIrtDestinationId();
    for ( i = 0LL; (unsigned int)i < a3; i = (unsigned int)(i + 1) )
    {
      updated = HalpInterruptUpdateLocalUnitIdentifier(
                  *(unsigned int *)(BugCheckParameter3 + 4 * i),
                  *(unsigned int *)(BugCheckParameter4 + 4 * i),
                  &v18,
                  &v16);
      if ( updated < 0 )
LABEL_22:
        KeBugCheckEx(0x5Cu, 0x4000uLL, HalpInterruptProcessorState, BugCheckParameter3, BugCheckParameter4);
      v11 = (ULONG_PTR *)HalpRegisteredInterruptControllers;
      while ( v11 != &HalpRegisteredInterruptControllers )
      {
        v12 = v11;
        v11 = (ULONG_PTR *)*v11;
        v13 = (_QWORD **)(v12 + 33);
        v14 = *v13;
        while ( v14 != v13 )
        {
          v15 = (int)v14;
          v14 = (_QWORD *)*v14;
          updated = HalpInterruptUpdateLinesPostSwap(
                      v15,
                      *(_DWORD *)(BugCheckParameter3 + 4 * i),
                      *(_DWORD *)(BugCheckParameter4 + 4 * i),
                      (unsigned int)&v18,
                      (__int64)&v16);
          if ( updated < 0 )
            goto LABEL_22;
        }
      }
    }
    HalpInterruptEnsureLineSwapComplete();
    HalpInterruptRestoreAllControllerState();
    return (unsigned int)updated;
  }
  else
  {
    for ( j = 0; j < (unsigned int)HalpInterruptProcessorCount; ++j )
    {
      if ( *(_DWORD *)(((unsigned __int64)j << 6) + HalpInterruptProcessorState) == *(_DWORD *)(BugCheckParameter3
                                                                                              + 4 * v4) )
      {
        v4 = (unsigned int)(v4 + 1);
        goto LABEL_2;
      }
    }
    return 3221226021LL;
  }
}
