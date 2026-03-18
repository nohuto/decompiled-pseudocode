/*
 * XREFs of ?NotifyMidManipulationPropertyChange@CVisual@@AEAAXPEBVCMILMatrix@@@Z @ 0x180093018
 * Callers:
 *     ?EnsureWorldTransform@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@@Z @ 0x1800C39A0 (-EnsureWorldTransform@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@@Z.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x180040140 (McGenEventWrite_EventWriteTransfer.c)
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x180093170 (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     ?QueueMidManipulationUpdate@CManipulationManager@@IEAAJW4MidManipulationUpdateType@@PEAVCVisual@@@Z @ 0x1800931D4 (-QueueMidManipulationUpdate@CManipulationManager@@IEAAJW4MidManipulationUpdateType@@PEAVCVisual@.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CVisual::NotifyMidManipulationPropertyChange(CVisual *this, const struct CMILMatrix *a2)
{
  __int64 v4; // rdi
  __int64 v5; // rcx
  _QWORD *v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // r8
  struct CInteraction *InteractionInternal; // rax
  CVisual *v10; // [rsp+30h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+38h] [rbp-30h] BYREF
  CVisual **v12; // [rsp+48h] [rbp-20h]
  int v13; // [rsp+50h] [rbp-18h]
  int v14; // [rsp+54h] [rbp-14h]

  if ( (*((_BYTE *)this + 105) & 0x20) != 0 )
  {
    v4 = *((_QWORD *)this + 3);
    v5 = *(_QWORD *)(v4 + 640);
    if ( v5 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
      v6 = *(_QWORD **)(v4 + 640);
      if ( v6 )
      {
        v7 = v6[2];
        if ( GetCurrentThreadId() == *(_DWORD *)(v7 + 5712) )
        {
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
          {
            v14 = 0;
            v12 = &v10;
            v10 = this;
            v13 = 8;
            McGenEventWrite_EventWriteTransfer(
              &Microsoft_Windows_Dwm_Core_Provider_Context,
              &MIDMANIPULATION_UPDATE_VISUAL_PROP,
              v8,
              2u,
              &v11);
          }
          InteractionInternal = CVisual::GetInteractionInternal(this);
          if ( InteractionInternal )
          {
            *((_OWORD *)InteractionInternal + 8) = *(_OWORD *)a2;
            *((_OWORD *)InteractionInternal + 9) = *((_OWORD *)a2 + 1);
            *((_OWORD *)InteractionInternal + 10) = *((_OWORD *)a2 + 2);
            *((_OWORD *)InteractionInternal + 11) = *((_OWORD *)a2 + 3);
            *((_DWORD *)InteractionInternal + 48) = *((_DWORD *)a2 + 16);
          }
        }
        else
        {
          CManipulationManager::QueueMidManipulationUpdate(v6, 4LL, this);
        }
        (*(void (__fastcall **)(_QWORD *))(*v6 + 16LL))(v6);
      }
    }
  }
}
