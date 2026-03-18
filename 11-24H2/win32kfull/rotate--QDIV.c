/*
 * XREFs of rotate::QDIV @ 0x1402174B8
 * Callers:
 *     ?bInitPlgDDA@rotate@@YAHPEAU_PLGDDA@1@PEAU_RECTL@@1PEAU_POINTFIX@@@Z @ 0x140143410 (-bInitPlgDDA@rotate@@YAHPEAU_PLGDDA@1@PEAU_RECTL@@1PEAU_POINTFIX@@@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall rotate::QDIV(unsigned __int64 *a1, unsigned __int64 *a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // r9
  char v5; // r10
  unsigned __int64 result; // rax
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rtt

  v3 = *a2;
  v4 = 0LL;
  if ( (*a2 & 0x8000000000000000uLL) == 0LL )
  {
    v5 = 0;
  }
  else
  {
    v5 = 1;
    v3 = -(__int64)v3;
  }
  v8 = v3;
  result = v3 / a3;
  v7 = v8 % a3;
  *a1 = result;
  if ( v5 )
  {
    result = -(__int64)result;
    *a1 = result;
    if ( v7 )
    {
      *a1 = --result;
      v4 = a3 - v7;
    }
  }
  else
  {
    v4 = v7;
  }
  a1[1] = v4;
  return result;
}
