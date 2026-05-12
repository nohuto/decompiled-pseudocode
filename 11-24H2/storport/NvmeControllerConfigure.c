/*
 * XREFs of NvmeControllerConfigure @ 0x1400EBC7C
 * Callers:
 *     NvmeControllerInitPhase1 @ 0x1400EF9D4 (NvmeControllerInitPhase1.c)
 * Callees:
 *     NvmeControllerSetStorMQProperty @ 0x1400F5048 (NvmeControllerSetStorMQProperty.c)
 */

__int64 __fastcall NvmeControllerConfigure(__int64 a1)
{
  __int64 v1; // r8
  __int64 v2; // rax
  int v3; // edx
  int v4; // eax
  __int64 result; // rax
  signed __int32 v6[8]; // [rsp+0h] [rbp-38h] BYREF

  v1 = *(_QWORD *)(a1 + 584);
  if ( (v1 & 0x20000) != 0 && (v2 = *(_QWORD *)(a1 + 1048)) != 0 && (*(_DWORD *)(v2 + 24) & 0x400) != 0 )
  {
    v3 = 2048;
    v4 = 2144;
  }
  else
  {
    v3 = 0;
    v4 = 96;
  }
  if ( (v1 & 0x80000000000LL) == 0 )
    v4 = v3;
  result = v4 | 0x460000u;
  if ( *(_BYTE *)(a1 + 1728) == 1 )
    return NvmeControllerSetStorMQProperty(a1, 20LL, 4LL);
  *(_DWORD *)(*(_QWORD *)(a1 + 920) + 20LL) = result;
  _InterlockedOr(v6, 0);
  return result;
}
