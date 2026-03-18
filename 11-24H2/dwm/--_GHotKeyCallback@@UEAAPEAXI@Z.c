/*
 * XREFs of ??_GHotKeyCallback@@UEAAPEAXI@Z @ 0x14000C1C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x140004C34 (--3@YAXPEAX_K@Z.c)
 *     ??1HotKeyCallback@@UEAA@XZ @ 0x14000C114 (--1HotKeyCallback@@UEAA@XZ.c)
 */

HotKeyCallback *__fastcall HotKeyCallback::`scalar deleting destructor'(HotKeyCallback *this, char a2)
{
  HotKeyCallback::~HotKeyCallback(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
