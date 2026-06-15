/*
 * XREFs of memcpy_s_0 @ 0x14004874C
 * Callers:
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x140016858 (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 *     ??$WriteResultString@PEBD@details@wil@@YAPEAEPEAE0PEBDPEAPEBD@Z @ 0x14005BB64 (--$WriteResultString@PEBD@details@wil@@YAPEAEPEAE0PEBDPEAPEBD@Z.c)
 *     ??$WriteResultString@PEBG@details@wil@@YAPEAEPEAE0PEBGPEAPEBG@Z @ 0x14005BBD8 (--$WriteResultString@PEBG@details@wil@@YAPEAEPEAE0PEBGPEAPEBG@Z.c)
 *     ?GetThreadContext@ThreadFailureCallbackHolder@details@wil@@SA_NPEAUFailureInfo@3@PEAV123@PEAD_K@Z @ 0x14005D10C (-GetThreadContext@ThreadFailureCallbackHolder@details@wil@@SA_NPEAUFailureInfo@3@PEAV123@PEAD_K@.c)
 * Callees:
 *     _invalid_parameter_noinfo @ 0x140059FEE (_invalid_parameter_noinfo.c)
 *     memset_0 @ 0x14005A0E4 (memset_0.c)
 *     memcpy_0 @ 0x14005B481 (memcpy_0.c)
 */

errno_t __cdecl memcpy_s_0(
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
    goto LABEL_5;
  if ( !Source || DestinationSize < SourceSize )
  {
    memset_0(Destination, 0, DestinationSize);
    if ( Source )
    {
      if ( DestinationSize >= SourceSize )
        return 22;
      v7 = (errno_t *)_o__errno(Destination, DestinationSize);
      v8 = 34;
LABEL_6:
      *v7 = v8;
      invalid_parameter_noinfo();
      return v8;
    }
LABEL_5:
    v7 = (errno_t *)_o__errno(Destination, DestinationSize);
    v8 = 22;
    goto LABEL_6;
  }
  memcpy_0(Destination, Source, SourceSize);
  return 0;
}
