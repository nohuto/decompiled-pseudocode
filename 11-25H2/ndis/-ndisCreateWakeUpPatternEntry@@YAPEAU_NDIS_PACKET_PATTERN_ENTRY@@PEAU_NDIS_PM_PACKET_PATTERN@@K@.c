/*
 * XREFs of ?ndisCreateWakeUpPatternEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_NDIS_PM_PACKET_PATTERN@@K@Z @ 0x1400BA558
 * Callers:
 *     ?ndisSetAddWakeUpPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1400BCE84 (-ndisSetAddWakeUpPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z.c)
 *     ?ndisSetOpenAddWakeUpPattern@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1400BD588 (-ndisSetOpenAddWakeUpPattern@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140036F70 (WPP_RECORDER_SF_.c)
 *     memmove @ 0x1400EE080 (memmove.c)
 */

struct _NDIS_PACKET_PATTERN_ENTRY *__fastcall ndisCreateWakeUpPatternEntry(
        struct _NDIS_PM_PACKET_PATTERN *Src,
        unsigned int a2)
{
  __int64 MaskSize; // r8
  unsigned int v5; // esi
  __int64 Pool2; // rax
  int v7; // edx
  struct _NDIS_PACKET_PATTERN_ENTRY *v8; // rbx
  struct _NDIS_PACKET_PATTERN_ENTRY *result; // rax

  MaskSize = Src->MaskSize;
  v5 = MaskSize + 24;
  if ( MaskSize + 24 <= (unsigned __int64)(Src->PatternOffset + Src->PatternSize) )
    v5 = Src->PatternOffset + Src->PatternSize;
  Pool2 = ExAllocatePool2(64LL, v5 + 296, 1802519630);
  v8 = (struct _NDIS_PACKET_PATTERN_ENTRY *)Pool2;
  if ( Pool2 )
  {
    memmove((void *)(Pool2 + 48), Src, v5);
    v8->Priority = Src->Priority;
    result = v8;
    v8->Size = v5 + 296;
    v8->PortNumber = a2;
  }
  else
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 2;
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v7,
        11,
        28,
        (struct _GUID *)&WPP_0008b8bbc9b83858b743970a7dc9f078_Traceguids);
    }
    return 0LL;
  }
  return result;
}
