/*
 * XREFs of ?OnMixedRealitySpatialAudioFormatPolicyChange@CExclusiveModeListener@@EEAAJK@Z @ 0x18014CBA0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B096C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateExclusiveViewingMode@CExclusiveModeListener@@AEAAJXZ @ 0x18014D324 (-UpdateExclusiveViewingMode@CExclusiveModeListener@@AEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CExclusiveModeListener::OnMixedRealitySpatialAudioFormatPolicyChange(
        CExclusiveModeListener *this,
        unsigned int a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  int v5; // eax
  int updated; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v9; // [rsp+38h] [rbp+10h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 72);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 72));
  v5 = *((_DWORD *)this + 92);
  if ( a2 == v5 )
  {
    if ( v5 )
    {
      if ( *((_BYTE *)this + 376) )
      {
        v9 = 0;
        (*(void (__fastcall **)(struct IAudioPolicyManager *, _QWORD, int *))(*(_QWORD *)g_PolicyManager + 48LL))(
          g_PolicyManager,
          a2,
          &v9);
        if ( *((_DWORD *)this + 93) != v9 )
        {
          *((_DWORD *)this + 93) = v9;
          updated = CExclusiveModeListener::UpdateExclusiveViewingMode((CExclusiveModeListener *)((char *)this - 8));
          if ( updated < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              525LL,
              (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\exclusivemodelistener.cpp",
              (const char *)(unsigned int)updated);
        }
      }
    }
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  return 0LL;
}
