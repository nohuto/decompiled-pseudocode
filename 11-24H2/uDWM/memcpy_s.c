/*
 * XREFs of memcpy_s @ 0x180073FFC
 * Callers:
 *     ?Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z @ 0x180071094 (-Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z.c)
 *     ?push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z @ 0x180073F64 (-push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z.c)
 *     ??0hstring@winrt@@QEAA@PEBGI@Z @ 0x180096344 (--0hstring@winrt@@QEAA@PEBGI@Z.c)
 *     ?reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x180098FA4 (-reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 *     ??$WriteResultString@PEBD@details@wil@@YAPEAEPEAE0PEBDPEAPEBD@Z @ 0x18009DB24 (--$WriteResultString@PEBD@details@wil@@YAPEAEPEAE0PEBDPEAPEBD@Z.c)
 *     ??$WriteResultString@PEBG@details@wil@@YAPEAEPEAE0PEBGPEAPEBG@Z @ 0x18009DB98 (--$WriteResultString@PEBG@details@wil@@YAPEAEPEAE0PEBGPEAPEBG@Z.c)
 *     ?GetThreadContext@ThreadFailureCallbackHolder@details@wil@@SA_NPEAUFailureInfo@3@PEAV123@PEAD_K@Z @ 0x18009EC60 (-GetThreadContext@ThreadFailureCallbackHolder@details@wil@@SA_NPEAUFailureInfo@3@PEAV123@PEAD_K@.c)
 *     ?UpdateCount@UsageIndexProperty@details_abi@wil@@QEAAXI@Z @ 0x1800A050C (-UpdateCount@UsageIndexProperty@details_abi@wil@@QEAAXI@Z.c)
 *     ?Write@UsageIndexProperty@details_abi@wil@@QEBA_NAEAPEAEPEAE@Z @ 0x1800A06DC (-Write@UsageIndexProperty@details_abi@wil@@QEBA_NAEAPEAEPEAE@Z.c)
 * Callees:
 *     _invalid_parameter_noinfo @ 0x18009C40A (_invalid_parameter_noinfo.c)
 *     memset_0 @ 0x18009C4E0 (memset_0.c)
 *     memcpy_0 @ 0x1800F6378 (memcpy_0.c)
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
    v8 = (errno_t *)_o__errno();
    v9 = 22;
LABEL_8:
    *v8 = v9;
    invalid_parameter_noinfo();
    return v9;
  }
  if ( DestinationSize < SourceSize )
  {
    v8 = (errno_t *)_o__errno();
    v9 = 34;
    goto LABEL_8;
  }
  return 22;
}
