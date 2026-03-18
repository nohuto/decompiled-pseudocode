/*
 * XREFs of ?PreRender@CHolographicManager@@UEAAXXZ @ 0x1801E0550
 * Callers:
 *     ?PreRender@CComposition@@IEAAJPEA_N@Z @ 0x18007AD60 (-PreRender@CComposition@@IEAAJPEA_N@Z.c)
 * Callees:
 *     CHolographicInteropTaskQueue::ProcessPendingMessages__lambda_db6293ec4389496e05a5db7898b72386___ @ 0x1802CE194 (CHolographicInteropTaskQueue--ProcessPendingMessages__lambda_db6293ec4389496e05a5db7898b72386___.c)
 */

void __fastcall CHolographicManager::PreRender(CHolographicManager *this)
{
  CHolographicManager *v1; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 5) )
  {
    v1 = this;
    CHolographicInteropTaskQueue::ProcessPendingMessages__lambda_db6293ec4389496e05a5db7898b72386___(
      *((_QWORD *)this + 7),
      &v1);
  }
}
