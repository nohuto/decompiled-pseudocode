/*
 * XREFs of ?Create@CTransitionWindowSnapshot@@SAJPEBUtagRECT@@PEAVCVisual@@PEAPEAV1@@Z @ 0x180053FDC
 * Callers:
 *     ?ForceAtlasInitialize@CContactManager@@QEAAX_K@Z @ 0x180053A04 (-ForceAtlasInitialize@CContactManager@@QEAAX_K@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??0CTransitionWindowSnapshot@@IEAA@XZ @ 0x1800540EC (--0CTransitionWindowSnapshot@@IEAA@XZ.c)
 *     ?Initialize@CTransitionWindowSnapshot@@MEAAJPEBUtagRECT@@PEAVCVisual@@@Z @ 0x1800546E0 (-Initialize@CTransitionWindowSnapshot@@MEAAJPEBUtagRECT@@PEAVCVisual@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CTransitionWindowSnapshot::Create(
        const struct tagRECT *a1,
        struct CVisual *a2,
        struct CTransitionWindowSnapshot **a3)
{
  CTransitionWindowSnapshot *v6; // rax
  CTransitionWindowSnapshot *v7; // rax
  volatile signed __int32 *v8; // rbx
  int v9; // eax
  unsigned int v10; // edi

  *a3 = 0LL;
  v6 = (CTransitionWindowSnapshot *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                        + 16LL))(
                                      WPF::g_pProcessHeap,
                                      368LL);
  if ( v6
    && (v7 = CTransitionWindowSnapshot::CTransitionWindowSnapshot(v6), (v8 = (volatile signed __int32 *)v7) != 0LL) )
  {
    v9 = CTransitionWindowSnapshot::Initialize(v7, a1, a2);
    v10 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x43u, 0LL);
    }
    else
    {
      *a3 = (struct CTransitionWindowSnapshot *)v8;
      _InterlockedIncrement(v8 + 2);
    }
    CBaseObject::Release((CBaseObject *)v8);
  }
  else
  {
    v10 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x41u, 0LL);
  }
  return v10;
}
