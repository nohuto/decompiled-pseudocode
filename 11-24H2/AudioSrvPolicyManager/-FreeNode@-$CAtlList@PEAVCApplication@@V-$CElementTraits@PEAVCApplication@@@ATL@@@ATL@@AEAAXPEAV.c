/*
 * XREFs of ?FreeNode@?$CAtlList@PEAVCApplication@@V?$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x18001EB18
 * Callers:
 *     ?RemoveAt@?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x180033C50 (-RemoveAt@-$CAtlList@PEAVCProcess@@V-$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAXPEAU__POSITI.c)
 *     ?UnregisterAppVolumePolicyChange@CApplication@@QEAAJPEAUIAudioAppVolumePolicyChange@@@Z @ 0x1800348D0 (-UnregisterAppVolumePolicyChange@CApplication@@QEAAJPEAUIAudioAppVolumePolicyChange@@@Z.c)
 *     ?RemoveApplication@CApplicationManager@@QEAAJAEAPEAVCApplication@@@Z @ 0x1800390F0 (-RemoveApplication@CApplicationManager@@QEAAJAEAPEAVCApplication@@@Z.c)
 *     ?DestroyPickerHostContext@PickerHostContextManager@@YAXPEAVCPickerHostContext@@@Z @ 0x18003A3C8 (-DestroyPickerHostContext@PickerHostContextManager@@YAXPEAVCPickerHostContext@@@Z.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAVCPickerHostContext@@V?$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL@@QEAAXXZ @ 0x18001EB40 (-RemoveAll@-$CAtlList@PEAVCPickerHostContext@@V-$CElementTraits@PEAVCPickerHostContext@@@ATL@@@A.c)
 */

__int64 __fastcall ATL::CAtlList<CApplication *,ATL::CElementTraits<CApplication *>>::FreeNode(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  bool v3; // zf

  result = *(_QWORD *)(a1 + 32);
  *a2 = result;
  v3 = (*(_QWORD *)(a1 + 16))-- == 1LL;
  *(_QWORD *)(a1 + 32) = a2;
  if ( v3 )
    return ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::RemoveAll();
  return result;
}
