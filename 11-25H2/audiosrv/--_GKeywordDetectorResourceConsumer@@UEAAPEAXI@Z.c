/*
 * XREFs of ??_GKeywordDetectorResourceConsumer@@UEAAPEAXI@Z @ 0x180157510
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A7F7C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

KeywordDetectorResourceConsumer *__fastcall KeywordDetectorResourceConsumer::`scalar deleting destructor'(
        KeywordDetectorResourceConsumer *this,
        char a2)
{
  *(_QWORD *)this = &KeywordDetectorResourceConsumer::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x10);
  return this;
}
