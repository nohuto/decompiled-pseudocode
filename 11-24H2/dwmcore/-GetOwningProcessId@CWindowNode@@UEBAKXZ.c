/*
 * XREFs of ?GetOwningProcessId@CWindowNode@@UEBAKXZ @ 0x1801C4280
 * Callers:
 *     ?EtwLogCurrentState@CDrawingContext@@QEBAXXZ @ 0x1801C3E00 (-EtwLogCurrentState@CDrawingContext@@QEBAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CWindowNode::GetOwningProcessId(CWindowNode *this)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *((_QWORD *)this + 103);
  result = 0LL;
  if ( v1 )
    return *(unsigned int *)(v1 + 128);
  return result;
}
