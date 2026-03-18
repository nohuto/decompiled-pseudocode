/*
 * XREFs of ?GetMappedSectionPointer@CTokenManager@@UEAAJPEAPEAXPEA_K@Z @ 0x140035E30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CTokenManager::GetMappedSectionPointer(CTokenManager *this, void **a2, unsigned __int64 *a3)
{
  unsigned int v3; // r9d
  void *v4; // rax

  v3 = 0;
  *a2 = 0LL;
  *a3 = 0LL;
  v4 = (void *)*((_QWORD *)this + 6);
  if ( v4 )
  {
    *a2 = v4;
    *a3 = *((_QWORD *)this + 7);
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v3;
}
