/*
 * XREFs of IoAllowExecution @ 0x1402D484C
 * Callers:
 *     MiCreateImageOrDataSection @ 0x140941B00 (MiCreateImageOrDataSection.c)
 * Callees:
 *     IopGetDevicePDO @ 0x1402D488C (IopGetDevicePDO.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 */

bool __fastcall IoAllowExecution(__int64 a1)
{
  _DWORD *DevicePDO; // rax
  int v2; // ebx

  DevicePDO = (_DWORD *)IopGetDevicePDO(*(_QWORD *)(a1 + 8));
  if ( !DevicePDO )
    return 1;
  v2 = DevicePDO[12];
  ObfDereferenceObjectWithTag(DevicePDO, 0x746C6644u);
  return (v2 & 0x800000) == 0;
}
