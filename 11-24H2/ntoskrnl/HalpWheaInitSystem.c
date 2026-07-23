/*
 * XREFs of HalpWheaInitSystem @ 0x140B4F530
 * Callers:
 *     <none>
 * Callees:
 *     HalpInterruptModel @ 0x1403744A8 (HalpInterruptModel.c)
 *     HalpMcaInitializePcrContext @ 0x140B4DDF0 (HalpMcaInitializePcrContext.c)
 *     HalpWheaInitDiscard @ 0x140C11BD4 (HalpWheaInitDiscard.c)
 */

__int64 HalpWheaInitSystem()
{
  int v0; // edx
  __int64 v1; // r8

  if ( (unsigned int)HalpInterruptModel() != 1 )
    return 0LL;
  if ( v0 == 12 )
  {
    if ( !v1 )
      return 3221225473LL;
    HalpWheaInitDiscard(v1);
  }
  else
  {
    if ( v0 == 17 )
    {
      off_140E00908[0] = (__int64 (__fastcall *)())HalpReadWheaPhysicalMemory;
      off_140E00910[0] = (__int64 (__fastcall *)())HalpWriteWheaPhysicalMemory;
    }
    else if ( v0 != 19 )
    {
      return 0LL;
    }
    HalpMcaInitializePcrContext();
  }
  return 0LL;
}
