/*
 * XREFs of ??_GCLocalMmcssWorkQueue@@UEAAPEAXI@Z @ 0x140044100
 * Callers:
 *     <none>
 * Callees:
 *     ??1CLocalMmcssWorkQueue@@UEAA@XZ @ 0x14004413C (--1CLocalMmcssWorkQueue@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1400590C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CLocalMmcssWorkQueue *__fastcall CLocalMmcssWorkQueue::`scalar deleting destructor'(
        CLocalMmcssWorkQueue *this,
        char a2)
{
  CLocalMmcssWorkQueue::~CLocalMmcssWorkQueue(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
