/*
 * XREFs of ?SetCortanaTaskbarButtonRect@CortanaStoreAppExperienceManager@@UEAAJUtagRECT@@@Z @ 0x1803A9F70
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyTrayOfCortanaVisibility@CortanaStoreAppExperienceManager@@AEAAJ_N@Z @ 0x1803A9AB8 (-NotifyTrayOfCortanaVisibility@CortanaStoreAppExperienceManager@@AEAAJ_N@Z.c)
 */

__int64 __fastcall CortanaStoreAppExperienceManager::SetCortanaTaskbarButtonRect(
        CortanaStoreAppExperienceManager *this,
        struct tagRECT *a2)
{
  __int64 result; // rax

  if ( *((_BYTE *)this + 200) )
    CortanaStoreAppExperienceManager::NotifyTrayOfCortanaVisibility((const RECT *)((char *)this - 120));
  result = 0LL;
  *(struct tagRECT *)((char *)this + 184) = *a2;
  return result;
}
