/*
 * XREFs of ?DestroyAdapterInfo@VIDMM_PROCESS@@QEAAXK@Z @ 0x1400BC068
 * Callers:
 *     ?CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z @ 0x1400BB46C (-CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z.c)
 *     ??1VIDMM_PROCESS@@QEAA@XZ @ 0x1400BBDF4 (--1VIDMM_PROCESS@@QEAA@XZ.c)
 * Callees:
 *     ??_GVIDMM_PROCESS_ADAPTER_INFO@@QEAAPEAXI@Z @ 0x14001CE9C (--_GVIDMM_PROCESS_ADAPTER_INFO@@QEAAPEAXI@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140035860 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1400DF530 (-RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 */

void __fastcall VIDMM_PROCESS::DestroyAdapterInfo(VIDMM_PROCESS *this, unsigned int a2)
{
  __int64 v3; // rbp
  VIDMM_GLOBAL **v4; // rbx
  unsigned int i; // edi
  __int64 *v6; // rdx
  __int64 v7; // rcx
  __int64 **v8; // r8
  struct _PCW_INSTANCE *v9; // rcx
  VIDMM_GLOBAL *v10; // rdx
  VIDMM_GLOBAL ***v11; // rcx
  VIDMM_GLOBAL *v12; // rcx

  v3 = a2;
  v4 = *(VIDMM_GLOBAL ***)(*((_QWORD *)this + 2) + 8LL * a2);
  if ( v4 )
  {
    DXGPUSHLOCK::AcquireExclusive((VIDMM_GLOBAL *)((char *)*v4 + 41080));
    for ( i = 0; i < *((_DWORD *)*v4 + 1736); ++i )
    {
      v6 = (__int64 *)((char *)v4[2] + 304 * (unsigned __int16)i + 8);
      v7 = *v6;
      if ( *v6 )
      {
        if ( *(__int64 **)(v7 + 8) != v6 || (v8 = (__int64 **)v6[1], *v8 != v6) )
          __fastfail(3u);
        *v8 = (__int64 *)v7;
        *(_QWORD *)(v7 + 8) = v8;
        *v6 = 0LL;
        v6[1] = 0LL;
      }
      v9 = (struct _PCW_INSTANCE *)v6[31];
      if ( v9 )
        PcwCloseInstance(v9);
    }
    v10 = v4[3];
    if ( *((VIDMM_GLOBAL ***)v10 + 1) != v4 + 3 || (v11 = (VIDMM_GLOBAL ***)v4[4], *v11 != v4 + 3) )
      __fastfail(3u);
    *v11 = (VIDMM_GLOBAL **)v10;
    *((_QWORD *)v10 + 1) = v11;
    *(_QWORD *)(*((_QWORD *)this + 2) + 8 * v3) = 0LL;
    v12 = *v4;
    *((_QWORD *)v12 + 5136) = 0LL;
    ExReleasePushLockExclusiveEx((char *)v12 + 41080, 0LL);
    KeLeaveCriticalRegion();
    VIDMM_GLOBAL::RequestNewBudget(*v4, 1);
    VIDMM_PROCESS_ADAPTER_INFO::`scalar deleting destructor'((VIDMM_PROCESS_ADAPTER_INFO *)v4);
  }
}
