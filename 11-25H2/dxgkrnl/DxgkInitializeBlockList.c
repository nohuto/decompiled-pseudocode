/*
 * XREFs of DxgkInitializeBlockList @ 0x140232690
 * Callers:
 *     ?InitializeDriverWorkarounds@DXGADAPTER@@AEAAXXZ @ 0x14018FD48 (-InitializeDriverWorkarounds@DXGADAPTER@@AEAAXXZ.c)
 *     DpiInitializeBlockList @ 0x1402325D0 (DpiInitializeBlockList.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     DxgkConvertWddmVersionToD3DKMTDriverVersion @ 0x14007DFC0 (DxgkConvertWddmVersionToD3DKMTDriverVersion.c)
 *     ?CheckKernelBlockList@@YAJPEAU_FDO_CONTEXT@@IIPEBGW4_QAI_DRIVERVERSION@@@Z @ 0x1402313EC (-CheckKernelBlockList@@YAJPEAU_FDO_CONTEXT@@IIPEBGW4_QAI_DRIVERVERSION@@@Z.c)
 *     ?CheckRuntimeBlockList@@YAJPEAU_FDO_CONTEXT@@IIPEBGW4_QAI_DRIVERVERSION@@@Z @ 0x1402315F0 (-CheckRuntimeBlockList@@YAJPEAU_FDO_CONTEXT@@IIPEBGW4_QAI_DRIVERVERSION@@@Z.c)
 */

__int64 __fastcall DxgkInitializeBlockList(__int64 a1, int a2, _QWORD *a3)
{
  __int64 v3; // rbx
  unsigned int v6; // esi
  unsigned int v7; // r14d
  const unsigned __int16 *v8; // r15
  enum _QAI_DRIVERVERSION v9; // r12d
  int v10; // edi
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // [rsp+30h] [rbp-20h] BYREF
  __int64 v14; // [rsp+38h] [rbp-18h]
  char v15; // [rsp+40h] [rbp-10h]

  v3 = *(_QWORD *)(a1 + 64);
  if ( !v3 || *(_DWORD *)(v3 + 16) != 1953656900 || *(_DWORD *)(v3 + 20) != 2 )
    return 3221225485LL;
  if ( a3 )
    *a3 = v3 + 5848;
  if ( *(_BYTE *)(v3 + 5840) )
    return 0LL;
  v13 = -1;
  v14 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v15 = 1;
    v13 = 8015;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, (__int64)a3, 8015);
  }
  else
  {
    v15 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v13, 8015);
  v6 = *(_DWORD *)(v3 + 1124);
  v7 = *(_DWORD *)(v3 + 1128);
  v8 = *(const unsigned __int16 **)(v3 + 4968);
  v9 = (unsigned int)DxgkConvertWddmVersionToD3DKMTDriverVersion(a2);
  v10 = CheckKernelBlockList((struct _FDO_CONTEXT *)v3, v6, v7, v8, v9);
  if ( v10 >= 0 )
  {
    v10 = CheckRuntimeBlockList((unsigned __int16 **)v3, v6, v7, v8, v9);
    if ( v10 >= 0 )
      *(_BYTE *)(v3 + 5840) = 1;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v13);
  if ( v15 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v11, (__int64)&EventProfilerExit, v12, v13);
  }
  return (unsigned int)v10;
}
