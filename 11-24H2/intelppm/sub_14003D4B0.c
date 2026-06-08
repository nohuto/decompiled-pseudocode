/*
 * XREFs of sub_14003D4B0 @ 0x14003D4B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400050F8 @ 0x1400050F8 (sub_1400050F8.c)
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 *     sub_140037C28 @ 0x140037C28 (sub_140037C28.c)
 *     sub_14003814C @ 0x14003814C (sub_14003814C.c)
 *     sub_14003DA60 @ 0x14003DA60 (sub_14003DA60.c)
 *     sub_14003DC50 @ 0x14003DC50 (sub_14003DC50.c)
 *     sub_14003DDFC @ 0x14003DDFC (sub_14003DDFC.c)
 *     sub_14003E0E8 @ 0x14003E0E8 (sub_14003E0E8.c)
 *     ?GetRegisteredLocation@@YAHPEAD@Z @ 0x14003E85C (-GetRegisteredLocation@@YAHPEAD@Z.c)
 */

__int64 __fastcall sub_14003D4B0(char *a1)
{
  void *v1; // r15
  char v3; // r12
  __int64 v4; // rax
  int *v5; // rbp
  int v6; // ebp
  _DWORD *Pool2; // rsi
  struct _PROCESSOR_NUMBER *v8; // rax
  struct _PROCESSOR_NUMBER *v9; // r14
  NTSTATUS ProcessorNumberFromIndex; // ebx
  __int64 v11; // rax
  int v12; // eax
  int v13; // eax
  __int64 v15; // r10
  unsigned int i; // r11d
  __int64 v17; // r8
  unsigned int v18; // edx
  __int64 v19; // rcx
  __int64 v20; // r9
  unsigned int v21; // eax
  unsigned __int16 v22; // r9
  int RegisteredLocation; // eax
  __int64 v24; // rbp
  unsigned int v25; // eax
  __int64 v26; // [rsp+28h] [rbp-30h]

  v1 = 0LL;
  if ( *((_DWORD *)a1 + 20) )
    return (unsigned int)((__int64 (*)(void))qword_1400196D0)();
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(qword_140019120 + 2504))(qword_140019128, qword_140019158, 0LL);
  v3 = 0;
  if ( !a1[720] )
  {
    if ( qword_140019320 )
      qword_140019320(a1);
    a1[720] = 1;
    v3 = 1;
  }
  sub_14003DA60(a1);
  (*(void (__fastcall **)(__int64, __int64))(qword_140019120 + 2512))(qword_140019128, qword_140019158);
  v4 = *((_QWORD *)a1 + 35);
  if ( (v4 & 0x200000200LL) != 0 )
  {
    v5 = (int *)*((_QWORD *)a1 + 143);
    if ( !v5 )
      return (unsigned int)-1073741823;
    v6 = *v5;
LABEL_6:
    if ( v6 )
      goto LABEL_7;
    return (unsigned int)-1073741823;
  }
  if ( (v4 & 0x20E0000000000LL) != 0 )
  {
    v24 = *((_QWORD *)a1 + 68);
    if ( !v24 )
      return (unsigned int)-1073741823;
    v6 = *(_DWORD *)(v24 + 16);
    goto LABEL_6;
  }
  if ( (v4 & 0x7F077) == 0 )
    return (unsigned int)-1073741637;
  v6 = 3;
