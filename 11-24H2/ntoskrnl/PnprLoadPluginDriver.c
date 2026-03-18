/*
 * XREFs of PnprLoadPluginDriver @ 0x14072FC94
 * Callers:
 *     PnpReplacePartitionUnit @ 0x14072E220 (PnpReplacePartitionUnit.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     PnprGetPluginDriverImagePath @ 0x14072F5B8 (PnprGetPluginDriverImagePath.c)
 *     MmLoadSystemImage @ 0x1409C7FC0 (MmLoadSystemImage.c)
 *     MmUnloadSystemImage @ 0x140A8AD10 (MmUnloadSystemImage.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  int v14; // eax
  int v15; // eax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF
  ULONG_PTR v18; // [rsp+70h] [rbp+18h] BYREF
  char v19; // [rsp+78h] [rbp+20h] BYREF

  v18 = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  PluginDriverImagePath = PnprGetPluginDriverImagePath(&DestinationString);
  if ( PluginDriverImagePath < 0 )
    goto LABEL_25;
  SystemImage = MmLoadSystemImage((unsigned int)&DestinationString, 0, 0, 2, (__int64)&v18, (__int64)&v19);
  v6 = v18;
  PluginDriverImagePath = SystemImage;
  if ( SystemImage >= 0 )
  {
    memset_0((void *)(a2 + 8), 0, 0x58uLL);
    *(_DWORD *)(a2 + 4) = 1;
    *(_DWORD *)a2 = 96;
    PluginDriverImagePath = guard_dispatch_icall_no_overrides(a2, 0LL, v11, v12);
    if ( PluginDriverImagePath >= 0 )
    {
      if ( *(_DWORD *)a2 >= 0x40u && *(_QWORD *)(a2 + 56) && *(_QWORD *)(a2 + 24) && *(_QWORD *)(a2 + 32) )
      {
        *a1 = v6;
        PluginDriverImagePath = 0;
        goto LABEL_25;
      }
      v13 = PnprContext;
      PluginDriverImagePath = -1073741637;
      v14 = *(_DWORD *)(PnprContext + 33288);
      if ( !v14 )
        v14 = 4895;
      *(_DWORD *)(PnprContext + 33288) = v14;
      v15 = *(_DWORD *)(v13 + 33292);
      if ( !v15 )
        v15 = 9;
      *(_DWORD *)(v13 + 33292) = v15;
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
