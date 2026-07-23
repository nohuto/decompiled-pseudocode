/*
 * XREFs of PiDcInit @ 0x140C262FC
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140C210BC (IopInitializePlugPlayServices.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PiDcInitUpdateProperties @ 0x14072526C (PiDcInitUpdateProperties.c)
 *     PiDcGenerateConfigNotificationIfContainerRequiresConfiguration @ 0x140A3802C (PiDcGenerateConfigNotificationIfContainerRequiresConfiguration.c)
 */

__int64 __fastcall PiDcInit(int a1)
{
  int inited; // ebx

  inited = 0;
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      inited = PiDcInitUpdateProperties();
      if ( inited >= 0 )
        return (unsigned int)PiDcGenerateConfigNotificationIfContainerRequiresConfiguration(L"{00000000-0000-0000-FFFF-FFFFFFFFFFFF}");
    }
  }
  else
  {
    memset_0(&PiDcUpdateProperties, 0, sizeof(PiDcUpdateProperties));
    PiDcUpdateProperties.TableContext = 0LL;
    PiDcUpdateProperties.CompareRoutine = (_RTL_GENERIC_COMPARE_RESULTS (__fastcall *)(_RTL_AVL_TABLE *, void *, void *))PiDcCompareUpdateProperties;
    PiDcUpdateProperties.AllocateRoutine = (void *(__fastcall *)(_RTL_AVL_TABLE *, unsigned int))PiDcAllocateGenericTableEntry;
    PiDcUpdateProperties.FreeRoutine = (void (__fastcall *)(_RTL_AVL_TABLE *, void *))PiDcFreeGenericTableEntry;
    PiDcUpdateProperties.BalancedRoot.Parent = (_RTL_BALANCED_LINKS *)&PiDcUpdateProperties;
  }
  return (unsigned int)inited;
}
