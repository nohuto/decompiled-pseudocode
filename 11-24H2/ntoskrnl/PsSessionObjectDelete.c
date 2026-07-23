/*
 * XREFs of PsSessionObjectDelete @ 0x14077B8F0
 * Callers:
 *     <none>
 * Callees:
 *     KeRemoveSchedulingGroup @ 0x14049F368 (KeRemoveSchedulingGroup.c)
 *     PspReleaseReferenceToSession @ 0x140A81850 (PspReleaseReferenceToSession.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall PsSessionObjectDelete(__int64 a1)
{
  _DWORD *v2; // rcx
  unsigned __int16 *v3; // rcx

  v2 = *(_DWORD **)(a1 + 24);
  if ( (v2[1] & 4) != 0 )
    PspReleaseReferenceToSession(v2);
  v3 = *(unsigned __int16 **)(a1 + 32);
  if ( v3 )
  {
    KeRemoveSchedulingGroup(v3);
    ExFreePoolWithTag(*(PVOID *)(a1 + 32), 0);
  }
}
