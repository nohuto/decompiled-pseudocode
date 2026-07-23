/*
 * XREFs of KiInitializeWpsWorkloadClasses @ 0x140B58790
 * Callers:
 *     PoInitHeteroDetection @ 0x140C2F1BC (PoInitHeteroDetection.c)
 * Callees:
 *     PoGetWorkloadClassCount @ 0x140B61E88 (PoGetWorkloadClassCount.c)
 */

__int64 __fastcall KiInitializeWpsWorkloadClasses(__int64 a1)
{
  __int64 result; // rax
  int v2; // [rsp+30h] [rbp+8h] BYREF
  int v3; // [rsp+34h] [rbp+Ch]

  v3 = HIDWORD(a1);
  v2 = 0;
  result = PoGetWorkloadClassCount(&v2);
  KiHgsPlusConfiguration = v2;
  return result;
}
