/*
 * XREFs of CommonBuffer_AcquireShadowBuffer @ 0x14003F3EC
 * Callers:
 *     XilCommonBuffer_AcquireBufferEx @ 0x140003EB4 (XilCommonBuffer_AcquireBufferEx.c)
 *     TR_AcquireSecureSegments @ 0x14001FC88 (TR_AcquireSecureSegments.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CommonBuffer_AcquireShadowBuffer(int a1, __int64 a2, int a3)
{
  int v3; // edi
  __int64 result; // rax

  v3 = a1 + 104;
  result = ExAllocatePool2(64LL, (unsigned int)(a1 + 104), 1229146200LL);
  if ( result )
  {
    *(_DWORD *)(result + 40) = v3;
    *(_QWORD *)(result + 16) = result + 104;
    *(_DWORD *)(result + 44) = a1;
    *(_DWORD *)(result + 64) = a3;
    *(_QWORD *)(result + 72) = a2;
    *(_DWORD *)(result + 80) = 2;
  }
  return result;
}
