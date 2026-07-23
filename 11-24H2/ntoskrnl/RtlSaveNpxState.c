/*
 * XREFs of RtlSaveNpxState @ 0x1405EE18C
 * Callers:
 *     KiSaveProcessorState @ 0x1405C7B70 (KiSaveProcessorState.c)
 * Callees:
 *     RtlXSave @ 0x1403D3DF0 (RtlXSave.c)
 */

unsigned __int64 __fastcall RtlSaveNpxState(__int64 a1, int a2)
{
  int v2; // r8d
  unsigned __int64 result; // rax
  unsigned int v4; // r8d

  v2 = MEMORY[0xFFFFF780000003E0];
  if ( (a2 & 0x100008) == 0x100008 )
    _fxsave((void *)(a1 + 256));
  result = 1048640LL;
  if ( (a2 & 0x100040) == 0x100040 )
  {
    v4 = v2 & 0xFFFFFFFC;
    if ( v4 )
      return RtlXSave((_DWORD *)(*(int *)(a1 + 1248) + a1 + 720), v4);
  }
  return result;
}
