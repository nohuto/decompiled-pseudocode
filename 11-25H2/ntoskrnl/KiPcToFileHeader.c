/*
 * XREFs of KiPcToFileHeader @ 0x1405B082C
 * Callers:
 *     KeBugCheck2 @ 0x1405ADDF0 (KeBugCheck2.c)
 *     KiDumpParameterImages @ 0x1405B02A8 (KiDumpParameterImages.c)
 * Callees:
 *     MmIsAddressValidEx @ 0x1402AA5A0 (MmIsAddressValidEx.c)
 */

PVOID __fastcall KiPcToFileHeader(unsigned __int64 a1, PVOID **a2, int a3, _BYTE *a4)
{
  __int64 v8; // r14
  PVOID *v9; // r14
  PVOID *v10; // rdi
  PVOID v11; // rbx
  unsigned int v12; // esi
  PVOID *v13; // rcx
  PVOID v14; // rdx

  if ( (unsigned int)InitializationPhase >= 2 )
  {
    v9 = &PsLoadedModuleList;
  }
  else
  {
    v8 = *(_QWORD *)&KeNumberProcessorsGroup0[1];
    v9 = (PVOID *)(v8 + 16);
  }
  v10 = (PVOID *)*v9;
  v11 = 0LL;
  *a4 = 0;
  if ( v10 )
  {
    v12 = 0;
    while ( v10 != v9 )
    {
      if ( !MmIsAddressValidEx((__int64)v10) )
        return 0LL;
      if ( ++v12 <= 2 && a3 == 1 )
      {
        v10 = (PVOID *)*v10;
      }
      else
      {
        v13 = v10;
        v10 = (PVOID *)*v10;
        v14 = v13[6];
        if ( a1 >= (unsigned __int64)v14 && a1 < (unsigned __int64)v14 + *((unsigned int *)v13 + 16) )
        {
          *a2 = v13;
          v11 = v14;
          if ( v12 <= 2 )
            *a4 = 1;
          return v11;
        }
      }
    }
  }
  return v11;
}
