/*
 * XREFs of ?GetNextBufferIndexAvailable@CCaptureRenderTarget@@IEAAHXZ @ 0x1801594EC
 * Callers:
 *     ?CheckOcclusionState@CCaptureRenderTarget@@UEAAJ_N@Z @ 0x180158BE0 (-CheckOcclusionState@CCaptureRenderTarget@@UEAAJ_N@Z.c)
 *     ?TryTargetNextBuffer@CCaptureRenderTarget@@IEAAJXZ @ 0x18015948C (-TryTargetNextBuffer@CCaptureRenderTarget@@IEAAJXZ.c)
 * Callees:
 *     ?ScheduleCompositionPass@@YAXIW4CompositionReason@@@Z @ 0x180159E5C (-ScheduleCompositionPass@@YAXIW4CompositionReason@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CCaptureRenderTarget::GetNextBufferIndexAvailable(CCaptureRenderTarget *this)
{
  const HANDLE *v1; // rdx
  unsigned int v3; // edi
  __int64 v4; // rcx
  DWORD v5; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (const HANDLE *)*((_QWORD *)this + 387);
  v3 = -1;
  v4 = (__int64)(*((_QWORD *)this + 388) - (_QWORD)v1) >> 3;
  if ( v4 )
  {
    v5 = WaitForMultipleObjects(v4, v1, 0, 0);
    if ( v5 == 258 )
    {
      ScheduleCompositionPass(0LL);
    }
    else
    {
      if ( v5 >= (unsigned __int64)((__int64)(*((_QWORD *)this + 382) - *((_QWORD *)this + 381)) >> 3) )
        ModuleFailFastForHRESULT(-2147467259, retaddr);
      return v5;
    }
  }
  return v3;
}
