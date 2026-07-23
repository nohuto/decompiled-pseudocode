/*
 * XREFs of SepCaptureUnicodeStringArray @ 0x14088CF60
 * Callers:
 *     SepCaptureTokenSecurityAttributesInformation @ 0x14088BFA8 (SepCaptureTokenSecurityAttributesInformation.c)
 *     NtQuerySecurityAttributesToken @ 0x14088CC70 (NtQuerySecurityAttributesToken.c)
 *     NtQuerySecurityPolicy @ 0x14088D400 (NtQuerySecurityPolicy.c)
 *     NtSetCachedSigningLevel2 @ 0x14088D710 (NtSetCachedSigningLevel2.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     SeCaptureUnicodeStringStructures @ 0x14088D200 (SeCaptureUnicodeStringStructures.c)
 *     SepReleaseUnicodeStringArray @ 0x14088D350 (SepReleaseUnicodeStringArray.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepCaptureUnicodeStringArray(__int64 a1, unsigned int a2, __int64 a3, _QWORD *a4)
{
  unsigned __int8 v4; // r13
  __int64 v5; // rdi
  unsigned int v6; // ebx
  __int64 result; // rax
  __int64 v8; // r14
  ULONG_PTR v9; // rdx
  unsigned int v10; // r8d
  unsigned __int16 *v11; // r15
  unsigned int v12; // r9d
  unsigned int v13; // ecx
  unsigned int v14; // eax
  unsigned int v15; // esi
  _QWORD *Pool2; // rax
  _QWORD *v17; // rsi
  char *v18; // r14
  __int64 v19; // rax
  unsigned __int64 v20; // rcx
  char *v21; // [rsp+28h] [rbp-50h]
  void *Src; // [rsp+80h] [rbp+8h] BYREF
  char v23; // [rsp+90h] [rbp+18h]
  _QWORD *v24; // [rsp+98h] [rbp+20h]

  v24 = a4;
  v23 = a3;
  v4 = a3;
  v5 = a2;
  v6 = 0;
  Src = 0LL;
  *a4 = 0LL;
  if ( !a1 )
  {
    if ( !a2 )
      return 0LL;
    return 3221225485LL;
  }
  if ( !a2 )
    return 3221225485LL;
  if ( (_BYTE)a3 )
  {
    result = SeCaptureUnicodeStringStructures(a1, a2, a3, &Src);
    if ( (int)result < 0 )
      return result;
    v8 = 16 * v5;
    if ( (unsigned __int64)(16 * v5) > 0xFFFFFFFF
      || (((unsigned int)v8 + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) < (unsigned int)v8 )
    {
      SepReleaseUnicodeStringArray(Src, v4);
      return 3221225621LL;
    }
    v9 = ((_DWORD)v8 + 1) & 0xFFFFFFFE;
    v10 = 0;
    v11 = (unsigned __int16 *)Src;
    while ( 1 )
    {
      v12 = v9;
      if ( v10 >= (unsigned int)v5 )
        break;
      v13 = v9 + *((unsigned __int16 *)Src + 8 * v10);
      v14 = -1;
      if ( v13 >= (unsigned int)v9 )
        v14 = v9 + *((unsigned __int16 *)Src + 8 * v10);
      v9 = v14;
      v15 = v13 < v12 ? 0xC0000095 : 0;
      if ( v13 < v12 )
      {
        SepReleaseUnicodeStringArray(Src, v4);
        return v15;
      }
      ++v10;
    }
    Pool2 = (_QWORD *)ExAllocatePool2(0x100uLL, v9, 0x74416553u);
    v17 = Pool2;
    if ( !Pool2 )
    {
      SepReleaseUnicodeStringArray(v11, v4);
      return 3221225626LL;
    }
    memmove(Pool2, v11, 16 * v5);
    v18 = (char *)(((unsigned __int64)&v17[(unsigned __int64)v8 / 8] + 1) & 0xFFFFFFFFFFFFFFFEuLL);
    v21 = v18;
    while ( v6 < (unsigned int)v5 )
    {
      v19 = v11[8 * v6];
      if ( (_WORD)v19 )
      {
        v20 = *(_QWORD *)&v11[8 * v6 + 4];
        if ( (v20 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( v20 + v19 > 0x7FFFFFFF0000LL || v20 + v19 < v20 )
        {
          v11 = (unsigned __int16 *)Src;
          v18 = v21;
        }
      }
      memmove(v18, *(const void **)&v11[8 * v6 + 4], v11[8 * v6]);
      v17[2 * v6 + 1] = v18;
      WORD1(v17[2 * v6]) = v17[2 * v6];
      v18 += v11[8 * v6];
      v21 = v18;
      ++v6;
    }
    if ( v4 == 1 && v11 )
      ExFreePoolWithTag(v11, 0);
    *v24 = v17;
  }
  else
  {
    *a4 = a1;
  }
  return 0LL;
}
