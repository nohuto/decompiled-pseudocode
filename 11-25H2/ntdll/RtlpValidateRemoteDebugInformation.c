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

__int64 __fastcall RtlpValidateRemoteDebugInformation(_QWORD *a1, __int16 a2, int a3, __int64 a4)
{
  unsigned int v4; // esi
  int v5; // ebx
  __int64 Heap; // rax
  unsigned __int64 v10; // r9
  __int64 v11; // r15
  __int64 v12; // r8
  _WORD *v13; // r14
  _DWORD *v14; // r8
  __int64 v16; // rcx
  __int64 v17; // r8
  _DWORD *v18; // r8
  __int64 v19; // r8
  __int64 v20; // r8
  __int64 v21; // r8
  unsigned int *v22; // r8
  _DWORD *v23; // r8
  int v24; // eax
  unsigned int i; // r14d
  unsigned int *v26; // rcx
  __int64 v27; // r10
  unsigned int v28; // eax
  __int64 v29; // r10
  __int64 v30; // rcx
  __int64 v31; // r10
  __int64 v32; // [rsp+30h] [rbp-20h]
  _DWORD v33[2]; // [rsp+38h] [rbp-18h] BYREF
  __int64 v34; // [rsp+40h] [rbp-10h]
  __int64 v35; // [rsp+80h] [rbp+30h] BYREF

  v4 = 0;
  v5 = a4;
  v33[1] = 0;
  if ( !a1[14] && !a1[12] && !a1[15] && !a1[18] )
    return v4;
  if ( !a4 )
    return (unsigned int)-1073741823;
  Heap = RtlAllocateHeap(
           (char *)NtCurrentPeb()->ProcessHeap,
           8u,
           ((unsigned __int64)(a4 + 31) >> 3) & 0x1FFFFFFFFFFFFFFCLL);
  v11 = Heap;
  if ( Heap )
  {
    v12 = a1[14];
    v33[0] = v5;
    v34 = Heap;
    if ( v12 )
    {
      if ( !(unsigned __int8)RtlpValidateRange(a3, v5, v12, 8, (__int64)v33) )
        goto LABEL_10;
      v23 = (_DWORD *)a1[14];
      v35 = 0LL;
      v24 = 96 * *v23;
      if ( !is_mul_ok((unsigned int)*v23, 0x60uLL) )
        goto LABEL_10;
      v35 = 96LL * (unsigned int)*v23;
      if ( !(unsigned __int8)RtlpValidateRange(a3, v5, (int)v23 + 8, v24, (__int64)v33) )
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
            || !(unsigned __int8)RtlpValidateRange(a3, v5, *(_QWORD *)(v29 + a1[14] + 88), v35, (__int64)v33) )
          {
            goto LABEL_10;
          }
          v27 = v32;
        }
        v30 = *(unsigned int *)(v27 + a1[14] + 40);
        if ( (_DWORD)v30
          && ((int)RtlULongLongMult(v30, 72LL, &v35) < 0
           || !(unsigned __int8)RtlpValidateRange(a3, v5, *(_QWORD *)(v31 + a1[14] + 80), v35, (__int64)v33)) )
        {
          goto LABEL_10;
        }
      }
    }
    v13 = (_WORD *)a1[12];
    if ( !v13 )
      goto LABEL_17;
    if ( (a2 & 0x100) != 0 )
    {
      while ( (unsigned __int8)RtlpValidateRange(a3, v5, (_DWORD)v13, 2, (__int64)v33)
           && (!*v13 || (unsigned __int8)RtlpValidateRange(a3, v5, (int)v13 + 2, 318, (__int64)v33)) )
      {
        v16 = (unsigned __int16)*v13;
        v13 = (_WORD *)((char *)v13 + v16);
        if ( !(_WORD)v16 )
          goto LABEL_17;
      }
      goto LABEL_10;
    }
    if ( (unsigned __int8)RtlpValidateRange(a3, v5, a1[12], 8, (__int64)v33) )
    {
      v14 = (_DWORD *)a1[12];
      if ( is_mul_ok((unsigned int)*v14, 0x128uLL) )
      {
        if ( (unsigned __int8)RtlpValidateRange(a3, v5, (int)v14 + 8, 296 * *v14, (__int64)v33) )
        {
LABEL_17:
          v17 = a1[15];
          if ( !v17
            || (unsigned __int8)RtlpValidateRange(a3, v5, v17, 8, (__int64)v33)
            && (v18 = (_DWORD *)a1[15], is_mul_ok((unsigned int)*v18, 0x30uLL))
            && (unsigned __int8)RtlpValidateRange(a3, v5, (int)v18 + 8, 48 * *v18, (__int64)v33) )
          {
            v19 = a1[13];
            if ( !v19
              || (unsigned __int8)RtlpValidateRange(a3, v5, v19, 24, (__int64)v33)
              && (v20 = a1[13], is_mul_ok(*(unsigned int *)(v20 + 20), 0x110uLL))
              && (unsigned __int8)RtlpValidateRange(a3, v5, (int)v20 + 24, 272 * *(_DWORD *)(v20 + 20), (__int64)v33) )
            {
              v21 = a1[18];
              if ( !v21 )
                goto LABEL_11;
              if ( (unsigned __int8)RtlpValidateRange(a3, v5, v21, 8, (__int64)v33) )
              {
                v22 = (unsigned int *)a1[18];
                v10 = *v22;
                if ( v10 >= 8 )
                {
                  if ( (unsigned __int8)RtlpValidateRange(a3, v5, (int)v22 + 8, (int)v10 - 8, (__int64)v33) )
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
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v11, v10);
    return v4;
  }
  return 3221225626LL;
}
