/*
 * XREFs of NVMeSetHostBehaviorSupportCompletion @ 0x14002C370
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbExtension @ 0x140005060 (GetSrbExtension.c)
 */

__int64 __fastcall NVMeSetHostBehaviorSupportCompletion(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // r10
  unsigned int v4; // r9d
  __int64 v5; // rdx

  result = GetSrbExtension(a2);
  v4 = *(_DWORD *)(v3 + 4064) | 0x400;
  if ( *(_BYTE *)(v5 + 3) != 1 )
    v4 = *(_DWORD *)(v3 + 4064) & 0xFFFFFBFF;
  *(_DWORD *)(v3 + 4064) = v4;
  *(_BYTE *)(result + 4225) |= 8u;
  return result;
}
