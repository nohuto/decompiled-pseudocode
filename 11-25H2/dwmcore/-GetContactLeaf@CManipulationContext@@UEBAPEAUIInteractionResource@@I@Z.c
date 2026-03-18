/*
 * XREFs of ?GetContactLeaf@CManipulationContext@@UEBAPEAUIInteractionResource@@I@Z @ 0x180212160
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct IInteractionResource *__fastcall CManipulationContext::GetContactLeaf(CManipulationContext *this, int a2)
{
  int v2; // r8d
  __int64 v4; // rcx
  __int64 i; // r9
  __int64 v6; // rdx

  v2 = 0;
  v4 = *((int *)this + 18);
  for ( i = 0LL; i < v4; ++i )
  {
    if ( *(_DWORD *)(*((_QWORD *)this + 7) + 4 * i) == a2 )
      goto LABEL_6;
    ++v2;
  }
  v2 = -1;
LABEL_6:
  v6 = *(_QWORD *)(*((_QWORD *)this + 8) + 8LL * v2);
  return (struct IInteractionResource *)((v6 + 72) & -(__int64)(v6 != 0));
}
