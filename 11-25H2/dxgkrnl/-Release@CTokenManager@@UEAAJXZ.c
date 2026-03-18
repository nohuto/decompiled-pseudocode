/*
 * XREFs of ?Release@CTokenManager@@UEAAJXZ @ 0x140035580
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCTokenManager@@AEAAPEAXI@Z @ 0x140097DA0 (--_GCTokenManager@@AEAAPEAXI@Z.c)
 */

__int64 __fastcall CTokenManager::Release(CTokenManager *this, unsigned int a2)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v2 && this )
    CTokenManager::`scalar deleting destructor'(this, a2);
  return v2;
}
