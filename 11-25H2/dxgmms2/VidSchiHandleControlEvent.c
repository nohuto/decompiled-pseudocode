/*
 * XREFs of VidSchiHandleControlEvent @ 0x1400FBC20
 * Callers:
 *     VidSchFlushAdapter @ 0x1400A5430 (VidSchFlushAdapter.c)
 * Callees:
 *     VidSchiSetSchedulerStatus @ 0x1400A5228 (VidSchiSetSchedulerStatus.c)
 *     VidSchFlushAdapter @ 0x1400A5430 (VidSchFlushAdapter.c)
 *     VidSchTerminateAdapter @ 0x1400FBC90 (VidSchTerminateAdapter.c)
 *     VidSchiResume @ 0x14011580C (VidSchiResume.c)
 */

LONG __fastcall VidSchiHandleControlEvent(struct _VIDSCH_GLOBAL *a1)
{
  int v1; // edx
  int v3; // edx
  int v4; // edx
  LONG result; // eax

  v1 = *((_DWORD *)a1 + 93);
  if ( *((_DWORD *)a1 + 92) != v1 )
  {
    v3 = v1 - 1;
    if ( v3 )
    {
      v4 = v3 - 1;
      if ( v4 )
      {
        if ( v4 == 1 )
        {
          *((_DWORD *)a1 + 811) = 3;
          VidSchFlushAdapter(a1, 17);
          return VidSchiSetSchedulerStatus((__int64)a1, 3, 1);
        }
      }
      else
      {
        return VidSchTerminateAdapter(a1);
      }
    }
    else
    {
      return VidSchiResume();
    }
  }
  return result;
}
