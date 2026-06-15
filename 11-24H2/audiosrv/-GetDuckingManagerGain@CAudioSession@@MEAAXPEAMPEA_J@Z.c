/*
 * XREFs of ?GetDuckingManagerGain@CAudioSession@@MEAAXPEAMPEA_J@Z @ 0x18005CD90
 * Callers:
 *     <none>
 * Callees:
 *     ?GainDelta@CPBMStreamClassVolumeGainStage@@QEBAMXZ @ 0x1800C1744 (-GainDelta@CPBMStreamClassVolumeGainStage@@QEBAMXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CAudioSession::GetDuckingManagerGain(CAudioSession *this, float *a2, __int64 *a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rsi
  __int64 **i; // rbx
  __int64 v8; // rax
  __int64 v9; // rcx

  if ( a3 )
    *a3 = 0LL;
  *a2 = 1.0;
  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 352);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 352));
  for ( i = (__int64 **)*((_QWORD *)this + 49); i; i = (__int64 **)*i )
  {
    *a2 = fminf(*a2, CPBMStreamClassVolumeGainStage::GainDelta((CPBMStreamClassVolumeGainStage *)i[1]));
    if ( a3 )
    {
      v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)i[1][7] + 16LL))(i[1][7]);
      v9 = *a3;
      if ( *a3 <= v8 )
        v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)i[1][7] + 16LL))(i[1][7]);
      *a3 = v9;
    }
  }
  if ( v6 )
    LeaveCriticalSection(v6);
}
