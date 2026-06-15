/*
 * XREFs of ?Cleanup@CPipeInstance@@AEAAXXZ @ 0x14000E994
 * Callers:
 *     ??1CPipeInstance@@QEAA@XZ @ 0x140027834 (--1CPipeInstance@@QEAA@XZ.c)
 * Callees:
 *     ?DeactivateAPOsAndRemoveConnections@CPipeInstance@@QEAAXXZ @ 0x140006FE4 (-DeactivateAPOsAndRemoveConnections@CPipeInstance@@QEAAXXZ.c)
 *     ?RemoveAll@?$CAtlList@PEAVCChildSubmixInstance@@V?$CElementTraits@PEAVCChildSubmixInstance@@@ATL@@@ATL@@QEAAXXZ @ 0x14000E930 (-RemoveAll@-$CAtlList@PEAVCChildSubmixInstance@@V-$CElementTraits@PEAVCChildSubmixInstance@@@ATL.c)
 *     ?FreeNode@?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x14000EB64 (-FreeNode@-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionInstance@@@ATL@@@.c)
 *     ?RemoveAll@?$CAtlList@PEAVCVirtualProtectedOutput@@V?$CElementTraits@PEAVCVirtualProtectedOutput@@@ATL@@@ATL@@QEAAXXZ @ 0x14000EB8C (-RemoveAll@-$CAtlList@PEAVCVirtualProtectedOutput@@V-$CElementTraits@PEAVCVirtualProtectedOutput.c)
 *     ?RemoveHead@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAVCProcessNode@@XZ @ 0x14000EBF0 (-RemoveHead@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEA.c)
 *     ??_GCConnectionInstance@@QEAAPEAXI@Z @ 0x14000ECC8 (--_GCConnectionInstance@@QEAAPEAXI@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14005619C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1400590C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     WPP_SF_ @ 0x1400659D0 (WPP_SF_.c)
 *     WPP_SF_q @ 0x14006C314 (WPP_SF_q.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CPipeInstance::Cleanup(struct IAudioProcessor **this)
{
  struct IAudioProcessor **v2; // rsi
  struct IAudioProcessor *v3; // rcx
  struct IAudioProcessor *v4; // rax
  __int64 *v5; // rdi
  bool v6; // zf
  __int64 v7; // rax
  CConnectionInstance *v8; // rbp
  unsigned int v9; // edx
  __int64 *v10; // rdx
  __int64 v11; // rax
  void (__fastcall ***v12)(_QWORD, __int64); // rdi

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 39LL, &WPP_ece7ed133f5c32246e9f73031954d020_Traceguids, this);
  }
  CPipeInstance::DeactivateAPOsAndRemoveConnections(this);
  if ( this[10] )
  {
    v2 = this + 8;
    do
    {
      v3 = *v2;
      if ( !*v2 )
LABEL_16:
        ATL::AtlThrowImpl(-2147467259);
      v4 = *(struct IAudioProcessor **)v3;
      v5 = (__int64 *)*((_QWORD *)v3 + 2);
      *v2 = *(struct IAudioProcessor **)v3;
      if ( v4 )
        *((_QWORD *)v4 + 1) = 0LL;
      else
        this[9] = 0LL;
      *(_QWORD *)v3 = this[12];
      v6 = this[10] == (struct IAudioProcessor *)1;
      this[10] = (struct IAudioProcessor *)((char *)this[10] - 1);
      this[12] = v3;
      if ( v6 )
        ATL::CAtlList<CChildSubmixInstance *,ATL::CElementTraits<CChildSubmixInstance *>>::RemoveAll((__int64 *)this + 8);
      while ( v5[2] )
      {
        v10 = (__int64 *)*v5;
        if ( !*v5 )
          goto LABEL_16;
        v7 = *v10;
        v8 = (CConnectionInstance *)v10[2];
        *v5 = *v10;
        if ( v7 )
          *(_QWORD *)(v7 + 8) = 0LL;
        else
          v5[1] = 0LL;
        ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::FreeNode(v5);
        if ( v8 )
          CConnectionInstance::`scalar deleting destructor'(v8, v9);
      }
      ATL::CAtlList<CVirtualProtectedOutput *,ATL::CElementTraits<CVirtualProtectedOutput *>>::RemoveAll(v5);
      operator delete(v5);
    }
    while ( this[10] );
  }
  while ( this[4] )
  {
    v11 = ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveHead(this + 2);
    v12 = (void (__fastcall ***)(_QWORD, __int64))v11;
    if ( *(_DWORD *)(v11 + 40) == 2 )
      (*(void (__fastcall **)(struct IAudioProcessor *, _QWORD))(*(_QWORD *)this[30] + 32LL))(
        this[30],
        *(_QWORD *)(*(_QWORD *)(v11 + 32) + 40LL));
    (**v12)(v12, 1LL);
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 40LL, &WPP_ece7ed133f5c32246e9f73031954d020_Traceguids);
  }
}
