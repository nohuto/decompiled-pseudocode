/*
 * XREFs of FreeNvmeIceList @ 0x140183948
 * Callers:
 *     DllUnload @ 0x1400A5120 (DllUnload.c)
 * Callees:
 *     Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline @ 0x140056648 (Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline.c)
 *     FreeNvmeIceEntry @ 0x1400695BC (FreeNvmeIceEntry.c)
 */

void FreeNvmeIceList()
{
  volatile signed __int32 *v0; // rbx
  __int64 v1; // rax

  while ( 1 )
  {
    v0 = (volatile signed __int32 *)NvmeIceList;
    if ( NvmeIceList == &NvmeIceList )
      break;
    if ( *((PVOID **)NvmeIceList + 1) != &NvmeIceList
      || (v1 = *(_QWORD *)NvmeIceList, *(PVOID *)(*(_QWORD *)NvmeIceList + 8LL) != NvmeIceList) )
    {
      __fastfail(3u);
    }
    NvmeIceList = *(PVOID *)NvmeIceList;
    *(_QWORD *)(v1 + 8) = &NvmeIceList;
    if ( (unsigned int)Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline() )
      _InterlockedDecrement(v0 + 4);
    FreeNvmeIceEntry((PVOID)v0);
  }
}
