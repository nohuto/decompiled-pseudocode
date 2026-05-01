/*
 * XREFs of ??_GCreationThreadDispatcher@@UEAAPEAXI@Z @ 0x1801EB640
 * Callers:
 *     <none>
 * Callees:
 *     ??1CreationThreadDispatcher@@UEAA@XZ @ 0x1801C4640 (--1CreationThreadDispatcher@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1802D2320 (--3@YAXPEAX@Z.c)
 */

CreationThreadDispatcher *__fastcall CreationThreadDispatcher::`scalar deleting destructor'(
        CreationThreadDispatcher *this,
        char a2)
{
  CreationThreadDispatcher::~CreationThreadDispatcher(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
