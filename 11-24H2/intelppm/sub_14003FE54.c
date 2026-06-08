/*
 * XREFs of sub_14003FE54 @ 0x14003FE54
 * Callers:
 *     sub_14003A540 @ 0x14003A540 (sub_14003A540.c)
 *     sub_14003EAA0 @ 0x14003EAA0 (sub_14003EAA0.c)
 * Callees:
 *     sub_140003D28 @ 0x140003D28 (sub_140003D28.c)
 *     sub_1400050F8 @ 0x1400050F8 (sub_1400050F8.c)
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 *     sub_140010380 @ 0x140010380 (sub_140010380.c)
 *     sub_140010680 @ 0x140010680 (sub_140010680.c)
 *     sub_1400412A8 @ 0x1400412A8 (sub_1400412A8.c)
 *     sub_140045018 @ 0x140045018 (sub_140045018.c)
 */

__int64 __fastcall sub_14003FE54(__int64 a1, char a2)
{
  char v2; // r14
  unsigned int *v3; // rdi
  unsigned int *v4; // rsi
  int v5; // r13d
  unsigned int v6; // r15d
  char *v7; // rbx
  unsigned int v8; // r14d
  char *Pool2; // rax
  int v10; // r13d
  unsigned int *v11; // rbp
  signed __int64 v12; // rbx
  __int64 v13; // r12
  __int64 v14; // rcx
  char *v15; // rcx
  unsigned __int64 v16; // r8
  int v17; // edx
  PVOID v18; // rbp
  NTSTATUS ProcessorNumberFromIndex; // ebx
  unsigned __int64 v20; // rbx
  int v21; // edx
  unsigned int v22; // r12d
  _BYTE *v23; // r14
  __int64 v24; // r8
  unsigned int v25; // eax
  __int64 v26; // r10
  __int64 v27; // rdx
  char v31; // [rsp+90h] [rbp+18h]
  int v32; // [rsp+98h] [rbp+20h]

  v31 = 0;
  v2 = a2;
  v3 = 0LL;
  v4 = 0LL;
  v5 = 0;
  v6 = 0;
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(qword_140019120 + 2504))(qword_140019128, qword_140019158, 0LL);
  v7 = (char *)qword_1400197F8;
  if ( qword_1400197F8 )
  {
    v6 = *((_DWORD *)qword_1400197F8 + 1);
    v5 = dword_140019154;
    v32 = dword_140019154;
    v8 = (48 * v6 + 51) & 0xFFFFFFFC;
    Pool2 = (char *)ExAllocatePool2(256LL, v8 + 8 * v6 * dword_140019154, 1919119952LL);
    v3 = (unsigned int *)Pool2;
    if ( Pool2 )
    {
      sub_140010380(Pool2, v7, (int)(48 * v6 + 48));
      if ( v6 )
      {
        v10 = 8 * v5;
        v11 = v3 + 16;
        v12 = v7 - (char *)v3;
        v13 = v6;
        do
        {
          v14 = v8;
          v8 += v10;
          v15 = (char *)v3 + v14;
          v16 = 8LL * *v11;
          *((_QWORD *)v11 + 3) = v15;
          sub_140010380(v15, *(char **)((char *)v11 + v12 + 24), v16);
          v11 += 12;
          --v13;
        }
        while ( v13 );
        v5 = v32;
      }
    }
    v2 = a2;
  }
  (*(void (__fastcall **)(__int64, __int64))(qword_140019120 + 2512))(qword_140019128, qword_140019158);
  v18 = 0LL;
  if ( !v3 )
  {
    ProcessorNumberFromIndex = -1073741670;
    if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
    {
      LOBYTE(v17) = 2;
      sub_140003D28(off_140018050->DeviceExtension, v17, 4, 24, (__int64)&unk_140014AD0);
    }
    return (unsigned int)ProcessorNumberFromIndex;
  }
  if ( !v2 )
  {
LABEL_29:
    *((_BYTE *)v3 + 40) = 1;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(qword_140019120 + 2504))(qword_140019128, qword_140019158, 0LL);
    ProcessorNumberFromIndex = ((__int64 (__fastcall *)(unsigned int *))qword_140019498)(v3);
    if ( ProcessorNumberFromIndex < 0 )
    {
      if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
        sub_1400050F8(
          (__int64)off_140018050->DeviceExtension,
          2u,
          3u,
          0x1Au,
          (__int64)&unk_140014AD0,
          ProcessorNumberFromIndex);
    }
    else
    {
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(qword_140019120 + 2504))(qword_140019128, qword_140019168, 0LL);
      v18 = qword_1400197F8;
      qword_1400197F8 = v3;
      v3 = 0LL;
      sub_1400412A8(0LL);
      (*(void (__fastcall **)(__int64, __int64))(qword_140019120 + 2512))(qword_140019128, qword_140019168);
    }
    (*(void (__fastcall **)(__int64, __int64))(qword_140019120 + 2512))(qword_140019128, qword_140019158);
    if ( !v4 )
    {
LABEL_35:
      if ( !v3 )
        goto LABEL_37;
      goto LABEL_36;
    }
