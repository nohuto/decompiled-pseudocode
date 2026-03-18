/*
 * XREFs of HvlpEndSecurePageListIteration @ 0x14058C2C0
 * Callers:
 *     HvlDiscardSecurePagesFromHibernation @ 0x1405891B4 (HvlDiscardSecurePagesFromHibernation.c)
 *     HvlIterateSecurePagesForHibernation @ 0x140589290 (HvlIterateSecurePagesForHibernation.c)
 *     HvlAddSecurePagesCallbackRoutine @ 0x140589E28 (HvlAddSecurePagesCallbackRoutine.c)
 *     HvlpGetEncryptedDataFromSecureKernel @ 0x14058A8F8 (HvlpGetEncryptedDataFromSecureKernel.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140265D90 (VslpEnterIumSecureMode.c)
 *     HvlpGetPageListIterator @ 0x14058C440 (HvlpGetPageListIterator.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall HvlpEndSecurePageListIteration(__int64 a1, void *a2, unsigned int *a3)
{
  int v5; // ebp
  __int64 result; // rax
  __int64 v7; // rbx
  __int64 v8; // rdx
  unsigned int v9; // edx
  _BYTE v10[8]; // [rsp+20h] [rbp-A8h] BYREF
  _BOOL8 v11; // [rsp+28h] [rbp-A0h]
  size_t Size; // [rsp+30h] [rbp-98h]

  v5 = a1;
  result = HvlpGetPageListIterator(a1);
  v7 = result;
  if ( *(_BYTE *)(result + 2) )
  {
    memset_0(v10, 0, 0x68uLL);
    LOWORD(v8) = 2049;
    v11 = v5 == 0;
    result = VslpEnterIumSecureMode(2u, v8, 0, (__int64)v10);
    v9 = 0;
    if ( (int)result >= 0 )
      v9 = Size;
    if ( a3 && v9 <= *a3 )
    {
      *a3 = v9;
      if ( v9 )
        result = (__int64)memmove(a2, *(const void **)(v7 + 8), v9);
    }
    *(_QWORD *)(v7 + 8) = 0LL;
    *(_WORD *)v7 = 0;
    *(_WORD *)(v7 + 3) = 0;
    *(_BYTE *)(v7 + 2) = 0;
  }
  return result;
}
