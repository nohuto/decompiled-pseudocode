/*
 * XREFs of PopFxConvertV1Components @ 0x140AB7D1C
 * Callers:
 *     PoFxRegisterCoreDevice @ 0x14074B900 (PoFxRegisterCoreDevice.c)
 *     PoFxRegisterDevice @ 0x14074BA40 (PoFxRegisterDevice.c)
 *     PoFxRegisterPrimaryDevice @ 0x14074BD20 (PoFxRegisterPrimaryDevice.c)
 * Callees:
 *     RtlULongLongMult @ 0x14042A2B0 (RtlULongLongMult.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

char *__fastcall PopFxConvertV1Components(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  unsigned int v5; // r9d
  unsigned int i; // r8d
  int v7; // ecx
  unsigned int v8; // r9d
  ULONGLONG v9; // rdi
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rbp
  char *Pool2; // rax
  char *v13; // r10
  unsigned int v14; // r9d
  unsigned int v15; // edi
  char *v16; // rdx
  __int128 *v17; // r11
  __int128 v18; // xmm0
  __int64 v19; // rcx
  ULONGLONG pullResult; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0LL;
  pullResult = 0LL;
  if ( a2 )
  {
    v5 = 0;
    for ( i = 0; i < a2; ++i )
    {
      v7 = *(_DWORD *)(32LL * i + a1 + 16);
      if ( !v7 || v7 + v5 < v5 )
        return (char *)v2;
      v5 += v7;
    }
    if ( RtlULongLongMult(a2, 0x38uLL, &pullResult) >= 0 )
    {
      v9 = (pullResult + 7) & 0xFFFFFFFFFFFFFFF8uLL;
      v10 = 24LL * v8;
      if ( v10 <= 0xFFFFFFFF )
      {
        v11 = v9 + (unsigned int)v10;
        if ( v11 >= (unsigned int)v10 )
        {
          Pool2 = (char *)ExAllocatePool2(0x40uLL, v9 + (unsigned int)v10, 0x4D584650u);
          if ( Pool2 )
          {
            v13 = &Pool2[v9];
            v14 = 0;
LABEL_12:
            if ( v14 >= a2 )
            {
              return Pool2;
            }
            else
            {
              v15 = 0;
              v16 = &Pool2[56 * v14];
              v17 = (__int128 *)(a1 + 32LL * v14);
              v18 = *v17;
              *((_QWORD *)v16 + 2) = 0LL;
              *(_OWORD *)v16 = v18;
              *((_DWORD *)v16 + 7) = *((_DWORD *)v17 + 4);
              *((_QWORD *)v16 + 4) = v13;
              *((_DWORD *)v16 + 6) = *((_DWORD *)v17 + 5);
              while ( 1 )
              {
                if ( v15 >= *((_DWORD *)v17 + 4) )
                {
                  ++v14;
                  goto LABEL_12;
                }
                if ( v13 - Pool2 > v11 - 24 )
                  break;
                v19 = *((_QWORD *)v17 + 3);
                *((_DWORD *)v13 + 4) = *(_DWORD *)(v19 + 24LL * v15 + 16);
                *(_QWORD *)v13 = *(_QWORD *)(v19 + 24LL * v15);
                *((_QWORD *)v13 + 1) = *(_QWORD *)(v19 + 24LL * v15 + 8);
                v13 += 24;
                ++v15;
              }
              ExFreePoolWithTag(Pool2, 0x4D584650u);
            }
          }
        }
      }
    }
  }
  return (char *)v2;
}
