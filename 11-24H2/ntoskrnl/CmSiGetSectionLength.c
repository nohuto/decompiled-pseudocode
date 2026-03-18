/*
 * XREFs of CmSiGetSectionLength @ 0x140491C80
 * Callers:
 *     HvpViewMapStart @ 0x140982AE8 (HvpViewMapStart.c)
 * Callees:
 *     ZwQuerySection @ 0x1406A6E30 (ZwQuerySection.c)
 */

__int64 __fastcall CmSiGetSectionLength(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  __int128 v4; // [rsp+30h] [rbp-28h] BYREF
  __int64 v5; // [rsp+40h] [rbp-18h]

  v5 = 0LL;
  v4 = 0LL;
  result = ZwQuerySection(a1, 0LL, &v4, 24LL, 0LL);
  if ( (int)result >= 0 )
  {
    *a2 = v5;
    return 0LL;
  }
  return result;
}
