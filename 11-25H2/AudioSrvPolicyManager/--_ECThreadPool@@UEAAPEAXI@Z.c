/*
 * XREFs of ??_ECThreadPool@@UEAAPEAXI@Z @ 0x18004A510
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180010D60 (--3@YAXPEAX@Z.c)
 */

CThreadPool *__fastcall CThreadPool::`vector deleting destructor'(CThreadPool *this, char a2)
{
  *(_QWORD *)this = &CThreadPool::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
