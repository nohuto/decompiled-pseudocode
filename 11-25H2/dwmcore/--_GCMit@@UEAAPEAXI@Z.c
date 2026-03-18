/*
 * XREFs of ??_GCMit@@UEAAPEAXI@Z @ 0x1802636D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18025C2F4 (--3@YAXPEAX_K@Z.c)
 *     ??1CMit@@UEAA@XZ @ 0x18026368C (--1CMit@@UEAA@XZ.c)
 */

CMit *__fastcall CMit::`scalar deleting destructor'(CMit *this, char a2)
{
  CMit::~CMit(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
