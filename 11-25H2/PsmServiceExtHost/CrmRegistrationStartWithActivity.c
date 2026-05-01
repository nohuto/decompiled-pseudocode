/*
 * XREFs of CrmRegistrationStartWithActivity @ 0x18006E604
 * Callers:
 *     CrmGlobalsStartCrmRegistrations @ 0x18007B748 (CrmGlobalsStartCrmRegistrations.c)
 * Callees:
 *     CrmRegistrationCreateActivity @ 0x180031620 (CrmRegistrationCreateActivity.c)
 *     CrmRegistrationStart @ 0x18003E808 (CrmRegistrationStart.c)
 */

__int64 __fastcall CrmRegistrationStartWithActivity(__int64 a1, unsigned int a2, __int64 a3, int a4, __int64 a5)
{
  __int64 result; // rax

  result = CrmRegistrationStart(a1, 0LL, a4, a5);
  if ( (int)result >= 0 )
  {
    result = CrmRegistrationCreateActivity(a1, a2, 0LL, 0LL);
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}
