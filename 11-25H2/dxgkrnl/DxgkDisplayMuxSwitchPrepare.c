/*
 * XREFs of DxgkDisplayMuxSwitchPrepare @ 0x1400894E4
 * Callers:
 *     NtDxgkDisplayMuxSwitchPrepare @ 0x1401AE370 (NtDxgkDisplayMuxSwitchPrepare.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028800 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?CreateSwitchOperation@DISPLAY_MUX_MGR@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_PREPARE@@@Z @ 0x140083518 (-CreateSwitchOperation@DISPLAY_MUX_MGR@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_PREPARE@@@Z.c)
 */

void __fastcall DxgkDisplayMuxSwitchPrepare(struct _D3DKMT_DISPLAYMUX_SWITCH_PREPARE *a1, __int64 a2, __int64 a3)
{
  DISPLAY_MUX_MGR *v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // r8
  _BYTE v7[16]; // [rsp+20h] [rbp-30h] BYREF
  int v8; // [rsp+30h] [rbp-20h] BYREF
  __int64 v9; // [rsp+38h] [rbp-18h]
  char v10; // [rsp+40h] [rbp-10h]

  v8 = -1;
  v9 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v10 = 1;
    v8 = 2225;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter, a3, 2225);
  }
  else
  {
    v10 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v8, 2225);
  DISPLAY_MUX_MGR::CreateSwitchOperation(qword_14015E3C0, a1);
  if ( *((int *)a1 + 22) >= 0 )
  {
    v4 = qword_14015E3C0;
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v7, (DISPLAY_MUX_MGR *)((char *)qword_14015E3C0 + 16), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v7);
    *(_OWORD *)((char *)v4 + 116) = 0LL;
    *((_DWORD *)v4 + 33) = 0;
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v7);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v8);
  if ( v10 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v5, (__int64)&EventProfilerExit, v6, v8);
  }
}
