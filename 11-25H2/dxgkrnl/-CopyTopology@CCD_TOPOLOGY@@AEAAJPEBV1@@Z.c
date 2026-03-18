/*
 * XREFs of ?CopyTopology@CCD_TOPOLOGY@@AEAAJPEBV1@@Z @ 0x140260EDC
 * Callers:
 *     ?AddActiveNonDesktopPathsToTopology@CCD_TOPOLOGY@@AEAAJPEAV1@_N@Z @ 0x14031A62C (-AddActiveNonDesktopPathsToTopology@CCD_TOPOLOGY@@AEAAJPEAV1@_N@Z.c)
 *     ?ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14031B21C (-ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z @ 0x140373174 (-Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     ?CopyPathModalityDescriptor@CCD_TOPOLOGY@@AEAAJPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEBU2@@Z @ 0x140260D5C (-CopyPathModalityDescriptor@CCD_TOPOLOGY@@AEAAJPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEBU2@@Z.c)
 *     ?GetMaximumAdapterCountInSession@DXGGLOBAL@@QEBAKXZ @ 0x14031D0E8 (-GetMaximumAdapterCountInSession@DXGGLOBAL@@QEBAKXZ.c)
 */

__int64 __fastcall CCD_TOPOLOGY::CopyTopology(
        CCD_TOPOLOGY *this,
        const struct CCD_TOPOLOGY *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rdi
  unsigned __int16 v8; // cx
  unsigned int v9; // esi
  __int64 v10; // rcx
  DXGGLOBAL *Global; // rax
  unsigned __int64 v12; // rax
  __int64 v13; // r9
  unsigned __int64 MaximumAdapterCountInSession; // kr00_8
  __int64 v15; // rcx

  if ( !a2 )
    return 3221225485LL;
  v6 = *((_QWORD *)this + 8);
  v7 = *((_QWORD *)a2 + 8);
  if ( !v6 )
    return 3221225507LL;
  v8 = *(_WORD *)(v7 + 20);
  if ( *(_WORD *)(v6 + 22) < v8 )
    return 3221225507LL;
  *(_WORD *)(v6 + 20) = v8;
  v9 = 0;
  *(_DWORD *)(*((_QWORD *)this + 8) + 32LL) = *(_DWORD *)(v7 + 32);
  *(_DWORD *)(*((_QWORD *)this + 8) + 24LL) = *(_DWORD *)(v7 + 24);
  *(_DWORD *)(*((_QWORD *)this + 8) + 36LL) = *(_DWORD *)(v7 + 36);
  v10 = *((_QWORD *)this + 8);
  *(_OWORD *)v10 = *(_OWORD *)v7;
  *(_DWORD *)(v10 + 16) = *(_DWORD *)(v7 + 16);
  while ( v9 < *(unsigned __int16 *)(v7 + 20) )
  {
    if ( (int)CCD_TOPOLOGY::CopyPathModalityDescriptor(
                (CCD_TOPOLOGY *)(296LL * v9),
                (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(296LL * v9 + *((_QWORD *)this + 8) + 56LL),
                (const struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(296LL * v9 + v7 + 56),
                a4) < 0 )
    {
      WdLogSingleEntry2(6LL, this, *((_QWORD *)this + 8));
      WdLogGlobalForLineNumber = 382;
      return 3221225495LL;
    }
    ++v9;
  }
  if ( *(_QWORD *)(v7 + 48) )
  {
    Global = DXGGLOBAL::GetGlobal();
    MaximumAdapterCountInSession = DXGGLOBAL::GetMaximumAdapterCountInSession(Global);
    v12 = 340 * MaximumAdapterCountInSession;
    if ( !is_mul_ok(MaximumAdapterCountInSession, 0x154uLL) )
      v12 = -1LL;
    *(_QWORD *)(*((_QWORD *)this + 8) + 48LL) = operator new[](v12, 0x63644356u, 256LL, v13);
    v15 = *((_QWORD *)this + 8);
    if ( !*(_QWORD *)(v15 + 48) )
    {
      WdLogSingleEntry2(6LL, this, *((_QWORD *)this + 8));
      WdLogGlobalForLineNumber = 396;
      return 3221225495LL;
    }
    *(_DWORD *)(v15 + 40) = *(_DWORD *)(v7 + 40);
    memmove(
      *(void **)(*((_QWORD *)this + 8) + 48LL),
      *(const void **)(v7 + 48),
      340LL * *(unsigned int *)(*((_QWORD *)this + 8) + 40LL));
  }
  return 0LL;
}
