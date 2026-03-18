/*
 * XREFs of SepSecureBootCorrectBcd @ 0x140784A64
 * Callers:
 *     NtFilterBootOption @ 0x140ACE260 (NtFilterBootOption.c)
 * Callees:
 *     SepSecureBootUpdateBcdDataForRule @ 0x140784D94 (SepSecureBootUpdateBcdDataForRule.c)
 *     BcdOpenSystemStore @ 0x140802238 (BcdOpenSystemStore.c)
 *     BcdEnumerateObjects @ 0x1408023A4 (BcdEnumerateObjects.c)
 *     BcdOpenObject @ 0x1409666B4 (BcdOpenObject.c)
 *     BcdCloseStore @ 0x140A24B8C (BcdCloseStore.c)
 *     BcdCloseObject @ 0x140A27BE8 (BcdCloseObject.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepSecureBootCorrectBcd(_BYTE *a1)
{
  int updated; // ebx
  char *Pool2; // r14
  unsigned int v3; // r12d
  unsigned int v4; // r15d
  __int64 i; // rdi
  int v6; // ecx
  int v7; // edx
  __int64 v9; // [rsp+30h] [rbp-28h] BYREF
  __int64 v10; // [rsp+38h] [rbp-20h] BYREF
  _QWORD v11[3]; // [rsp+40h] [rbp-18h] BYREF
  char v13; // [rsp+98h] [rbp+40h] BYREF
  unsigned int v14; // [rsp+A0h] [rbp+48h] BYREF
  char *v15; // [rsp+A8h] [rbp+50h] BYREF

  *a1 = 0;
  v10 = 0LL;
  v14 = 0;
  LODWORD(v15) = 0;
  v9 = 0LL;
  v13 = 0;
  updated = BcdOpenSystemStore(&v9);
  if ( updated >= 0 )
  {
    v11[0] = 1LL;
    updated = BcdEnumerateObjects(v9, (unsigned int)v11, 0, (unsigned int)&v15, (__int64)&v14);
    if ( updated == -1073741789 )
    {
      Pool2 = (char *)ExAllocatePool2(0x100uLL);
      if ( Pool2 )
      {
        updated = BcdEnumerateObjects(v9, (unsigned int)v11, (_DWORD)Pool2, (unsigned int)&v15, (__int64)&v14);
        if ( updated >= 0 )
        {
          v3 = 0;
          if ( v14 )
          {
            while ( 1 )
            {
              v15 = &Pool2[24 * v3];
              updated = BcdOpenObject(v9, v15, &v10);
              if ( updated < 0 )
                break;
              v4 = 0;
              for ( i = v10; v4 < *((unsigned __int16 *)qword_140E67818 + 18); ++v4 )
              {
                v6 = *(_DWORD *)(qword_140E67850 + 12LL * v4);
                if ( !v6 || v6 == *(_DWORD *)(*((_QWORD *)v15 + 2) + 4LL) )
                {
                  v7 = *(unsigned __int16 *)(*(unsigned int *)(qword_140E67850 + 12LL * v4 + 8) + qword_140E67838);
                  if ( (v7 & 0xFFFFF000) == 0
                    && ((v7 & 0x20) == 0 || (dword_140E67824 & 4) != 0)
                    && ((v7 & 0x40) == 0 || (dword_140E67824 & 0x10) != 0)
                    && ((v7 & 0x800) == 0 || (dword_140E67824 & 0x40) != 0) )
                  {
                    updated = SepSecureBootUpdateBcdDataForRule(qword_140E67850 + 12LL * v4, i, &v13);
                    if ( updated < 0 )
                      goto LABEL_25;
                    if ( v13 )
                      *a1 = 1;
                  }
                }
              }
              BcdCloseObject(i);
              ++v3;
              i = 0LL;
              v10 = 0LL;
              if ( v3 >= v14 )
                goto LABEL_25;
            }
            i = v10;
LABEL_25:
            if ( i )
              BcdCloseObject(i);
          }
        }
        ExFreePoolWithTag(Pool2, 0x62536553u);
      }
      else
      {
        updated = -1073741801;
      }
    }
  }
  if ( v9 )
    BcdCloseStore(v9);
  return (unsigned int)updated;
}
