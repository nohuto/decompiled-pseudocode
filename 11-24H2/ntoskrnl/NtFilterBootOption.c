/*
 * XREFs of NtFilterBootOption @ 0x140AD74D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlCheckTokenMembership @ 0x1403B5750 (RtlCheckTokenMembership.c)
 *     HviIsAnyHypervisorPresent @ 0x14049E730 (HviIsAnyHypervisorPresent.c)
 *     HviGetHypervisorFeatures @ 0x1406623A0 (HviGetHypervisorFeatures.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     SepSecureBootCorrectBcd @ 0x140793ED4 (SepSecureBootCorrectBcd.c)
 *     SepSecureBootValidateBcdDataAgainstBcdRule @ 0x14079441C (SepSecureBootValidateBcdDataAgainstBcdRule.c)
 *     SeSinglePrivilegeCheck @ 0x140850150 (SeSinglePrivilegeCheck.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtFilterBootOption(
        FILTER_BOOT_OPTION_OPERATION FilterOperation,
        ULONG ObjectType,
        ULONG ElementType,
        PVOID Data,
        ULONG DataSize)
{
  ULONG v6; // esi
  FILTER_BOOT_OPTION_OPERATION v7; // r14d
  NTSTATUS v8; // edi
  int v9; // eax
  int v10; // eax
  void *v11; // rdi
  PVOID v12; // rsi
  unsigned int v13; // r8d
  _DWORD *v14; // rcx
  int v15; // eax
  int v16; // edx
  __int64 v17; // rcx
  BOOLEAN IsMember; // [rsp+20h] [rbp-68h] BYREF
  bool v20; // [rsp+21h] [rbp-67h]
  _BYTE v21[2]; // [rsp+22h] [rbp-66h] BYREF
  int v22; // [rsp+24h] [rbp-64h]
  void *Src; // [rsp+28h] [rbp-60h]
  ULONG v24; // [rsp+30h] [rbp-58h]
  FILTER_BOOT_OPTION_OPERATION v25; // [rsp+34h] [rbp-54h]
  PVOID P; // [rsp+38h] [rbp-50h]
  __int64 v27; // [rsp+40h] [rbp-48h] BYREF
  __int128 v28; // [rsp+48h] [rbp-40h] BYREF

  v6 = ObjectType;
  v24 = ObjectType;
  v7 = FilterOperation;
  v25 = FilterOperation;
  Src = Data;
  P = 0LL;
  v21[0] = 0;
  v27 = 0LL;
  v20 = HviIsAnyHypervisorPresent() && (v28 = 0LL, HviGetHypervisorFeatures(&v28), (v28 & 0x100000000000LL) == 0);
  IsMember = SeSinglePrivilegeCheck(SeTcbPrivilege, KeGetCurrentThread()->PreviousMode);
  if ( !IsMember && (RtlCheckTokenMembership(0LL, SeAliasAdminsSid, &IsMember) < 0 || !IsMember) )
  {
    v8 = -1073741790;
    goto LABEL_70;
  }
  v22 = 0;
  v8 = 0;
  if ( !qword_140E67CE0 )
  {
    v8 = -2143092730;
    goto LABEL_70;
  }
  if ( v7 == FilterBootOptionOperationOpenSystemStore )
  {
    if ( !v6 && !ElementType && !Src && !DataSize )
    {
      if ( !_InterlockedCompareExchange(&dword_140E67D0C, 0, 0) )
      {
        v8 = SepSecureBootCorrectBcd(v21);
        v22 = v8;
        if ( v8 < 0 || !byte_140E67D08 && v21[0] )
          goto LABEL_70;
        _InterlockedExchange(&dword_140E67D0C, 1);
      }
      v8 = v22;
      goto LABEL_70;
    }
    goto LABEL_58;
  }
  if ( v7 == FilterBootOptionOperationSetElement )
  {
    if ( v6 && ElementType && Src && DataSize )
    {
      v10 = dword_140E67D10;
      if ( !_bittest(&v10, HIBYTE(ElementType) & 0xF) )
      {
LABEL_25:
        v8 = 0;
        goto LABEL_70;
      }
      if ( KeGetCurrentThread()->PreviousMode )
      {
        v11 = Src;
        if ( (unsigned __int64)Src + DataSize > 0x7FFFFFFF0000LL || (char *)Src + DataSize < Src )
          v11 = Src;
        if ( DataSize > 8 )
        {
          P = (PVOID)ExAllocatePool2(0x100uLL, DataSize, 0x62536553u);
          if ( !P )
          {
            v8 = -1073741801;
            v22 = -1073741801;
            goto LABEL_70;
          }
          v12 = P;
          memmove(P, v11, DataSize);
          Src = v12;
          v6 = v24;
        }
        else
        {
          memmove(&v27, v11, DataSize);
          Src = &v27;
        }
        v8 = v22;
        v7 = v25;
      }
      else
      {
        v8 = v22;
      }
      goto LABEL_37;
    }
LABEL_58:
    v8 = -1073741811;
    goto LABEL_70;
  }
  if ( v7 != FilterBootOptionOperationDeleteElement )
  {
    v8 = -1073741585;
    goto LABEL_70;
  }
  if ( !v6 || !ElementType || Src || DataSize )
    goto LABEL_58;
  v9 = dword_140E67D10;
  if ( !_bittest(&v9, HIBYTE(ElementType) & 0xF) )
    goto LABEL_25;
LABEL_37:
  v13 = 0;
  if ( *((_WORD *)qword_140E67CE0 + 18) )
  {
    v14 = (_DWORD *)(qword_140E67D18 + 4);
    while ( 1 )
    {
      if ( *v14 == ElementType )
      {
        v15 = *(v14 - 1);
        if ( !v15 || v15 == v6 )
        {
          v16 = *(unsigned __int16 *)((unsigned int)v14[1] + qword_140E67D28);
          if ( (v16 & 0xFFFFF000) == 0
            && ((v16 & 0x20) == 0 || (dword_140E67CEC & 4) != 0)
            && ((v16 & 0x40) == 0 || (dword_140E67CEC & 0x10) != 0)
            && ((v16 & 0x800) == 0 || (dword_140E67CEC & 0x40) != 0)
            && (!v20 || *v14 != 620757041) )
          {
            break;
          }
        }
      }
      ++v13;
      v14 += 3;
      if ( v13 >= *((unsigned __int16 *)qword_140E67CE0 + 18) )
        goto LABEL_70;
    }
    if ( v7 == FilterBootOptionOperationSetElement )
    {
      v8 = SepSecureBootValidateBcdDataAgainstBcdRule(qword_140E67D18 + 12LL * v13, Src, DataSize);
    }
    else
    {
      v8 = 0;
      v17 = *(unsigned int *)(qword_140E67D18 + 12LL * v13 + 8);
      if ( (*(_BYTE *)(v17 + qword_140E67D28) & 0x1F) != 8 || *(_WORD *)(v17 + qword_140E67D28 + 2) )
        v8 = -1069350910;
    }
  }
LABEL_70:
  if ( P )
    ExFreePoolWithTag(P, 0x62536553u);
  return v8;
}
