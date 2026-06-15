/*
 * XREFs of ??_GCVADServer@@UEAAPEAXI@Z @ 0x180010160
 * Callers:
 *     <none>
 * Callees:
 *     ??1CVADServer@@UEAA@XZ @ 0x180010938 (--1CVADServer@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A426C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CVADServer *__fastcall CVADServer::`scalar deleting destructor'(CVADServer *this, char a2)
{
  CVADServer::~CVADServer(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x238);
  return this;
}
