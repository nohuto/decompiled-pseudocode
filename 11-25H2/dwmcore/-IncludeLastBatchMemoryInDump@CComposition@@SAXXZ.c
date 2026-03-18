/*
 * XREFs of ?IncludeLastBatchMemoryInDump@CComposition@@SAXXZ @ 0x180257368
 * Callers:
 *     ?FailFastOnMalformedPacket@CComposition@@KAXW4MILCMD_CRASHID@@PEBX@Z @ 0x1801991F8 (-FailFastOnMalformedPacket@CComposition@@KAXW4MILCMD_CRASHID@@PEBX@Z.c)
 *     ?ProcessSegmentUpdate@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GENERICINK_SEGMENTUPDATE@@PEBXI@Z @ 0x1801AA8F8 (-ProcessSegmentUpdate@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GENERICINK_SEGMENTUPDA.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 * Callees:
 *     MIDL_user_allocate @ 0x1800B12F0 (MIDL_user_allocate.c)
 *     memcpy_s_2 @ 0x180266A34 (memcpy_s_2.c)
 */

void CComposition::IncludeLastBatchMemoryInDump(void)
{
  void *v0; // rax
  const void *v1; // r8
  void *v2; // rbx

  v0 = MIDL_user_allocate((unsigned int)CComposition::s_cbLastCommandBuffer_ForFailfast);
  v2 = v0;
  if ( v0 )
  {
    memcpy_s_2(
      v0,
      (unsigned int)CComposition::s_cbLastCommandBuffer_ForFailfast,
      v1,
      (unsigned int)CComposition::s_cbLastCommandBuffer_ForFailfast);
    CComposition::s_pLastCommandBuffer_ForFailfast = v2;
  }
}
