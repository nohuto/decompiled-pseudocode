/*
 * XREFs of ?BeginAppTransitionRequest@CImmersiveApplicationTransitionHelper@@UEAAJQEBUAPP_TRANSITION_INFORMATION@@@Z @ 0x180189200
 * Callers:
 *     <none>
 * Callees:
 *     ?_TransitionWithinApp@CImmersiveApplicationTransitionHelper@@AEAAJQEBUAPP_TRANSITION_INFORMATION@@@Z @ 0x1802F4350 (-_TransitionWithinApp@CImmersiveApplicationTransitionHelper@@AEAAJQEBUAPP_TRANSITION_INFORMATION.c)
 */

__int64 __fastcall CImmersiveApplicationTransitionHelper::BeginAppTransitionRequest(
        CImmersiveApplicationTransitionHelper *this,
        const struct APP_TRANSITION_INFORMATION *const a2)
{
  unsigned int v2; // r9d
  int v4; // r8d
  int v6; // r8d
  char v7; // cl

  v2 = 0;
  if ( *((_BYTE *)this + 16) )
  {
    v4 = *((_DWORD *)a2 + 5);
    if ( (v4 == 6 || (unsigned int)(v4 - 1) <= 2 && (*((_DWORD *)a2 + 4) == 1 || *((_DWORD *)a2 + 4) == 8))
      && !*((_DWORD *)this + 16)
      && *((_DWORD *)a2 + 3) != 6 )
    {
      v6 = *((_DWORD *)a2 + 4);
      if ( v6 != 6 )
      {
        if ( !*((_BYTE *)a2 + 56)
          || v6 != 1 && v6 != 8
          || (v7 = 1, v6 == 1)
          || *((_QWORD *)a2 + 5) == *((_QWORD *)a2 + 4) )
        {
          v7 = 0;
        }
        if ( *((_DWORD *)a2 + 5) == 6 || v7 )
          return (unsigned int)CImmersiveApplicationTransitionHelper::_TransitionWithinApp(
                                 (CImmersiveApplicationTransitionHelper *)((char *)this - 32),
                                 a2);
      }
    }
  }
  else
  {
    return (unsigned int)-2147483638;
  }
  return v2;
}
