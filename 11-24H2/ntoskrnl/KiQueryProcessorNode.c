/*
 * XREFs of KiQueryProcessorNode @ 0x1405B8EF0
 * Callers:
 *     KiStartDynamicProcessor @ 0x1407393A8 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140C28DA8 (KeStartAllProcessors.c)
 * Callees:
 *     HvlGetApicIdFromLpIndex @ 0x140580650 (HvlGetApicIdFromLpIndex.c)
 *     HvlpGetLpcbByApicId @ 0x140581898 (HvlpGetLpcbByApicId.c)
 *     KiIsNodeFull @ 0x1405B8E5C (KiIsNodeFull.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KiQueryProcessorNode(unsigned int a1, int *a2, unsigned __int16 *a3)
{
  __int64 v7; // r15
  unsigned int v8; // eax
  unsigned int v9; // ebx
  unsigned __int16 i; // r11
  __int64 v11; // rcx
  _DWORD *LpcbByApicId; // rax

  if ( a1 < (unsigned int)KeNumberProcessors_0 )
  {
    _mm_lfence();
    *a3 = *(_WORD *)(*(_QWORD *)(KiProcessorBlock[a1] + 192) + 138LL);
    return 0LL;
  }
  v7 = *a3;
  if ( !KiNumaQueryProcessorNode )
  {
    if ( a1 >= KiMaximumGroupSize )
      return (unsigned int)-1073741275;
    *a3 = 0;
LABEL_20:
    v9 = 0;
LABEL_21:
    if ( (*(_BYTE *)(KeNodeBlock[*a3] + 10) & 2) == 0 )
      v9 = -1073741275;
    if ( *a2 == -1 )
      HvlGetApicIdFromLpIndex(a1, a2);
    if ( (HvlpFlags & 2) == 0 )
      return v9;
    LpcbByApicId = HvlpGetLpcbByApicId(*a2);
    if ( LpcbByApicId )
    {
      if ( *((_BYTE *)LpcbByApicId + 1) )
        return v9;
    }
    return (unsigned int)-1073741275;
  }
  v8 = guard_dispatch_icall_no_overrides(a1, a2);
  v9 = v8;
  if ( !v8 )
  {
    if ( *a3 == 0xFFFF )
    {
      for ( i = 0; i < (unsigned __int16)KeNumberNodes; ++i )
      {
        v11 = KeNodeBlock[i];
        if ( (*(_BYTE *)(v11 + 10) & 2) != 0 && !KiIsNodeFull((_WORD *)v11) )
        {
          *a3 = i;
          goto LABEL_20;
        }
      }
      return (unsigned int)-1073741275;
    }
    goto LABEL_21;
  }
  if ( v8 == -1073741275 )
  {
    if ( (_WORD)v7 == 0xFFFF || KiIsNodeFull((_WORD *)KeNodeBlock[v7]) )
      return v9;
    v9 = 0;
    *a3 = v7;
  }
  if ( !v9 )
    goto LABEL_21;
  return v9;
}
