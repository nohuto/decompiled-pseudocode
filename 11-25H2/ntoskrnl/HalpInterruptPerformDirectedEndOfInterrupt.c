/*
 * XREFs of HalpInterruptPerformDirectedEndOfInterrupt @ 0x140541798
 * Callers:
 *     HalPerformEndOfInterrupt @ 0x14041A4A0 (HalPerformEndOfInterrupt.c)
 *     HvlPerformEndOfInterrupt @ 0x1404791E0 (HvlPerformEndOfInterrupt.c)
 * Callees:
 *     HalpInterruptFindLinesForGsiRange @ 0x140445AEC (HalpInterruptFindLinesForGsiRange.c)
 *     HalpInterruptLookupController @ 0x140445B74 (HalpInterruptLookupController.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall HalpInterruptPerformDirectedEndOfInterrupt(__int64 a1)
{
  __int64 v1; // rbx
  _DWORD *LinesForGsiRange; // rax
  ULONG_PTR *v3; // r9

  if ( a1 )
  {
    if ( !*(_DWORD *)(a1 + 108) )
    {
      v1 = *(_QWORD *)(a1 + 160);
      if ( v1 )
      {
        if ( !*(_DWORD *)(v1 + 8) )
        {
          LinesForGsiRange = HalpInterruptFindLinesForGsiRange(*(_DWORD *)(v1 + 64), *(_DWORD *)(v1 + 64) + 1);
          if ( LinesForGsiRange )
          {
            v3 = HalpInterruptLookupController(LinesForGsiRange[4]);
            if ( (*((_DWORD *)v3 + 61) & 0x400) != 0 )
              guard_dispatch_icall_no_overrides(v3[2]);
          }
        }
      }
    }
  }
}
