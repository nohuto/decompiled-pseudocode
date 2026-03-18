/*
 * XREFs of MmOutPageKernelStack @ 0x1402D2FE4
 * Callers:
 *     KiOutSwapKernelStacks @ 0x1402D2D70 (KiOutSwapKernelStacks.c)
 * Callees:
 *     KeEnumerateKernelStackSegments @ 0x140228B88 (KeEnumerateKernelStackSegments.c)
 *     MiFlushTbList @ 0x14032BCA0 (MiFlushTbList.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

void *__fastcall MmOutPageKernelStack(__int64 a1)
{
  void *result; // rax
  int v3; // ecx
  BOOL v4; // edx
  __int64 v5; // rdx
  __int64 v6; // r8
  void *v7; // [rsp+20h] [rbp-89h] BYREF
  BOOL v8; // [rsp+28h] [rbp-81h]
  int v9; // [rsp+2Ch] [rbp-7Dh]
  unsigned int v10; // [rsp+30h] [rbp-79h]
  int v11; // [rsp+34h] [rbp-75h]
  bool v12; // [rsp+38h] [rbp-71h]
  __int16 v13; // [rsp+39h] [rbp-70h]
  int v14; // [rsp+3Ch] [rbp-6Dh]
  __int64 v15; // [rsp+40h] [rbp-69h]
  __int64 v16; // [rsp+48h] [rbp-61h]

  result = memset_0(&v7, 0, 0xC8uLL);
  if ( (MiFlags & 0x40) != 0 )
  {
    v9 = 20;
    v12 = (dword_140E380B8 & 0x800) != 0;
    v10 = 8;
    v11 = 1;
    v7 = &unk_140E38000;
    if ( (dword_140E380B8 & 0xF) != 0
      || &unk_140E38000 == (_UNKNOWN *)&KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink )
    {
      v3 = v10;
      v4 = (dword_140E380B8 & 0xF) == 0;
    }
    else
    {
      v4 = 0;
      v3 = 9;
    }
    v13 = 0;
    v8 = v4;
    v10 = v3 & 0xFFFFFFDB;
    v14 = 0;
    v15 = 0LL;
    v16 = 0LL;
    KeEnumerateKernelStackSegments(
      a1,
      (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))MiOutPageSingleKernelStack,
      (__int64)&v7);
    return (void *)MiFlushTbList(&v7, v5, v6);
  }
  return result;
}
