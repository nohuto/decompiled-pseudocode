/*
 * XREFs of ?HampDepGroupGetNextDonation@@YAPEAU_HAM_DONATION_DEPENDENCY@@PEAU1@@Z @ 0x180034BC4
 * Callers:
 *     ?HampDepGroupProcessDonations@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180035C24 (-HampDepGroupProcessDonations@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 * Callees:
 *     ?HampDepGroupGetNextLink@@YAPEAU_HAM_DEPENDENCY_LINK@@PEAU1@@Z @ 0x180036930 (-HampDepGroupGetNextLink@@YAPEAU_HAM_DEPENDENCY_LINK@@PEAU1@@Z.c)
 */

struct _HAM_DONATION_DEPENDENCY *__fastcall HampDepGroupGetNextDonation(struct _HAM_DONATION_DEPENDENCY *a1)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  struct _HAM_DEPENDENCY_LINK *v3; // rcx
  struct _HAM_DEPENDENCY_LINK *NextLink; // rax
  _QWORD *v5; // rax

  v1 = *((_QWORD *)a1 + 2);
  v2 = 0LL;
  if ( v1 != *((_QWORD *)a1 + 1) + 80LL )
    v2 = v1 - 16;
  if ( !v2 )
  {
    v3 = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)a1 + 1);
    while ( 1 )
    {
      NextLink = HampDepGroupGetNextLink(v3);
      v3 = NextLink;
      if ( !NextLink )
        break;
      v5 = (_QWORD *)((char *)NextLink + 80);
      if ( (_QWORD *)*v5 != v5 )
      {
        v2 = *v5 - 16LL;
        if ( *v5 != 16LL )
          return (struct _HAM_DONATION_DEPENDENCY *)v2;
      }
    }
    return 0LL;
  }
  return (struct _HAM_DONATION_DEPENDENCY *)v2;
}
