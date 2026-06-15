/*
 * XREFs of ?FindConnectionInObjectCache@CAudioProcessor@@IEAAPEAVCConnectionNode@@_K@Z @ 0x140008F8C
 * Callers:
 *     ?RemoveAPOInputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z @ 0x1400094D0 (-RemoveAPOInputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z.c)
 *     ?AttachEndpointToConnection@CAudioProcessor@@AEAAJ_KPEAUIAudioEndpoint@@AEAV?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@PEAPEAVCConnectionNode@@@Z @ 0x140027360 (-AttachEndpointToConnection@CAudioProcessor@@AEAAJ_KPEAUIAudioEndpoint@@AEAV-$CAtlList@PEAVCConn.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
struct CConnectionNode *__fastcall CAudioProcessor::FindConnectionInObjectCache(CAudioProcessor *this, __int64 a2)
{
  _QWORD *v3; // rcx
  __int64 v4; // rbx
  _QWORD *v6; // [rsp+40h] [rbp+8h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+50h] [rbp+18h] BYREF

  v6 = 0LL;
  (*(void (__fastcall **)(_QWORD, LPCRITICAL_SECTION *, _QWORD, _QWORD **))(**((_QWORD **)this + 99) + 24LL))(
    *((_QWORD *)this + 99),
    &lpCriticalSection,
    0LL,
    &v6);
  v3 = (_QWORD *)*v6;
  while ( v3 )
  {
    v4 = v3[2];
    v3 = (_QWORD *)*v3;
    if ( *(_QWORD *)(v4 + 16) == a2 )
    {
      if ( lpCriticalSection )
        LeaveCriticalSection(lpCriticalSection);
      return (struct CConnectionNode *)v4;
    }
  }
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
