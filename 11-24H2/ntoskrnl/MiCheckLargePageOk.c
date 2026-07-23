/*
 * XREFs of MiCheckLargePageOk @ 0x140C57D14
 * Callers:
 *     MiInitNucleus @ 0x140C51428 (MiInitNucleus.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140293050 (MI_IS_PHYSICAL_ADDRESS.c)
 *     RtlImageNtHeaderEx @ 0x140414520 (RtlImageNtHeaderEx.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     MiCheckLargePageSystemImage @ 0x140C57ED4 (MiCheckLargePageSystemImage.c)
 *     MiVerifyLargeSectionLayout @ 0x140C584CC (MiVerifyLargeSectionLayout.c)
 */

__int64 __fastcall MiCheckLargePageOk(ULONG_PTR BugCheckParameter2)
{
  __int64 **v1; // rsi
  unsigned int v2; // ebp
  unsigned int v3; // edi
  __int64 *v5; // r15
  int v6; // eax
  unsigned int v7; // ecx
  __int64 v8; // rax
  ULONG_PTR v9; // r14
  __int64 v10; // rdi
  _QWORD *v11; // rsi
  void *v12; // rbp
  ULONG_PTR SectionAlignment; // rdx
  _QWORD *v15; // rsi
  int i; // ebp
  unsigned __int64 v17; // rdi
  int v18; // eax
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+50h] [rbp+8h] BYREF

  v1 = *(__int64 ***)(BugCheckParameter2 + 16);
  v2 = 0;
  v3 = 0;
  do
  {
    while ( 1 )
    {
      v5 = v1[6];
      v6 = MI_IS_PHYSICAL_ADDRESS((unsigned __int64)v5);
      v7 = v2 + 1;
      if ( !v6 )
        v7 = v2;
      v8 = (__int64)v5 + *((unsigned int *)v1 + 16);
      v2 = v7;
      v9 = v7;
      if ( v3 )
        break;
      PsNtosImageBase = v5;
      v3 = 1;
      v1 = (__int64 **)*v1;
      PsNtosImageEnd = v8;
    }
    ++v3;
    PsHalImageBase = v5;
    v1 = (__int64 **)*v1;
    PsHalImageEnd = v8;
  }
  while ( v3 < 2 );
  v10 = 0LL;
  v11 = *(_QWORD **)(BugCheckParameter2 + 16);
  while ( !(_DWORD)v10 )
  {
    v12 = (void *)v11[6];
    OutHeaders = 0LL;
    qword_140E2D980[v10] = (__int64)v11;
    RtlImageNtHeaderEx(1u, v12, 0LL, &OutHeaders);
    SectionAlignment = OutHeaders->OptionalHeader.SectionAlignment;
    if ( (_DWORD)SectionAlignment != 4096 )
      KeBugCheckEx(0x1Au, 0x3030307uLL, BugCheckParameter2, SectionAlignment, 0LL);
    MiVerifyLargeSectionLayout((ULONG_PTR)v12);
    v11 = (_QWORD *)*v11;
    v10 = 1LL;
  }
  if ( !(_DWORD)v9 )
    return 0LL;
  if ( (_DWORD)v9 != 1 )
    KeBugCheckEx(0x1Au, 0x3030302uLL, BugCheckParameter2, v9, 0LL);
  v15 = *(_QWORD **)(BugCheckParameter2 + 16);
  for ( i = 0; !i; i = 1 )
  {
    v17 = v15[6];
    if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(v17) != 1 )
    {
      v18 = MI_IS_PHYSICAL_ADDRESS(v17);
      KeBugCheckEx(0x1Au, 0x3030304uLL, BugCheckParameter2, v17, v18);
    }
    if ( ((v17 + 0x1FFFFF) & 0xFFFFFFFFFFE00000uLL) != v17 )
      KeBugCheckEx(0x1Au, 0x3030306uLL, BugCheckParameter2, v17, 0LL);
    MiCheckLargePageSystemImage(BugCheckParameter2);
    v15 = (_QWORD *)*v15;
  }
  MiFlags |= 4uLL;
  return 1LL;
}
