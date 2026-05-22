/*
 * XREFs of ?push_back@?$vector@UAttachedInputObjectEntry@InputSite@@V?$allocator@UAttachedInputObjectEntry@InputSite@@@std@@@std@@QEAAX$$QEAUAttachedInputObjectEntry@InputSite@@@Z @ 0x18003B3C4
 * Callers:
 *     ??$AttachObject@VBamoEdgyNotificationSourceClientProxy@@@InputSite@@QEAAXPEAVInputSiteElementProxy@@PEAVBamoEdgyNotificationSourceClientProxy@@@Z @ 0x18005C1B4 (--$AttachObject@VBamoEdgyNotificationSourceClientProxy@@@InputSite@@QEAAXPEAVInputSiteElementPro.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::vector<InputSite::AttachedInputObjectEntry>::push_back(__int64 a1, __int64 *a2)
{
  __int64 *v3; // rdx
  __int64 result; // rax
  __int64 *v5; // r9
  __int64 *v6; // rdx

  v3 = *(__int64 **)(a1 + 8);
  if ( v3 == *(__int64 **)(a1 + 16) )
    return std::vector<InputSite::AttachedInputObjectEntry>::_Emplace_reallocate<InputSite::AttachedInputObjectEntry>(
             a1,
             v3,
             a2);
  result = *a2;
  v5 = v3 + 1;
  *v3 = *a2;
  v6 = a2 + 1;
  *v5 = 0LL;
  if ( v5 != a2 + 1 )
  {
    result = *v6;
    *v5 = *v6;
    *v6 = 0LL;
  }
  *(_QWORD *)(a1 + 8) += 16LL;
  return result;
}
