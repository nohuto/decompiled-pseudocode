/*
 * XREFs of RtlInitializeSystemOverrideDelta @ 0x140A91D9C
 * Callers:
 *     RtlApplyFunctionOverrideFixupsToImage @ 0x140787BC0 (RtlApplyFunctionOverrideFixupsToImage.c)
 *     MiRelocateImage @ 0x140AEA57C (MiRelocateImage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlInitializeSystemOverrideDelta(__int64 a1, __int64 a2, int a3, __int64 a4, int a5)
{
  __int64 result; // rax

  if ( a4 )
    *(_QWORD *)(a1 + 8) = a4
                        + dword_140E2D8E0[0]
                        + ((a5 + 4095) & 0xFFFFF000)
                        - (a2
                         + dword_140E2D8E0[0]
                         + ((a3 + 4095) & 0xFFFFF000));
  result = (unsigned int)(a3 + dword_140E375EC + dword_140E375F0);
  *(_QWORD *)(a1 + 16) = (char *)Base - result - a2;
  return result;
}
