/*
 * XREFs of NtUserGetRawInputData @ 0x140182250
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     ?GetRawInputData_NoUserCrit@@YAIPEAUHRAWINPUT__@@IPEAXPEAI@Z @ 0x140182284 (-GetRawInputData_NoUserCrit@@YAIPEAUHRAWINPUT__@@IPEAXPEAI@Z.c)
 */

__int64 __fastcall NtUserGetRawInputData(struct HRAWINPUT__ *a1, unsigned int a2, void *a3, unsigned int *a4, int a5)
{
  unsigned int v5; // ebx

  if ( a5 == 24 )
  {
    return GetRawInputData_NoUserCrit(a1, a2, a3, a4);
  }
  else
  {
    v5 = -1;
    UserSetLastError(87);
  }
  return v5;
}
