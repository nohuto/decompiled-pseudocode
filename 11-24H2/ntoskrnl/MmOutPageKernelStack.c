/*
 * XREFs of MmOutPageKernelStack @ 0x14021EDF0
 * Callers:
 *     KiOutSwapKernelStacks @ 0x1402600D4 (KiOutSwapKernelStacks.c)
 * Callees:
 *     KeEnumerateKernelStackSegments @ 0x14021F4D8 (KeEnumerateKernelStackSegments.c)
 *     MiFlushTbList @ 0x1402A1330 (MiFlushTbList.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

void *__fastcall MmOutPageKernelStack(__int64 a1)
{
  void *result; // rax
  int v3; // ecx
  BOOL v4; // edx
  void *v5; // [rsp+20h] [rbp-89h] BYREF
  BOOL v6; // [rsp+28h] [rbp-81h]
  int v7; // [rsp+2Ch] [rbp-7Dh]
  unsigned int v8; // [rsp+30h] [rbp-79h]
  int v9; // [rsp+34h] [rbp-75h]
  bool v10; // [rsp+38h] [rbp-71h]
  __int16 v11; // [rsp+39h] [rbp-70h]
  int v12; // [rsp+3Ch] [rbp-6Dh]
  __int64 v13; // [rsp+40h] [rbp-69h]
  __int64 v14; // [rsp+48h] [rbp-61h]

  result = memset_0(&v5, 0, 0xC8uLL);
  if ( (MiFlags & 0x40) != 0 )
  {
    v7 = 20;
    v10 = (dword_140E38438 & 0x800) != 0;
    v8 = 8;
    v9 = 1;
    v5 = &unk_140E38380;
    if ( (dword_140E38438 & 0xF) != 0
      || &unk_140E38380 == (_UNKNOWN *)&KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink )
    {
      v3 = v8;
      v4 = (dword_140E38438 & 0xF) == 0;
    }
    else
    {
      v4 = 0;
      v3 = 9;
    }
    v11 = 0;
    v6 = v4;
    v8 = v3 & 0xFFFFFFDB;
    v12 = 0;
    v13 = 0LL;
    v14 = 0LL;
    KeEnumerateKernelStackSegments(a1, MiOutPageSingleKernelStack, &v5);
    return (void *)MiFlushTbList(&v5);
  }
  return result;
}
