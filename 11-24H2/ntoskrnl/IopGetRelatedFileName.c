/*
 * XREFs of IopGetRelatedFileName @ 0x14070FD10
 * Callers:
 *     IopSymlinkRememberJunction @ 0x1408ACA10 (IopSymlinkRememberJunction.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ObQueryNameStringMode @ 0x1409524C0 (ObQueryNameStringMode.c)
 *     IopGetFileInformation @ 0x140957CC0 (IopGetFileInformation.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopGetRelatedFileName(__int64 a1, __int64 a2, unsigned __int16 a3, _WORD *a4)
{
  _DWORD *v4; // rsi
  int v5; // r12d
  const void **v6; // rdi
  unsigned int v10; // ebp
  __int64 Pool2; // rax
  int NameStringMode; // eax
  unsigned int v13; // ebx
  unsigned int v14; // ebp
  int FileInformation; // eax
  unsigned int v16; // ecx
  void *v17; // rax
  _DWORD v19[4]; // [rsp+30h] [rbp-38h] BYREF

  v4 = 0LL;
  v5 = a3;
  v6 = 0LL;
  v19[0] = 0;
  v10 = 256;
  do
  {
    if ( v6 )
      ExFreePoolWithTag(v6, 0);
    if ( v10 >= 0xFFFF )
      return (unsigned int)-1073741562;
    Pool2 = ExAllocatePool2(0x100uLL, v10, 0x63466F49u);
    v6 = (const void **)Pool2;
    if ( !Pool2 )
      return (unsigned int)-1073741670;
    NameStringMode = ObQueryNameStringMode(*(_QWORD *)(a1 + 8), Pool2, v10, (unsigned int)v19, 0);
    v13 = NameStringMode;
    v10 = v19[0] + 8;
    if ( a4 )
      *a4 = *(_WORD *)v6;
  }
  while ( NameStringMode == -2147483643 );
  if ( NameStringMode >= 0 )
  {
    v14 = 256;
    do
    {
      if ( v4 )
        ExFreePoolWithTag(v4, 0);
      if ( v14 >= 0xFFFF )
      {
        v13 = -1073741562;
        goto LABEL_27;
      }
      v4 = (_DWORD *)ExAllocatePool2(0x100uLL, v14, 0x63466F49u);
      if ( !v4 )
      {
        v13 = -1073741670;
        goto LABEL_27;
      }
      FileInformation = IopGetFileInformation(*(PVOID *)(a1 + 64), (__int64)v19);
      v13 = FileInformation;
      v14 = *v4 + 8;
    }
    while ( FileInformation == -2147483643 );
    if ( FileInformation >= 0 )
    {
      v16 = v5 + *v4 + *(unsigned __int16 *)v6;
      if ( v16 < 0xFFFF )
      {
        *(_WORD *)(a2 + 2) = v16;
        *(_WORD *)a2 = v16 - v5;
        v17 = (void *)ExAllocatePool2(0x100uLL, v16, 0x63466F49u);
        *(_QWORD *)(a2 + 8) = v17;
        if ( v17 )
        {
          memmove(v17, v6[1], *(unsigned __int16 *)v6);
          memmove((void *)(*(_QWORD *)(a2 + 8) + *(unsigned __int16 *)v6), v4 + 1, (unsigned int)*v4);
        }
        else
        {
          v13 = -1073741670;
        }
      }
      else
      {
        v13 = -1073741562;
      }
    }
    ExFreePoolWithTag(v4, 0);
  }
LABEL_27:
  ExFreePoolWithTag(v6, 0);
  return v13;
}
