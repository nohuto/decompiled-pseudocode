/*
 * XREFs of DxgkDisplayMuxSwitchFinish @ 0x1400893E0
 * Callers:
 *     NtDxgkDisplayMuxSwitchFinish @ 0x1401AE1A0 (NtDxgkDisplayMuxSwitchFinish.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?CheckFailed@@YA_NJW4_D3DKMT_DISPLAYMUX_SWITCH_ERROR_STAGE@@AEAU_DISPLAYMUX_SWITCH_CONTEXT@@IPEAD@Z @ 0x1400828A8 (-CheckFailed@@YA_NJW4_D3DKMT_DISPLAYMUX_SWITCH_ERROR_STAGE@@AEAU_DISPLAYMUX_SWITCH_CONTEXT@@IPEA.c)
 *     ?FinishSwitch@DISPLAY_MUX_SWITCH_OPERATION@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_STATUS@@@Z @ 0x140084288 (-FinishSwitch@DISPLAY_MUX_SWITCH_OPERATION@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_STATUS@@@Z.c)
 */

void __fastcall DxgkDisplayMuxSwitchFinish(_QWORD *a1, __int64 a2, __int64 a3)
{
  void *v4; // rcx
  NTSTATUS v5; // eax
  struct _D3DKMT_DISPLAYMUX_SWITCH_STATUS *v6; // rdx
  PVOID v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // r8
  int v10; // [rsp+30h] [rbp-20h] BYREF
  __int64 v11; // [rsp+38h] [rbp-18h]
  char v12; // [rsp+40h] [rbp-10h]
  PVOID Object; // [rsp+60h] [rbp+10h] BYREF

  v10 = -1;
  v11 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v12 = 1;
    v10 = 2227;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter, a3, 2227);
  }
  else
  {
    v12 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v10, 2227);
  v4 = (void *)*a1;
  Object = 0LL;
  v5 = ObReferenceObjectByHandle(v4, 0x20000u, g_pDpDisplayMuxSwitchNtObject, 1, &Object, 0LL);
  if ( !CheckFailed(v5, 1280, (__int64)(a1 + 1), 0x125Bu) )
  {
    v6 = (struct _D3DKMT_DISPLAYMUX_SWITCH_STATUS *)(a1 + 8);
    v7 = Object;
    DISPLAY_MUX_SWITCH_OPERATION::FinishSwitch(*(DISPLAY_MUX_SWITCH_OPERATION **)Object, v6);
    ObfDereferenceObject(v7);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v10);
  if ( v12 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v8, (__int64)&EventProfilerExit, v9, v10);
  }
}
