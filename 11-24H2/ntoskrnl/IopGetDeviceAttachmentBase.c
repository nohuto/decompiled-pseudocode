/*
 * XREFs of IopGetDeviceAttachmentBase @ 0x140355DB8
 * Callers:
 *     IopGetDevicePDO @ 0x140355B0C (IopGetDevicePDO.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x140355D40 (IoGetDeviceAttachmentBaseRef.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x140355DE8 (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     IopAttachDeviceToDeviceStackSafe @ 0x1403B38E4 (IopAttachDeviceToDeviceStackSafe.c)
 *     IopCompleteUnloadOrDelete @ 0x1403E62B0 (IopCompleteUnloadOrDelete.c)
 *     IopVerifyDriverObjectOnStack @ 0x14059373C (IopVerifyDriverObjectOnStack.c)
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
