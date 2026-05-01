/*
 * XREFs of ??_ECProtocolActivatedEventArgs@@EEAAPEAXI@Z @ 0x18032D9CC
 * Callers:
 *     ??_ECProtocolActivatedEventArgs@@GBDI@EAAPEAXI@Z @ 0x18032D790 (--_ECProtocolActivatedEventArgs@@GBDI@EAAPEAXI@Z.c)
 *     ??_ECProtocolActivatedEventArgs@@GFA@EAAPEAXI@Z @ 0x18032D7B0 (--_ECProtocolActivatedEventArgs@@GFA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CProtocolActivatedEventArgs@@EEAA@XZ @ 0x18032D21C (--1CProtocolActivatedEventArgs@@EEAA@XZ.c)
 */

CProtocolActivatedEventArgs *__fastcall CProtocolActivatedEventArgs::`vector deleting destructor'(
        CProtocolActivatedEventArgs *this,
        char a2)
{
  CProtocolActivatedEventArgs::~CProtocolActivatedEventArgs(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x160);
  return this;
}
