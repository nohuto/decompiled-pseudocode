/*
 * XREFs of ?GetProperty@CInteraction@@UEAAJIPEAVCExpressionValue@@@Z @ 0x18020AE70
 * Callers:
 *     <none>
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CInteraction::GetProperty(CInteraction *this, int a2, struct CExpressionValue *a3)
{
  int v3; // edx
  char v4; // al
  void *retaddr; // [rsp+28h] [rbp+0h]

  v3 = a2 - 13;
  if ( v3 )
  {
    if ( v3 != 1 )
      ModuleFailFastForHRESULT(-2147024809, retaddr);
    v4 = *((_BYTE *)this + 508) >> 5;
  }
  else
  {
    v4 = *((_BYTE *)this + 508) >> 4;
  }
  *((_DWORD *)a3 + 18) = 17;
  *(_BYTE *)a3 = v4 & 1;
  return 0LL;
}
