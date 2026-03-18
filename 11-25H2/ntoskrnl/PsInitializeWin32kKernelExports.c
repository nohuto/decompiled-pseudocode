/*
 * XREFs of PsInitializeWin32kKernelExports @ 0x1405D88F4
 * Callers:
 *     InitBootProcessor @ 0x140BF9C88 (InitBootProcessor.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

__int64 PsInitializeWin32kKernelExports()
{
  __int64 result; // rax
  ULONG_PTR v1; // rdx
  int v2; // [rsp+40h] [rbp+8h] BYREF
  __int64 v3; // [rsp+48h] [rbp+10h] BYREF
  bool (__fastcall *v4)(__int64); // [rsp+50h] [rbp+18h] BYREF

  v3 = 0LL;
  v2 = 0;
  v4 = PspGetFreezeState;
  result = Win32kGetSupportedExportsVersion(&v2);
  if ( (_DWORD)result != -1073741637 )
  {
    if ( (int)result < 0 )
    {
      v1 = 72LL;
      goto LABEL_8;
    }
    if ( v2 != 1 )
    {
      LODWORD(result) = -1073741637;
      v1 = 73LL;
      goto LABEL_8;
    }
    v3 = 1LL;
    result = Win32kKernelExportsSet(&v3, &v4);
    if ( (int)result < 0 )
    {
      v1 = 74LL;
LABEL_8:
      KeBugCheckEx(0x164u, v1, (int)result, 0LL, 0LL);
    }
  }
  return result;
}
