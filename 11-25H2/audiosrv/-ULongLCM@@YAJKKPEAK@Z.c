/*
 * XREFs of ?ULongLCM@@YAJKKPEAK@Z @ 0x1800A3988
 * Callers:
 *     ?GetPacketSizesFromConstraints@@YAJPEBUPacketSizeConstraints@@KGU_GUID@@_K22PEAI333@Z @ 0x180083C04 (-GetPacketSizesFromConstraints@@YAJPEBUPacketSizeConstraints@@KGU_GUID@@_K22PEAI333@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ULongLCM(unsigned int a1, unsigned int a2, unsigned int *a3)
{
  __int64 v3; // r10
  unsigned int v4; // r9d
  unsigned int v5; // eax
  unsigned int v7; // edx
  unsigned int v9; // ecx
  unsigned __int64 v10; // r8
  unsigned int v11; // ecx

  v3 = a2;
  v4 = a1;
  v5 = a1;
  if ( a1 >= a2 )
    v4 = a2;
  if ( a1 <= a2 )
    v5 = a2;
  v7 = v5 % v4;
  while ( 1 )
  {
    v9 = v7;
    if ( !v7 )
      break;
    v7 = v4 % v7;
    v4 = v9;
  }
  v10 = v3 * (a1 / v4);
  v11 = -1;
  if ( v10 <= 0xFFFFFFFF )
    v11 = v3 * (a1 / v4);
  *a3 = v11;
  return v10 > 0xFFFFFFFF ? 0x80070216 : 0;
}
