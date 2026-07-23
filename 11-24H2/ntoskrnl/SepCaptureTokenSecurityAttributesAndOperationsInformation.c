/*
 * XREFs of SepCaptureTokenSecurityAttributesAndOperationsInformation @ 0x14088BDFC
 * Callers:
 *     NtSetInformationToken @ 0x140AD4280 (NtSetInformationToken.c)
 * Callees:
 *     SepCaptureTokenSecurityOperations @ 0x140479258 (SepCaptureTokenSecurityOperations.c)
 *     SepCaptureTokenSecurityAttributesInformation @ 0x14088BFA8 (SepCaptureTokenSecurityAttributesInformation.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     SepFreeCapturedTokenSecurityAttributesInformation @ 0x140A356B0 (SepFreeCapturedTokenSecurityAttributesInformation.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepCaptureTokenSecurityAttributesAndOperationsInformation(_QWORD *a1, char a2, _QWORD *a3)
{
  _DWORD *v5; // rax
  unsigned int v6; // r14d
  __int64 v7; // rbx
  __int64 result; // rax
  _DWORD *v9; // rdi
  int v10; // r9d
  int v11; // edi
  _QWORD *Pool2; // rax
  PVOID v13; // rbx
  PVOID v14; // rcx
  PVOID P; // [rsp+80h] [rbp+18h] BYREF
  PVOID v16; // [rsp+88h] [rbp+20h] BYREF

  v16 = 0LL;
  P = 0LL;
  *a3 = 0LL;
  if ( a2 )
  {
    if ( ((unsigned __int8)a1 & 3) != 0 )
      goto LABEL_13;
    v5 = (_DWORD *)a1[1];
    if ( !v5 )
      return 3221225485LL;
    if ( ((unsigned __int8)v5 & 3) != 0 )
      goto LABEL_13;
    v6 = 0;
    v7 = *a1;
    if ( *a1 )
    {
      if ( (*a1 & 3) != 0 )
LABEL_13:
        ExRaiseDatatypeMisalignment();
      v7 = *a1;
      v6 = *(_DWORD *)(*a1 + 4LL);
      v9 = (_DWORD *)a1[1];
    }
    else
    {
      v9 = (_DWORD *)a1[1];
      if ( *v5 != 1 )
        return 3221225485LL;
    }
    result = SepCaptureTokenSecurityOperations(v9, v6, a2, (__int64 *)&P);
    if ( (int)result >= 0 )
    {
      if ( v7
        && (LOBYTE(v10) = a2,
            v11 = SepCaptureTokenSecurityAttributesInformation(v7, (_DWORD)v9, v6, v10, 1, (__int64)&v16),
            v11 < 0) )
      {
        v13 = 0LL;
        v14 = P;
      }
      else
      {
        Pool2 = (_QWORD *)ExAllocatePool2(0x100uLL, 0x10uLL, 0x6F416553u);
        v13 = v16;
        v14 = P;
        if ( !Pool2 )
        {
          v11 = -1073741801;
          goto LABEL_26;
        }
        Pool2[1] = P;
        *Pool2 = v13;
        *a3 = Pool2;
        v11 = 0;
      }
      if ( v11 >= 0 )
        return (unsigned int)v11;
LABEL_26:
      if ( v14 )
        ExFreePoolWithTag(v14, 0);
      if ( v13 )
        SepFreeCapturedTokenSecurityAttributesInformation(v13);
      return (unsigned int)v11;
    }
  }
  else if ( a1[1] )
  {
    *a3 = a1;
    return 0LL;
  }
  else
  {
    return 3221225485LL;
  }
  return result;
}
