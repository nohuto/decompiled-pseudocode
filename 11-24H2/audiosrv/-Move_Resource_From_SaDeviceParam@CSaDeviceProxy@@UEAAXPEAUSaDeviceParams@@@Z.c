/*
 * XREFs of ?Move_Resource_From_SaDeviceParam@CSaDeviceProxy@@UEAAXPEAUSaDeviceParams@@@Z @ 0x1800F7AC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@?$CAutoPtr@VCResourcePriorityTracker@@@ATL@@QEAAXXZ @ 0x1800168E0 (-Free@-$CAutoPtr@VCResourcePriorityTracker@@@ATL@@QEAAXXZ.c)
 *     ?ReleaseSaDeviceResource@@YAJPEA_K@Z @ 0x180058130 (-ReleaseSaDeviceResource@@YAJPEA_K@Z.c)
 */

void __fastcall CSaDeviceProxy::Move_Resource_From_SaDeviceParam(CSaDeviceProxy *this, struct SaDeviceParams *a2)
{
  _QWORD *v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rax

  if ( *((_QWORD *)a2 + 12) )
  {
    if ( *((_QWORD *)a2 + 13) )
    {
      v4 = (_QWORD *)((char *)this + 48);
      if ( *((_QWORD *)this + 6) )
        ATL::CAutoPtr<CResourcePriorityTracker>::Free((CResourcePriorityTracker **)this + 6);
      v5 = *((_QWORD *)a2 + 13);
      *((_QWORD *)a2 + 13) = 0LL;
      *v4 = v5;
    }
    if ( *((_QWORD *)this + 7) )
      ReleaseSaDeviceResource((unsigned __int64 *)this + 7);
    v6 = *((_QWORD *)a2 + 12);
    *((_QWORD *)a2 + 12) = 0LL;
    *((_QWORD *)this + 7) = v6;
  }
}
