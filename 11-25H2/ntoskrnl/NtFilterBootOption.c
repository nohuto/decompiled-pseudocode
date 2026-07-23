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

NTSTATUS __cdecl NtFilterBootOption(
        FILTER_BOOT_OPTION_OPERATION FilterOperation,
        ULONG ObjectType,
        ULONG ElementType,
        PVOID Data,
        ULONG DataSize)
{
  FILTER_BOOT_OPTION_OPERATION v7; // r15d
  NTSTATUS v8; // edi
  ULONG v9; // r14d
  int v10; // eax
  int v11; // eax
  PVOID v12; // rdi
  PVOID v13; // rsi
  unsigned int v14; // r9d
  unsigned int *v15; // rdx
  int v16; // eax
  int v17; // r8d
  __int64 v18; // rcx
  BOOLEAN IsMember; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v21[3]; // [rsp+21h] [rbp-47h] BYREF
  int v22; // [rsp+24h] [rbp-44h]
  PVOID P; // [rsp+28h] [rbp-40h]
  _QWORD v24[2]; // [rsp+30h] [rbp-38h] BYREF

  v7 = FilterOperation;
  P = 0LL;
  v21[0] = 0;
  v24[0] = 0LL;
  IsMember = SeSinglePrivilegeCheck(SeTcbPrivilege, KeGetCurrentThread()->PreviousMode);
  if ( !IsMember && (RtlCheckTokenMembership(0LL, SeAliasAdminsSid, &IsMember) < 0 || !IsMember) )
  {
    v8 = -1073741790;
    goto LABEL_64;
  }
  v22 = 0;
  v8 = 0;
  if ( !qword_140E67818 )
  {
    v8 = -2143092730;
    goto LABEL_64;
  }
  if ( v7 == FilterBootOptionOperationOpenSystemStore )
  {
    if ( !ObjectType && !ElementType && !Data && !DataSize )
    {
      if ( !_InterlockedCompareExchange(&dword_140E67848, 0, 0) )
      {
        v8 = SepSecureBootCorrectBcd(v21);
        v22 = v8;
        if ( v8 < 0 || !byte_140E6784C && v21[0] )
          goto LABEL_64;
        _InterlockedExchange(&dword_140E67848, 1);
      }
      v8 = v22;
      goto LABEL_64;
    }
    goto LABEL_52;
  }
  if ( v7 == FilterBootOptionOperationSetElement )
  {
    if ( ObjectType )
    {
      if ( ElementType )
      {
        if ( Data )
        {
          v9 = DataSize;
          if ( DataSize )
          {
            v11 = dword_140E67858;
            if ( !_bittest(&v11, HIBYTE(ElementType) & 0xF) )
            {
LABEL_21:
              v8 = 0;
              goto LABEL_64;
            }
            if ( KeGetCurrentThread()->PreviousMode )
            {
              v12 = Data;
              if ( (unsigned __int64)Data + DataSize > 0x7FFFFFFF0000LL || (char *)Data + DataSize < Data )
                v12 = Data;
              if ( DataSize > 8 )
              {
                P = (PVOID)ExAllocatePool2(0x100uLL);
                if ( !P )
                {
                  v8 = -1073741801;
                  v22 = -1073741801;
                  goto LABEL_64;
                }
                v13 = P;
                memmove(P, v12, DataSize);
                Data = v13;
              }
              else
              {
                memmove(v24, v12, DataSize);
                Data = v24;
              }
              v8 = v22;
              v7 = FilterOperation;
            }
            else
            {
              v8 = v22;
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
  if ( v7 != FilterBootOptionOperationDeleteElement )
  {
    v8 = -1073741585;
    goto LABEL_64;
  }
  if ( !ObjectType )
    goto LABEL_52;
  if ( !ElementType )
    goto LABEL_52;
  if ( Data )
    goto LABEL_52;
  v9 = DataSize;
  if ( DataSize )
    goto LABEL_52;
  v10 = dword_140E67858;
  if ( !_bittest(&v10, HIBYTE(ElementType) & 0xF) )
    goto LABEL_21;
LABEL_33:
  v14 = 0;
  if ( *((_WORD *)qword_140E67818 + 18) )
  {
    v15 = (unsigned int *)(qword_140E67850 + 8);
    while ( 1 )
    {
      if ( *(v15 - 1) == ElementType )
      {
        v16 = *(v15 - 2);
        if ( !v16 || v16 == ObjectType )
        {
          v17 = *(unsigned __int16 *)(*v15 + qword_140E67838);
          if ( (v17 & 0xFFFFF000) == 0
            && ((v17 & 0x20) == 0 || (dword_140E67824 & 4) != 0)
            && ((v17 & 0x40) == 0 || (dword_140E67824 & 0x10) != 0)
            && ((v17 & 0x800) == 0 || (dword_140E67824 & 0x40) != 0) )
          {
            break;
          }
        }
      }
      ++v14;
      v15 += 3;
      if ( v14 >= *((unsigned __int16 *)qword_140E67818 + 18) )
        goto LABEL_64;
    }
    if ( v7 == FilterBootOptionOperationSetElement )
    {
      v8 = SepSecureBootValidateBcdDataAgainstBcdRule(qword_140E67850 + 12LL * v14, Data, v9);
    }
    else
    {
      v8 = 0;
      v18 = *(unsigned int *)(qword_140E67850 + 12LL * v14 + 8);
      if ( (*(_BYTE *)(v18 + qword_140E67838) & 0x1F) != 8 || *(_WORD *)(v18 + qword_140E67838 + 2) )
        v8 = -1069350910;
    }
  }
LABEL_64:
  if ( P )
    ExFreePoolWithTag(P, 0x62536553u);
  return v8;
}
