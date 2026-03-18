/*
 * XREFs of SepCaptureFqbnArray @ 0x140792088
 * Callers:
 *     SepCaptureTokenSecurityAttributesInformation @ 0x1408880F8 (SepCaptureTokenSecurityAttributesInformation.c)
 * Callees:
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     ExRaiseDatatypeMisalignment @ 0x14089B1F0 (ExRaiseDatatypeMisalignment.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepCaptureFqbnArray(void *Src, unsigned int a2, __int64 a3, _QWORD *a4)
{
  size_t v5; // r13
  __int64 v6; // r15
  unsigned int v7; // edi
  __int64 result; // rax
  unsigned __int16 *Pool2; // rbx
  unsigned int v10; // edx
  __int64 v11; // r8
  unsigned int v12; // r15d
  _QWORD *v13; // rax
  _QWORD *v14; // r14
  char *v15; // rsi
  unsigned int v16; // edi
  __int64 v17; // r15
  __int64 v18; // rax
  unsigned __int64 v19; // rcx
  unsigned int v20; // [rsp+20h] [rbp-48h]
  char *v21; // [rsp+28h] [rbp-40h]

  v5 = 24LL * a2;
  v6 = 0xFFFFFFFFLL;
  if ( v5 <= 0xFFFFFFFF )
    v6 = (unsigned int)v5;
  v7 = -1073741675;
  result = v5 > 0xFFFFFFFF ? 0xC0000095 : 0;
  if ( v5 <= 0xFFFFFFFF )
  {
    Pool2 = (unsigned __int16 *)ExAllocatePool2(0x100uLL);
    if ( !Pool2 )
      return 3221225626LL;
    if ( (_DWORD)v6 && ((unsigned __int8)Src & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    memmove(Pool2, Src, (unsigned int)v6);
    if ( ((v6 + 1) & 0xFFFFFFFFFFFFFFFEuLL) < (unsigned int)v6 )
      goto LABEL_16;
    v10 = (v6 + 1) & 0xFFFFFFFE;
    v11 = 0LL;
    v12 = a2;
    while ( (unsigned int)v11 < a2 )
    {
      if ( v10 + Pool2[12 * v11 + 4] < v10 )
        goto LABEL_16;
      v10 += Pool2[12 * v11 + 4];
      v11 = (unsigned int)(v11 + 1);
    }
    v13 = (_QWORD *)ExAllocatePool2(0x100uLL);
    v14 = v13;
    if ( !v13 )
    {
      v7 = -1073741670;
LABEL_16:
      ExFreePoolWithTag(Pool2, 0);
      return v7;
    }
    memmove(v13, Pool2, v5);
    v15 = (char *)(((unsigned __int64)&v14[v5 / 8] + 1) & 0xFFFFFFFFFFFFFFFEuLL);
    v21 = v15;
    v16 = 0;
    v20 = 0;
    while ( v16 < v12 )
    {
      v17 = 3LL * v16;
      v18 = Pool2[12 * v16 + 4];
      if ( (_WORD)v18 )
      {
        v19 = *(_QWORD *)&Pool2[12 * v16 + 8];
        if ( (v19 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( v19 + v18 > 0x7FFFFFFF0000LL || v19 + v18 < v19 )
        {
          v15 = v21;
          v16 = v20;
        }
      }
      memmove(v15, *(const void **)&Pool2[4 * v17 + 8], Pool2[4 * v17 + 4]);
      v14[v17 + 2] = v15;
      v15 += Pool2[4 * v17 + 4];
      v21 = v15;
      v20 = ++v16;
      v12 = a2;
    }
    ExFreePoolWithTag(Pool2, 0);
    *a4 = v14;
    return 0LL;
  }
  return result;
}
