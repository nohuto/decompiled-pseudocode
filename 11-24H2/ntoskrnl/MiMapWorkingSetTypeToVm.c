/*
 * XREFs of MiMapWorkingSetTypeToVm @ 0x14046A564
 * Callers:
 *     MiPfCompleteInPageSupport @ 0x140352CB4 (MiPfCompleteInPageSupport.c)
 *     MmQuerySystemWorkingSetInformation @ 0x14046A3B0 (MmQuerySystemWorkingSetInformation.c)
 *     MmAdjustWorkingSetSizeEx @ 0x14046C954 (MmAdjustWorkingSetSizeEx.c)
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
    return &unk_140E3D6C0;
  v2 = v1 - 1;
  if ( !v2 )
    return &unk_140E38100;
  v3 = v2 - 1;
  if ( !v3 )
    return &unk_140E37E80;
  v4 = v3 - 1;
  if ( !v4 )
    return &unk_140E37FC0;
  v6 = v4 - 2;
  if ( !v6 )
    return &unk_140E38380;
  if ( v6 == 3 )
    return &unk_140E38740;
  return 0LL;
}
