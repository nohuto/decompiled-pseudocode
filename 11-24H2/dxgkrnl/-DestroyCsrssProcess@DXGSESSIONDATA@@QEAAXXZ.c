/*
 * XREFs of ?DestroyCsrssProcess@DXGSESSIONDATA@@QEAAXXZ @ 0x1401FA620
 * Callers:
 *     DxgkDestroyCsrssProcess @ 0x1401FCEA0 (DxgkDestroyCsrssProcess.c)
 * Callees:
 *     ??_GSESSION_ADAPTER@@QEAAPEAXI@Z @ 0x1400792A4 (--_GSESSION_ADAPTER@@QEAAPEAXI@Z.c)
 *     ?RemoveAllSourceViewFromSession@DXGSESSIONDATA@@QEAAXXZ @ 0x1403676B0 (-RemoveAllSourceViewFromSession@DXGSESSIONDATA@@QEAAXXZ.c)
 *     ?Cleanup@SESSION_ADAPTER@@QEAAXXZ @ 0x1403D8110 (-Cleanup@SESSION_ADAPTER@@QEAAXXZ.c)
 */

void __fastcall DXGSESSIONDATA::DestroyCsrssProcess(DXGSESSIONDATA **this)
{
  DXGSESSIONDATA *v2; // rbx
  SESSION_ADAPTER *v3; // rbp
  DXGSESSIONDATA *v4; // r14
  DXGSESSIONDATA *v5; // rcx
  DXGSESSIONDATA **v6; // rax

  DXGSESSIONDATA::RemoveAllSourceViewFromSession((DXGSESSIONDATA *)this);
  v2 = this[2323];
  while ( v2 != (DXGSESSIONDATA *)(this + 2323) )
  {
    v3 = (DXGSESSIONDATA *)((char *)v2 - 32);
    v4 = v2;
    v2 = *(DXGSESSIONDATA **)v2;
    SESSION_ADAPTER::Cleanup(v3);
    v5 = *(DXGSESSIONDATA **)v4;
    if ( *(DXGSESSIONDATA **)(*(_QWORD *)v4 + 8LL) != v4 || (v6 = (DXGSESSIONDATA **)*((_QWORD *)v4 + 1), *v6 != v4) )
      __fastfail(3u);
    *v6 = v5;
    *((_QWORD *)v5 + 1) = v6;
    if ( v3 )
      SESSION_ADAPTER::`scalar deleting destructor'(v3);
  }
  this[2333] = 0LL;
}
