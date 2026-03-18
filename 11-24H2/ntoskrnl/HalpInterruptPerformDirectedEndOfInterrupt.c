/*
 * XREFs of HalpInterruptPerformDirectedEndOfInterrupt @ 0x140543FC8
 * Callers:
 *     HalPerformEndOfInterrupt @ 0x140418370 (HalPerformEndOfInterrupt.c)
 *     HvlPerformEndOfInterrupt @ 0x14047A2D0 (HvlPerformEndOfInterrupt.c)
 * Callees:
 *     HalpInterruptFindLinesForGsiRange @ 0x1403B9C8C (HalpInterruptFindLinesForGsiRange.c)
 *     HalpInterruptLookupController @ 0x1403B9D14 (HalpInterruptLookupController.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall HalpInterruptPerformDirectedEndOfInterrupt(__int64 a1)
{
  _DWORD *v1; // rbx
  _DWORD *LinesForGsiRange; // rax
  ULONG_PTR *v3; // r9

  if ( a1 )
  {
    if ( !*(_DWORD *)(a1 + 108) )
    {
      v1 = *(_DWORD **)(a1 + 160);
      if ( v1 )
      {
        if ( !v1[2] )
        {
          LinesForGsiRange = HalpInterruptFindLinesForGsiRange(v1[16], v1[16] + 1);
          if ( LinesForGsiRange )
          {
            v3 = HalpInterruptLookupController(LinesForGsiRange[4]);
            if ( (*((_DWORD *)v3 + 61) & 0x400) != 0 )
              guard_dispatch_icall_no_overrides(v3[2], (unsigned int)v1[3], v1[12] & 0x3FFFFFFF, v3);
          }
        }
      }
    }
  }
}
