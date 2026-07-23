/*
 * XREFs of RtlpValidateRemoteDebugInformation @ 0x180099670
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x1800989B0 (RtlQueryProcessDebugInformation.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlpValidateRange @ 0x18009AF1C (RtlpValidateRange.c)
 *     RtlULongLongMult @ 0x1800F0FC4 (RtlULongLongMult.c)
 */

__int64 __fastcall RtlpValidateRemoteDebugInformation(_QWORD *a1, __int16 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // esi
  PVOID Heap; // rax
  void *v10; // r15
  __int64 v11; // r8
  _WORD *v12; // r14
  unsigned int *v13; // r8
  __int64 v15; // rcx
  __int64 v16; // r8
  unsigned int *v17; // r8
  __int64 v18; // r8
  __int64 v19; // r8
  __int64 v20; // r8
  unsigned int *v21; // r8
  unsigned __int64 v22; // r9
  unsigned int *v23; // r8
  __int64 v24; // rax
  unsigned int i; // r14d
  unsigned int *v26; // rcx
  __int64 v27; // r10
  unsigned int v28; // eax
  __int64 v29; // r10
  __int64 v30; // rcx
  __int64 v31; // r10
  __int64 v32; // [rsp+30h] [rbp-20h]
  _DWORD v33[2]; // [rsp+38h] [rbp-18h] BYREF
  PVOID v34; // [rsp+40h] [rbp-10h]
  __int64 v35; // [rsp+80h] [rbp+30h] BYREF

  v4 = 0;
  v33[1] = 0;
  if ( !a1[14] && !a1[12] && !a1[15] && !a1[18] )
    return v4;
  if ( !a4 )
    return (unsigned int)-1073741823;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, ((unsigned __int64)(a4 + 31) >> 3) & 0x1FFFFFFFFFFFFFFCLL);
  v10 = Heap;
  if ( Heap )
  {
    v11 = a1[14];
    v33[0] = a4;
    v34 = Heap;
    if ( v11 )
    {
      if ( !(unsigned __int8)RtlpValidateRange(a3, a4, v11, 8LL, v33) )
        goto LABEL_10;
      v23 = (unsigned int *)a1[14];
      v35 = 0LL;
      v24 = 96LL * *v23;
      if ( !is_mul_ok(*v23, 0x60uLL) )
        goto LABEL_10;
      v35 = 96LL * *v23;
      if ( !(unsigned __int8)RtlpValidateRange(a3, a4, v23 + 2, v24, v33) )
        goto LABEL_10;
      for ( i = 0; ; ++i )
      {
        v26 = (unsigned int *)a1[14];
        if ( i >= *v26 )
          break;
        v27 = 96LL * i;
        v32 = v27;
        v28 = *(unsigned int *)((char *)v26 + v27 + 44);
        if ( v28 )
        {
          if ( (int)RtlULongLongMult(v28, 32LL, &v35) < 0
            || !(unsigned __int8)RtlpValidateRange(a3, a4, *(_QWORD *)(v29 + a1[14] + 88), v35, v33) )
          {
            goto LABEL_10;
          }
          v27 = v32;
        }
        v30 = *(unsigned int *)(v27 + a1[14] + 40);
        if ( (_DWORD)v30
          && ((int)RtlULongLongMult(v30, 72LL, &v35) < 0
           || !(unsigned __int8)RtlpValidateRange(a3, a4, *(_QWORD *)(v31 + a1[14] + 80), v35, v33)) )
        {
          goto LABEL_10;
        }
      }
    }
    v12 = (_WORD *)a1[12];
    if ( !v12 )
      goto LABEL_17;
    if ( (a2 & 0x100) != 0 )
    {
      while ( (unsigned __int8)RtlpValidateRange(a3, a4, v12, 2LL, v33)
           && (!*v12 || (unsigned __int8)RtlpValidateRange(a3, a4, v12 + 1, 318LL, v33)) )
      {
        v15 = (unsigned __int16)*v12;
        v12 = (_WORD *)((char *)v12 + v15);
        if ( !(_WORD)v15 )
          goto LABEL_17;
      }
      goto LABEL_10;
    }
    if ( (unsigned __int8)RtlpValidateRange(a3, a4, a1[12], 8LL, v33) )
    {
      v13 = (unsigned int *)a1[12];
      if ( is_mul_ok(*v13, 0x128uLL) )
      {
        if ( (unsigned __int8)RtlpValidateRange(a3, a4, v13 + 2, 296LL * *v13, v33) )
        {
LABEL_17:
          v16 = a1[15];
          if ( !v16
            || (unsigned __int8)RtlpValidateRange(a3, a4, v16, 8LL, v33)
            && (v17 = (unsigned int *)a1[15], is_mul_ok(*v17, 0x30uLL))
            && (unsigned __int8)RtlpValidateRange(a3, a4, v17 + 2, 48LL * *v17, v33) )
          {
            v18 = a1[13];
            if ( !v18
              || (unsigned __int8)RtlpValidateRange(a3, a4, v18, 24LL, v33)
              && (v19 = a1[13], is_mul_ok(*(unsigned int *)(v19 + 20), 0x110uLL))
              && (unsigned __int8)RtlpValidateRange(a3, a4, v19 + 24, 272LL * *(unsigned int *)(v19 + 20), v33) )
            {
              v20 = a1[18];
              if ( !v20 )
                goto LABEL_11;
              if ( (unsigned __int8)RtlpValidateRange(a3, a4, v20, 8LL, v33) )
              {
                v21 = (unsigned int *)a1[18];
                v22 = *v21;
                if ( v22 >= 8 )
                {
                  if ( (unsigned __int8)RtlpValidateRange(a3, a4, v21 + 2, v22 - 8, v33) )
                    goto LABEL_11;
                }
              }
            }
          }
        }
      }
    }
LABEL_10:
    v4 = -1073741823;
LABEL_11:
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v10);
    return v4;
  }
  return 3221225626LL;
}
