/*
 * XREFs of KsepGetLoadedModulesList @ 0x14073DFB0
 * Callers:
 *     KseRegisterShimEx @ 0x14073CB20 (KseRegisterShimEx.c)
 *     KsepResolveApplicableShimsForDriver @ 0x14073D7B8 (KsepResolveApplicableShimsForDriver.c)
 * Callees:
 *     KsepPoolAllocatePaged @ 0x14049AA70 (KsepPoolAllocatePaged.c)
 *     KsepPoolFreePaged @ 0x1404A18F4 (KsepPoolFreePaged.c)
 *     ZwQuerySystemInformation @ 0x1406A7A70 (ZwQuerySystemInformation.c)
 */

__int64 __fastcall KsepGetLoadedModulesList(int **a1)
{
  ULONG i; // edi
  int *Paged; // rax
  int *v5; // rbx
  NTSTATUS v6; // eax
  int v7; // ebp
  unsigned int v8; // edi
  ULONG ReturnLength; // [rsp+30h] [rbp+8h] BYREF

  ReturnLength = 0;
  if ( !a1 )
    return 3221225485LL;
  for ( i = 304; ; i = 296 * v7 + 8 )
  {
    Paged = (int *)KsepPoolAllocatePaged(i);
    v5 = Paged;
    if ( !Paged )
      break;
    v6 = ZwQuerySystemInformation(SystemModuleInformation, Paged, i, &ReturnLength);
    v7 = *v5;
    v8 = v6;
    if ( v6 >= 0 )
    {
      *a1 = v5;
      return v8;
    }
    if ( v6 != -1073741820 )
    {
      KsepPoolFreePaged(v5);
      return v8;
    }
    KsepPoolFreePaged(v5);
  }
  return (unsigned int)-1073741670;
}
