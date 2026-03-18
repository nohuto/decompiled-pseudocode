/*
 * XREFs of ?GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z @ 0x1402DCA28
 * Callers:
 *     DxgkDestroyCddDeviceAndContextForCurrentSession @ 0x1401F6478 (DxgkDestroyCddDeviceAndContextForCurrentSession.c)
 *     ?CheckAdapterViewSessionOwnership@CCD_TOPOLOGY@@AEAAJK@Z @ 0x1402DB580 (-CheckAdapterViewSessionOwnership@CCD_TOPOLOGY@@AEAAJK@Z.c)
 *     DxgkUseAdapterViewInCurrentSession @ 0x1402DB730 (DxgkUseAdapterViewInCurrentSession.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1402DC858 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?RemoveAdapterFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@@Z @ 0x1402DCFA0 (-RemoveAdapterFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@@Z.c)
 *     ?EnumAdaptersCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x14031E518 (-EnumAdaptersCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?AddAdapterToSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@PEAVDXGADAPTER@@PEAPEAVSESSION_ADAPTER@@@Z @ 0x1403EBBE0 (-AddAdapterToSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@PEAVDXGADAPTER@@PEAPEAVSESSION_ADAPTER@@@Z.c)
 * Callees:
 *     <none>
 */

struct SESSION_ADAPTER *__fastcall DXGSESSIONDATA::GetSessionAdapterFromLuid(
        DXGSESSIONDATA *this,
        const struct _LUID *a2)
{
  char *v2; // r9
  _QWORD *i; // rcx

  v2 = (char *)this + 18584;
  for ( i = (_QWORD *)*((_QWORD *)this + 2323); i != (_QWORD *)v2; i = (_QWORD *)*i )
  {
    if ( *((_DWORD *)i - 6) == a2->LowPart && *((_DWORD *)i - 5) == a2->HighPart )
      return (struct SESSION_ADAPTER *)(i - 4);
  }
  return 0LL;
}
