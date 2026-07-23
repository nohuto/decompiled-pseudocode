/*
 * XREFs of BiConvertQualifiedPartitionToBootEnvironment @ 0x140ABBBD4
 * Callers:
 *     BiConvertElementToRegistryData @ 0x1409A6714 (BiConvertElementToRegistryData.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiConvertQualifiedPartitionToBootEnvironment(__int64 a1, unsigned int a2, _QWORD *a3)
{
  unsigned int v5; // ebx
  _DWORD *Pool2; // rax
  _DWORD *v7; // rdi
  int v8; // eax

  if ( a2 >= 0x3C )
  {
    Pool2 = (_DWORD *)ExAllocatePool2(0x102uLL, 0x48uLL, 0x4B444342u);
    v5 = 0;
    v7 = Pool2;
    if ( Pool2 )
    {
      memset_0(Pool2, 0, 0x48uLL);
      *v7 = 6;
      v7[2] = 72;
      v8 = *(_DWORD *)(a1 + 20);
      if ( v8 )
      {
        if ( v8 != 1 )
        {
          v5 = -1073741811;
          ExFreePoolWithTag(v7, 0x4B444342u);
          return v5;
        }
        v7[9] = 0;
        *(_OWORD *)(v7 + 10) = *(_OWORD *)(a1 + 28);
        *((_OWORD *)v7 + 1) = *(_OWORD *)(a1 + 44);
      }
      else
      {
        v7[9] = 1;
        v7[10] = *(_DWORD *)(a1 + 28);
        *((_QWORD *)v7 + 2) = *(_QWORD *)(a1 + 32);
      }
      *a3 = v7;
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v5;
}
