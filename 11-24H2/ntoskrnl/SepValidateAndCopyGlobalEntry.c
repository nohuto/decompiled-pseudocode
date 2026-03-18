/*
 * XREFs of SepValidateAndCopyGlobalEntry @ 0x1404F721C
 * Callers:
 *     AuthzBasepEvaluateAceCondition @ 0x1403450F0 (AuthzBasepEvaluateAceCondition.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x140246D40 (ExReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x14031A1A0 (ExAcquireSpinLockShared.c)
 *     SepGetSingletonEntryFromIndexNumber @ 0x140357308 (SepGetSingletonEntryFromIndexNumber.c)
 *     AuthzBasepDuplicateSecurityAttributes @ 0x14035F940 (AuthzBasepDuplicateSecurityAttributes.c)
 *     SepGetProcUniqueLuidAndIndexFromAttributeInfo @ 0x140477830 (SepGetProcUniqueLuidAndIndexFromAttributeInfo.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepValidateAndCopyGlobalEntry(__int64 a1, _QWORD *a2)
{
  int ProcUniqueLuidAndIndexFromAttributeInfo; // edi
  _DWORD *Pool2; // rax
  _QWORD *v5; // rbx
  _QWORD *v6; // rax
  unsigned int v7; // ecx
  __int64 SingletonEntryFromIndexNumber; // rsi
  KIRQL v9; // bp
  __int64 v10; // rcx
  int v11; // eax
  unsigned int v13; // [rsp+48h] [rbp+10h] BYREF
  __int64 v14; // [rsp+50h] [rbp+18h] BYREF

  *a2 = 0LL;
  v13 = 0;
  v14 = 0LL;
  ProcUniqueLuidAndIndexFromAttributeInfo = SepGetProcUniqueLuidAndIndexFromAttributeInfo(a1, &v13, &v14);
  if ( ProcUniqueLuidAndIndexFromAttributeInfo >= 0 )
  {
    Pool2 = (_DWORD *)ExAllocatePool2(0x40uLL);
    v5 = Pool2;
    if ( Pool2 )
    {
      *Pool2 = 0;
      Pool2[6] = 0;
      v6 = Pool2 + 2;
      v7 = v13;
      v6[1] = v6;
      *v6 = v6;
      v5[5] = v5 + 4;
      v5[4] = v5 + 4;
      SingletonEntryFromIndexNumber = SepGetSingletonEntryFromIndexNumber(v7);
      v9 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)SingletonEntryFromIndexNumber);
      if ( *(_QWORD *)(SingletonEntryFromIndexNumber + 8) == v14 )
      {
        v10 = *(_QWORD *)(SingletonEntryFromIndexNumber + 16);
        if ( v10 )
        {
          v11 = AuthzBasepDuplicateSecurityAttributes(v10, (__int64)v5, 0);
          *a2 = v5;
          ProcUniqueLuidAndIndexFromAttributeInfo = v11;
          v5 = 0LL;
        }
      }
      else
      {
        ProcUniqueLuidAndIndexFromAttributeInfo = -1073741275;
      }
      ExReleaseSpinLockShared((PEX_SPIN_LOCK)SingletonEntryFromIndexNumber, v9);
      if ( v5 )
        ExFreePoolWithTag(v5, 0x74416553u);
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return (unsigned int)ProcUniqueLuidAndIndexFromAttributeInfo;
}