LABEL_7:
  Pool2 = (_DWORD *)ExAllocatePool2(64LL, (unsigned int)(88 * v6 + 48), 1919119952LL);
  if ( !Pool2 )
    return (unsigned int)-1073741670;
  v8 = (struct _PROCESSOR_NUMBER *)ExAllocatePool2(64LL, (unsigned int)(32 * v6 + 104), 1919119952LL);
  v9 = v8;
  if ( v8 )
  {
    ProcessorNumberFromIndex = KeGetProcessorNumberFromIndex(*((_DWORD *)a1 + 14), v8 + 1);
    if ( ProcessorNumberFromIndex < 0 )
      goto LABEL_21;
    v9[24] = (struct _PROCESSOR_NUMBER)v6;
    *v9 = (struct _PROCESSOR_NUMBER)82;
    *(_QWORD *)&v9[2].Group = Pool2;
    Pool2[10] = v6;
    *(_QWORD *)Pool2 = *((_QWORD *)a1 + 140);
    v11 = *((_QWORD *)a1 + 35);
    if ( (v11 & 0x200000200LL) != 0 )
    {
      v12 = sub_14003E0E8(a1, v9, Pool2);
      if ( v12 < 0 && off_140018058 != (_UNKNOWN *)&off_140018058 )
      {
        v22 = 10;
        goto LABEL_43;
      }
    }
    else if ( (v11 & 0x20E0000000000LL) != 0 )
    {
      v12 = sub_14003814C((__int64)a1, (__int64)v9, (__int64)Pool2);
      if ( v12 < 0 && off_140018058 != (_UNKNOWN *)&off_140018058 )
      {
        v22 = 11;
        goto LABEL_43;
      }
    }
    else if ( (v11 & 0x7F077) != 0 )
    {
      v12 = sub_14003DDFC(a1, v9, Pool2);
      if ( v12 < 0 && off_140018058 != (_UNKNOWN *)&off_140018058 )
      {
        v22 = 12;
LABEL_43:
        sub_1400050F8((__int64)off_140018050->DeviceExtension, 2u, 3u, v22, (__int64)&unk_140014AD0, v12);
      }
    }
    if ( (*((_DWORD *)a1 + 70) & 0x200LL) != 0 )
    {
      v15 = 0LL;
      for ( i = 1; i <= 3; ++i )
      {
        v17 = 0LL;
        v18 = 0;
        if ( v9[24] )
        {
          do
          {
            v19 = 22LL * v18;
            v20 = *(_QWORD *)&Pool2[v19 + 12];
            if ( v20 )
            {
              v21 = *(unsigned __int8 *)(v20 + 12);
              if ( v21 > 3 )
                v21 = 3;
              if ( v21 == i && (!v17 || *(_DWORD *)(v20 + 16) < *(_DWORD *)(v17 + 16)) )
              {
                v17 = *(_QWORD *)&Pool2[v19 + 12];
                *((_BYTE *)Pool2 + v15 + 21) = v18;
              }
            }
            ++v18;
          }
          while ( v18 < *(_DWORD *)&v9[24] );
          if ( v17 )
            v15 = (unsigned int)(v15 + 1);
        }
      }
      *((_BYTE *)Pool2 + 20) = v15;
    }
    if ( (*((_DWORD *)a1 + 70) & 0x7F277LL) != 0 )
    {
      if ( !*((_BYTE *)Pool2 + 20) )
      {
        ProcessorNumberFromIndex = -1073741823;
        goto LABEL_21;
      }
    }
    else
    {
      v25 = (unsigned int)v9[24];
      *((_BYTE *)Pool2 + 21) = 0;
      if ( v25 > 2 )
        LOBYTE(v25) = 2;
      *((_BYTE *)Pool2 + 20) = v25;
      if ( (_BYTE)v25 == 2 )
        *((_BYTE *)Pool2 + 22) = LOBYTE(v9[24].Group) - 1;
    }
    sub_14003DC50(v9);
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(qword_140019120 + 2504))(qword_140019128, qword_140019158, 0LL);
    if ( (*((_QWORD *)a1 + 35) & 0x100200000200LL) != 0 && *((_QWORD *)a1 + 89) )
      HIBYTE(v9[4].Group) = 1;
    v13 = ((__int64 (__fastcall *)(struct _PROCESSOR_NUMBER *))qword_140019488)(v9);
    ProcessorNumberFromIndex = v13;
    if ( v13 < 0 )
    {
      if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
      {
        LODWORD(v26) = v13;
        sub_1400050F8((__int64)off_140018050->DeviceExtension, 2u, 3u, 0xDu, (__int64)&unk_140014AD0, v26);
      }
      (*(void (__fastcall **)(__int64, __int64))(qword_140019120 + 2512))(qword_140019128, qword_140019158);
    }
    else
    {
      v1 = (void *)*((_QWORD *)a1 + 89);
      *((_QWORD *)a1 + 89) = Pool2;
      if ( v3 )
        sub_140037C28((__int64)a1);
      Pool2 = 0LL;
      if ( (*((_DWORD *)a1 + 70) & 0x7F070) != 0 )
      {
        RegisteredLocation = GetRegisteredLocation(a1);
        if ( RegisteredLocation < 0 && off_140018058 != (_UNKNOWN *)&off_140018058 )
        {
          LODWORD(v26) = RegisteredLocation;
          sub_1400050F8((__int64)off_140018050->DeviceExtension, 3u, 3u, 0xEu, (__int64)&unk_140014AD0, v26);
        }
      }
      (*(void (__fastcall **)(__int64, __int64))(qword_140019120 + 2512))(qword_140019128, qword_140019158);
      ProcessorNumberFromIndex = 0;
    }
LABEL_21:
    ExFreePoolWithTag(v9, 0x72637250u);
    if ( !Pool2 )
      goto LABEL_22;
    goto LABEL_67;
  }
  ProcessorNumberFromIndex = -1073741670;
LABEL_67:
  ExFreePoolWithTag(Pool2, 0x72637250u);
LABEL_22:
  if ( v1 )
    ExFreePoolWithTag(v1, 0x72637250u);
  return (unsigned int)ProcessorNumberFromIndex;
}
