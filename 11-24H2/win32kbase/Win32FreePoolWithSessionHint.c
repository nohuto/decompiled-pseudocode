/*
 * XREFs of Win32FreePoolWithSessionHint @ 0x1401BECE0
 * Callers:
 *     AllocateW32ProcessImpl @ 0x140166B20 (AllocateW32ProcessImpl.c)
 * Callees:
 *     W32ExecuteUsingSessionGlobal__lambda_249bc4ecfc0c18c17c3d22e8f3bb9a0d___ @ 0x1401BF054 (W32ExecuteUsingSessionGlobal__lambda_249bc4ecfc0c18c17c3d22e8f3bb9a0d___.c)
 */

__int64 __fastcall Win32FreePoolWithSessionHint(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF
  __int64 *v4; // [rsp+40h] [rbp+18h] BYREF

  result = a2;
  if ( a1 )
  {
    v3 = a1;
    v4 = &v3;
    return W32ExecuteUsingSessionGlobal__lambda_249bc4ecfc0c18c17c3d22e8f3bb9a0d_(a2, &v4);
  }
  return result;
}
