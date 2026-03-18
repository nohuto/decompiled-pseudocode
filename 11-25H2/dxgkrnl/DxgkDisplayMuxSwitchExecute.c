/*
 * XREFs of DxgkDisplayMuxSwitchExecute @ 0x1400892D8
 * Callers:
 *     NtDxgkDisplayMuxSwitchExecute @ 0x1401ADFA0 (NtDxgkDisplayMuxSwitchExecute.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?CheckFailed@@YA_NJW4_D3DKMT_DISPLAYMUX_SWITCH_ERROR_STAGE@@AEAU_DISPLAYMUX_SWITCH_CONTEXT@@IPEAD@Z @ 0x1400828A8 (-CheckFailed@@YA_NJW4_D3DKMT_DISPLAYMUX_SWITCH_ERROR_STAGE@@AEAU_DISPLAYMUX_SWITCH_CONTEXT@@IPEA.c)
 *     ?PerformSwitch@DISPLAY_MUX_SWITCH_OPERATION@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_STATUS@@PEAH@Z @ 0x140085690 (-PerformSwitch@DISPLAY_MUX_SWITCH_OPERATION@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_STATUS@@PEAH@Z.c)
 */

void __fastcall DxgkDisplayMuxSwitchExecute(_QWORD *a1, __int64 a2, __int64 a3)
{
  void *v4; // rcx
  NTSTATUS v5; // eax
  int *v6; // r8
  struct _D3DKMT_DISPLAYMUX_SWITCH_STATUS *v7; // rdx
  PVOID v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // [rsp+30h] [rbp-20h] BYREF
  __int64 v12; // [rsp+38h] [rbp-18h]
  char v13; // [rsp+40h] [rbp-10h]
  PVOID Object; // [rsp+60h] [rbp+10h] BYREF

  v11 = -1;
  v12 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v13 = 1;
    v11 = 2226;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter, a3, 2226);
  }
  else
  {
    v13 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v11, 2226);
  v4 = (void *)*a1;
  Object = 0LL;
  v5 = ObReferenceObjectByHandle(v4, 0x20000u, g_pDpDisplayMuxSwitchNtObject, 1, &Object, 0LL);
  if ( !CheckFailed(v5, 1024, (__int64)(a1 + 1), 0x123Fu) )
  {
    v6 = (int *)(a1 + 28);
    v7 = (struct _D3DKMT_DISPLAYMUX_SWITCH_STATUS *)(a1 + 8);
    v8 = Object;
    DISPLAY_MUX_SWITCH_OPERATION::PerformSwitch(*(DISPLAY_MUX_SWITCH_OPERATION **)Object, v7, v6);
    ObfDereferenceObject(v8);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v11);
  if ( v13 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v9, (__int64)&EventProfilerExit, v10, v11);
  }
}
