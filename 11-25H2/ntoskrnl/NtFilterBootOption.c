/*
 * XREFs of NtFilterBootOption @ 0x140ACE260
 * Callers:
 *     <none>
 * Callees:
 *     RtlCheckTokenMembership @ 0x140472D90 (RtlCheckTokenMembership.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     SepSecureBootCorrectBcd @ 0x140784A64 (SepSecureBootCorrectBcd.c)
 *     SepSecureBootValidateBcdDataAgainstBcdRule @ 0x140784F3C (SepSecureBootValidateBcdDataAgainstBcdRule.c)
 *     SeSinglePrivilegeCheck @ 0x140858330 (SeSinglePrivilegeCheck.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtFilterBootOption(int a1, int a2, unsigned int a3, _BYTE *a4, size_t Size)
{
  int v7; // r15d
  int v8; // edi
  unsigned int v9; // r14d
  int v10; // eax
  int v11; // eax
  const void *v12; // rdi
  unsigned int v13; // r9d
  unsigned int *v14; // rdx
  int v15; // eax
  int v16; // r8d
  __int64 v17; // rcx
  _BYTE v19[3]; // [rsp+21h] [rbp-47h] BYREF
  int v20; // [rsp+24h] [rbp-44h]
  PVOID P; // [rsp+28h] [rbp-40h]
  _QWORD v22[2]; // [rsp+30h] [rbp-38h] BYREF

  v7 = a1;
  P = 0LL;
  v19[0] = 0;
  v22[0] = 0LL;
  if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, KeGetCurrentThread()->PreviousMode) )
  {
    RtlCheckTokenMembership(0LL, SeAliasAdminsSid);
    v8 = -1073741790;
    goto LABEL_64;
  }
  v20 = 0;
  v8 = 0;
  if ( !qword_140E67818 )
  {
    v8 = -2143092730;
    goto LABEL_64;
  }
  if ( !v7 )
  {
    if ( !a2 && !a3 && !a4 && !(_DWORD)Size )
    {
      if ( !_InterlockedCompareExchange(&dword_140E67848, 0, 0) )
      {
        v8 = SepSecureBootCorrectBcd(v19);
        v20 = v8;
        if ( v8 < 0 || !byte_140E6784C && v19[0] )
          goto LABEL_64;
        _InterlockedExchange(&dword_140E67848, 1);
      }
      v8 = v20;
      goto LABEL_64;
    }
    goto LABEL_52;
  }
  if ( v7 == 1 )
  {
    if ( a2 )
    {
      if ( a3 )
      {
        if ( a4 )
        {
          v9 = Size;
          if ( (_DWORD)Size )
          {
            v11 = dword_140E67858;
            if ( !_bittest(&v11, HIBYTE(a3) & 0xF) )
            {
LABEL_21:
              v8 = 0;
              goto LABEL_64;
            }
            if ( KeGetCurrentThread()->PreviousMode )
            {
              v12 = a4;
              if ( (unsigned __int64)&a4[(unsigned int)Size] > 0x7FFFFFFF0000LL || &a4[(unsigned int)Size] < a4 )
                v12 = a4;
              if ( (unsigned int)Size > 8 )
              {
                P = (PVOID)ExAllocatePool2(0x100uLL);
                if ( !P )
                {
                  v8 = -1073741801;
                  v20 = -1073741801;
                  goto LABEL_64;
                }
                memmove(P, v12, (unsigned int)Size);
                a4 = P;
              }
              else
              {
                memmove(v22, v12, (unsigned int)Size);
                a4 = v22;
              }
              v8 = v20;
              v7 = a1;
            }
            else
            {
              v8 = v20;
            }
            goto LABEL_33;
          }
        }
      }
    }
LABEL_52:
    v8 = -1073741811;
    goto LABEL_64;
  }
  if ( v7 != 2 )
  {
    v8 = -1073741585;
    goto LABEL_64;
  }
  if ( !a2 )
    goto LABEL_52;
  if ( !a3 )
    goto LABEL_52;
  if ( a4 )
    goto LABEL_52;
  v9 = Size;
  if ( (_DWORD)Size )
    goto LABEL_52;
  v10 = dword_140E67858;
  if ( !_bittest(&v10, HIBYTE(a3) & 0xF) )
    goto LABEL_21;
LABEL_33:
  v13 = 0;
  if ( *((_WORD *)qword_140E67818 + 18) )
  {
    v14 = (unsigned int *)(qword_140E67850 + 8);
    while ( 1 )
    {
      if ( *(v14 - 1) == a3 )
      {
        v15 = *(v14 - 2);
        if ( !v15 || v15 == a2 )
        {
          v16 = *(unsigned __int16 *)(*v14 + qword_140E67838);
          if ( (v16 & 0xFFFFF000) == 0
            && ((v16 & 0x20) == 0 || (dword_140E67824 & 4) != 0)
            && ((v16 & 0x40) == 0 || (dword_140E67824 & 0x10) != 0)
            && ((v16 & 0x800) == 0 || (dword_140E67824 & 0x40) != 0) )
          {
            break;
          }
        }
      }
      ++v13;
      v14 += 3;
      if ( v13 >= *((unsigned __int16 *)qword_140E67818 + 18) )
        goto LABEL_64;
    }
    if ( v7 == 1 )
    {
      v8 = SepSecureBootValidateBcdDataAgainstBcdRule(qword_140E67850 + 12LL * v13, a4, v9);
    }
    else
    {
      v8 = 0;
      v17 = *(unsigned int *)(qword_140E67850 + 12LL * v13 + 8);
      if ( (*(_BYTE *)(v17 + qword_140E67838) & 0x1F) != 8 || *(_WORD *)(v17 + qword_140E67838 + 2) )
        v8 = -1069350910;
    }
  }
LABEL_64:
  if ( P )
    ExFreePoolWithTag(P, 0x62536553u);
  return (unsigned int)v8;
}
