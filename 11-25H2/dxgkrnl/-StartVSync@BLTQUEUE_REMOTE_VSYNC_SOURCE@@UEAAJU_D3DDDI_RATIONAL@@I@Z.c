/*
 * XREFs of ?StartVSync@BLTQUEUE_REMOTE_VSYNC_SOURCE@@UEAAJU_D3DDDI_RATIONAL@@I@Z @ 0x14027C870
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ @ 0x14004CB54 (-GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ.c)
 *     DXGKCALLONEXIT__lambda_f2b9d226f722eaa398f70d82a0c06a55___ @ 0x140092640 (DXGKCALLONEXIT__lambda_f2b9d226f722eaa398f70d82a0c06a55___.c)
 *     _DXGKCALLONEXIT__lambda_f2b9d226f722eaa398f70d82a0c06a55____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT @ 0x140092660 (_DXGKCALLONEXIT__lambda_f2b9d226f722eaa398f70d82a0c06a55____--_2_--DXGKCALLONEXIT--_DXGKCALLONEX.c)
 *     ?FindMappingFromGuestId@REMOTEMONITORMAPPING@@QEAAJPEAUPATH_IDENTIFIER_GUEST@1@PEAUPATH_IDENTIFIER_HOST@1@@Z @ 0x140187894 (-FindMappingFromGuestId@REMOTEMONITORMAPPING@@QEAAJPEAUPATH_IDENTIFIER_GUEST@1@PEAUPATH_IDENTIFI.c)
 *     ?VmBusSendVsyncControl@DXG_GUEST_GLOBAL_VMBUS@@QEAAJU_LUID@@IPEAX_N@Z @ 0x140228AB8 (-VmBusSendVsyncControl@DXG_GUEST_GLOBAL_VMBUS@@QEAAJU_LUID@@IPEAX_N@Z.c)
 */

__int64 __fastcall BLTQUEUE_REMOTE_VSYNC_SOURCE::StartVSync(
        BLTQUEUE_REMOTE_VSYNC_SOURCE *this,
        struct _D3DDDI_RATIONAL a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rsi
  DXGDODPRESENT *v7; // rcx
  struct DXGADAPTER *Adapter; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  struct DXGADAPTER *v13; // rax
  __int64 v14; // rcx
  struct DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v16; // rax
  DXGDODPRESENT *v17; // rcx
  struct DXGADAPTER *v18; // rax
  __int64 v19; // rdx
  DXG_GUEST_GLOBAL_VMBUS *v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned int v23; // ebx
  struct _LUID v24; // rbx
  unsigned int v25; // r14d
  struct DXGADAPTER *v26; // rax
  __int64 v27; // rdx
  struct _LUID v28; // [rsp+50h] [rbp-19h] BYREF
  unsigned int v29; // [rsp+58h] [rbp-11h]
  __int64 v30; // [rsp+60h] [rbp-9h] BYREF
  int v31; // [rsp+68h] [rbp-1h]
  int v32; // [rsp+6Ch] [rbp+3h]
  _QWORD v33[4]; // [rsp+70h] [rbp+7h] BYREF
  _BYTE v34[32]; // [rsp+90h] [rbp+27h] BYREF
  int MappingFromGuestId; // [rsp+D0h] [rbp+67h] BYREF
  int v36; // [rsp+E8h] [rbp+7Fh] BYREF

  v5 = (unsigned int)a3;
  if ( *((_BYTE *)this + 104) )
    return 3221225473LL;
  v7 = (DXGDODPRESENT *)*((_QWORD *)this + 12);
  if ( !v7 )
  {
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))WdLogNewEntry5_WdTrace)(0LL, a2, a3, a4);
    WdLogGlobalForLineNumber = 62;
    return 3221225473LL;
  }
  if ( (_DWORD)a3 == -1 )
  {
    Adapter = DXGDODPRESENT::GetAdapter(v7);
    WdLogSingleEntry1(3LL, Adapter);
    WdLogGlobalForLineNumber = 69;
    return 3221225473LL;
  }
  if ( !*((_BYTE *)DXGGLOBAL::GetGlobal() + 305224) )
  {
    WdLogNewEntry5_WdTrace(v10, v9, v11, v12);
    WdLogGlobalForLineNumber = 76;
    return 3221225473LL;
  }
  MappingFromGuestId = 0;
  v33[1] = &MappingFromGuestId;
  v36 = 3;
  v33[2] = &v36;
  v33[0] = this;
  DXGKCALLONEXIT__lambda_f2b9d226f722eaa398f70d82a0c06a55_((__int64)v34, (__int64)v33);
  v13 = DXGDODPRESENT::GetAdapter(*((DXGDODPRESENT **)this + 12));
  v32 = 0;
  v31 = v5;
  v14 = *(_QWORD *)((char *)v13 + 412);
  v28 = 0LL;
  v29 = 0;
  v30 = v14;
  Global = DXGGLOBAL::GetGlobal();
  MappingFromGuestId = REMOTEMONITORMAPPING::FindMappingFromGuestId(
                         (struct _KTHREAD **)Global + 38147,
                         (struct REMOTEMONITORMAPPING::PATH_IDENTIFIER_GUEST *)&v30,
                         (struct REMOTEMONITORMAPPING::PATH_IDENTIFIER_HOST *)&v28);
  if ( MappingFromGuestId < 0 )
  {
    v16 = DXGDODPRESENT::GetAdapter(*((DXGDODPRESENT **)this + 12));
    WdLogSingleEntry2(2LL, v16, v5);
    v17 = (DXGDODPRESENT *)*((_QWORD *)this + 12);
    WdLogGlobalForLineNumber = 97;
    v18 = DXGDODPRESENT::GetAdapter(v17);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Failed to find host mapping for adapter 0x%I64x, target id 0x%I64x",
      (__int64)v18,
      v5,
      0LL,
      0LL,
      0LL);
    v36 = 0;
LABEL_15:
    v23 = MappingFromGuestId;
    goto LABEL_16;
  }
  v20 = (DXG_GUEST_GLOBAL_VMBUS *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 206);
  if ( !v20 )
  {
    WdLogNewEntry5_WdTrace(0LL, v19, v21, v22);
    WdLogGlobalForLineNumber = 107;
    v23 = -1073741823;
    MappingFromGuestId = -1073741823;
    v36 = 1;
LABEL_16:
    DXGKCALLONEXIT__lambda_f2b9d226f722eaa398f70d82a0c06a55____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT((__int64)v34);
    return v23;
  }
  v24 = v28;
  v25 = v29;
  MappingFromGuestId = DXG_GUEST_GLOBAL_VMBUS::VmBusSendVsyncControl(v20, v28, v29, (char *)this + 72, 1);
  if ( MappingFromGuestId < 0 )
  {
    v26 = DXGDODPRESENT::GetAdapter(*((DXGDODPRESENT **)this + 12));
    WdLogSingleEntry3(3LL, v26, v5, v27);
    WdLogGlobalForLineNumber = 117;
    v36 = 2;
    goto LABEL_15;
  }
  KeSetTimerEx((PKTIMER)((char *)this + 8), (LARGE_INTEGER)-300000000LL, 0, 0LL);
  *((_BYTE *)this + 104) = 1;
  *(struct _LUID *)((char *)this + 108) = v24;
  *((_DWORD *)this + 29) = v25;
  DXGKCALLONEXIT__lambda_f2b9d226f722eaa398f70d82a0c06a55____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT((__int64)v34);
  return (unsigned int)MappingFromGuestId;
}
