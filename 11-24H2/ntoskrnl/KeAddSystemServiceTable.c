/*
 * XREFs of KeAddSystemServiceTable @ 0x140A9D2B0
 * Callers:
 *     <none>
 * Callees:
 *     PsRegisterSyscallProviderServiceTableMetadata @ 0x140A9D41C (PsRegisterSyscallProviderServiceTableMetadata.c)
 */

char __fastcall KeAddSystemServiceTable(ULONG_PTR a1, __int64 a2, int a3, __int64 a4, int a5)
{
  unsigned int v5; // ebx
  int *v6; // r10
  int v7; // r9d
  int v8; // edx
  __int64 v9; // rax
  unsigned int v10; // ebx
  int *v11; // r10
  int v12; // r9d
  int v13; // edx
  __int64 v14; // rax

  if ( a5 == 1 )
  {
    v10 = 0;
    if ( !(_QWORD)xmmword_1412018E0 && !xmmword_140FC72E0 )
    {
      xmmword_140FC72E0 = a1;
      LODWORD(xmmword_140FC72F0) = a3;
      *((_QWORD *)&xmmword_140FC72F0 + 1) = a4;
      PsRegisterSyscallProviderServiceTableMetadata(1LL);
      v11 = (int *)xmmword_140FC72E0;
      v12 = (unsigned int)&xmmword_140FC72E0 + xmmword_140FC72E0 + KiTableInformation;
      if ( (_DWORD)xmmword_140FC72F0 )
      {
        do
        {
          v13 = *v11;
          v14 = *v11++;
          v12 = ++v10 * ((v13 + *(_DWORD *)((v14 >> 4) + xmmword_140FC72E0)) ^ v12);
        }
        while ( v10 < (unsigned int)xmmword_140FC72F0 );
      }
      KiTableInformation += 2 * v12;
      return 1;
    }
  }
  else if ( a5 == 2 )
  {
    v5 = 0;
    if ( !(_QWORD)xmmword_140FC7420 )
    {
      *(_QWORD *)&KeServiceDescriptorTableFilter[2] = a1;
      LODWORD(KeServiceDescriptorTableFilter[3]) = a3;
      *((_QWORD *)&KeServiceDescriptorTableFilter[3] + 1) = a4;
      v6 = (int *)xmmword_140FC7420;
      v7 = (unsigned int)&xmmword_140FC7420 + xmmword_140FC7420 + KiTableInformation;
      if ( (_DWORD)xmmword_140FC7430 )
      {
        do
        {
          v8 = *v6;
          v9 = *v6++;
          v7 = ++v5 * ((v8 + *(_DWORD *)((v9 >> 4) + xmmword_140FC7420)) ^ v7);
        }
        while ( v5 < (unsigned int)xmmword_140FC7430 );
      }
      KiTableInformation += 2 * v7;
      return 1;
    }
  }
  return 0;
}
