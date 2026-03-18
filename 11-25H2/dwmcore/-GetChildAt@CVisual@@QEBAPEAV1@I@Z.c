/*
 * XREFs of ?GetChildAt@CVisual@@QEBAPEAV1@I@Z @ 0x1801909C0
 * Callers:
 *     ?SetRoot@CDesktopTree@@QEAAJPEAVCVisual@@@Z @ 0x1802965A0 (-SetRoot@CDesktopTree@@QEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     <none>
 */

struct CVisual *__fastcall CVisual::GetChildAt(CVisual *this, unsigned int a2)
{
  unsigned __int64 v2; // r10
  __int64 v3; // r9
  unsigned __int64 v4; // r8
  struct CVisual *result; // rax
  unsigned __int64 v6; // rdx

  v2 = a2;
  v3 = *((_QWORD *)this + 10) & 2LL;
  v4 = *((_QWORD *)this + 10) & 1LL;
  result = (struct CVisual *)(*((_QWORD *)this + 10) & 0xFFFFFFFFFFFFFFFCuLL);
  if ( v3 )
    v6 = *(_QWORD *)result;
  else
    v6 = *((_QWORD *)this + 10) & 1LL;
  if ( v6 <= v2 )
    return 0LL;
  if ( v3 )
    v4 = *(_QWORD *)result;
  if ( v2 >= v4 )
    return 0LL;
  if ( v4 != 1 )
    return (struct CVisual *)*((_QWORD *)result + v2 + 2);
  return result;
}
