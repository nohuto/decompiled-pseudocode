/*
 * XREFs of ??1ResourceConsumer@@UEAA@XZ @ 0x1800A3210
 * Callers:
 *     _StreamResourceConsumer::StreamResourceConsumer_::_1_::dtor$0 @ 0x1801728A0 (_StreamResourceConsumer--StreamResourceConsumer_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall ResourceConsumer::~ResourceConsumer(ResourceConsumer *this)
{
  *(_QWORD *)this = &KeywordDetectorResourceConsumer::`vftable';
}
