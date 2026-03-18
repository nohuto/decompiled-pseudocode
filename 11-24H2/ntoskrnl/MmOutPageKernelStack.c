/*
 * XREFs of MmOutPageKernelStack @ 0x14026962C
 * Callers:
 *     KiOutSwapKernelStacks @ 0x140268FB8 (KiOutSwapKernelStacks.c)
 * Callees:
 *     KeEnumerateKernelStackSegments @ 0x140269F48 (KeEnumerateKernelStackSegments.c)
 *     MiFlushTbList @ 0x140291730 (MiFlushTbList.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

void *__fastcall MmOutPageKernelStack(__int64 a1)
{
  void *result; // rax
  int v3; // ecx
  BOOL v4; // edx
  __int64 v5; // rdx
  void *v6; // [rsp+20h] [rbp-89h] BYREF
  BOOL v7; // [rsp+28h] [rbp-81h]
  int v8; // [rsp+2Ch] [rbp-7Dh]
  unsigned int v9; // [rsp+30h] [rbp-79h]
  int v10; // [rsp+34h] [rbp-75h]
  bool v11; // [rsp+38h] [rbp-71h]
  __int16 v12; // [rsp+39h] [rbp-70h]
  int v13; // [rsp+3Ch] [rbp-6Dh]
  __int64 v14; // [rsp+40h] [rbp-69h]
  __int64 v15; // [rsp+48h] [rbp-61h]

  result = memset_0(&v6, 0, 0xC8uLL);
  if ( (MiFlags & 0x40) != 0 )
  {
    v8 = 20;
    v11 = (dword_140E382F8 & 0x800) != 0;
    v9 = 8;
    v10 = 1;
    v6 = &unk_140E38240;
    if ( (dword_140E382F8 & 0xF) != 0
      || &unk_140E38240 == (_UNKNOWN *)&KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink )
    {
      v3 = v9;
      v4 = (dword_140E382F8 & 0xF) == 0;
    }
    else
    {
      v4 = 0;
      v3 = 9;
    }
    v12 = 0;
    v7 = v4;
    v9 = v3 & 0xFFFFFFDB;
    v13 = 0;
    v14 = 0LL;
    v15 = 0LL;
    KeEnumerateKernelStackSegments(a1, MiOutPageSingleKernelStack, &v6);
    return (void *)MiFlushTbList(&v6, v5);
  }
  return result;
}
