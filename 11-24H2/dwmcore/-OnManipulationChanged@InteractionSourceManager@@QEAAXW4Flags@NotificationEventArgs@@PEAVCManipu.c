/*
 * XREFs of ?OnManipulationChanged@InteractionSourceManager@@QEAAXW4Flags@NotificationEventArgs@@PEAVCManipulation@@@Z @ 0x1800E64DC
 * Callers:
 *     ?OnChanged@CInteractionTracker@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800E63C0 (-OnChanged@CInteractionTracker@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800DA570 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?ReconfigureAllManipulations@InteractionSourceManager@@QEAAXXZ @ 0x1800E38C8 (-ReconfigureAllManipulations@InteractionSourceManager@@QEAAXXZ.c)
 *     ?AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ @ 0x1800E3B2C (-AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ.c)
 *     ?ShouldChainForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@_N@Z @ 0x1800E3B58 (-ShouldChainForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@_N@Z.c)
 *     ?at@?$unordered_map@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@U?$hash@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@4@U?$equal_to@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@4@V?$allocator@U?$pair@$$CBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@@std@@@4@@std@@QEAAAEAV?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@2@AEBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1800E5340 (-at@-$unordered_map@V-$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V-$unique_ptr.c)
 *     ?AddActiveManipulation@InteractionSourceManager@@AEAAXPEAVCManipulation@@@Z @ 0x1800ECE5C (-AddActiveManipulation@InteractionSourceManager@@AEAAXPEAVCManipulation@@@Z.c)
 *     ?ShouldChainAllForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@@Z @ 0x180214908 (-ShouldChainAllForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@@Z.c)
 *     ?IsManipulationActive@InteractionSourceManager@@AEAA_NPEBVCManipulation@@@Z @ 0x180215B20 (-IsManipulationActive@InteractionSourceManager@@AEAA_NPEBVCManipulation@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall InteractionSourceManager::OnManipulationChanged(
        InteractionSourceManager *a1,
        int a2,
        const struct CManipulation *a3)
{
  int v5; // edx
  int v6; // edx
  int v7; // edx
  CInteractionTracker *v8; // rsi
  __int64 (__fastcall *v9)(CMILRefCountImpl *); // rax
  _QWORD *v10; // rax
  __int64 v11; // rcx
  int v12; // edi
  _BYTE *v13; // rbp
  _BYTE *v14; // rsi
  bool v15; // dl
  const struct CManipulation *v16; // [rsp+48h] [rbp+20h] BYREF

  v5 = a2 - 7;
  if ( v5 )
  {
    v6 = v5 - 3;
    if ( v6 )
    {
      v7 = v6 - 2;
      if ( v7 )
      {
        if ( v7 == 1 )
        {
          v8 = *(CInteractionTracker **)a1;
          if ( CInteractionTracker::AreInteractionAnimationsAlive(*(CInteractionTracker **)a1) )
          {
            if ( InteractionSourceManager::IsManipulationActive(a1, a3) )
              *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v8 + 3) + 824LL) + 440LL) |= 4u;
          }
        }
      }
      else
      {
        v16 = a3;
        if ( a3 )
        {
          v9 = *(__int64 (__fastcall **)(CMILRefCountImpl *))(*(_QWORD *)a3 + 8LL);
          if ( v9 == CMILRefCountImpl::AddReference )
            CMILRefCountImpl::AddReference(a3);
          else
            v9(a3);
        }
        v10 = (_QWORD *)std::unordered_map<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>,std::unique_ptr<CChainingHelper>>::at(
                          (__int64)a1 + 8,
                          (__int64 *)&v16);
        v12 = 0;
        v13 = (_BYTE *)*v10;
        v14 = (_BYTE *)*v10;
        do
        {
          v15 = CInteractionTracker::ShouldChainForAxis(v11, v12, (__int64)a3, 1u)
             && (unsigned __int8)CInteractionTracker::ShouldChainAllForAxis(v11, (unsigned int)v12, a3);
          LOBYTE(v11) = *v14;
          if ( (*v14 & 1) != v15 )
          {
            LOBYTE(v11) = v15 | v11 & 0xFE;
            *v14 = v11;
            v13[36] |= 1u;
          }
          ++v12;
          v14 += 12;
        }
        while ( v12 < 3 );
        if ( a3 )
          (*(void (__fastcall **)(const struct CManipulation *))(*(_QWORD *)a3 + 16LL))(a3);
      }
    }
    else if ( !*(_DWORD *)(*(_QWORD *)a1 + 184LL) )
    {
      InteractionSourceManager::ReconfigureAllManipulations(a1);
    }
  }
  else
  {
    if ( !InteractionSourceManager::IsManipulationActive(a1, a3) )
      InteractionSourceManager::AddActiveManipulation(a1, a3);
    *((_BYTE *)a1 + 112) = 1;
  }
}
