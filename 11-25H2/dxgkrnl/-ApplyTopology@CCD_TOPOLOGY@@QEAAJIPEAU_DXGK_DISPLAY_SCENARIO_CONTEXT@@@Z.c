/*
 * XREFs of ?ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14031B21C
 * Callers:
 *     ?DisableDWMVirtualModeOnVidPnSource@@YAJII@Z @ 0x1401B7878 (-DisableDWMVirtualModeOnVidPnSource@@YAJII@Z.c)
 *     DxgkApplyPathsModality @ 0x14031A340 (DxgkApplyPathsModality.c)
 * Callees:
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x14003EC00 (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ?CopyTopology@CCD_TOPOLOGY@@AEAAJPEBV1@@Z @ 0x140260EDC (-CopyTopology@CCD_TOPOLOGY@@AEAAJPEBV1@@Z.c)
 *     ?RemoveAllNonDesktopPaths@CCD_TOPOLOGY@@QEAAJPEAE@Z @ 0x140261410 (-RemoveAllNonDesktopPaths@CCD_TOPOLOGY@@QEAAJPEAE@Z.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x140283874 (DxgkReleaseSessionModeChangeLock.c)
 *     DxgkAcquireSessionModeChangeLock @ 0x140287094 (DxgkAcquireSessionModeChangeLock.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1402CDFF8 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?AddActiveNonDesktopPathsToTopology@CCD_TOPOLOGY@@AEAAJPEAV1@_N@Z @ 0x14031A62C (-AddActiveNonDesktopPathsToTopology@CCD_TOPOLOGY@@AEAAJPEAV1@_N@Z.c)
 *     ?ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14031B4E8 (-ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x140374C0C (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::ApplyTopology(
        CCD_TOPOLOGY *this,
        unsigned int a2,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  bool v8; // si
  int active; // eax
  unsigned __int16 v11; // cx
  __int64 v12; // rax
  unsigned __int16 v13; // ax
  int v14; // eax
  __int64 v15; // rax
  __int16 v16; // cx
  __int64 v17; // r8
  __int16 v18; // ax
  __int64 i; // r9
  __int64 v20; // rax
  __int64 v21; // rdx
  int v22; // eax
  unsigned __int8 v23[16]; // [rsp+28h] [rbp-49h] BYREF
  int v24; // [rsp+38h] [rbp-39h] BYREF
  __int128 v25; // [rsp+40h] [rbp-31h]
  __int64 v26; // [rsp+50h] [rbp-21h]
  __int16 v27; // [rsp+58h] [rbp-19h]
  __int128 v28; // [rsp+60h] [rbp-11h]
  __int64 v29; // [rsp+70h] [rbp-1h]
  __int64 v30; // [rsp+78h] [rbp+7h]
  char v31; // [rsp+80h] [rbp+Fh]
  int v32; // [rsp+84h] [rbp+13h]
  int v33; // [rsp+88h] [rbp+17h]
  __int64 v34; // [rsp+8Ch] [rbp+1Bh]
  __int64 v35; // [rsp+98h] [rbp+27h]
  bool v36; // [rsp+F0h] [rbp+7Fh] BYREF

  v6 = DxgkAcquireSessionModeChangeLock(1);
  v7 = v6;
  v8 = v6 >= 0;
  v36 = v6 >= 0;
  if ( v6 < 0 )
  {
    WdLogSingleEntry1(2LL, v6);
    WdLogGlobalForLineNumber = 2818;
    goto LABEL_12;
  }
  v24 = 0;
  v25 = 0LL;
  v26 = 0LL;
  v28 = 0LL;
  v27 = 0;
  v29 = 0LL;
  v30 = 0LL;
  v31 = 1;
  v32 = 0;
  v33 = 1;
  v34 = 0LL;
  v35 = 0LL;
  CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)&v24, 8u);
  if ( (*((_DWORD *)this + 21) & 1) != 0 )
  {
LABEL_3:
    v7 = CCD_TOPOLOGY::ApplyTopologyWorker(this, a2, a3);
    goto LABEL_4;
  }
  active = CCD_TOPOLOGY::AddActiveNonDesktopPathsToTopology(this, (struct CCD_TOPOLOGY *)&v24, 1);
  v7 = active;
  if ( active >= 0 )
  {
    if ( active == 255 )
      goto LABEL_3;
    if ( v30 )
      v11 = *(_WORD *)(v30 + 20);
    else
      v11 = 0;
    v12 = *((_QWORD *)this + 8);
    if ( v12 )
      v13 = *(_WORD *)(v12 + 20);
    else
      v13 = 0;
    if ( v11 <= v13 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2863;
    }
    v14 = CCD_TOPOLOGY::ApplyTopologyWorker((CCD_TOPOLOGY *)&v24, a2, a3);
    v7 = v14;
    if ( v14 < 0 )
    {
      WdLogSingleEntry1(2LL, v14);
      WdLogGlobalForLineNumber = 2868;
    }
    else
    {
      v23[0] = 0;
      CCD_TOPOLOGY::RemoveAllNonDesktopPaths((CCD_TOPOLOGY *)&v24, v23);
      if ( !v23[0] )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 2880;
      }
      v15 = *((_QWORD *)this + 8);
      if ( v15 )
        v16 = *(_WORD *)(v15 + 20);
      else
        v16 = 0;
      v17 = v30;
      if ( v30 )
        v18 = *(_WORD *)(v30 + 20);
      else
        v18 = 0;
      if ( v16 != v18 )
      {
        WdLogSingleEntry0(1LL);
        v17 = v30;
        WdLogGlobalForLineNumber = 2881;
      }
      for ( i = 0LL;
            (unsigned int)i < *(_DWORD *)(v17 + 40);
            *(_DWORD *)(v21 + *(_QWORD *)(v17 + 48) + 80) &= ~*(_DWORD *)(340 * v20 + *(_QWORD *)(v17 + 48) + 232) )
      {
        v20 = (unsigned int)i;
        i = (unsigned int)(i + 1);
        v21 = 340 * v20;
        *(_DWORD *)(v21 + *(_QWORD *)(v17 + 48) + 84) &= ~*(_DWORD *)(340 * v20 + *(_QWORD *)(v17 + 48) + 232);
      }
      v22 = CCD_TOPOLOGY::CopyTopology(this, (const struct CCD_TOPOLOGY *)&v24, v17, i);
      v7 = v22;
      if ( v22 < 0 )
      {
        WdLogSingleEntry1(2LL, v22);
        WdLogGlobalForLineNumber = 2902;
      }
    }
    CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)&v24);
LABEL_12:
    DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v36);
    return v7;
  }
  WdLogSingleEntry1(2LL, active);
  WdLogGlobalForLineNumber = 2838;
LABEL_4:
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)&v24);
  if ( v8 )
    DxgkReleaseSessionModeChangeLock();
  return v7;
}
