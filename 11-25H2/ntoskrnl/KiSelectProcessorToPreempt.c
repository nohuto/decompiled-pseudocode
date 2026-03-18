/*
 * XREFs of KiSelectProcessorToPreempt @ 0x140330680
 * Callers:
 *     KiHeteroSelectProcessorToPreempt @ 0x140330300 (KiHeteroSelectProcessorToPreempt.c)
 *     KiChooseTargetProcessor @ 0x1404E7040 (KiChooseTargetProcessor.c)
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 */

__int64 __fastcall KiSelectProcessorToPreempt(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbp
  unsigned __int8 *v8; // rdx
  __int64 v9; // rdi
  int v10; // ebx
  _BYTE *v11; // rsi
  char v12; // r13
  unsigned int v13; // r11d
  char v14; // r10
  int v15; // r9d
  int v16; // edx
  __int64 v18; // r14
  unsigned int v19; // ebx
  __int64 v20; // r8
  _BYTE *v21; // r13
  unsigned int v22; // ebx
  __int64 v23; // r8
  _BYTE *v24; // r14
  __int64 v25; // rax
  _BYTE v26[64]; // [rsp+30h] [rbp-78h] BYREF

  v5 = *(_QWORD *)(a2 + 36416) & a3;
  if ( ((v5 - 1) & v5) != 0 )
  {
    v8 = *(unsigned __int8 **)(a2 + 36424);
    v9 = v8[705];
    v10 = v8[704];
    v11 = &v26[v9];
    v12 = v8[705];
    memmove(&v26[v9], v8 + 576, v8[704]);
    v13 = v9 + v10;
    v14 = *(_BYTE *)(a1 + 195);
    v15 = -1;
    if ( (KiHeteroSchedulerOptionsMask & 2) == 0 || (KiHeteroSchedulerOptions & 2) != 0 )
    {
      v16 = *(unsigned __int8 *)(a1 + 516);
      if ( (unsigned int)(v16 - 5) <= 1 || (_BYTE)v16 == 1 || v16 == 2 )
      {
        if ( KeHeteroSystemQos )
        {
          v18 = *(_QWORD *)(*(_QWORD *)(a2 + 192) + 328LL);
          if ( (v18 & v5) != 0 )
          {
            v19 = v9;
            if ( (unsigned int)v9 < v13 )
            {
              v20 = __ROL8__(1LL, v9);
              v21 = &v26[v9];
              do
              {
                if ( (v18 & v20 & v5) != 0 && (*v21 & 0x7F) < v14 )
                {
                  v15 = v19;
                  v14 = *v21 & 0x7F;
                }
                ++v19;
                v20 = __ROL8__(v20, 1);
                ++v21;
              }
              while ( v19 < v13 );
              v12 = v9;
            }
          }
        }
      }
    }
    if ( !a4 )
    {
LABEL_6:
      if ( v15 < 0 )
      {
        if ( (unsigned int)v9 >= v13 )
          return a2;
        v25 = __ROL8__(1LL, v12);
        do
        {
          if ( (v25 & v5) != 0 && (*v11 & 0x7F) < v14 )
          {
            v15 = v9;
            v14 = *v11 & 0x7F;
          }
          LODWORD(v9) = v9 + 1;
          v25 = __ROL8__(v25, 1);
          ++v11;
        }
        while ( (unsigned int)v9 < v13 );
        if ( v15 < 0 )
          return a2;
      }
      return KiProcessorBlock[*((unsigned int *)qword_140F216A8 + 64 * *(unsigned __int8 *)(a2 + 208) + v15)];
    }
    if ( v15 >= 0 )
      return KiProcessorBlock[*((unsigned int *)qword_140F216A8 + 64 * *(unsigned __int8 *)(a2 + 208) + v15)];
    v22 = v9;
    if ( (unsigned int)v9 < v13 )
    {
      v23 = __ROL8__(1LL, v12);
      v24 = &v26[v9];
      do
      {
        if ( (v23 & a4) != 0 && (*v24 & 0x7F) < v14 )
        {
          v15 = v22;
          v14 = *v24 & 0x7F;
        }
        ++v22;
        v23 = __ROL8__(v23, 1);
        ++v24;
      }
      while ( v22 < v13 );
      goto LABEL_6;
    }
  }
  return a2;
}
