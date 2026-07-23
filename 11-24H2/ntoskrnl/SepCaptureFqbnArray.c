/*
 * XREFs of SepCaptureFqbnArray @ 0x140792058
 * Callers:
 *     SepCaptureTokenSecurityAttributesInformation @ 0x14088BFA8 (SepCaptureTokenSecurityAttributesInformation.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepCaptureFqbnArray(void *Src, unsigned int a2, __int64 a3, _QWORD *a4)
{
  size_t v5; // r13
  __int64 v6; // r15
  unsigned int v7; // edi
  __int64 result; // rax
  unsigned __int16 *Pool2; // rbx
  ULONG_PTR v10; // rdx
  __int64 v11; // r8
  unsigned int v12; // r15d
  unsigned int v13; // ecx
  _QWORD *v14; // rax
  _QWORD *v15; // r14
  char *v16; // rsi
  unsigned int v17; // edi
  __int64 v18; // r15
  __int64 v19; // rax
  unsigned __int64 v20; // rcx
  unsigned int v21; // [rsp+20h] [rbp-48h]
  char *v22; // [rsp+28h] [rbp-40h]

  v5 = 24LL * a2;
  v6 = 0xFFFFFFFFLL;
  if ( v5 <= 0xFFFFFFFF )
    v6 = (unsigned int)v5;
  v7 = -1073741675;
  result = v5 > 0xFFFFFFFF ? 0xC0000095 : 0;
  if ( v5 <= 0xFFFFFFFF )
  {
    Pool2 = (unsigned __int16 *)ExAllocatePool2(0x100uLL, (unsigned int)v6, 0x74416553u);
    if ( !Pool2 )
      return 3221225626LL;
    if ( (_DWORD)v6 && ((unsigned __int8)Src & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    memmove(Pool2, Src, (unsigned int)v6);
    if ( ((v6 + 1) & 0xFFFFFFFFFFFFFFFEuLL) < (unsigned int)v6 )
      goto LABEL_16;
    v10 = ((_DWORD)v6 + 1) & 0xFFFFFFFE;
    v11 = 0LL;
    v12 = a2;
    while ( (unsigned int)v11 < a2 )
    {
      v13 = v10 + Pool2[12 * v11 + 4];
      if ( v13 < (unsigned int)v10 )
        goto LABEL_16;
      v10 = v13;
      v11 = (unsigned int)(v11 + 1);
    }
    v14 = (_QWORD *)ExAllocatePool2(0x100uLL, v10, 0x74416553u);
    v15 = v14;
    if ( !v14 )
    {
      v7 = -1073741670;
LABEL_16:
      ExFreePoolWithTag(Pool2, 0);
      return v7;
    }
    memmove(v14, Pool2, v5);
    v16 = (char *)(((unsigned __int64)&v15[v5 / 8] + 1) & 0xFFFFFFFFFFFFFFFEuLL);
    v22 = v16;
    v17 = 0;
    v21 = 0;
    while ( v17 < v12 )
    {
      v18 = 3LL * v17;
      v19 = Pool2[12 * v17 + 4];
      if ( (_WORD)v19 )
      {
        v20 = *(_QWORD *)&Pool2[12 * v17 + 8];
        if ( (v20 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( v20 + v19 > 0x7FFFFFFF0000LL || v20 + v19 < v20 )
        {
          v16 = v22;
          v17 = v21;
        }
      }
      memmove(v16, *(const void **)&Pool2[4 * v18 + 8], Pool2[4 * v18 + 4]);
      v15[v18 + 2] = v16;
      v16 += Pool2[4 * v18 + 4];
      v22 = v16;
      v21 = ++v17;
      v12 = a2;
    }
    ExFreePoolWithTag(Pool2, 0);
    *a4 = v15;
    return 0LL;
  }
  return result;
}
