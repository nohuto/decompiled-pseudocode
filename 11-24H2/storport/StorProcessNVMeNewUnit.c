/*
 * XREFs of StorProcessNVMeNewUnit @ 0x14018E2E4
 * Callers:
 *     StorProcessNVMeModifiedNodes @ 0x1400C0F7C (StorProcessNVMeModifiedNodes.c)
 * Callees:
 *     McTemplateK0zqjuuusssz_EtwWriteTransfer @ 0x140023F6C (McTemplateK0zqjuuusssz_EtwWriteTransfer.c)
 *     RaidAdapterInsertUnit @ 0x14002FF2C (RaidAdapterInsertUnit.c)
 *     RaUnitLockForwardIo @ 0x1400301C0 (RaUnitLockForwardIo.c)
 *     RaidUnitAssignAddress @ 0x140035D6C (RaidUnitAssignAddress.c)
 *     RaidLockDeviceQueue @ 0x14003E764 (RaidLockDeviceQueue.c)
 *     RaidStartUnit @ 0x1400532A4 (RaidStartUnit.c)
 *     StorUnitAssignNVMeIdentity @ 0x14018E3E0 (StorUnitAssignNVMeIdentity.c)
 */

__int64 __fastcall StorProcessNVMeNewUnit(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // r8
  __int64 v4; // rcx
  char v5; // al
  __int64 v6; // r9
  __int64 result; // rax
  const wchar_t *v8; // r10

  v2 = *(_QWORD *)(a2 + 8);
  RaidUnitAssignAddress(v2, *(_DWORD *)(a2 + 4));
  StorUnitAssignNVMeIdentity(v4, v3 + 32);
  v5 = *(_BYTE *)(v2 + 504) & 0xF7;
  *(_DWORD *)(v2 + 56) = 2;
  *(_BYTE *)(v2 + 504) = v5 | 4;
  RaidLockDeviceQueue(v2 + 720);
  RaUnitLockForwardIo(v2, 1);
  RaidAdapterInsertUnit(*(_QWORD *)(v2 + 24), (_QWORD *)v2);
  RaidStartUnit(v2);
  v6 = *(_QWORD *)(v2 + 24);
  result = *(unsigned int *)(v6 + 4276);
  *(_DWORD *)(v2 + 3432) = result;
  if ( (byte_140171466 & 1) != 0 )
  {
    v8 = (const wchar_t *)&unk_140151214;
    if ( *(_QWORD *)(v6 + 5080) )
      v8 = *(const wchar_t **)(v6 + 5080);
    return McTemplateK0zqjuuusssz_EtwWriteTransfer(
             v2 + 177,
             v2 + 168,
             v6 + 5064,
             *(const wchar_t **)(v6 + 4720),
             *(_DWORD *)(v6 + 56),
             v6 + 5064,
             0,
             0,
             *(_BYTE *)(v2 + 104),
             (const char *)(v2 + 168),
             (const char *)(v2 + 177),
             (const char *)(v2 + 242),
             v8);
  }
  return result;
}
