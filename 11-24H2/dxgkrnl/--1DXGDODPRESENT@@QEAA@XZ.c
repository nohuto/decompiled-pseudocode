/*
 * XREFs of ??1DXGDODPRESENT@@QEAA@XZ @ 0x1402814EC
 * Callers:
 *     ??_GDXGDODPRESENT@@QEAAPEAXI@Z @ 0x1400671A0 (--_GDXGDODPRESENT@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??_GBLTQUEUE@@QEAAPEAXI@Z @ 0x140078198 (--_GBLTQUEUE@@QEAAPEAXI@Z.c)
 */

void __fastcall DXGDODPRESENT::~DXGDODPRESENT(DXGDODPRESENT *this)
{
  unsigned int i; // ebx

  for ( i = 0; i < *(_DWORD *)this; ++i )
    BLTQUEUE::`scalar deleting destructor'((BLTQUEUE *)(*((_QWORD *)this + 1) + 3040LL * i), 0);
}
