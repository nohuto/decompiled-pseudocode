/*
 * XREFs of sub_1400468E0 @ 0x1400468E0
 * Callers:
 *     sub_14002B750 @ 0x14002B750 (sub_14002B750.c)
 * Callees:
 *     sub_140002C60 @ 0x140002C60 (sub_140002C60.c)
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 *     sub_140010680 @ 0x140010680 (sub_140010680.c)
 *     sub_1400298E4 @ 0x1400298E4 (sub_1400298E4.c)
 *     sub_140046B48 @ 0x140046B48 (sub_140046B48.c)
 */

__int64 __fastcall sub_1400468E0(__int64 a1, char a2)
{
  _DWORD *v2; // rdi
  int v3; // ebx
  __int64 Pool2; // rax
  _QWORD *v7; // rsi
  __int64 v8; // rdx
  int v9; // eax
  _QWORD *v10; // rax
  _QWORD *v11; // rbx
  __int64 v13; // r11
  __int64 v14; // r10
  __int64 v15; // rax
  unsigned __int64 v16; // rax
  int v17; // r11d
  __int64 v18; // r10
  __int64 v19; // rax
  __int64 v20; // rax
  _QWORD *v21; // rax
  __int64 v22; // [rsp+30h] [rbp-49h] BYREF
  char v23[8]; // [rsp+40h] [rbp-39h] BYREF
  int v24; // [rsp+48h] [rbp-31h]
  const wchar_t *v25; // [rsp+50h] [rbp-29h]
  unsigned int *v26; // [rsp+58h] [rbp-21h]
  int v27; // [rsp+60h] [rbp-19h]
  unsigned int v28; // [rsp+F0h] [rbp+77h] BYREF
  _DWORD *v29; // [rsp+F8h] [rbp+7Fh] BYREF

  v28 = 0;
  v2 = 0LL;
  v22 = 0LL;
  v3 = 0;
  v29 = 0LL;
  if ( (qword_140019A90 & 0x100000000LL) != 0 )
    return (unsigned int)v3;
  Pool2 = ExAllocatePool2(64LL, 56LL, 1919119952LL);
  v7 = (_QWORD *)Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741670;
  *(_DWORD *)(Pool2 + 24) = 1;
  v3 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(qword_140019120 + 2520))(qword_140019128, 0LL, Pool2 + 16);
  if ( v3 >= 0 )
  {
    v9 = a2 ? sub_1400298E4(a1, v8, &v29) : sub_140046B48(&v29);
    v2 = v29;
    v3 = v9;
    if ( v9 >= 0 )
    {
      v10 = (_QWORD *)ExAllocatePool2(64LL, (unsigned int)(40 * v29[2] + 32), 1919119952LL);
      v7[6] = v10;
      v11 = v10;
      if ( v10 )
      {
        *v10 = KeQueryInterruptTimePrecise(&v22);
        v13 = 0LL;
        for ( *((_DWORD *)v11 + 6) = v2[2]; (unsigned int)v13 < v2[2]; v11[v18 + 8] = v16 )
        {
          v14 = 5 * v13;
          v15 = 8LL * (unsigned int)v13;
          *(_OWORD *)&v11[v14 + 4] = *(_OWORD *)&v2[v15 + 4];
          *(_OWORD *)&v11[v14 + 6] = *(_OWORD *)&v2[v15 + 8];
          v16 = sub_140002C60(0LL, v11[5 * v13 + 5], v11[5 * v13 + 6], HIDWORD(v11[5 * v13 + 6]));
          v13 = (unsigned int)(v17 + 1);
        }
        v19 = *(_QWORD *)v2;
        if ( !*(_QWORD *)v2 )
        {
          sub_140010680(v23, 0, 0x70uLL);
          v25 = L"~MHz";
          v24 = 292;
          v26 = &v28;
          v27 = 0x4000000;
          if ( (int)RtlQueryRegistryValuesEx(
                      0LL,
                      L"\\Registry\\Machine\\Hardware\\Description\\System\\CentralProcessor\\0",
                      v23,
                      0LL,
                      0LL) >= 0 )
          {
            v20 = v28;
          }
          else
          {
            v20 = 0LL;
            v28 = 0;
          }
          v19 = 1000000 * v20;
        }
        v11[2] = v19;
        v7[4] = sub_140002BB0;
        v7[5] = sub_140002AC0;
        v21 = (_QWORD *)qword_140019AA0;
        if ( *(__int64 **)qword_140019AA0 != &qword_140019A98 )
          __fastfail(3u);
        *v7 = &qword_140019A98;
        v7[1] = v21;
        *v21 = v7;
        HIDWORD(qword_140019A90) |= 1u;
        v3 = 0;
        qword_140019AA0 = (__int64)v7;
        goto LABEL_12;
      }
      v3 = -1073741670;
    }
  }
  ExFreePoolWithTag(v7, 0x72637250u);
LABEL_12:
  if ( v2 )
    ExFreePoolWithTag(v2, 0x72637250u);
  return (unsigned int)v3;
}
