/*
 * XREFs of BiConvertBootEnvironmentDeviceToUnknown @ 0x14081383C
 * Callers:
 *     BiConvertBootEnvironmentDeviceToElement @ 0x140812EC0 (BiConvertBootEnvironmentDeviceToElement.c)
 *     BiConvertBootEnvironmentDeviceToNt @ 0x140812F0C (BiConvertBootEnvironmentDeviceToNt.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall BiConvertBootEnvironmentDeviceToUnknown(_DWORD *Src, _QWORD *a2, _DWORD *a3)
{
  unsigned int v4; // eax
  size_t v7; // rbp
  _DWORD *Pool2; // rax
  unsigned int v9; // ebx
  _DWORD *v10; // rdi

  v4 = Src[2] + 20;
  if ( Src[2] >= 0xFFFFFFEC )
  {
    return (unsigned int)-1073741675;
  }
  else
  {
    v7 = v4;
    Pool2 = (_DWORD *)ExAllocatePool2(0x102uLL, v4, 0x4B444342u);
    v9 = 0;
    v10 = Pool2;
    if ( Pool2 )
    {
      memset_0(Pool2, 0, v7);
      *v10 = 5;
      memmove(v10 + 5, Src, (unsigned int)Src[2]);
      *a2 = v10;
      *a3 = v7;
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v9;
}
