/*
 * XREFs of SepAuditTypeList @ 0x140792814
 * Callers:
 *     SepSetAuditInfoForObjectType @ 0x1407928C0 (SepSetAuditInfoForObjectType.c)
 * Callees:
 *     <none>
 */

_UNKNOWN **__fastcall SepAuditTypeList(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4, _BYTE *a5, _BYTE *a6)
{
  _UNKNOWN **result; // rax
  __int64 v7; // r10
  int v10; // r11d
  __int64 v11; // r9
  unsigned int *v12; // rdx
  __int64 v13; // r10
  _WORD *v14; // rcx
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  result = &retaddr;
  v7 = a4;
  v10 = *(_DWORD *)(a3 + 4LL * a4) >> 31;
  v11 = a4 + 1;
  if ( (unsigned int)v11 < a2 )
  {
    v12 = (unsigned int *)(a3 + 4 * v11);
    v13 = 6 * v7;
    v14 = (_WORD *)(a1 + 48 * v11 + 2);
    do
    {
      result = (_UNKNOWN **)*(unsigned __int16 *)(a1 + 8 * v13);
      if ( *(v14 - 1) <= (unsigned __int16)result )
        break;
      result = (_UNKNOWN **)*v12;
      if ( (_BYTE)v10 )
      {
        if ( (int)result >= 0 )
        {
          *a5 = 1;
          *v14 |= 1u;
        }
      }
      else if ( (int)result < 0 )
      {
        *a6 = 1;
        *v14 |= 2u;
      }
      LODWORD(v11) = v11 + 1;
      ++v12;
      v14 += 24;
    }
    while ( (unsigned int)v11 < a2 );
  }
  return result;
}
