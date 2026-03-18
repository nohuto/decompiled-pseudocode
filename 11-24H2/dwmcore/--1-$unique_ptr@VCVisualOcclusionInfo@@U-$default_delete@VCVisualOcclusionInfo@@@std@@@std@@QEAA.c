/*
 * XREFs of ??1?$unique_ptr@VCVisualOcclusionInfo@@U?$default_delete@VCVisualOcclusionInfo@@@std@@@std@@QEAA@XZ @ 0x18009E370
 * Callers:
 *     ?GetOcclusionInfo@CTreeData@@QEAAPEAVCOcclusionInfo@@I_N@Z @ 0x18009E720 (-GetOcclusionInfo@CTreeData@@QEAAPEAVCOcclusionInfo@@I_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::unique_ptr<CVisualOcclusionInfo>::~unique_ptr<CVisualOcclusionInfo>(
        __int64 (__fastcall ****a1)(_QWORD, __int64))
{
  __int64 (__fastcall ***v1)(_QWORD, __int64); // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (**v1)(v1, 1LL);
  return result;
}
