/*
 * XREFs of PnprLoadPluginDriver @ 0x14072DCA4
 * Callers:
 *     PnpReplacePartitionUnit @ 0x14072C230 (PnpReplacePartitionUnit.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PnprGetPluginDriverImagePath @ 0x14072D5C8 (PnprGetPluginDriverImagePath.c)
 *     MmLoadSystemImage @ 0x1409B8990 (MmLoadSystemImage.c)
 *     MmUnloadSystemImage @ 0x140A87050 (MmUnloadSystemImage.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnprLoadPluginDriver(ULONG_PTR *a1, __int64 a2)
{
  int PluginDriverImagePath; // edi
  int SystemImage; // eax
  ULONG_PTR v6; // rsi
  __int64 v7; // rcx
  int v8; // eax
  int v9; // edx
  int v10; // eax
  __int64 v11; // rdx
  int v12; // eax
  int v13; // eax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF
  ULONG_PTR v16; // [rsp+70h] [rbp+18h] BYREF
  char v17; // [rsp+78h] [rbp+20h] BYREF

  v16 = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  PluginDriverImagePath = PnprGetPluginDriverImagePath(&DestinationString);
  if ( PluginDriverImagePath < 0 )
    goto LABEL_25;
  SystemImage = MmLoadSystemImage((unsigned int)&DestinationString, 0, 0, 2, (__int64)&v16, (__int64)&v17);
  v6 = v16;
  PluginDriverImagePath = SystemImage;
  if ( SystemImage >= 0 )
  {
    memset_0((void *)(a2 + 8), 0, 0x58uLL);
    *(_DWORD *)(a2 + 4) = 1;
    *(_DWORD *)a2 = 96;
    PluginDriverImagePath = guard_dispatch_icall_no_overrides(a2, 0LL);
    if ( PluginDriverImagePath >= 0 )
    {
      if ( *(_DWORD *)a2 >= 0x40u && *(_QWORD *)(a2 + 56) && *(_QWORD *)(a2 + 24) && *(_QWORD *)(a2 + 32) )
      {
        *a1 = v6;
        PluginDriverImagePath = 0;
        goto LABEL_25;
      }
      v11 = PnprContext;
      PluginDriverImagePath = -1073741637;
      v12 = *(_DWORD *)(PnprContext + 33288);
      if ( !v12 )
        v12 = 4895;
      *(_DWORD *)(PnprContext + 33288) = v12;
      v13 = *(_DWORD *)(v11 + 33292);
      if ( !v13 )
        v13 = 9;
      *(_DWORD *)(v11 + 33292) = v13;
      goto LABEL_23;
    }
    v7 = PnprContext;
    v8 = *(_DWORD *)(PnprContext + 33288);
    if ( !v8 )
      v8 = 4879;
    v9 = 8;
  }
  else
  {
    v7 = PnprContext;
    v8 = *(_DWORD *)(PnprContext + 33288);
    if ( !v8 )
      v8 = 4865;
    v9 = 10;
  }
  *(_DWORD *)(v7 + 33288) = v8;
  v10 = *(_DWORD *)(v7 + 33292);
  if ( !v10 )
    v10 = v9;
  *(_DWORD *)(v7 + 33292) = v10;
LABEL_23:
  if ( v6 )
    MmUnloadSystemImage(v6);
LABEL_25:
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0x51706E50u);
  return (unsigned int)PluginDriverImagePath;
}
