/*
 * XREFs of EtwpRemoveRegistrationFromTable @ 0x180046188
 * Callers:
 *     EtwNotificationUnregister @ 0x180045F20 (EtwNotificationUnregister.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x18000D9E0 (RtlRbRemoveNode.c)
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 */

void __fastcall EtwpRemoveRegistrationFromTable(PRTL_BALANCED_NODE Node)
{
  __m128i si128; // xmm0

  RtlAcquireSRWLockExclusive(&EtwpProvLock);
  RtlRbRemoveNode(&EtwpRegistrationTable, Node);
  si128 = _mm_load_si128((const __m128i *)&_xmm_abababababababababababababababab);
  Node->0 = ($79F1094FE30CD217B64D11FA5C14C08B)si128;
  Node->ParentValue = si128.m128i_i64[0];
  RtlReleaseSRWLockExclusive(&EtwpProvLock);
}
