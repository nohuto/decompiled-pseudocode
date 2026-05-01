/*
 * XREFs of ?UnregisterForDesktopVisibilityChanges@CImmersiveMode@@UEAAJK@Z @ 0x180231450
 * Callers:
 *     <none>
 * Callees:
 *     ??_GDesktopVisibilityChangeListener@CImmersiveMode@@QEAAPEAXI@Z @ 0x1802F164C (--_GDesktopVisibilityChangeListener@CImmersiveMode@@QEAAPEAXI@Z.c)
 *     memmove_0 @ 0x1806CA2E8 (memmove_0.c)
 */

__int64 __fastcall CImmersiveMode::UnregisterForDesktopVisibilityChanges(CImmersiveMode *this, int a2)
{
  unsigned int v4; // esi
  unsigned __int64 v5; // r9
  CImmersiveMode::DesktopVisibilityChangeListener *v6; // rbx
  unsigned __int64 i; // r8
  CImmersiveMode::DesktopVisibilityChangeListener **v8; // rcx
  unsigned int v9; // edx

  v4 = -2147023728;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v5 = *((_QWORD *)this + 31);
  v6 = 0LL;
  for ( i = 0LL; i < v5; ++i )
  {
    v8 = (CImmersiveMode::DesktopVisibilityChangeListener **)(*((_QWORD *)this + 30) + 8 * i);
    if ( *(_DWORD *)*v8 == a2 )
    {
      v6 = *v8;
      v4 = 0;
      if ( i != v5 - 1 )
        memmove_0(v8, v8 + 1, 8 * (v5 - i) - 8);
      --*((_QWORD *)this + 31);
      break;
    }
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v6 )
    CImmersiveMode::DesktopVisibilityChangeListener::`scalar deleting destructor'(v6, v9);
  return v4;
}
