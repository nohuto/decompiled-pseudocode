/*
 * XREFs of ?Matches@AudioModeEffectsWatcher@@UEAA_NU_GUID@@@Z @ 0x1800B5CC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall AudioModeEffectsWatcher::Matches(AudioModeEffectsWatcher *this, struct _GUID *a2)
{
  __int64 v2; // rax

  v2 = *((_QWORD *)this + 5) - *(_QWORD *)&a2->Data1;
  if ( !v2 )
    v2 = *((_QWORD *)this + 6) - *(_QWORD *)a2->Data4;
  return v2 == 0;
}
