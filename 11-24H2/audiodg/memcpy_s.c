/*
 * XREFs of memcpy_s @ 0x1400436D4
 * Callers:
 *     ?Serialize@CDisplayNode@@QEAAJAEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@AEAPEAEAEAI@Z @ 0x14006AEAC (-Serialize@CDisplayNode@@QEAAJAEAV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNod.c)
 *     ?SerializeMetaData@@YAJAEAPEAEAEAI@Z @ 0x14006B1BC (-SerializeMetaData@@YAJAEAPEAEAEAI@Z.c)
 *     ?SerializeNodeArray@@YAJAEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@AEAPEAEAEAI@Z @ 0x14006B260 (-SerializeNodeArray@@YAJAEAV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@AT.c)
 *     ?Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z @ 0x14007B7E4 (-Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z.c)
 *     ?UpdateCount@UsageIndexProperty@details_abi@wil@@QEAAXI@Z @ 0x14007E090 (-UpdateCount@UsageIndexProperty@details_abi@wil@@QEAAXI@Z.c)
 *     ?Write@UsageIndexProperty@details_abi@wil@@QEBA_NAEAPEAEPEAE@Z @ 0x14007E30C (-Write@UsageIndexProperty@details_abi@wil@@QEBA_NAEAPEAEPEAE@Z.c)
 *     ?push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z @ 0x14007E9C0 (-push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z.c)
 *     ?reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x14007EB64 (-reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 * Callees:
 *     _invalid_parameter_noinfo @ 0x140059FEE (_invalid_parameter_noinfo.c)
 *     memset_0 @ 0x14005A0E4 (memset_0.c)
 *     memcpy_0 @ 0x14005B481 (memcpy_0.c)
 */

errno_t __cdecl memcpy_s(
        void *const Destination,
        const rsize_t DestinationSize,
        const void *const Source,
        const rsize_t SourceSize)
{
  errno_t *v7; // rax
  errno_t v8; // ebx

  if ( !SourceSize )
    return 0;
  if ( !Destination )
  {
LABEL_3:
    v7 = (errno_t *)_o__errno(Destination, DestinationSize);
    v8 = 22;
LABEL_4:
    *v7 = v8;
    invalid_parameter_noinfo();
    return v8;
  }
  if ( Source && DestinationSize >= SourceSize )
  {
    memcpy_0(Destination, Source, SourceSize);
    return 0;
  }
  memset_0(Destination, 0, DestinationSize);
  if ( !Source )
    goto LABEL_3;
  if ( DestinationSize < SourceSize )
  {
    v7 = (errno_t *)_o__errno(Destination, DestinationSize);
    v8 = 34;
    goto LABEL_4;
  }
  return 22;
}
