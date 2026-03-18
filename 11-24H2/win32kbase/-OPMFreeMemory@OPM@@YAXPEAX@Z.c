/*
 * XREFs of ?OPMFreeMemory@OPM@@YAXPEAX@Z @ 0x14008C2B0
 * Callers:
 *     NtGdiConfigureOPMProtectedOutput @ 0x14008A6A0 (NtGdiConfigureOPMProtectedOutput.c)
 *     NtGdiSetOPMSigningKeyAndSequenceNumbers @ 0x14008A9A0 (NtGdiSetOPMSigningKeyAndSequenceNumbers.c)
 *     NtGdiGetCertificateByHandle @ 0x14008ABA0 (NtGdiGetCertificateByHandle.c)
 *     ??_ECOPMProtectedOutput@@UEAAPEAXI@Z @ 0x14008AFE0 (--_ECOPMProtectedOutput@@UEAAPEAXI@Z.c)
 *     ?Configure@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_CONFIGURE_PARAMETERS@@KPEBE@Z @ 0x14008B094 (-Configure@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_CONFIGURE_PARAMETERS@@KPEBE@Z.c)
 *     ??_GCMutex@OPM@@QEAAPEAXI@Z @ 0x14008B470 (--_GCMutex@OPM@@QEAAPEAXI@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAX$$A6AXPEAX@Z$1?OPMFreeMemory@OPM@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x14008BA98 (--1-$unique_storage@U-$resource_policy@PEAX$$A6AXPEAX@Z$1-OPMFreeMemory@OPM@@YAX0@ZU-$integral_c.c)
 *     ?GetInformation@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_GET_INFO_PARAMETERS@@PEAU_DXGKMDT_OPM_REQUESTED_INFORMATION@@@Z @ 0x14008BE1C (-GetInformation@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_GET_INFO_PARAMETERS@@PEAU_DXGKMDT_OPM.c)
 *     ??1?$COPMSimpleBufferPool@U_DXGKMDT_OPM_REQUESTED_INFORMATION@@@@QEAA@XZ @ 0x14008C374 (--1-$COPMSimpleBufferPool@U_DXGKMDT_OPM_REQUESTED_INFORMATION@@@@QEAA@XZ.c)
 *     ??1?$CList@VCOPMProtectedOutput@@@OPM@@QEAA@XZ @ 0x14008C3AC (--1-$CList@VCOPMProtectedOutput@@@OPM@@QEAA@XZ.c)
 *     ?AddElement@?$CList@VCOPMProtectedOutput@@@OPM@@QEAAJPEAVCOPMProtectedOutput@@PEAK@Z @ 0x1401577F0 (-AddElement@-$CList@VCOPMProtectedOutput@@@OPM@@QEAAJPEAVCOPMProtectedOutput@@PEAK@Z.c)
 *     ?Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x140164AC0 (-Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 *     ??_ECMonitorPDO@OPM@@UEAAPEAXI@Z @ 0x1401C4030 (--_ECMonitorPDO@OPM@@UEAAPEAXI@Z.c)
 *     NtGdiGetCertificate @ 0x1401C6250 (NtGdiGetCertificate.c)
 * Callees:
 *     <none>
 */

void __fastcall OPM::OPMFreeMemory(OPM *this, void *a2)
{
  if ( this )
    ExFreePoolWithTag(this, 0x4D504F47u);
}
