/*
 * XREFs of ??_ESipcServer@@EEAAPEAXI@Z @ 0x18010B0B0
 * Callers:
 *     ??_ESipcServer@@GBA@EAAPEAXI@Z @ 0x18010AFC0 (--_ESipcServer@@GBA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18009DA74 (--3@YAXPEAX@Z.c)
 *     ??1SipcServer@@EEAA@XZ @ 0x18010AF5C (--1SipcServer@@EEAA@XZ.c)
 */

SipcServer *__fastcall SipcServer::`vector deleting destructor'(SipcServer *this, char a2)
{
  SipcServer::~SipcServer(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
