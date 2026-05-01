/*
 * XREFs of ?Search@?$CDSA_Base@U_TargetInfo@@@@QEBAHPEBU_TargetInfo@@HP6AH00_J@Z1I@Z @ 0x180674BF0
 * Callers:
 *     ?_BuildDisplayIndex@@YAJPEAUDISPLAYCONFIG_PATH_INFO@@0IPEAV?$CDSA@U_AdapterInfo@@@@HI_NPEAH3@Z @ 0x180674CEC (-_BuildDisplayIndex@@YAJPEAUDISPLAYCONFIG_PATH_INFO@@0IPEAV-$CDSA@U_AdapterInfo@@@@HI_NPEAH3@Z.c)
 * Callees:
 *     DSA_GetItemPtr @ 0x1801F8A80 (DSA_GetItemPtr.c)
 *     ?TargetInfoCompareID@@YAHPEBU_TargetInfo@@0_J@Z @ 0x180674C80 (-TargetInfoCompareID@@YAHPEBU_TargetInfo@@0_J@Z.c)
 */

__int64 __fastcall CDSA_Base<_TargetInfo>::Search(HDSA *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  HDSA v5; // rax
  int v7; // edi
  unsigned int v8; // ebx
  const struct _TargetInfo *ItemPtr; // rax

  v5 = *a1;
  if ( !*a1 )
    return 0xFFFFFFFFLL;
  v7 = *(_DWORD *)v5;
  v8 = 0;
  if ( *(int *)v5 <= 0 )
    return 0xFFFFFFFFLL;
  while ( 1 )
  {
    ItemPtr = (const struct _TargetInfo *)g_pfn_DSA_GetItemPtr(*a1, v8);
    if ( !(unsigned int)TargetInfoCompareID(0LL, ItemPtr, a5) )
      break;
    if ( (int)++v8 >= v7 )
      return 0xFFFFFFFFLL;
  }
  return v8;
}
