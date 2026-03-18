/*
 * XREFs of ?CapturePointer@CApplicationChannel@DirectComposition@@QEAAJIW4CapturePointerType@@I_K@Z @ 0x1C020C0D4
 * Callers:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C002D930 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 * Callees:
 *     ?LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z @ 0x1C002EB40 (-LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z.c)
 *     ?PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C00935A0 (-PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 *     ?Add@?$CStructDynamicArray@UManipulationCaptureInfo@CInteractionMarshaler@DirectComposition@@@@QEAAJAEBUManipulationCaptureInfo@CInteractionMarshaler@DirectComposition@@@Z @ 0x1C022552C (-Add@-$CStructDynamicArray@UManipulationCaptureInfo@CInteractionMarshaler@DirectComposition@@@@Q.c)
 *     ?Grow@?$CDynamicArray@I$0HHHAHDFF@@@IEAAJI@Z @ 0x1C0225730 (-Grow@-$CDynamicArray@I$0HHHAHDFF@@@IEAAJI@Z.c)
 *     ?OwnsPointerId@CInputManager@@SA_NII@Z @ 0x1C02310E8 (-OwnsPointerId@CInputManager@@SA_NII@Z.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::CapturePointer(
        unsigned int *a1,
        int a2,
        int a3,
        unsigned int a4,
        __int64 a5)
{
  int v9; // r11d
  struct DirectComposition::CResourceMarshaler *v10; // rax
  __int64 v11; // rax
  struct DirectComposition::CResourceMarshaler *v12; // rdi
  __int64 v13; // rbx
  _DWORD v15[2]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v16; // [rsp+28h] [rbp-10h]

  if ( !CInputManager::OwnsPointerId(a1[674], a4) )
    return (unsigned int)-1073741790;
  v10 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(
          (DirectComposition::CApplicationChannel *)a1,
          a2);
  if ( !v10 )
    return (unsigned int)-1073741811;
  v11 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)v10 + 128LL))(v10);
  v12 = (struct DirectComposition::CResourceMarshaler *)v11;
  if ( !v11 )
    return (unsigned int)-1073741811;
  if ( !a3 )
  {
    v13 = v11 + 280;
    v9 = CDynamicArray<unsigned int,2003858261>::Grow(v11 + 280);
    if ( v9 >= 0 )
    {
      *(_DWORD *)(*(_QWORD *)v13 + 4LL * (unsigned int)(*(_DWORD *)(v13 + 8))++) = a4;
      *((_DWORD *)v12 + 4) |= 0x80u;
    }
    goto LABEL_10;
  }
  if ( a3 != 1 )
    return (unsigned int)-1073741811;
  v15[0] = a4;
  v15[1] = 0;
  v16 = a5;
  v9 = CStructDynamicArray<DirectComposition::CInteractionMarshaler::ManipulationCaptureInfo>::Add(v11 + 296, v15);
LABEL_10:
  if ( v9 >= 0 )
    DirectComposition::CApplicationChannel::PutResourceOnUpdatedList((DirectComposition::CApplicationChannel *)a1, v12);
  return (unsigned int)v9;
}
