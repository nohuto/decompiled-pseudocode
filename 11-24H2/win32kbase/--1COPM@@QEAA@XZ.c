/*
 * XREFs of ??1COPM@@QEAA@XZ @ 0x14008AE80
 * Callers:
 *     ?Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x140164AC0 (-Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     ??1CMutex@OPM@@QEAA@XZ @ 0x14008B4A0 (--1CMutex@OPM@@QEAA@XZ.c)
 *     ??1?$COPMSimpleBufferPool@U_DXGKMDT_OPM_REQUESTED_INFORMATION@@@@QEAA@XZ @ 0x14008C374 (--1-$COPMSimpleBufferPool@U_DXGKMDT_OPM_REQUESTED_INFORMATION@@@@QEAA@XZ.c)
 *     ??1?$CList@VCOPMProtectedOutput@@@OPM@@QEAA@XZ @ 0x14008C3AC (--1-$CList@VCOPMProtectedOutput@@@OPM@@QEAA@XZ.c)
 */

void __fastcall COPM::~COPM(COPM *this)
{
  OPM::CMutex::~CMutex((COPM *)((char *)this + 56));
  OPM::CMutex::~CMutex((COPM *)((char *)this + 48));
  OPM::CList<COPMProtectedOutput>::~CList<COPMProtectedOutput>((char *)this + 24);
  COPMSimpleBufferPool<_DXGKMDT_OPM_REQUESTED_INFORMATION>::~COPMSimpleBufferPool<_DXGKMDT_OPM_REQUESTED_INFORMATION>((char *)this + 16);
  COPMSimpleBufferPool<_DXGKMDT_OPM_REQUESTED_INFORMATION>::~COPMSimpleBufferPool<_DXGKMDT_OPM_REQUESTED_INFORMATION>((char *)this + 8);
  COPMSimpleBufferPool<_DXGKMDT_OPM_REQUESTED_INFORMATION>::~COPMSimpleBufferPool<_DXGKMDT_OPM_REQUESTED_INFORMATION>(this);
}
