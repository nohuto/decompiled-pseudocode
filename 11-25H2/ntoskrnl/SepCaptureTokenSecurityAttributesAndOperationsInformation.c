/*
 * XREFs of SepCaptureTokenSecurityAttributesAndOperationsInformation @ 0x140868260
 * Callers:
 *     NtSetInformationToken @ 0x140ACC810 (NtSetInformationToken.c)
 * Callees:
 *     SepCaptureTokenSecurityOperations @ 0x14047D968 (SepCaptureTokenSecurityOperations.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     SepCaptureTokenSecurityAttributesInformation @ 0x140868404 (SepCaptureTokenSecurityAttributesInformation.c)
 *     SepFreeCapturedTokenSecurityAttributesInformation @ 0x140A3B64C (SepFreeCapturedTokenSecurityAttributesInformation.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepCaptureTokenSecurityAttributesAndOperationsInformation(_QWORD *a1, char a2, _QWORD *a3)
{
  _DWORD *v5; // rax
  unsigned int v6; // r14d
  __int64 v7; // rbx
  _DWORD *v8; // rdi
  __int64 result; // rax
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
  if ( !a2 )
  {
    if ( !a1[1] )
      return 3221225485LL;
    *a3 = a1;
    return 0LL;
  }
  if ( ((unsigned __int8)a1 & 3) != 0 )
    goto LABEL_12;
  v5 = (_DWORD *)a1[1];
  if ( !v5 )
    return 3221225485LL;
  if ( ((unsigned __int8)v5 & 3) != 0 )
    goto LABEL_12;
  v6 = 0;
  v7 = *a1;
  if ( *a1 )
  {
    if ( (*a1 & 3) == 0 )
    {
      v7 = *a1;
      v6 = *(_DWORD *)(*a1 + 4LL);
      v8 = (_DWORD *)a1[1];
      goto LABEL_8;
    }
LABEL_12:
    ExRaiseDatatypeMisalignment();
  }
  v8 = (_DWORD *)a1[1];
  if ( *v5 != 1 )
    return 3221225485LL;
LABEL_8:
  result = SepCaptureTokenSecurityOperations(v8, v6, a2, (__int64 *)&P);
  if ( (int)result >= 0 )
  {
    if ( v7
      && (LOBYTE(v10) = a2,
          v11 = SepCaptureTokenSecurityAttributesInformation(v7, (_DWORD)v8, v6, v10, 1, (__int64)&v16),
          v11 < 0) )
    {
      v13 = 0LL;
      v14 = P;
    }
    else
    {
      Pool2 = (_QWORD *)ExAllocatePool2(0x100uLL);
      v13 = v16;
      v14 = P;
      if ( !Pool2 )
      {
        v11 = -1073741801;
        goto LABEL_25;
      }
      Pool2[1] = P;
      *Pool2 = v13;
      *a3 = Pool2;
      v11 = 0;
    }
    if ( v11 >= 0 )
      return (unsigned int)v11;
LABEL_25:
    if ( v14 )
      ExFreePoolWithTag(v14, 0);
    if ( v13 )
      SepFreeCapturedTokenSecurityAttributesInformation(v13);
    return (unsigned int)v11;
  }
  return result;
}
