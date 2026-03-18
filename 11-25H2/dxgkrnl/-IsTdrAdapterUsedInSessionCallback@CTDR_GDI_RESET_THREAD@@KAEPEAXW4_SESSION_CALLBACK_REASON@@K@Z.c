/*
 * XREFs of ?IsTdrAdapterUsedInSessionCallback@CTDR_GDI_RESET_THREAD@@KAEPEAXW4_SESSION_CALLBACK_REASON@@K@Z @ 0x1401CA050
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     Feature_SavePairedAdapterInRemoteSession__private_IsEnabledDeviceUsageNoInline @ 0x140067DCC (Feature_SavePairedAdapterInRemoteSession__private_IsEnabledDeviceUsageNoInline.c)
 *     ?GetPairedRenderAdapterInRemoteSession@DXGSESSIONMGR@@QEAA?AU_LUID@@K@Z @ 0x1401F460C (-GetPairedRenderAdapterInRemoteSession@DXGSESSIONMGR@@QEAA-AU_LUID@@K@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1403037B0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 */

bool __fastcall CTDR_GDI_RESET_THREAD::IsTdrAdapterUsedInSessionCallback(__int64 a1, int a2, unsigned int a3)
{
  char v3; // bl
  struct DXGGLOBAL *Global; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  bool v9; // zf
  struct DXGGLOBAL *v11; // rax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  unsigned int v16; // [rsp+48h] [rbp+20h] BYREF
  int v17; // [rsp+4Ch] [rbp+24h]

  v3 = 0;
  if ( a2 || a3 == (unsigned int)RtlGetActiveConsoleId() )
    return 1;
  if ( (unsigned int)Feature_SavePairedAdapterInRemoteSession__private_IsEnabledDeviceUsageNoInline() )
  {
    Global = DXGGLOBAL::GetGlobal();
    DXGSESSIONMGR::GetPairedRenderAdapterInRemoteSession(*((DXGSESSIONMGR **)Global + 118), (unsigned int)&v16);
    v7 = *(_QWORD *)(a1 + 32);
    if ( v7 )
    {
      v8 = *(_QWORD *)(v7 + 412);
      if ( v16 == (_DWORD)v8 )
      {
        v9 = v17 == HIDWORD(v8);
        goto LABEL_7;
      }
      return v3;
    }
    return v17 || v16;
  }
  v11 = DXGGLOBAL::GetGlobal();
  SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(*((DXGSESSIONMGR **)v11 + 118), a3);
  if ( !SessionDataForSpecifiedSession )
    return 0;
  v13 = *(_QWORD *)(a1 + 32);
  v14 = *(_QWORD *)((char *)SessionDataForSpecifiedSession + 18508);
  if ( v13 )
  {
    v15 = *(_QWORD *)(v13 + 412);
    if ( (_DWORD)v14 == (_DWORD)v15 )
    {
      v9 = HIDWORD(v14) == HIDWORD(v15);
LABEL_7:
      if ( v9 )
        return 1;
    }
    return v3;
  }
  if ( HIDWORD(v14) )
    return 1;
  return (_DWORD)v14 != 0;
}
