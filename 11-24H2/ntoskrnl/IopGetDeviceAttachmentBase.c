/*
 * XREFs of IopGetDeviceAttachmentBase @ 0x1402D4B38
 * Callers:
 *     IopGetDevicePDO @ 0x1402D488C (IopGetDevicePDO.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x1402D4AC0 (IoGetDeviceAttachmentBaseRef.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x1402D4B68 (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     IopAttachDeviceToDeviceStackSafe @ 0x1403C4D24 (IopAttachDeviceToDeviceStackSafe.c)
 *     IopCompleteUnloadOrDelete @ 0x1403F2590 (IopCompleteUnloadOrDelete.c)
 *     IopVerifyDriverObjectOnStack @ 0x14059670C (IopVerifyDriverObjectOnStack.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IopGetDeviceAttachmentBase(__int64 a1)
{
  __int64 v1; // rdx
  __int64 i; // rcx

  v1 = a1;
  for ( i = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 48LL); i; i = *(_QWORD *)(*(_QWORD *)(i + 312) + 48LL) )
    v1 = i;
  return v1;
}
