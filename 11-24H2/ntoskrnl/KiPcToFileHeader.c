/*
 * XREFs of KiPcToFileHeader @ 0x1405B1150
 * Callers:
 *     KeBugCheck2 @ 0x1405AE6F0 (KeBugCheck2.c)
 *     KiDumpParameterImages @ 0x1405B0BC8 (KiDumpParameterImages.c)
 * Callees:
 *     MmIsAddressValidEx @ 0x140244560 (MmIsAddressValidEx.c)
 */

PVOID __fastcall KiPcToFileHeader(unsigned __int64 a1, PVOID **a2, int a3, _BYTE *a4)
{
  PVOID *v8; // r14
  PVOID *v9; // rdi
  PVOID v10; // rbx
  unsigned int v11; // esi
  PVOID *v12; // rcx
  PVOID v13; // rdx

  if ( (unsigned int)InitializationPhase >= 2 )
    v8 = &PsLoadedModuleList;
  else
    v8 = (PVOID *)(KeLoaderBlock_0 + 16);
  v9 = (PVOID *)*v8;
  v10 = 0LL;
  *a4 = 0;
  if ( v9 )
  {
    v11 = 0;
    while ( v9 != v8 )
    {
      if ( !MmIsAddressValidEx((__int64)v9) )
        return 0LL;
      if ( ++v11 <= 2 && a3 == 1 )
      {
        v9 = (PVOID *)*v9;
      }
      else
      {
        v12 = v9;
        v9 = (PVOID *)*v9;
        v13 = v12[6];
        if ( a1 >= (unsigned __int64)v13 && a1 < (unsigned __int64)v13 + *((unsigned int *)v12 + 16) )
        {
          *a2 = v12;
          v10 = v13;
          if ( v11 <= 2 )
            *a4 = 1;
          return v10;
        }
      }
    }
  }
  return v10;
}
