/*
 * XREFs of ?FreeHidPageOnlyRequest@@YAXPEAUtagHID_PAGEONLY_REQUEST@@@Z @ 0x140110BAC
 * Callers:
 *     ?ClearTransforms@InputTransform@@YAXPEAUtagWND@@@Z @ 0x14010F74C (-ClearTransforms@InputTransform@@YAXPEAUtagWND@@@Z.c)
 *     ?ClearStaleEntries@@YAXPEAUtagINPUTTRANSFORMLIST@@_K@Z @ 0x140110108 (-ClearStaleEntries@@YAXPEAUtagINPUTTRANSFORMLIST@@_K@Z.c)
 *     ?CleanupFreedTLCInfo@@YAXXZ @ 0x14012FEF0 (-CleanupFreedTLCInfo@@YAXXZ.c)
 *     ?DerefPageOnlyRequest@@YAXPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@H@Z @ 0x1401AEED4 (-DerefPageOnlyRequest@@YAXPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@H@Z.c)
 *     CleanupHidRequestList @ 0x140272460 (CleanupHidRequestList.c)
 * Callees:
 *     <none>
 */

void __fastcall FreeHidPageOnlyRequest(struct tagHID_PAGEONLY_REQUEST ***a1)
{
  struct tagHID_PAGEONLY_REQUEST **v1; // rdx
  struct tagHID_PAGEONLY_REQUEST **v2; // rax

  v1 = *a1;
  if ( (*a1)[1] != (struct tagHID_PAGEONLY_REQUEST *)a1 || (v2 = a1[1], *v2 != (struct tagHID_PAGEONLY_REQUEST *)a1) )
    __fastfail(3u);
  *v2 = (struct tagHID_PAGEONLY_REQUEST *)v1;
  v1[1] = (struct tagHID_PAGEONLY_REQUEST *)v2;
  Win32FreePool(a1);
}
