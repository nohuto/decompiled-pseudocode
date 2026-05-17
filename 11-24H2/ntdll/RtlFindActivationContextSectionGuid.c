/*
 * XREFs of RtlFindActivationContextSectionGuid @ 0x18005EAD0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpFindActivationContextSection_FillOutReturnedData @ 0x18003E6EC (RtlpFindActivationContextSection_FillOutReturnedData.c)
 *     RtlpFindNextActivationContextSection @ 0x18005E590 (RtlpFindNextActivationContextSection.c)
 *     DbgPrintEx @ 0x18005EA90 (DbgPrintEx.c)
 *     bsearch @ 0x180123D40 (bsearch.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x180165F10 (RtlCompareMemory.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180172020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlFindActivationContextSectionGuid(int a1, __int64 a2, int a3, _DWORD *a4, unsigned int *a5)
{
  struct _TEB *v6; // rcx
  _PEB *ProcessEnvironmentBlock; // rax
  unsigned int NextActivationContextSection; // ebx
  int v11; // edi
  unsigned int *v12; // rbx
  unsigned int v13; // r15d
  bool v14; // dl
  __int64 v15; // r8
  __int64 v16; // rax
  __int128 v17; // xmm0
  _DWORD *v18; // r13
  int v19; // eax
  unsigned int v20; // eax
  unsigned int *v21; // r15
  unsigned int *v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // r15
  void (__fastcall *v25)(__int64, __int64, _QWORD, _QWORD, _QWORD, char *); // rax
  char v26[4]; // [rsp+40h] [rbp-51h] BYREF
  unsigned int v27; // [rsp+44h] [rbp-4Dh] BYREF
  unsigned int v28; // [rsp+48h] [rbp-49h]
  unsigned int *v29; // [rsp+50h] [rbp-41h] BYREF
  __int64 v30; // [rsp+58h] [rbp-39h] BYREF
  _QWORD v31[2]; // [rsp+60h] [rbp-31h] BYREF
  int v32; // [rsp+70h] [rbp-21h]
  __int64 v33; // [rsp+74h] [rbp-1Dh]
  int v34; // [rsp+7Ch] [rbp-15h]
  unsigned int *v35; // [rsp+80h] [rbp-11h]
  __int128 Key; // [rsp+88h] [rbp-9h] BYREF
  __int64 v37; // [rsp+98h] [rbp+7h]
  int v38; // [rsp+A0h] [rbp+Fh]

  v34 = 0;
  v6 = NtCurrentTeb();
  v29 = 0LL;
  ProcessEnvironmentBlock = v6->ProcessEnvironmentBlock;
  if ( !ProcessEnvironmentBlock->ActivationContextData
    && !ProcessEnvironmentBlock->SystemDefaultActivationContextData
    && !v6->ActivationContextStackPointer->ActiveFrame )
  {
    return 3222601729LL;
  }
  v27 = 0;
  if ( !a4 || (a1 & 0xFFFFFFF8) != 0 )
    return (unsigned int)-1073741811;
  if ( (a1 & 7) != 0 )
  {
    if ( !a5 )
      return (unsigned int)-1073741811;
    goto LABEL_6;
  }
  if ( a5 )
  {
LABEL_6:
    if ( *a5 >= 0x40 )
      goto LABEL_7;
    return (unsigned int)-1073741811;
  }
LABEL_7:
  if ( (a1 & 2) != 0 && a5 + 18 > (unsigned int *)((char *)a5 + *a5) )
  {
    NextActivationContextSection = -1073741811;
    DbgPrintEx(
      51,
      0,
      "SXS: %s() flags contains return_flags but they don't fit in size, return invalid_parameter 0x%08lx.\n",
      "RtlpFindActivationContextSection_CheckParameters",
      -1073741811);
    return NextActivationContextSection;
  }
  if ( (a1 & 4) != 0 && a5 + 28 > (unsigned int *)((char *)a5 + *a5) )
  {
    NextActivationContextSection = -1073741811;
    DbgPrintEx(
      51,
      0,
      "SXS: %s() flags contains return_assembly_metadata but they don't fit in size, return invalid_parameter 0x%08lx.\n",
      "RtlpFindActivationContextSection_CheckParameters",
      -1073741811);
    return NextActivationContextSection;
  }
  v31[1] = a2;
  v32 = a3;
  v31[0] = 32LL;
  v33 = 0LL;
  v30 = 0LL;
  NextActivationContextSection = RtlpFindNextActivationContextSection((__int64)v31, (int)&v29, (__int64)&v27, &v30);
  if ( (NextActivationContextSection & 0x80000000) != 0 )
    return NextActivationContextSection;
  while ( 1 )
  {
    v11 = v27;
    v12 = v29;
    if ( v27 < 0x28 || *v29 != 1682469703 )
    {
      DbgPrintEx(
        51,
        0,
        "RtlFindActivationContextSectionGuid() found section at %p (length %lu) which is not a GUID section\n",
        v29,
        v27);
      return (unsigned int)-1072365565;
    }
    v13 = v29[5];
    if ( !v13 )
      goto LABEL_30;
    v14 = 0;
    v15 = v29[7];
    if ( (_DWORD)v15 )
      v14 = v29[2] == 1;
    if ( v14 )
    {
      v20 = 0;
      v21 = (unsigned int *)((char *)&v29[2 * (*a4 % *(unsigned int *)((char *)v29 + v15))]
                           + *(unsigned int *)((char *)v29 + v15 + 4));
      v22 = (unsigned int *)((char *)v29 + v21[1]);
      while ( 1 )
      {
        v28 = v20;
        if ( v20 >= *v21 )
          goto LABEL_30;
        v18 = (unsigned int *)((char *)v12 + *v22);
        v35 = v22 + 1;
        if ( RtlCompareMemory(v18, a4, 0x10uLL) == 16 )
          goto LABEL_29;
        v22 = v35;
        v20 = v28 + 1;
      }
    }
    v16 = v29[6];
    if ( (v29[4] & 1) != 0 )
      break;
    v18 = (unsigned int *)((char *)v29 + v16);
    while ( v13 )
    {
      if ( RtlCompareMemory(v18, a4, 0x10uLL) == 16 )
        goto LABEL_29;
      --v13;
      v18 += 7;
    }
LABEL_30:
    v19 = RtlpFindNextActivationContextSection((__int64)v31, (int)&v29, (__int64)&v27, &v30);
    NextActivationContextSection = v19;
    if ( v19 < 0 )
    {
      if ( v19 == -1072365567 )
        return (unsigned int)-1072365560;
      return NextActivationContextSection;
    }
  }
  v17 = *(_OWORD *)a4;
  v37 = 0LL;
  v38 = 0;
  Key = v17;
  v18 = bsearch(&Key, (char *)v29 + v16, v13, 0x1CuLL, RtlpCompareProtectedPolicyEntry);
LABEL_29:
  if ( !v18 || !v18[4] )
    goto LABEL_30;
  if ( a5 )
  {
    v23 = *a5;
    a5[1] = v12[3];
    *((_QWORD *)a5 + 1) = (char *)v12 + (unsigned int)v18[4];
    a5[4] = v18[5];
    if ( a5 + 17 <= (unsigned int *)((char *)a5 + v23) )
      a5[16] = v18[6];
  }
  v24 = v30;
  if ( ((v30 - 1) | 7) != 0xFFFFFFFFFFFFFFFFuLL )
  {
    v25 = *(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _QWORD, char *))(v30 + 32);
    if ( v25 )
    {
      if ( (*(_BYTE *)(v30 + 48) & 8) == 0 || (*(_BYTE *)(v30 + 80) & 8) == 0 )
      {
        v26[0] = 0;
        v25(3LL, v30, *(_QWORD *)(v30 + 24), *(_QWORD *)(v30 + 40), 0LL, v26);
        *(_DWORD *)(v24 + 48) |= 8u;
        if ( v26[0] )
          *(_DWORD *)(v24 + 80) |= 8u;
      }
    }
  }
  if ( !a5 )
    return 0;
  NextActivationContextSection = RtlpFindActivationContextSection_FillOutReturnedData(
                                   a1,
                                   (__int64)a5,
                                   v24,
                                   (__int64)v31,
                                   (__int64)v12,
                                   v12[8],
                                   v12[9],
                                   v11);
  if ( (NextActivationContextSection & 0x80000000) == 0 )
    return 0;
  return NextActivationContextSection;
}
