/*
 * XREFs of ?AddOnDeviceAttachCallback@DWMInputRouter@@UEAAXPEAV?$function@$$A6AXPEAUDeviceInfo@@@Z@std@@@Z @ 0x1800842B0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Emplace_reallocate@PEAVInputSite@@@?$vector@PEAVInputSite@@V?$allocator@PEAVInputSite@@@std@@@std@@AEAAPEAPEAVInputSite@@QEAPEAV2@$$QEAPEAV2@@Z @ 0x180036B14 (--$_Emplace_reallocate@PEAVInputSite@@@-$vector@PEAVInputSite@@V-$allocator@PEAVInputSite@@@std@.c)
 */

char *__fastcall DWMInputRouter::AddOnDeviceAttachCallback(__int64 a1, char *a2)
{
  char *result; // rax
  _BYTE *v3; // rdx
  char *v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  result = a2;
  v3 = *(_BYTE **)(a1 + 472);
  if ( v3 == *(_BYTE **)(a1 + 480) )
    return std::vector<InputSite *>::_Emplace_reallocate<InputSite *>((const void **)(a1 + 464), v3, &v4);
  *(_QWORD *)v3 = result;
  *(_QWORD *)(a1 + 472) += 8LL;
  return result;
}
