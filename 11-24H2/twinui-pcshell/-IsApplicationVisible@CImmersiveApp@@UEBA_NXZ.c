/*
 * XREFs of ?IsApplicationVisible@CImmersiveApp@@UEBA_NXZ @ 0x1801CB630
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CImmersiveApp::IsApplicationVisible(CImmersiveApp *this)
{
  return (*((_DWORD *)this + 114) & 4) != 0;
}
