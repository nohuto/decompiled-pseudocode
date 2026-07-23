/*
 * XREFs of CarHandleEtwEvent @ 0x14061456C
 * Callers:
 *     CarReportDifPluginRuleViolation @ 0x140615800 (CarReportDifPluginRuleViolation.c)
 * Callees:
 *     CarEtwWriteBugCheckEvent @ 0x140614118 (CarEtwWriteBugCheckEvent.c)
 *     CarAddUniqueViolation @ 0x14061763C (CarAddUniqueViolation.c)
 *     DifiDbgPrint @ 0x140617D64 (DifiDbgPrint.c)
 */

__int64 __fastcall CarHandleEtwEvent(__int64 a1, int a2, const CHAR *a3, char a4, int a5, __int64 a6, int a7)
{
  const CHAR *v8; // rbp
  __int64 v11; // r15
  __int64 result; // rax
  unsigned int v13; // ebx
  CHAR *v14; // [rsp+20h] [rbp-38h]
  unsigned int v15; // [rsp+60h] [rbp+8h] BYREF

  v15 = 0;
  v8 = a3;
  if ( !a1 || a1 == -1128 )
  {
    DifiDbgPrint("Violation stack passed is NULL\n");
    return 3221225485LL;
  }
  else
  {
    v11 = a6;
    v14 = (CHAR *)a3;
    LOBYTE(a3) = a4;
    result = CarAddUniqueViolation(a5, a2, (int)a3, a1, v14, a6, a7, (__int64)&v15);
    v13 = result;
    if ( (int)result >= 0 )
    {
      if ( v15 <= 2 || v15 == 10 || v15 == 100 || v15 == 1000 )
        CarEtwWriteBugCheckEvent(v11, (const wchar_t *)(a1 + 4), a2, v8, a4, *(_DWORD *)(a1 + 1124));
      else
        return 128;
      return v13;
    }
  }
  return result;
}
