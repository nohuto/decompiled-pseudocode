/*
 * XREFs of BiConvertBootEnvironmentDeviceToUnknown @ 0x140803584
 * Callers:
 *     BiConvertBootEnvironmentDeviceToElement @ 0x140802C08 (BiConvertBootEnvironmentDeviceToElement.c)
 *     BiConvertBootEnvironmentDeviceToNt @ 0x140802C54 (BiConvertBootEnvironmentDeviceToNt.c)
 * Callees:
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 __fastcall BiConvertBootEnvironmentDeviceToUnknown(_DWORD *Src, _QWORD *a2, _DWORD *a3)
{
  size_t v6; // rbp
  _DWORD *Pool2; // rax
  unsigned int v8; // ebx
  _DWORD *v9; // rdi

  if ( Src[2] >= 0xFFFFFFEC )
  {
    return (unsigned int)-1073741675;
  }
  else
  {
    v6 = (unsigned int)(Src[2] + 20);
    Pool2 = (_DWORD *)ExAllocatePool2(0x102uLL);
    v8 = 0;
    v9 = Pool2;
    if ( Pool2 )
    {
      memset_0(Pool2, 0, v6);
      *v9 = 5;
      memmove(v9 + 5, Src, (unsigned int)Src[2]);
      *a2 = v9;
      *a3 = v6;
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v8;
}
