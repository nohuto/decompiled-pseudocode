/*
 * XREFs of ??_ECConditionalExpressionMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1400EE8F0
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ??1CBaseExpressionMarshaler@DirectComposition@@UEAA@XZ @ 0x1400EE9B0 (--1CBaseExpressionMarshaler@DirectComposition@@UEAA@XZ.c)
 */

DirectComposition::CBaseExpressionMarshaler *__fastcall DirectComposition::CConditionalExpressionMarshaler::`vector deleting destructor'(
        DirectComposition::CBaseExpressionMarshaler *Buffer,
        char a2)
{
  *(_QWORD *)Buffer = &DirectComposition::CConditionalExpressionMarshaler::`vftable';
  DirectComposition::CBaseExpressionMarshaler::~CBaseExpressionMarshaler(Buffer);
  if ( (a2 & 1) != 0 )
    GreDeleteFastMutex((char *)Buffer);
  return Buffer;
}
