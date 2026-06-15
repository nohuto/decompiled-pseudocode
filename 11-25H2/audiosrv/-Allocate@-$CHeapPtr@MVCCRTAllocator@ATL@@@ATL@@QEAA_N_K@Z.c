/*
 * XREFs of ?Allocate@?$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA_N_K@Z @ 0x180080160
 * Callers:
 *     ?GetChannelsPeakValues@CAudioSession@@UEAAJIPEAM@Z @ 0x1800C3170 (-GetChannelsPeakValues@CAudioSession@@UEAAJIPEAM@Z.c)
 *     ?UpdateMasterVolumeLevel@CVolumeHardware@@MEAAJ_N@Z @ 0x18010DB40 (-UpdateMasterVolumeLevel@CVolumeHardware@@MEAAJ_N@Z.c)
 *     ?UpdateMasterVolumeLevel@CVolumeSoftware@@MEAAJ_N@Z @ 0x18010DC40 (-UpdateMasterVolumeLevel@CVolumeSoftware@@MEAAJ_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall ATL::CHeapPtr<float,ATL::CCRTAllocator>::Allocate(_QWORD *a1, unsigned __int64 a2)
{
  size_t v3; // rcx
  void *v4; // rax

  if ( !a2 )
  {
    v3 = 0LL;
LABEL_5:
    v4 = malloc(v3);
    *a1 = v4;
    return v4 != 0LL;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / a2 >= 4 )
  {
    v3 = 4 * a2;
    goto LABEL_5;
  }
  return 0;
}
