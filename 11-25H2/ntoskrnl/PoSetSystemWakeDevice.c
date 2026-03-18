/*
 * XREFs of PoSetSystemWakeDevice @ 0x1404A11A0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x14035B058 (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     PopUpdateWakeSource @ 0x1404A11DC (PopUpdateWakeSource.c)
 */

void *__fastcall PoSetSystemWakeDevice(__int64 a1)
{
  void *result; // rax
  void *v2; // rbx

  result = IoGetDeviceAttachmentBaseRefWithTag(a1, 0x72496F50u);
  v2 = result;
  if ( result )
  {
    PopUpdateWakeSource(result);
    return (void *)ObfDereferenceObjectWithTag(v2, 0x72496F50u);
  }
  return result;
}
