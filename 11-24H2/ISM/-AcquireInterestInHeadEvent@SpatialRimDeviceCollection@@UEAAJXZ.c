/*
 * XREFs of ?AcquireInterestInHeadEvent@SpatialRimDeviceCollection@@UEAAJXZ @ 0x1800D5890
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnableHeadEventHandler@SpatialRimDeviceCollection@@AEAAJXZ @ 0x1800D6160 (-EnableHeadEventHandler@SpatialRimDeviceCollection@@AEAAJXZ.c)
 */

__int64 __fastcall SpatialRimDeviceCollection::AcquireInterestInHeadEvent(SpatialRimDeviceCollection *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbx
  int v3; // eax
  unsigned int v4; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 2848);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 2848));
  if ( ++*((_DWORD *)this + 724) == 1
    && (v3 = SpatialRimDeviceCollection::EnableHeadEventHandler(this), v4 = v3, v3 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x14D,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
      (const char *)(unsigned int)v3);
    if ( v1 )
      LeaveCriticalSection(v1);
    return v4;
  }
  else
  {
    if ( v1 )
      LeaveCriticalSection(v1);
    return 0LL;
  }
}
