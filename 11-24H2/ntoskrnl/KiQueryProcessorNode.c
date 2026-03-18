/*
 * XREFs of KiQueryProcessorNode @ 0x1405BB8C0
 * Callers:
 *     KiStartDynamicProcessor @ 0x14073B478 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140C26D58 (KeStartAllProcessors.c)
 * Callees:
 *     HvlGetApicIdFromLpIndex @ 0x1405832D0 (HvlGetApicIdFromLpIndex.c)
 *     HvlpGetLpcbByApicId @ 0x140584518 (HvlpGetLpcbByApicId.c)
 *     KiIsNodeFull @ 0x1405BB82C (KiIsNodeFull.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KiQueryProcessorNode(unsigned int a1, int *a2, unsigned __int16 *a3, __int64 a4)
{
  __int64 v8; // r15
  unsigned int v9; // eax
  unsigned int v10; // ebx
  unsigned __int16 i; // r11
  __int64 v12; // rcx
  _DWORD *LpcbByApicId; // rax

  if ( a1 < (unsigned int)KeNumberProcessors_0 )
  {
    _mm_lfence();
    *a3 = *(_WORD *)(*(_QWORD *)(KiProcessorBlock[a1] + 192) + 138LL);
    return 0LL;
  }
  v8 = *a3;
  if ( !KiNumaQueryProcessorNode )
  {
    if ( a1 >= KiMaximumGroupSize )
      return (unsigned int)-1073741275;
    *a3 = 0;
LABEL_20:
    v10 = 0;
LABEL_21:
    if ( (*(_BYTE *)(KeNodeBlock[*a3] + 10) & 2) == 0 )
      v10 = -1073741275;
    if ( *a2 == -1 )
      HvlGetApicIdFromLpIndex(a1, a2);
    if ( (HvlpFlags & 2) == 0 )
      return v10;
    LpcbByApicId = HvlpGetLpcbByApicId(*a2);
    if ( LpcbByApicId )
    {
      if ( *((_BYTE *)LpcbByApicId + 1) )
        return v10;
    }
    return (unsigned int)-1073741275;
  }
  v9 = guard_dispatch_icall_no_overrides(a1, a2, a3, a4);
  v10 = v9;
  if ( !v9 )
  {
    if ( *a3 == 0xFFFF )
    {
      for ( i = 0; i < (unsigned __int16)KeNumberNodes; ++i )
      {
        v12 = KeNodeBlock[i];
        if ( (*(_BYTE *)(v12 + 10) & 2) != 0 && !KiIsNodeFull((_WORD *)v12) )
        {
          *a3 = i;
          goto LABEL_20;
        }
      }
      return (unsigned int)-1073741275;
    }
    goto LABEL_21;
  }
  if ( v9 == -1073741275 )
  {
    if ( (_WORD)v8 == 0xFFFF || KiIsNodeFull((_WORD *)KeNodeBlock[v8]) )
      return v10;
    v10 = 0;
    *a3 = v8;
  }
  if ( !v10 )
    goto LABEL_21;
  return v10;
}
