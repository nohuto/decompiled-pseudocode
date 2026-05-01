/*
 * XREFs of ?GetModifierKeyState@ElementHelpers@@YA?AW4ModifierKeys@@XZ @ 0x1804CE5D4
 * Callers:
 *     ?v_WndProc@CMultitaskingViewFrame@@EEAA_JPEAUHWND__@@I_K_J@Z @ 0x1804BE1C0 (-v_WndProc@CMultitaskingViewFrame@@EEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     <none>
 */

__int64 ElementHelpers::GetModifierKeyState()
{
  int *v0; // rbx
  unsigned int v1; // edi

  v0 = (int *)&unk_1807AF720;
  v1 = 0;
  do
  {
    if ( GetKeyState(*v0) < 0 )
      v1 |= v0[1];
    v0 += 2;
  }
  while ( v0 != (int *)&unk_1807AF748 );
  return v1;
}
