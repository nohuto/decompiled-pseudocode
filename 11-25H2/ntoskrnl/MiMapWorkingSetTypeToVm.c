/*
 * XREFs of MiMapWorkingSetTypeToVm @ 0x1403C248C
 * Callers:
 *     MiPfCompleteInPageSupport @ 0x1403795D8 (MiPfCompleteInPageSupport.c)
 *     MmQuerySystemWorkingSetInformation @ 0x1403C22D8 (MmQuerySystemWorkingSetInformation.c)
 *     MmAdjustWorkingSetSizeEx @ 0x1403C5254 (MmAdjustWorkingSetSizeEx.c)
 * Callees:
 *     <none>
 */

void *__fastcall MiMapWorkingSetTypeToVm(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v6; // ecx

  v1 = a1 - 1;
  if ( !v1 )
    return &unk_140E3D340;
  v2 = v1 - 1;
  if ( !v2 )
    return &unk_140E37D80;
  v3 = v2 - 1;
  if ( !v3 )
    return &unk_140E37B00;
  v4 = v3 - 1;
  if ( !v4 )
    return &unk_140E37C40;
  v6 = v4 - 2;
  if ( !v6 )
    return &unk_140E38000;
  if ( v6 == 3 )
    return &unk_140E383C0;
  return 0LL;
}
