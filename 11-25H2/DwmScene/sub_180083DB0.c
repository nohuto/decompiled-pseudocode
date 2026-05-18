/*
 * XREFs of sub_180083DB0 @ 0x180083DB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180056CE0 @ 0x180056CE0 (sub_180056CE0.c)
 *     __RTDynamicCast @ 0x1800D4E40 (__RTDynamicCast.c)
 */

bool __fastcall sub_180083DB0(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  bool result; // al

  result = sub_180056CE0(a1, a2)
        && (v4 = _RTDynamicCast(
                   a2,
                   0LL,
                   &Spectre::Engine::Component `RTTI Type Descriptor',
                   &Spectre::Engine::ShadowMapCamera `RTTI Type Descriptor',
                   1),
            *(_QWORD *)(v4 + 1896) == *(_QWORD *)(a1 + 1896))
        && *(_DWORD *)(v4 + 1940) == *(_DWORD *)(a1 + 1940)
        && *(float *)(v4 + 1948) == *(float *)(a1 + 1948)
        && *(_BYTE *)(v4 + 1952) == *(_BYTE *)(a1 + 1952)
        && *(float *)(v4 + 1956) == *(float *)(a1 + 1956)
        && *(_DWORD *)(v4 + 1964) == *(_DWORD *)(a1 + 1964)
        && *(_DWORD *)(v4 + 1960) == *(_DWORD *)(a1 + 1960)
        && *(float *)(v4 + 1968) == *(float *)(a1 + 1968)
        && *(_DWORD *)(v4 + 1944) == *(_DWORD *)(a1 + 1944);
  return result;
}
