/*
 * XREFs of RtlInitializeSystemOverrideDelta @ 0x1408F74A4
 * Callers:
 *     RtlApplyFunctionOverrideFixupsToImage @ 0x140787C90 (RtlApplyFunctionOverrideFixupsToImage.c)
 *     MiRelocateImage @ 0x1408F5784 (MiRelocateImage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlInitializeSystemOverrideDelta(__int64 a1, __int64 a2, int a3, __int64 a4, int a5)
{
  __int64 result; // rax

  if ( a4 )
    *(_QWORD *)(a1 + 8) = a4
                        + dword_140E2D7A0[0]
                        + ((a5 + 4095) & 0xFFFFF000)
                        - (a2
                         + dword_140E2D7A0[0]
                         + ((a3 + 4095) & 0xFFFFF000));
  result = (unsigned int)(a3 + dword_140E374AC + dword_140E374B0);
  *(_QWORD *)(a1 + 16) = (char *)qword_140E2D730 - result - a2;
  return result;
}
