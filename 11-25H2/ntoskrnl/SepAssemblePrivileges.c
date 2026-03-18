/*
 * XREFs of SepAssemblePrivileges @ 0x140A0A7E8
 * Callers:
 *     SepAccessCheck @ 0x1403662B0 (SepAccessCheck.c)
 *     SepAccessCheckEx @ 0x1403CE444 (SepAccessCheckEx.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

void __fastcall SepAssemblePrivileges(int a1, char a2, char a3, char a4, LUID **a5)
{
  LUID *Pool2; // rax
  LUID *v9; // rdx
  __int64 LowPart; // rax

  if ( a5 )
  {
    if ( a1 )
    {
      Pool2 = (LUID *)ExAllocatePool2(0x100uLL);
      v9 = Pool2;
      if ( Pool2 )
      {
        Pool2->LowPart = 0;
        Pool2->HighPart = 0;
        LowPart = 0LL;
        if ( a2 )
        {
          v9[1] = SeSecurityPrivilege;
          LowPart = v9->LowPart + 1;
          v9[2].LowPart = 0x80000000;
          v9->LowPart = LowPart;
        }
        if ( a3 )
        {
          *(LUID *)((char *)&v9[1] + 12 * LowPart) = (LUID)SeTakeOwnershipPrivilege;
          *(&v9[2].LowPart + 3 * v9->LowPart++) = 0x80000000;
          LowPart = v9->LowPart;
        }
        if ( a4 )
        {
          *(LUID *)((char *)&v9[1] + 12 * LowPart) = (LUID)SeRelabelPrivilege;
          *(&v9[2].LowPart + 3 * v9->LowPart++) = 0x80000000;
        }
        *a5 = v9;
      }
    }
  }
}
