/*
 * XREFs of ??_ECPortClient@@UEAAPEAXI@Z @ 0x14000E9C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CPortClient@@UEAA@XZ @ 0x140003B1C (--1CPortClient@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x140005174 (--3@YAXPEAX_K@Z.c)
 */

HANDLE *__fastcall CPortClient::`vector deleting destructor'(HANDLE *this, char a2)
{
  CPortClient::~CPortClient(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
