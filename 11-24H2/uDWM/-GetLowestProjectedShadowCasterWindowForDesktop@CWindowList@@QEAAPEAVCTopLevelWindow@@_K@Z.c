/*
 * XREFs of ?GetLowestProjectedShadowCasterWindowForDesktop@CWindowList@@QEAAPEAVCTopLevelWindow@@_K@Z @ 0x180054E40
 * Callers:
 *     ?ZOrderProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJXZ @ 0x180054DA0 (-ZOrderProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJXZ.c)
 * Callees:
 *     ?FindElement@?$CGenericTableMap@_KUCDesktop@@@@QEAAPEAUCDesktop@@_K@Z @ 0x18003318C (-FindElement@-$CGenericTableMap@_KUCDesktop@@@@QEAAPEAUCDesktop@@_K@Z.c)
 */

struct CTopLevelWindow *__fastcall CWindowList::GetLowestProjectedShadowCasterWindowForDesktop(
        CWindowList *this,
        __int64 a2)
{
  __int64 v2; // rbx
  _QWORD *Element; // rax
  _QWORD *v4; // rdx
  _QWORD *i; // rax
  __int64 v6; // rcx

  v2 = 0LL;
  Element = CGenericTableMap<unsigned __int64,CDesktop>::FindElement(
              (struct _RTL_GENERIC_TABLE *)((char *)this + 8),
              a2);
  if ( Element )
  {
    v4 = Element + 10;
    for ( i = (_QWORD *)Element[10]; i != v4; i = (_QWORD *)*i )
    {
      v6 = i[55];
      if ( v6 && (*(_BYTE *)(v6 + 201) & 0x10) != 0 )
        return (struct CTopLevelWindow *)i[55];
    }
  }
  return (struct CTopLevelWindow *)v2;
}
