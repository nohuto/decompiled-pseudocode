/*
 * XREFs of ??_ECPortClient@@UEAAPEAXI@Z @ 0x14000CE60
 * Callers:
 *     <none>
 * Callees:
 *     ??1CPortClient@@UEAA@XZ @ 0x140002EC8 (--1CPortClient@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x140004C34 (--3@YAXPEAX_K@Z.c)
 */

CPortClient *__fastcall CPortClient::`vector deleting destructor'(CPortClient *this, char a2)
{
  CPortClient::~CPortClient(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
