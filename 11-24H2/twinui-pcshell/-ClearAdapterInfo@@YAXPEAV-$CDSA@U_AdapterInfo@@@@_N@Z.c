/*
 * XREFs of ?ClearAdapterInfo@@YAXPEAV?$CDSA@U_AdapterInfo@@@@_N@Z @ 0x180674B00
 * Callers:
 *     ?_BuildDisplayIndex@@YAJPEAUDISPLAYCONFIG_PATH_INFO@@0IPEAV?$CDSA@U_AdapterInfo@@@@HI_NPEAH3@Z @ 0x180674CEC (-_BuildDisplayIndex@@YAJPEAUDISPLAYCONFIG_PATH_INFO@@0IPEAV-$CDSA@U_AdapterInfo@@@@HI_NPEAH3@Z.c)
 * Callees:
 *     DSA_GetItemPtr @ 0x1801F8A80 (DSA_GetItemPtr.c)
 *     DSA_DeleteAllItems @ 0x180683740 (DSA_DeleteAllItems.c)
 */

__int64 __fastcall ClearAdapterInfo(struct _DSA **a1)
{
  int i; // edi
  struct _DSA *v3; // rcx
  __int64 result; // rax
  struct _DSA **ItemPtr; // rax
  struct _DSA **v6; // rbx
  struct _DSA *v7; // rcx
  struct _DSA *v8; // rcx

  for ( i = 0; ; ++i )
  {
    v3 = *a1;
    result = *a1 ? *(unsigned int *)v3 : 0LL;
    if ( i >= (int)result )
      break;
    ItemPtr = (struct _DSA **)g_pfn_DSA_GetItemPtr(v3, i);
    v6 = ItemPtr;
    if ( ItemPtr )
    {
      v7 = ItemPtr[1];
      if ( v7 )
        g_pfn_DSA_DeleteAllItems(v7);
      v8 = v6[2];
      if ( v8 )
        g_pfn_DSA_DeleteAllItems(v8);
      *((_DWORD *)v6 + 6) = 0;
      *((_BYTE *)v6 + 28) = 0;
    }
  }
  return result;
}
