/*
 * XREFs of EtwpObjectHandleEnumCallback @ 0x1407B1180
 * Callers:
 *     <none>
 * Callees:
 *     EtwpLogKernelEvent @ 0x140287790 (EtwpLogKernelEvent.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     ExCheckSingleFilter @ 0x1403FBEF8 (ExCheckSingleFilter.c)
 *     ExGetHandlePointer @ 0x14041B770 (ExGetHandlePointer.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ExUnlockHandleTableEntry @ 0x140891F80 (ExUnlockHandleTableEntry.c)
 *     ObQueryNameStringMode @ 0x1409524C0 (ObQueryNameStringMode.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

char __fastcall EtwpObjectHandleEnumCallback(__int64 a1, __int64 *a2, unsigned int a3, __int64 a4)
{
  bool v4; // cf
  __int16 v6; // r13
  unsigned __int64 HandlePointer; // rax
  void *v11; // r15
  unsigned __int16 *v12; // r9
  unsigned int v13; // esi
  unsigned int v14; // r10d
  __int64 v15; // r8
  __int64 v16; // r11
  int v17; // r8d
  unsigned int v18; // r8d
  _WORD *Pool2; // rbx
  int NameStringMode; // r14d
  int v21; // ecx
  __int64 v22; // rax
  __int64 v23; // rdx
  unsigned int v25; // [rsp+30h] [rbp-39h] BYREF
  unsigned __int64 v26; // [rsp+38h] [rbp-31h] BYREF
  int v27; // [rsp+40h] [rbp-29h]
  unsigned int v28; // [rsp+44h] [rbp-25h]
  __int16 v29; // [rsp+48h] [rbp-21h]
  int v30; // [rsp+4Ah] [rbp-1Fh]
  __int16 v31; // [rsp+4Eh] [rbp-1Bh]
  unsigned __int64 *v32; // [rsp+50h] [rbp-19h] BYREF
  _QWORD v33[2]; // [rsp+58h] [rbp-11h]
  int v34; // [rsp+68h] [rbp-1h]
  int v35; // [rsp+6Ch] [rbp+3h]

  v4 = *(_BYTE *)(a4 + 64) != 0;
  v25 = 0;
  v30 = 0;
  v31 = 0;
  v6 = 4391 - v4;
  HandlePointer = ExGetHandlePointer(a2);
  v27 = *(_DWORD *)(a4 + 44);
  v28 = a3;
  v11 = (void *)(HandlePointer + 48);
  v26 = HandlePointer + 48;
  if ( *(_BYTE *)(a4 + 68) )
    v28 = a3 | 0x80000000;
  v12 = *(unsigned __int16 **)(a4 + 8);
  v13 = 1;
  v29 = (unsigned __int8)(BYTE1(HandlePointer) ^ *(_BYTE *)(HandlePointer + 24) ^ ObHeaderCookie);
  if ( v12 )
  {
    v14 = *v12;
    v15 = 0LL;
    v16 = ObTypeIndexTable[BYTE1(HandlePointer) ^ (unsigned __int8)ObHeaderCookie ^ (unsigned __int64)*(unsigned __int8 *)(HandlePointer + 24)];
    while ( (unsigned int)v15 < v14 )
    {
      if ( (unsigned int)ExCheckSingleFilter(*(_DWORD *)(v16 + 192), *(_DWORD *)&v12[2 * v15 + 2]) )
        goto LABEL_9;
      v15 = (unsigned int)(v17 + 1);
    }
    ExUnlockHandleTableEntry(a1, a2);
  }
  else
  {
LABEL_9:
    ObfReferenceObjectWithTag(v11, 0x54777445u);
    ExUnlockHandleTableEntry(a1, a2);
    v18 = *(unsigned __int16 *)(a4 + 24);
    Pool2 = *(_WORD **)(a4 + 16);
    v32 = &v26;
    v25 = v18;
    v33[0] = 18LL;
    while ( 1 )
    {
      NameStringMode = ObQueryNameStringMode((_DWORD)v11, (_DWORD)Pool2, v18, (unsigned int)&v25, 0);
      if ( NameStringMode != -1073741820 )
        break;
      if ( Pool2 != *(_WORD **)(a4 + 16) )
        ExFreePoolWithTag(Pool2, 0);
      Pool2 = (_WORD *)ExAllocatePool2(0x100uLL, v25, 0x74777445u);
      if ( !Pool2 )
        break;
      v18 = v25;
    }
    ObfDereferenceObjectWithTag(v11, 0x54777445u);
    if ( !NameStringMode )
    {
      v21 = 0x2000;
      if ( *Pool2 < 0x2000u )
        v21 = (unsigned __int16)*Pool2;
      v13 = 2;
      v33[1] = *((_QWORD *)Pool2 + 1);
      v34 = v21;
      v35 = 0;
    }
    v22 = 2LL * v13;
    v33[v22] = 2LL;
    v23 = *(_QWORD *)(a4 + 32);
    v33[v22 - 1] = &EtwpNull;
    EtwpLogKernelEvent((__int64)&v32, *(_QWORD *)(v23 + 1360), *(_DWORD *)v23, v13 + 1, v6, 0x501802u);
    if ( Pool2 && Pool2 != *(_WORD **)(a4 + 16) )
      ExFreePoolWithTag(Pool2, 0);
  }
  return 0;
}