LABEL_34:
    ExFreePoolWithTag(v4, 0x72637250u);
    goto LABEL_35;
  }
  v20 = (unsigned int)(16 * v5 + 40);
  v4 = (unsigned int *)ExAllocatePool2(256LL, v20, 1919119952LL);
  if ( v4 )
  {
    v22 = 0;
    if ( v6 )
    {
      v23 = v3 + 15;
      do
      {
        sub_140010680((char *)v4, 0, v20);
        LOBYTE(v24) = 1;
        *v4 = v22;
        v4[8] = v5;
        if ( (int)((__int64 (__fastcall *)(_QWORD, unsigned int *, __int64))qword_1400194F0)(
                    *(_QWORD *)(a1 + 1120),
                    v4,
                    v24) >= 0 )
        {
          ProcessorNumberFromIndex = sub_140045018(v4);
          if ( ProcessorNumberFromIndex < 0 )
            goto LABEL_34;
          v31 = 1;
          (*(void (__fastcall **)(__int64, __int64, _QWORD))(qword_140019120 + 2504))(
            qword_140019128,
            qword_140019168,
            0LL);
          *((_DWORD *)v23 - 1) = v4[5];
          *(_DWORD *)v23 = v4[6];
          *(v23 - 7) = *((_BYTE *)v4 + 16);
          if ( *((_QWORD *)v4 + 1) )
          {
            *(v23 - 8) = 1;
            ProcessorNumberFromIndex = KeGetProcessorNumberFromIndex(
                                         *(_DWORD *)(*((_QWORD *)v4 + 1) + 56LL),
                                         (PPROCESSOR_NUMBER)v23 - 3);
            if ( ProcessorNumberFromIndex < 0 )
            {
              (*(void (__fastcall **)(__int64, __int64))(qword_140019120 + 2512))(qword_140019128, qword_140019168);
              goto LABEL_34;
            }
          }
          sub_140010680(*(char **)(v23 + 28), 0, 8LL * *((unsigned int *)v23 + 1));
          v25 = v4[7];
          v26 = 0LL;
          for ( *((_DWORD *)v23 + 1) = v25; (unsigned int)v26 < *((_DWORD *)v23 + 1); v26 = (unsigned int)(v26 + 1) )
          {
            v27 = *(_QWORD *)(v23 + 28);
            *(_DWORD *)(v27 + 8 * v26) = *(_DWORD *)(*(_QWORD *)&v4[4 * (unsigned int)v26 + 10] + 56LL);
            *(_BYTE *)(v27 + 8 * v26 + 4) = v4[4 * (unsigned int)v26 + 12];
            *(_BYTE *)(v27 + 8 * v26 + 6) = BYTE2(v4[4 * (unsigned int)v26 + 12]);
            *(_BYTE *)(v27 + 8 * v26 + 5) = BYTE1(v4[4 * (unsigned int)v26 + 12]);
          }
          (*(void (__fastcall **)(__int64, __int64))(qword_140019120 + 2512))(qword_140019128, qword_140019168);
          v20 = (unsigned int)(16 * v5 + 40);
        }
        ++v22;
        v23 += 48;
      }
      while ( v22 < v6 );
      if ( v31 )
        goto LABEL_29;
    }
    ProcessorNumberFromIndex = 0;
    goto LABEL_34;
  }
  if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
  {
    LOBYTE(v21) = 2;
    sub_140003D28(off_140018050->DeviceExtension, v21, 4, 25, (__int64)&unk_140014AD0);
  }
  ProcessorNumberFromIndex = -1073741670;
LABEL_36:
  ExFreePoolWithTag(v3, 0x72637250u);
LABEL_37:
  if ( v18 )
    ExFreePoolWithTag(v18, 0x72637250u);
  return (unsigned int)ProcessorNumberFromIndex;
}
