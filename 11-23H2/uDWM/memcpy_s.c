/*
 * XREFs of memcpy_s @ 0x18001A2E4
 * Callers:
 *     ?Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z @ 0x180002E5C (-Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z.c)
 *     ?Write@UsageIndexProperty@details_abi@wil@@QEBA_NAEAPEAEPEAE@Z @ 0x180002F74 (-Write@UsageIndexProperty@details_abi@wil@@QEBA_NAEAPEAEPEAE@Z.c)
 *     ?UpdateCount@UsageIndexProperty@details_abi@wil@@QEAAXI@Z @ 0x180003038 (-UpdateCount@UsageIndexProperty@details_abi@wil@@QEAAXI@Z.c)
 *     ?reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x18001A058 (-reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 *     ?push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z @ 0x18001A190 (-push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x18001A1F8 (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ??$WriteResultString@PEBD@details@wil@@YAPEAEPEAE0PEBDPEAPEBD@Z @ 0x18009A1F8 (--$WriteResultString@PEBD@details@wil@@YAPEAEPEAE0PEBDPEAPEBD@Z.c)
 *     ??$WriteResultString@PEBG@details@wil@@YAPEAEPEAE0PEBGPEAPEBG@Z @ 0x18009A26C (--$WriteResultString@PEBG@details@wil@@YAPEAEPEAE0PEBGPEAPEBG@Z.c)
 *     ?GetThreadContext@ThreadFailureCallbackHolder@details@wil@@SA_NPEAUFailureInfo@3@PEAV123@PEAD_K@Z @ 0x18009B854 (-GetThreadContext@ThreadFailureCallbackHolder@details@wil@@SA_NPEAUFailureInfo@3@PEAV123@PEAD_K@.c)
 *     ?create@shared_buffer@details@wil@@QEAA_NPEBX_K@Z @ 0x18009DD80 (-create@shared_buffer@details@wil@@QEAA_NPEBX_K@Z.c)
 *     ?create_hstring_on_heap@impl@winrt@@YAPEAUhstring_header@12@PEBGI@Z @ 0x18009DE18 (-create_hstring_on_heap@impl@winrt@@YAPEAUhstring_header@12@PEBGI@Z.c)
 * Callees:
 *     _invalid_parameter_noinfo @ 0x18005D446 (_invalid_parameter_noinfo.c)
 *     memset_0 @ 0x18005D520 (memset_0.c)
 *     memcpy_0 @ 0x180066218 (memcpy_0.c)
 */

errno_t __cdecl memcpy_s(
        void *const Destination,
        const rsize_t DestinationSize,
        const void *const Source,
        const rsize_t SourceSize)
{
  errno_t *v8; // rax
  errno_t v9; // ebx

  if ( !SourceSize )
    return 0;
  if ( !Destination )
    goto LABEL_7;
  if ( Source && DestinationSize >= SourceSize )
  {
    memcpy_0(Destination, Source, SourceSize);
    return 0;
  }
  memset_0(Destination, 0, DestinationSize);
  if ( !Source )
  {
LABEL_7:
    v8 = (errno_t *)_o__errno(Destination, DestinationSize, Source, SourceSize);
    v9 = 22;
LABEL_9:
    *v8 = v9;
    invalid_parameter_noinfo();
    return v9;
  }
  if ( DestinationSize < SourceSize )
  {
    v8 = (errno_t *)_o__errno(Destination, DestinationSize, Source, SourceSize);
    v9 = 34;
    goto LABEL_9;
  }
  return 22;
}
