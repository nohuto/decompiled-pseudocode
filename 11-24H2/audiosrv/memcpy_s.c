/*
 * XREFs of memcpy_s @ 0x180042F00
 * Callers:
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@AEBV01@@Z @ 0x18000C8F8 (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@AEBV01@@Z.c)
 *     ?ToString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x180014D00 (-ToString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@A.c)
 *     ?CalculateStaticId@CAppAudioSessionId@@AEAAJXZ @ 0x180015160 (-CalculateStaticId@CAppAudioSessionId@@AEAAJXZ.c)
 *     ?ToString@CAudioEndpointId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x180015D34 (-ToString@CAudioEndpointId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@AT.c)
 *     ??4?$CSimpleStringT@G$0A@@ATL@@QEAAAEAV01@AEBV01@@Z @ 0x18001AC90 (--4-$CSimpleStringT@G$0A@@ATL@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?CloneData@?$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z @ 0x18001ADA0 (-CloneData@-$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z.c)
 *     ?ToString@CAppAudioSessionId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x18001C558 (-ToString@CAppAudioSessionId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@.c)
 * Callees:
 *     _invalid_parameter_noinfo @ 0x1800A4DEE (_invalid_parameter_noinfo.c)
 *     memset_0 @ 0x1800A4EB4 (memset_0.c)
 *     memcpy_0 @ 0x1800A7F28 (memcpy_0.c)
 */

errno_t __cdecl memcpy_s(
        void *const Destination,
        const rsize_t DestinationSize,
        const void *const Source,
        const rsize_t SourceSize)
{
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
    *(_DWORD *)_o__errno(Destination, DestinationSize, Source) = 22;
    invalid_parameter_noinfo();
    return 22;
  }
  if ( DestinationSize >= SourceSize )
    return 22;
  *(_DWORD *)_o__errno(Destination, DestinationSize, Source) = 34;
  invalid_parameter_noinfo();
  return 34;
}
