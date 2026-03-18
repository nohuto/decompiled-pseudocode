/*
 * XREFs of ?IsCurrentThreadWriter@CReadWriteLock@@QEBA_NXZ @ 0x1801C9750
 * Callers:
 *     ?InvalidateWorldTransform@CTreeData@@IEAAXXZ @ 0x180266EC0 (-InvalidateWorldTransform@CTreeData@@IEAAXXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CReadWriteLock::IsCurrentThreadWriter(CReadWriteLock *this)
{
  return GetCurrentThreadId() == *((_DWORD *)this + 2);
}
