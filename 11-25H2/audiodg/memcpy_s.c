/*
 * XREFs of memcpy_s @ 0x1400439D4
 * Callers:
 *     ?Serialize@CDisplayNode@@QEAAJAEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@AEAPEAEAEAI@Z @ 0x14006AF1C (-Serialize@CDisplayNode@@QEAAJAEAV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNod.c)
 *     ?SerializeMetaData@@YAJAEAPEAEAEAI@Z @ 0x14006B22C (-SerializeMetaData@@YAJAEAPEAEAEAI@Z.c)
 *     ?SerializeNodeArray@@YAJAEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@AEAPEAEAEAI@Z @ 0x14006B2D0 (-SerializeNodeArray@@YAJAEAV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@AT.c)
 *     ?Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z @ 0x14007DA64 (-Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z.c)
 *     ?UpdateCount@UsageIndexProperty@details_abi@wil@@QEAAXI@Z @ 0x1400801E0 (-UpdateCount@UsageIndexProperty@details_abi@wil@@QEAAXI@Z.c)
 *     ?Write@UsageIndexProperty@details_abi@wil@@QEBA_NAEAPEAEPEAE@Z @ 0x1400803F8 (-Write@UsageIndexProperty@details_abi@wil@@QEBA_NAEAPEAEPEAE@Z.c)
 * Callees:
 *     _invalid_parameter_noinfo @ 0x14005A0DE (_invalid_parameter_noinfo.c)
 *     memset_0 @ 0x14005A1D4 (memset_0.c)
 *     memcpy_0 @ 0x14005B571 (memcpy_0.c)
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
