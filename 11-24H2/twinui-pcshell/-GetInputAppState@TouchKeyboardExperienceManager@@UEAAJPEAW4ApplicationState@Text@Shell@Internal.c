/*
 * XREFs of ?GetInputAppState@TouchKeyboardExperienceManager@@UEAAJPEAW4ApplicationState@Text@Shell@Internal@Windows@@@Z @ 0x1801AE550
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TouchKeyboardExperienceManager::GetInputAppState(
        RTL_SRWLOCK *this,
        enum Windows::Internal::Shell::Text::ApplicationState *a2)
{
  RTL_SRWLOCK *v2; // rbx
  int Ptr_high; // edi
  int v6; // edi
  int v8; // edi
  int v9; // edi

  v2 = this + 47;
  AcquireSRWLockShared(this + 47);
  Ptr_high = HIDWORD(this[45].Ptr);
  if ( v2 )
    ReleaseSRWLockShared(v2);
  if ( !Ptr_high )
  {
LABEL_10:
    *(_DWORD *)a2 = 0;
    return 0LL;
  }
  v6 = Ptr_high - 1;
  if ( v6 )
  {
    v8 = v6 - 1;
    if ( !v8 )
    {
      *(_DWORD *)a2 = 2;
      return 0LL;
    }
    v9 = v8 - 1;
    if ( !v9 )
    {
      *(_DWORD *)a2 = 3;
      return 0LL;
    }
    if ( (unsigned int)(v9 - 1) < 2 )
    {
      *(_DWORD *)a2 = 4;
      return 0LL;
    }
    goto LABEL_10;
  }
  *(_DWORD *)a2 = 1;
  return 0LL;
}
