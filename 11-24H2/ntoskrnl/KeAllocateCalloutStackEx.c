/*
 * XREFs of KeAllocateCalloutStackEx @ 0x140A61060
 * Callers:
 *     EtwpStackInitializeProcessor @ 0x14064E008 (EtwpStackInitializeProcessor.c)
 *     KeAllocateCalloutStack @ 0x14073A1A0 (KeAllocateCalloutStack.c)
 *     EtwpReferenceStackLookasideList @ 0x140A60F90 (EtwpReferenceStackLookasideList.c)
 * Callees:
 *     MmDeleteKernelStack @ 0x14021FA40 (MmDeleteKernelStack.c)
 *     MmCreateKernelStack @ 0x1402207C0 (MmCreateKernelStack.c)
 *     KeInitializeMutex @ 0x140473080 (KeInitializeMutex.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall KeAllocateCalloutStackEx(int a1, unsigned __int8 a2, __int64 a3, _QWORD *a4)
{
  unsigned int v4; // esi
  char v5; // r12
  unsigned __int8 v6; // r14
  char *Pool2; // rbx
  __int64 i; // rdi
  int v10; // ecx
  __int128 v11; // [rsp+20h] [rbp-30h] BYREF
  __int128 v12; // [rsp+30h] [rbp-20h]
  __int128 v13; // [rsp+40h] [rbp-10h]

  v4 = a2;
  v5 = 0;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  if ( !a1 )
  {
LABEL_2:
    v6 = 0;
    goto LABEL_3;
  }
  v10 = a1 - 1;
  if ( v10 )
  {
    if ( v10 != 1 )
      return 3221225711LL;
    v5 = 1;
    if ( a2 != 1 )
      return 3221225712LL;
    goto LABEL_2;
  }
  v6 = 1;
LABEL_3:
  if ( !a2 )
    return 3221225712LL;
  if ( a3 )
    return 3221225713LL;
  Pool2 = (char *)ExAllocatePool2(0x40uLL, 8LL * a2 + 64, 0x6353654Bu);
  if ( !Pool2 )
    return 3221225495LL;
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= v4 )
    {
      *(_DWORD *)Pool2 = 1801548883;
      Pool2[4] = v6;
      Pool2[5] = v4;
      Pool2[6] = 0;
      Pool2[7] = v5;
      KeInitializeMutex((PRKMUTEX)(Pool2 + 8), 0);
      *a4 = Pool2;
      return 0LL;
    }
    *(_QWORD *)&v12 = 0LL;
    LODWORD(v11) = v6 != 0 ? 5 : 0;
    *(_QWORD *)((char *)&v11 + 4) = 5LL;
    MmCreateKernelStack((int *)&v11);
    if ( !*((_QWORD *)&v12 + 1) )
      break;
    *(_QWORD *)&Pool2[8 * i + 64] = *((_QWORD *)&v12 + 1);
  }
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  while ( (_DWORD)i )
  {
    LODWORD(v11) = v6;
    LODWORD(i) = i - 1;
    DWORD1(v11) = 5;
    *((_QWORD *)&v12 + 1) = *(_QWORD *)&Pool2[8 * (unsigned int)i + 64];
    MmDeleteKernelStack((int *)&v11);
  }
  ExFreePoolWithTag(Pool2, 0);
  return 3221225626LL;
}
