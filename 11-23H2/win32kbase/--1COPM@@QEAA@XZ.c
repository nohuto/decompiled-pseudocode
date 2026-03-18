/*
 * XREFs of ??1COPM@@QEAA@XZ @ 0x1C00A96BC
 * Callers:
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C0134430 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     ??1CMutex@OPM@@QEAA@XZ @ 0x1C00A9710 (--1CMutex@OPM@@QEAA@XZ.c)
 *     ??1?$COPMSimpleBufferPool@U_DXGKMDT_OPM_COPP_COMPATIBLE_GET_INFO_PARAMETERS@@@@QEAA@XZ @ 0x1C00A9744 (--1-$COPMSimpleBufferPool@U_DXGKMDT_OPM_COPP_COMPATIBLE_GET_INFO_PARAMETERS@@@@QEAA@XZ.c)
 *     ??1?$COPMSimpleBufferPool@U_DXGKMDT_OPM_REQUESTED_INFORMATION@@@@QEAA@XZ @ 0x1C00A9780 (--1-$COPMSimpleBufferPool@U_DXGKMDT_OPM_REQUESTED_INFORMATION@@@@QEAA@XZ.c)
 *     ??1?$COPMSimpleBufferPool@U_DXGKMDT_OPM_GET_INFO_PARAMETERS@@@@QEAA@XZ @ 0x1C00A97BC (--1-$COPMSimpleBufferPool@U_DXGKMDT_OPM_GET_INFO_PARAMETERS@@@@QEAA@XZ.c)
 *     ??1?$CList@VCOPMProtectedOutput@@@OPM@@QEAA@XZ @ 0x1C00A97F8 (--1-$CList@VCOPMProtectedOutput@@@OPM@@QEAA@XZ.c)
 */

void __fastcall COPM::~COPM(COPM *this)
{
  OPM::CMutex::~CMutex((COPM *)((char *)this + 56));
  OPM::CMutex::~CMutex((COPM *)((char *)this + 48));
  OPM::CList<COPMProtectedOutput>::~CList<COPMProtectedOutput>((char *)this + 24);
  COPMSimpleBufferPool<_DXGKMDT_OPM_COPP_COMPATIBLE_GET_INFO_PARAMETERS>::~COPMSimpleBufferPool<_DXGKMDT_OPM_COPP_COMPATIBLE_GET_INFO_PARAMETERS>((char *)this + 16);
  COPMSimpleBufferPool<_DXGKMDT_OPM_REQUESTED_INFORMATION>::~COPMSimpleBufferPool<_DXGKMDT_OPM_REQUESTED_INFORMATION>((char *)this + 8);
  COPMSimpleBufferPool<_DXGKMDT_OPM_GET_INFO_PARAMETERS>::~COPMSimpleBufferPool<_DXGKMDT_OPM_GET_INFO_PARAMETERS>(this);
}
