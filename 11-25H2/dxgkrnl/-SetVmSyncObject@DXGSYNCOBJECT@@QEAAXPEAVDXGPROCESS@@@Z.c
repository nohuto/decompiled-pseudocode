/*
 * XREFs of ?SetVmSyncObject@DXGSYNCOBJECT@@QEAAXPEAVDXGPROCESS@@@Z @ 0x14032DB0C
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1402DE70C (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@_NPEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@PEAU_D3DDDI_NATIVEFENCEINFO@@PEAE@Z @ 0x14032D508 (-CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIO.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall DXGSYNCOBJECT::SetVmSyncObject(DXGSYNCOBJECT *this, unsigned __int64 a2)
{
  int v2; // ebx
  _DWORD *v3; // r8
  int v6; // eax
  int v7; // edx
  unsigned int v8; // ecx
  unsigned __int64 v9; // rax
  int v10; // eax

  v2 = 0;
  v3 = (_DWORD *)(a2 + 408);
  if ( a2 && (*v3 & 0x180) != 0 )
  {
    v6 = 1;
    v7 = 16;
  }
  else
  {
    v6 = 0;
    v7 = 0;
  }
  v8 = v7 | *((_DWORD *)this + 103) & 0xFFFFFFEF;
  *((_DWORD *)this + 103) = v8;
  if ( v6 )
  {
    if ( (*v3 & 0x100) != 0 )
      v9 = *(_QWORD *)(a2 + 592);
    else
      v9 = a2 & -(__int64)((*v3 & 0x80u) != 0);
    *((_QWORD *)this + 52) = v9;
    if ( !v9 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 6287;
      DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_pVmwpProcess", 6287LL, 0LL, 0LL, 0LL, 0LL);
      v8 = *((_DWORD *)this + 103);
    }
    v3 = (_DWORD *)(a2 + 408);
  }
  else
  {
    *((_QWORD *)this + 52) = 0LL;
  }
  if ( a2 )
  {
    if ( (*v3 & 0x104) == 0x104 )
    {
      v10 = (2 * *((_DWORD *)this + 100)) >> 1;
      if ( v10 == 5 || v10 == 18 )
        v2 = 32;
    }
  }
  *((_DWORD *)this + 103) = v2 | v8 & 0xFFFFFFDF;
}
