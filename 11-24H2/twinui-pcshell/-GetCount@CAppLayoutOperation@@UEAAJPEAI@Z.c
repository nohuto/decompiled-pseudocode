/*
 * XREFs of ?GetCount@CAppLayoutOperation@@UEAAJPEAI@Z @ 0x1806C0D60
 * Callers:
 *     ?GetCount@CAppLayoutOperation@@W7EAAJPEAI@Z @ 0x180516380 (-GetCount@CAppLayoutOperation@@W7EAAJPEAI@Z.c)
 * Callees:
 *     ?_GenerateOperationItemList@CAppLayoutOperation@@IEAAJXZ @ 0x1806C27A0 (-_GenerateOperationItemList@CAppLayoutOperation@@IEAAJXZ.c)
 */

__int64 __fastcall CAppLayoutOperation::GetCount(CAppLayoutOperation *this, unsigned int *a2)
{
  __int64 result; // rax

  *a2 = 0;
  result = CAppLayoutOperation::_GenerateOperationItemList(this);
  if ( (int)result >= 0 )
    *a2 = *((_DWORD *)this + 32);
  return result;
}
