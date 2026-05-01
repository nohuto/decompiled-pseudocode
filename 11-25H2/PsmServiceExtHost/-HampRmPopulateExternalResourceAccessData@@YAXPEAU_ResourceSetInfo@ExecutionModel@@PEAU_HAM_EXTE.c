/*
 * XREFs of ?HampRmPopulateExternalResourceAccessData@@YAXPEAU_ResourceSetInfo@ExecutionModel@@PEAU_HAM_EXTERNAL_RESOURCE_MASK@@@Z @ 0x18005E284
 * Callers:
 *     ?HampManagerStart@@YAJPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x1800813D8 (-HampManagerStart@@YAJPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall HampRmPopulateExternalResourceAccessData(struct ExecutionModel::_ResourceSetInfo *a1, ULONG *a2)
{
  ULONG v3; // edi
  int *v4; // rbx
  struct _RTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-18h] BYREF

  BitMapHeader = 0LL;
  RtlInitializeBitMap(&BitMapHeader, a2, 0x2Fu);
  v3 = 0;
  v4 = (int *)((char *)a1 + 164);
  do
  {
    if ( *v4 < 101 )
      RtlSetBit(&BitMapHeader, v3);
    ++v3;
    ++v4;
  }
  while ( v3 < 0x2F );
}
