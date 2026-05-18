/*
 * XREFs of ??_ECPortClientRefCounted@@MEAAPEAXI@Z @ 0x18000F5E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800025A4 (--3@YAXPEAX_K@Z.c)
 *     ?Disconnect@CPortClient@@QEAAXXZ @ 0x18000FE5C (-Disconnect@CPortClient@@QEAAXXZ.c)
 */

CPortClientRefCounted *__fastcall CPortClientRefCounted::`vector deleting destructor'(
        CPortClientRefCounted *this,
        char a2)
{
  *(_QWORD *)this = &CPortClient::`vftable';
  CPortClient::Disconnect(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
