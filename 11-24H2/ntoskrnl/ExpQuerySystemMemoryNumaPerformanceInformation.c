/*
 * XREFs of ExpQuerySystemMemoryNumaPerformanceInformation @ 0x1407C5B7C
 * Callers:
 *     ExpQuerySystemInformation @ 0x140ADC240 (ExpQuerySystemInformation.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpQuerySystemMemoryNumaPerformanceInformation(
        __int128 *a1,
        unsigned int a2,
        void *a3,
        unsigned int a4,
        unsigned int *a5)
{
  unsigned int *Pool2; // rdi
  _BYTE *v8; // rsi
  int v9; // ebx
  int v10; // r14d
  int v11; // eax
  unsigned int v12; // r15d
  _DWORD *v13; // rax
  unsigned int i; // r10d
  __int64 v15; // rdx
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  int v19; // r8d
  unsigned __int8 v20; // al
  __int64 v21; // r9
  char v22; // cl
  __int128 v24; // [rsp+68h] [rbp-60h]
  __int128 v25; // [rsp+88h] [rbp-40h] BYREF
  __int64 v26; // [rsp+98h] [rbp-30h]
  unsigned int v27; // [rsp+D0h] [rbp+8h] BYREF

  v27 = 0;
  v25 = 0LL;
  v26 = 0LL;
  Pool2 = 0LL;
  v8 = 0LL;
  if ( !a1
    || a2 < 0x10
    || !a3 && a4
    || (v24 = *a1, (unsigned int)*a1 != 1)
    || HIDWORD(v24)
    || DWORD1(v24) >= (unsigned __int16)KeNumberNodes && DWORD1(v24) != -1
    || (!DWORD2(v24)
      ? (v10 = 0)
      : DWORD2(v24) == 1
      ? (v10 = 1)
      : DWORD2(v24) == 2
      ? (v10 = 2)
      : DWORD2(v24) == 3
      ? (v10 = 3)
      : DWORD2(v24) == 4
      ? (v10 = 4)
      : DWORD2(v24) == 5
      ? (v10 = 5)
      : DWORD2(v24) == 6
      ? (v10 = 6)
      : (v10 = 7),
        v10 == 7) )
  {
    v9 = -1073741811;
    goto LABEL_63;
  }
  v9 = guard_dispatch_icall_no_overrides(50LL, 24LL, &v25, &v27);
  if ( v9 >= 0 )
  {
    v11 = guard_dispatch_icall_no_overrides(1LL, 0xFFFFFFFFLL, DWORD1(v24), 0LL);
    v9 = 0;
    if ( v11 != -1073741789 )
      v9 = v11;
    if ( v9 >= 0 )
    {
      if ( !v27 )
      {
        v9 = -1073741275;
        goto LABEL_63;
      }
      if ( v27 < 8 || (((_BYTE)v27 - 8) & 0x1F) != 0 )
      {
        v9 = -1073741595;
      }
      else
      {
        v12 = ((v27 - 8) & 0xFFFFFFE0) + 16;
        if ( a4 >= v12 )
        {
          Pool2 = (unsigned int *)ExAllocatePool2(0x100uLL);
          if ( !Pool2 )
            goto LABEL_38;
          v9 = guard_dispatch_icall_no_overrides(1LL, 0xFFFFFFFFLL, DWORD1(v24), 0LL);
          if ( v9 < 0 )
            goto LABEL_63;
          v13 = (_DWORD *)ExAllocatePool2(0x100uLL);
          v8 = v13;
          if ( !v13 )
          {
LABEL_38:
            v9 = -1073741670;
            goto LABEL_63;
          }
          *v13 = 1;
          v13[1] = v12;
          v13[2] = *Pool2;
          for ( i = 0; i < *Pool2; ++i )
          {
            v15 = 32LL * i;
            v16 = Pool2[(unsigned __int64)v15 / 4 + 5];
            if ( v16 )
            {
              v17 = v16 - 1;
              if ( v17 )
              {
                v18 = v17 - 1;
                if ( v18 )
                {
                  if ( v18 == 1 )
                    v19 = 3;
                  else
                    v19 = 4;
                }
                else
                {
                  v19 = 2;
                }
              }
              else
              {
                v19 = 1;
              }
            }
            else
            {
              v19 = 0;
            }
            if ( v19 == 4 )
            {
LABEL_58:
              v9 = -1072431089;
              goto LABEL_63;
            }
            v20 = BYTE1(Pool2[(unsigned __int64)v15 / 4 + 6]);
            if ( v20 )
            {
              if ( v20 >= 0x3Bu )
                goto LABEL_58;
              v21 = 1LL << (v20 + 5);
            }
            else
            {
              v21 = 0LL;
            }
            *(_DWORD *)&v8[v15 + 16] = Pool2[(unsigned __int64)v15 / 4 + 2];
            *(_DWORD *)&v8[v15 + 20] = Pool2[(unsigned __int64)v15 / 4 + 3];
            *(_DWORD *)&v8[v15 + 24] = v19;
            v22 = v8[v15 + 28] ^ (LOBYTE(Pool2[(unsigned __int64)v15 / 4 + 6]) ^ v8[v15 + 28]) & 1;
            v8[v15 + 28] = v22;
            v8[v15 + 28] = v22 ^ (v22 ^ (2 * LOBYTE(Pool2[(unsigned __int64)v15 / 4 + 6]))) & 2;
            *(_QWORD *)&v8[v15 + 32] = v21;
            *(_QWORD *)&v8[v15 + 40] = *(_QWORD *)&Pool2[(unsigned __int64)v15 / 4 + 8];
          }
          memmove(a3, v8, v12);
          if ( a5 )
            *a5 = v12;
          v9 = 0;
        }
        else
        {
          v9 = -1073741789;
          if ( a5 )
            *a5 = v12;
        }
      }
    }
  }
LABEL_63:
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x6C486E4Du);
  if ( v8 )
    ExFreePoolWithTag(v8, 0x6C486E4Du);
  return (unsigned int)v9;
}
