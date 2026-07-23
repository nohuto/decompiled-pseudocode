/*
 * XREFs of KiSelectProcessorToPreempt @ 0x14041B510
 * Callers:
 *     KiChooseTargetProcessor @ 0x1404DE410 (KiChooseTargetProcessor.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

__int64 __fastcall KiSelectProcessorToPreempt(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbp
  unsigned __int8 *v8; // rdx
  __int64 v9; // rdi
  int v10; // ebx
  _BYTE *v11; // rsi
  char v12; // r12
  unsigned int v13; // r11d
  char v14; // r8
  int v15; // r10d
  int v16; // edx
  __int64 v18; // r12
  __int64 v19; // rax
  unsigned int v20; // ebx
  __int64 v21; // r9
  _BYTE *v22; // r14
  unsigned int v23; // ebx
  __int64 v24; // r9
  _BYTE *v25; // r14
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
      if ( (unsigned int)(v16 - 5) <= 1 || v16 == 2 || (_BYTE)v16 == 1 )
      {
        if ( KeHeteroSystemQos )
        {
          v18 = *(_QWORD *)(*(_QWORD *)(a2 + 192) + 328LL);
          if ( (v18 & v5) != 0 )
          {
            v20 = v9;
            if ( (unsigned int)v9 < v13 )
            {
              v21 = __ROL8__(1LL, v9);
              v22 = &v26[v9];
              do
              {
                if ( (v18 & v21 & v5) != 0 && (*v22 & 0x7F) < v14 )
                {
                  v15 = v20;
                  v14 = *v22 & 0x7F;
                }
                ++v20;
                v21 = __ROL8__(v21, 1);
                ++v22;
              }
              while ( v20 < v13 );
            }
          }
          v12 = v9;
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
        v19 = __ROL8__(1LL, v12);
        do
        {
          if ( (v19 & v5) != 0 && (*v11 & 0x7F) < v14 )
          {
            v15 = v9;
            v14 = *v11 & 0x7F;
          }
          LODWORD(v9) = v9 + 1;
          v19 = __ROL8__(v19, 1);
          ++v11;
        }
        while ( (unsigned int)v9 < v13 );
        if ( v15 < 0 )
          return a2;
      }
      return KiProcessorBlock[*((unsigned int *)qword_140F22998 + 64 * *(unsigned __int8 *)(a2 + 208) + v15)];
    }
    if ( v15 >= 0 )
      return KiProcessorBlock[*((unsigned int *)qword_140F22998 + 64 * *(unsigned __int8 *)(a2 + 208) + v15)];
    v23 = v9;
    if ( (unsigned int)v9 < v13 )
    {
      v24 = __ROL8__(1LL, v12);
      v25 = &v26[v9];
      do
      {
        if ( (v24 & a4) != 0 && (*v25 & 0x7F) < v14 )
        {
          v15 = v23;
          v14 = *v25 & 0x7F;
        }
        ++v23;
        v24 = __ROL8__(v24, 1);
        ++v25;
      }
      while ( v23 < v13 );
      v12 = v9;
      goto LABEL_6;
    }
  }
  return a2;
}
