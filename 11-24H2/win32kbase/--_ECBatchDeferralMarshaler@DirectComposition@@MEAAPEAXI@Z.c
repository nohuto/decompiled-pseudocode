/*
 * XREFs of ??_ECBatchDeferralMarshaler@DirectComposition@@MEAAPEAXI@Z @ 0x140224A40
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ??1CBatchDeferralMarshaler@DirectComposition@@MEAA@XZ @ 0x140239900 (--1CBatchDeferralMarshaler@DirectComposition@@MEAA@XZ.c)
 */

DirectComposition::CBatchDeferralMarshaler *__fastcall DirectComposition::CBatchDeferralMarshaler::`vector deleting destructor'(
        DirectComposition::CBatchDeferralMarshaler *Buffer,
        char a2)
{
  DirectComposition::CBatchDeferralMarshaler::~CBatchDeferralMarshaler(Buffer);
  if ( (a2 & 1) != 0 )
    GreDeleteFastMutex((char *)Buffer);
  return Buffer;
}
