/*
 * XREFs of ?ValidateInertiaDest@CInertiaManager@@AEBA_NAEBVCInputDest@@@Z @ 0x1400F3CE4
 * Callers:
 *     ?PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z @ 0x14014D108 (-PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z.c)
 * Callees:
 *     ?TestWindowFlag@CInputDest@@QEBA_NK@Z @ 0x1400F3D2C (-TestWindowFlag@CInputDest@@QEBA_NK@Z.c)
 */

char __fastcall CInertiaManager::ValidateInertiaDest(CInertiaManager *this, const struct CInputDest *a2)
{
  char v2; // r10
  CInputDest *v3; // r11

  v2 = 0;
  if ( *(_DWORD *)a2 && !CInputDest::TestWindowFlag(a2, 0x480u) && !CInputDest::TestWindowFlag(v3, 0x380u) )
    return 1;
  return v2;
}
