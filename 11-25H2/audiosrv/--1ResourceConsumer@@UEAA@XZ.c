/*
 * XREFs of ??1ResourceConsumer@@UEAA@XZ @ 0x1800A6E60
 * Callers:
 *     _StreamResourceConsumer::StreamResourceConsumer_::_1_::dtor$0 @ 0x180168FDA (_StreamResourceConsumer--StreamResourceConsumer_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall ResourceConsumer::~ResourceConsumer(ResourceConsumer *this)
{
  *(_QWORD *)this = &KeywordDetectorResourceConsumer::`vftable';
}
