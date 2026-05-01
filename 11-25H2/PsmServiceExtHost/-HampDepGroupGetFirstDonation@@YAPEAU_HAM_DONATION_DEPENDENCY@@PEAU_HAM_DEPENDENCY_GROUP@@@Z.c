/*
 * XREFs of ?HampDepGroupGetFirstDonation@@YAPEAU_HAM_DONATION_DEPENDENCY@@PEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180036974
 * Callers:
 *     ?HampDepGroupProcessDonations@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180035CA4 (-HampDepGroupProcessDonations@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 * Callees:
 *     ?HampDepGroupGetFirstLink@@YAPEAU_HAM_DEPENDENCY_LINK@@PEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180036948 (-HampDepGroupGetFirstLink@@YAPEAU_HAM_DEPENDENCY_LINK@@PEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupGetNextLink@@YAPEAU_HAM_DEPENDENCY_LINK@@PEAU1@@Z @ 0x1800369B0 (-HampDepGroupGetNextLink@@YAPEAU_HAM_DEPENDENCY_LINK@@PEAU1@@Z.c)
 */

struct _HAM_DONATION_DEPENDENCY *__fastcall HampDepGroupGetFirstDonation(struct _HAM_DEPENDENCY_GROUP *a1)
{
  struct _HAM_DONATION_DEPENDENCY *result; // rax
  struct _HAM_DEPENDENCY_LINK *v2; // rdx
  char *v3; // rcx
  char *v4; // rax

  for ( result = HampDepGroupGetFirstLink(a1); ; result = HampDepGroupGetNextLink(v2) )
  {
    v2 = result;
    if ( !result )
      break;
    v3 = (char *)result + 80;
    v4 = (char *)*((_QWORD *)result + 10);
    if ( v4 != v3 )
    {
      result = (struct _HAM_DONATION_DEPENDENCY *)(v4 - 16);
      if ( result )
        break;
    }
  }
  return result;
}
