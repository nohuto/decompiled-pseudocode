/*
 * XREFs of ?AddDevice@DXGPROCESS@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1403BCB18
 * Callers:
 *     ?CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EEEPEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@E@Z @ 0x1403A4C78 (-CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIE.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall DXGPROCESS::AddDevice(DXGPROCESS *this, struct DXGDEVICE *a2)
{
  int v3; // r8d
  _QWORD *v5; // rcx
  _QWORD *v6; // rax
  __int64 v7; // rdx

  v3 = *((_DWORD *)a2 + 116);
  if ( (*((_DWORD *)this + 102) & 1) != 0 )
  {
    if ( v3 == 2 )
      goto LABEL_3;
  }
  else if ( v3 != 2 )
  {
    goto LABEL_3;
  }
  WdLogSingleEntry0(1LL);
  WdLogGlobalForLineNumber = 6446;
  DxgkLogInternalTriageEvent(
    0LL,
    262146LL,
    0xFFFFFFFFLL,
    L"(m_bCsrssProcess && pDevice->IsCddDevice()) || (!m_bCsrssProcess && !pDevice->IsCddDevice())",
    6446LL,
    0LL,
    0LL,
    0LL,
    0LL);
LABEL_3:
  v5 = (_QWORD *)(((unsigned __int64)a2 + 24) & -(__int64)(a2 != 0LL));
  v6 = (_QWORD *)((char *)this + 320);
  v7 = *((_QWORD *)this + 40);
  if ( *(DXGPROCESS **)(v7 + 8) != (DXGPROCESS *)((char *)this + 320) )
    __fastfail(3u);
  *v5 = v7;
  *(_QWORD *)((((unsigned __int64)a2 + 24) & -(__int64)(a2 != 0LL)) + 8) = v6;
  *(_QWORD *)(v7 + 8) = v5;
  *v6 = v5;
  *((_BYTE *)this + 336) = 1;
}
