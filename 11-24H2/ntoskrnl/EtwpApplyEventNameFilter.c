/*
 * XREFs of EtwpApplyEventNameFilter @ 0x1404ED680
 * Callers:
 *     EtwpEventWriteFull @ 0x140326D30 (EtwpEventWriteFull.c)
 *     EtwpWriteUserEvent @ 0x140AD78A0 (EtwpWriteUserEvent.c)
 * Callees:
 *     EtwpEventNameFilterSearch @ 0x1403FD9B0 (EtwpEventNameFilterSearch.c)
 *     EtwpIsEventNameFilterEnabled @ 0x1404EDA40 (EtwpIsEventNameFilterEnabled.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     strnlen @ 0x1404FD180 (strnlen.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1406B4C20 (_alloca_probe.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

_BOOL8 __fastcall EtwpApplyEventNameFilter(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned __int64 a4,
        char a5,
        unsigned __int8 a6,
        unsigned __int8 a7,
        __int64 a8,
        char a9)
{
  unsigned __int16 v10; // r13
  char *v11; // rbx
  void **v12; // rsi
  unsigned __int8 CurrentIrql; // r12
  bool v14; // di
  __int64 v15; // rax
  unsigned int i; // ecx
  unsigned __int8 v17; // r15
  unsigned int v18; // ecx
  char *v19; // r8
  char *Pool2; // rax
  unsigned __int64 v21; // rax
  void *v22; // rsp
  unsigned __int8 v23; // si
  __int64 v24; // rcx
  __int64 v25; // r14
  _BYTE *v26; // r14
  __int64 v27; // rcx
  const char *v28; // rdi
  const char *v29; // rsi
  char *v30; // rax
  unsigned __int16 v31; // si
  char v33; // [rsp+30h] [rbp+0h] BYREF
  char v34; // [rsp+31h] [rbp+1h]
  char *v35; // [rsp+38h] [rbp+8h]
  void **v36; // [rsp+40h] [rbp+10h]
  unsigned int v37; // [rsp+48h] [rbp+18h]
  unsigned int v38; // [rsp+4Ch] [rbp+1Ch]
  __int64 v39; // [rsp+50h] [rbp+20h]
  void *Src[2]; // [rsp+58h] [rbp+28h] BYREF

  v38 = a2;
  v39 = a1;
  v10 = 0;
  v11 = 0LL;
  v35 = 0LL;
  *(_OWORD *)Src = 0LL;
  v12 = 0LL;
  v36 = 0LL;
  CurrentIrql = 0;
  v34 = 0;
  v14 = 1;
  v33 = 1;
  if ( a5 )
  {
    v15 = 16LL * a3;
    if ( v15 )
    {
      if ( (a4 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v15 + a4 > 0x7FFFFFFF0000LL || v15 + a4 < a4 )
      {
        v14 = v33;
        v11 = v35;
        v12 = v36;
      }
    }
  }
  for ( i = 0; ; ++i )
  {
    v37 = i;
    if ( i >= a3 )
    {
      v17 = a6;
      goto LABEL_28;
    }
    if ( *(_BYTE *)(a4 + 16LL * i + 12) == 1 )
      break;
  }
  v12 = (void **)(a4 + 16LL * i);
  v17 = a6;
  if ( a6 >= 2u )
  {
    v36 = (void **)(a4 + 16LL * i);
    v11 = (char *)*v12;
    v35 = (char *)*v12;
  }
  else
  {
    *(_OWORD *)Src = *(_OWORD *)v12;
    v12 = Src;
    v36 = Src;
    v18 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)Src, 8));
    if ( v18 >= 0xFFFF )
    {
      v14 = 0;
      v33 = 0;
      goto LABEL_63;
    }
    if ( a5 )
    {
      if ( v18 )
      {
        v19 = (char *)Src[0] + v18;
        if ( (unsigned __int64)v19 > 0x7FFFFFFF0000LL || v19 < Src[0] )
        {
          v14 = v33;
          v18 = (unsigned int)Src[1];
          v12 = v36;
        }
      }
    }
    if ( v18 <= 0x100 )
    {
      v21 = LODWORD(Src[1]) + 15LL;
      if ( v21 < LODWORD(Src[1]) )
        v21 = 0xFFFFFFFFFFFFFF0LL;
      v22 = alloca(v21 & 0xFFFFFFFFFFFFFFF0uLL);
      v11 = &v33;
      v35 = &v33;
      memmove(&v33, Src[0], v18);
    }
    else
    {
      Pool2 = (char *)ExAllocatePool2(0x42uLL, LODWORD(Src[1]), 0x74777445u);
      v11 = Pool2;
      v35 = Pool2;
      if ( !Pool2 )
      {
        v14 = 1;
        v33 = 1;
        goto LABEL_63;
      }
      v34 = 1;
      memmove(Pool2, Src[0], LODWORD(Src[1]));
    }
  }
LABEL_28:
  if ( !v12 || !v11 )
    goto LABEL_57;
  v23 = 2;
  if ( v17 < 2u )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  }
  v24 = *(_QWORD *)(a1 + 640);
  if ( v24 )
  {
    v25 = 104LL * v38;
    if ( a9 )
      v26 = *(_BYTE **)(v25 + v24 + 56);
    else
      v26 = *(_BYTE **)(v25 + v24 + 96);
    if ( v26 )
    {
      if ( v17 > 2u )
        v23 = v17;
      if ( (unsigned __int8)EtwpIsEventNameFilterEnabled(v39, v38, v23, a7, a8, a9) )
      {
        v27 = *((unsigned int *)v36 + 2);
        v11 = v35;
        if ( (unsigned int)v27 >= 3 )
        {
          v28 = v35 + 2;
          v29 = &v35[v27];
          while ( 1 )
          {
            v30 = (char *)v28;
            if ( v28 == v29 )
              break;
            ++v28;
            if ( *v30 >= 0 )
            {
              if ( v28 != v29 )
              {
                v31 = (_WORD)v29 - (_WORD)v28;
                if ( v28 )
                  v10 = strnlen(v28, v31);
                if ( v10 != v31 && v28 )
                {
                  if ( v10 )
                    v14 = *v26 == (unsigned __int8)EtwpEventNameFilterSearch(v28, v10, (__int64)v26);
                  else
                    v14 = *v26 == 0;
                  goto LABEL_59;
                }
              }
              break;
            }
          }
        }
        if ( v17 < 2u )
        {
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
          __writecr8(CurrentIrql);
        }
LABEL_57:
        v14 = 1;
        goto LABEL_63;
      }
    }
    v14 = v33;
    v11 = v35;
  }
LABEL_59:
  if ( v17 < 2u )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
LABEL_63:
  if ( v34 )
    ExFreePoolWithTag(v11, 0);
  return v14;
}
