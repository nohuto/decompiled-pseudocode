/*
 * XREFs of KsepGetLoadedModulesList @ 0x140740080
 * Callers:
 *     KseRegisterShimEx @ 0x14073EBF0 (KseRegisterShimEx.c)
 *     KsepResolveApplicableShimsForDriver @ 0x14073F888 (KsepResolveApplicableShimsForDriver.c)
 * Callees:
 *     KsepPoolAllocatePaged @ 0x1404A03F0 (KsepPoolAllocatePaged.c)
 *     KsepPoolFreePaged @ 0x1404A6F94 (KsepPoolFreePaged.c)
 *     ZwQuerySystemInformation @ 0x1406A6AD0 (ZwQuerySystemInformation.c)
 */

__int64 __fastcall KsepGetLoadedModulesList(int **a1)
{
  unsigned int i; // edi
  int *Paged; // rax
  int *v5; // rbx
  int SystemInformation; // eax
  int v7; // ebp
  unsigned int v8; // edi

  if ( !a1 )
    return 3221225485LL;
  for ( i = 304; ; i = 296 * v7 + 8 )
  {
    Paged = (int *)KsepPoolAllocatePaged(i);
    v5 = Paged;
    if ( !Paged )
      break;
    SystemInformation = ZwQuerySystemInformation(11LL, (__int64)Paged);
    v7 = *v5;
    v8 = SystemInformation;
    if ( SystemInformation >= 0 )
    {
      *a1 = v5;
      return v8;
    }
    if ( SystemInformation != -1073741820 )
    {
      KsepPoolFreePaged(v5);
      return v8;
    }
    KsepPoolFreePaged(v5);
  }
  return (unsigned int)-1073741670;
}
