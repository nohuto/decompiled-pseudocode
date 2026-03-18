/*
 * XREFs of ?CleanUpListItemsPendingDeletion@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@@Z @ 0x14010259C
 * Callers:
 *     ?EmitSetTrackerBindingMode@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x140130D44 (-EmitSetTrackerBindingMode@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@AEAA_NP.c)
 *     ?Disconnect@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x140235D30 (-Disconnect@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@MEAAXPEAVCApplicationC.c)
 *     ?ReleaseAllReferences@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x140235D50 (-ReleaseAllReferences@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@MEAAXPEAVCAp.c)
 *     ?RemoveTrackerBindings@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@QEAAXPEAVCApplicationChannel@2@I@Z @ 0x140235DCC (-RemoveTrackerBindings@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@QEAAXPEAVCA.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1400803E0 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 *     ?Shrink@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_K@Z @ 0x140103310 (-Shrink@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_K@Z.c)
 *     memmove @ 0x14023FA40 (memmove.c)
 */

void __fastcall DirectComposition::CInteractionTrackerBindingManagerMarshaler::CleanUpListItemsPendingDeletion(
        DirectComposition::CInteractionTrackerBindingManagerMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  unsigned __int64 v4; // rdx
  unsigned int v5; // ebp
  unsigned int v6; // esi
  __int64 v7; // rax
  __int64 v8; // rdx
  size_t v9; // r8
  __int128 v10; // xmm0
  __int64 v11; // xmm1_8
  size_t v12; // rcx
  struct DirectComposition::CResourceMarshaler *v13; // rdx
  bool v14; // zf
  struct DirectComposition::CResourceMarshaler *v15; // rdi
  __int128 Src; // [rsp+20h] [rbp-38h] BYREF
  __int64 v17; // [rsp+30h] [rbp-28h]

  if ( !*((_BYTE *)this + 64) )
  {
    v4 = *((_QWORD *)this + 12);
    v5 = 0;
    v6 = 0;
    *((_BYTE *)this + 64) = 1;
    if ( v4 )
    {
      v7 = 0LL;
      do
      {
        v8 = *((_QWORD *)this + 9);
        v9 = *((_QWORD *)this + 13);
        v10 = *(_OWORD *)(v7 * v9 + v8);
        v11 = *(_QWORD *)(v7 * v9 + v8 + 16);
        v17 = v11;
        Src = v10;
        if ( (_DWORD)v11 )
        {
          v12 = v5 * v9;
          v17 = v11;
          Src = v10;
          ++v5;
          memmove((void *)(v8 + v12), &Src, v9);
        }
        else
        {
          v13 = (struct DirectComposition::CResourceMarshaler *)Src;
          v14 = (*(_DWORD *)(Src + 64))-- == 1;
          if ( v14 )
            *((_QWORD *)v13 + 56) = 0LL;
          v15 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)&Src + 1);
          v14 = (*(_DWORD *)(*((_QWORD *)&Src + 1) + 64LL))-- == 1;
          if ( v14 )
            *((_QWORD *)v15 + 56) = 0LL;
          DirectComposition::CApplicationChannel::ReleaseResource(a2, v13);
          DirectComposition::CApplicationChannel::ReleaseResource(a2, v15);
        }
        v4 = *((_QWORD *)this + 12);
        v7 = ++v6;
      }
      while ( v6 < v4 );
    }
    DirectComposition::CDCompDynamicArrayBase::Shrink(
      (DirectComposition::CInteractionTrackerBindingManagerMarshaler *)((char *)this + 72),
      v4 - v5);
    *((_BYTE *)this + 64) = 0;
  }
}
