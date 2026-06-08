/*
 * XREFs of sub_140038BD4 @ 0x140038BD4
 * Callers:
 *     sub_140037C28 @ 0x140037C28 (sub_140037C28.c)
 * Callees:
 *     sub_140003D28 @ 0x140003D28 (sub_140003D28.c)
 *     sub_140004BDC @ 0x140004BDC (sub_140004BDC.c)
 *     sub_1400050F8 @ 0x1400050F8 (sub_1400050F8.c)
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 *     sub_140010680 @ 0x140010680 (sub_140010680.c)
 *     sub_1400412A8 @ 0x1400412A8 (sub_1400412A8.c)
 *     sub_140045018 @ 0x140045018 (sub_140045018.c)
 *     sub_140046E08 @ 0x140046E08 (sub_140046E08.c)
 */

__int64 __fastcall sub_140038BD4(__int64 a1)
{
  __int64 v1; // rbx
  int v2; // esi
  __int64 v3; // r14
  NTSTATUS ProcessorNumberFromIndex; // ebx
  unsigned int v5; // r12d
  int v6; // edx
  char *Pool2; // rdi
  int v8; // edx
  __int64 v9; // r15
  unsigned int v10; // r13d
  char *v11; // rbp
  int v12; // ecx
  __int64 v13; // r10
  __int64 v14; // rax
  __int64 v15; // rdx
  bool v16; // al
  void *v17; // rcx
  unsigned __int16 v18; // r9
  unsigned __int8 v19; // dl
  unsigned int v20; // r8d
  PVOID *v21; // rsi
  __int64 v22; // rbp

  v1 = a1;
  v2 = dword_140019154;
  if ( byte_140019A68 && dword_140019A64 > (unsigned int)dword_140019154 )
    v2 = dword_140019A64;
  v3 = (unsigned int)dword_1400197EC;
  if ( !dword_1400197EC )
    return 0;
  v5 = (48 * dword_1400197EC + 51) & 0xFFFFFFFC;
  Pool2 = (char *)ExAllocatePool2(256LL, v5 + 8 * dword_1400197EC * v2, 1919119952LL);
  if ( !Pool2 )
  {
    if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
    {
      LOBYTE(v6) = 2;
      sub_140003D28(off_140018050->DeviceExtension, v6, 4, 16, (__int64)&unk_140014AD0);
    }
    return (unsigned int)-1073741670;
  }
  v9 = ExAllocatePool2(256LL, (unsigned int)(16 * v2 + 40), 1919119952LL);
  if ( v9 )
  {
    v10 = 0;
    if ( (_DWORD)v3 )
    {
      v11 = Pool2 + 56;
      while ( 1 )
      {
        sub_140010680((char *)v9, 0, (unsigned int)(16 * v2 + 40));
        *(_DWORD *)v9 = v10;
        *(_DWORD *)(v9 + 32) = v2;
        ProcessorNumberFromIndex = ((__int64 (__fastcall *)(_QWORD, __int64, _QWORD))qword_1400194F0)(
                                     *(_QWORD *)(v1 + 1120),
                                     v9,
                                     0LL);
        if ( ProcessorNumberFromIndex < 0 )
          break;
        ProcessorNumberFromIndex = sub_140045018(v9);
        if ( ProcessorNumberFromIndex < 0 )
          goto LABEL_33;
        v1 = a1;
        sub_140046E08(a1, v10, 27LL, v11 + 16);
        *(_DWORD *)v11 = *(_DWORD *)(v9 + 20);
        *((_DWORD *)v11 + 1) = *(_DWORD *)(v9 + 24);
        *(v11 - 3) = *(_BYTE *)(v9 + 16);
        if ( *(_QWORD *)(v9 + 8) )
        {
          *(v11 - 4) = 1;
          ProcessorNumberFromIndex = KeGetProcessorNumberFromIndex(
                                       *(_DWORD *)(*(_QWORD *)(v9 + 8) + 56LL),
                                       (PPROCESSOR_NUMBER)v11 - 2);
          if ( ProcessorNumberFromIndex < 0 )
            goto LABEL_33;
          v1 = a1;
        }
        v12 = *(_DWORD *)(v9 + 28);
        v13 = 0LL;
        v14 = v5;
        v5 += 8 * v2;
        *((_DWORD *)v11 + 2) = v12;
        *((_QWORD *)v11 + 4) = &Pool2[v14];
        if ( v12 )
        {
          do
          {
            v15 = *((_QWORD *)v11 + 4);
            *(_DWORD *)(v15 + 8 * v13) = *(_DWORD *)(*(_QWORD *)(v9 + 16LL * (unsigned int)v13 + 40) + 56LL);
            *(_BYTE *)(v15 + 8 * v13 + 4) = *(_BYTE *)(v9 + 16LL * (unsigned int)v13 + 48);
            *(_BYTE *)(v15 + 8 * v13 + 6) = *(_BYTE *)(v9 + 16LL * (unsigned int)v13 + 50);
            *(_BYTE *)(v15 + 8 * v13 + 5) = *(_BYTE *)(v9 + 16LL * (unsigned int)v13 + 49);
            v13 = (unsigned int)(v13 + 1);
          }
          while ( (unsigned int)v13 < *((_DWORD *)v11 + 2) );
        }
        ++v10;
        v11 += 48;
        if ( v10 >= (unsigned int)v3 )
          goto LABEL_24;
      }
      if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
      {
        v18 = 18;
        v19 = 3;
        v20 = 2;
LABEL_31:
        sub_1400050F8(
          (__int64)off_140018050->DeviceExtension,
          v19,
          v20,
          v18,
          (__int64)&unk_140014AD0,
          ProcessorNumberFromIndex);
      }
    }
    else
    {
LABEL_24:
      *(_DWORD *)Pool2 = 82;
      *((_DWORD *)Pool2 + 1) = dword_1400197EC;
      *((_QWORD *)Pool2 + 4) = sub_140003E70;
      v16 = sub_140004BDC();
      v17 = sub_14000E900;
      if ( !v16 )
        v17 = sub_14000E850;
      *((_QWORD *)Pool2 + 1) = v17;
      *((_QWORD *)Pool2 + 2) = sub_14000E750;
      *((_QWORD *)Pool2 + 3) = sub_14000E6D0;
      ProcessorNumberFromIndex = ((__int64 (__fastcall *)(char *))qword_140019498)(Pool2);
      if ( ProcessorNumberFromIndex < 0 )
      {
        if ( off_140018058 == (_UNKNOWN *)&off_140018058 )
          goto LABEL_33;
        v18 = 19;
        v19 = 2;
        v20 = 3;
        goto LABEL_31;
      }
      qword_1400197F8 = Pool2;
      Pool2 = 0LL;
      byte_1400197F0 = 1;
      sub_1400412A8(0LL);
      ProcessorNumberFromIndex = 0;
    }
LABEL_33:
    ExFreePoolWithTag((PVOID)v9, 0x72637250u);
    if ( !Pool2 )
      return (unsigned int)ProcessorNumberFromIndex;
    goto LABEL_34;
  }
  if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
  {
    LOBYTE(v8) = 2;
    sub_140003D28(off_140018050->DeviceExtension, v8, 4, 17, (__int64)&unk_140014AD0);
  }
  ProcessorNumberFromIndex = -1073741670;
LABEL_34:
  if ( (_DWORD)v3 )
  {
    v21 = (PVOID *)(Pool2 + 80);
    v22 = v3;
    do
    {
      if ( *v21 )
        ExFreePoolWithTag(*v21, 0x72637250u);
      v21 += 6;
      --v22;
    }
    while ( v22 );
  }
  ExFreePoolWithTag(Pool2, 0x72637250u);
  return (unsigned int)ProcessorNumberFromIndex;
}
