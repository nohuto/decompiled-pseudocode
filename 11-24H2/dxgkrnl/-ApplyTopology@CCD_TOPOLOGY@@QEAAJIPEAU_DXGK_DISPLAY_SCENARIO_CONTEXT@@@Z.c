/*
 * XREFs of ?ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140347618
 * Callers:
 *     ?DisableDWMVirtualModeOnVidPnSource@@YAJII@Z @ 0x1401B9E28 (-DisableDWMVirtualModeOnVidPnSource@@YAJII@Z.c)
 *     DxgkApplyPathsModality @ 0x1403E2CA0 (DxgkApplyPathsModality.c)
 * Callees:
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x14003E5F0 (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ?CopyTopology@CCD_TOPOLOGY@@AEAAJPEBV1@@Z @ 0x140267DDC (-CopyTopology@CCD_TOPOLOGY@@AEAAJPEBV1@@Z.c)
 *     ?RemoveAllNonDesktopPaths@CCD_TOPOLOGY@@QEAAJPEAE@Z @ 0x140268310 (-RemoveAllNonDesktopPaths@CCD_TOPOLOGY@@QEAAJPEAE@Z.c)
 *     DxgkAcquireSessionModeChangeLock @ 0x140293650 (DxgkAcquireSessionModeChangeLock.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x140298418 (DxgkReleaseSessionModeChangeLock.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x14031B384 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x14031BDF0 (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     ?AddActiveNonDesktopPathsToTopology@CCD_TOPOLOGY@@AEAAJPEAV1@_N@Z @ 0x140321A18 (-AddActiveNonDesktopPathsToTopology@CCD_TOPOLOGY@@AEAAJPEAV1@_N@Z.c)
 *     ?ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403478E4 (-ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::ApplyTopology(
        CCD_TOPOLOGY *this,
        unsigned int a2,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3)
{
  int v6; // eax
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // ebx
  bool v10; // si
  __int64 v11; // r8
  __int64 v12; // r9
  int active; // eax
  unsigned __int16 v15; // cx
  __int64 v16; // rax
  unsigned __int16 v17; // ax
  int v18; // eax
  __int64 v19; // rax
  __int16 v20; // cx
  __int64 v21; // r8
  __int16 v22; // ax
  unsigned int i; // r9d
  __int64 v24; // rax
  __int64 v25; // rdx
  int v26; // eax
  unsigned __int8 v27[16]; // [rsp+28h] [rbp-49h] BYREF
  int v28; // [rsp+38h] [rbp-39h] BYREF
  __int128 v29; // [rsp+40h] [rbp-31h]
  __int64 v30; // [rsp+50h] [rbp-21h]
  __int16 v31; // [rsp+58h] [rbp-19h]
  __int128 v32; // [rsp+60h] [rbp-11h]
  __int64 v33; // [rsp+70h] [rbp-1h]
  __int64 v34; // [rsp+78h] [rbp+7h]
  char v35; // [rsp+80h] [rbp+Fh]
  int v36; // [rsp+84h] [rbp+13h]
  int v37; // [rsp+88h] [rbp+17h]
  __int64 v38; // [rsp+8Ch] [rbp+1Bh]
  __int64 v39; // [rsp+98h] [rbp+27h]
  bool v40; // [rsp+F0h] [rbp+7Fh] BYREF

  v6 = DxgkAcquireSessionModeChangeLock(1);
  v9 = v6;
  v10 = v6 >= 0;
  v40 = v6 >= 0;
  if ( v6 < 0 )
  {
    WdLogSingleEntry1(2LL, v6);
    WdLogGlobalForLineNumber = 2818;
    goto LABEL_12;
  }
  v28 = 0;
  v29 = 0LL;
  v30 = 0LL;
  v32 = 0LL;
  v31 = 0;
  v33 = 0LL;
  v34 = 0LL;
  v35 = 1;
  v36 = 0;
  v37 = 1;
  v38 = 0LL;
  v39 = 0LL;
  CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)&v28, 8LL, v7, v8);
  if ( (*((_DWORD *)this + 21) & 1) != 0 )
  {
LABEL_3:
    v9 = CCD_TOPOLOGY::ApplyTopologyWorker(this, a2, a3);
    goto LABEL_4;
  }
  LOBYTE(v11) = 1;
  active = CCD_TOPOLOGY::AddActiveNonDesktopPathsToTopology(this, (struct CCD_TOPOLOGY *)&v28, v11, v12);
  v9 = active;
  if ( active >= 0 )
  {
    if ( active == 255 )
      goto LABEL_3;
    if ( v34 )
      v15 = *(_WORD *)(v34 + 20);
    else
      v15 = 0;
    v16 = *((_QWORD *)this + 8);
    if ( v16 )
      v17 = *(_WORD *)(v16 + 20);
    else
      v17 = 0;
    if ( v15 <= v17 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2863;
    }
    v18 = CCD_TOPOLOGY::ApplyTopologyWorker((CCD_TOPOLOGY *)&v28, a2, a3);
    v9 = v18;
    if ( v18 < 0 )
    {
      WdLogSingleEntry1(2LL, v18);
      WdLogGlobalForLineNumber = 2868;
    }
    else
    {
      v27[0] = 0;
      CCD_TOPOLOGY::RemoveAllNonDesktopPaths((CCD_TOPOLOGY *)&v28, v27);
      if ( !v27[0] )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 2880;
      }
      v19 = *((_QWORD *)this + 8);
      if ( v19 )
        v20 = *(_WORD *)(v19 + 20);
      else
        v20 = 0;
      v21 = v34;
      if ( v34 )
        v22 = *(_WORD *)(v34 + 20);
      else
        v22 = 0;
      if ( v20 != v22 )
      {
        WdLogSingleEntry0(1LL);
        v21 = v34;
        WdLogGlobalForLineNumber = 2881;
      }
      for ( i = 0;
            i < *(_DWORD *)(v21 + 40);
            *(_DWORD *)(v25 + *(_QWORD *)(v21 + 48) + 80) &= ~*(_DWORD *)(340 * v24 + *(_QWORD *)(v21 + 48) + 232) )
      {
        v24 = i++;
        v25 = 340 * v24;
        *(_DWORD *)(v25 + *(_QWORD *)(v21 + 48) + 84) &= ~*(_DWORD *)(340 * v24 + *(_QWORD *)(v21 + 48) + 232);
      }
      v26 = CCD_TOPOLOGY::CopyTopology(this, (const struct CCD_TOPOLOGY *)&v28);
      v9 = v26;
      if ( v26 < 0 )
      {
        WdLogSingleEntry1(2LL, v26);
        WdLogGlobalForLineNumber = 2902;
      }
    }
    CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)&v28);
LABEL_12:
    DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v40);
    return v9;
  }
  WdLogSingleEntry1(2LL, active);
  WdLogGlobalForLineNumber = 2838;
LABEL_4:
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)&v28);
  if ( v10 )
    DxgkReleaseSessionModeChangeLock();
  return v9;
}
