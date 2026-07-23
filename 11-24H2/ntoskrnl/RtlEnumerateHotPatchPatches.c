/*
 * XREFs of RtlEnumerateHotPatchPatches @ 0x14082F7B8
 * Callers:
 *     MiPrepareToHotPatchImage @ 0x1407F5C30 (MiPrepareToHotPatchImage.c)
 *     MiProcessPatchImageCfg @ 0x1407F63AC (MiProcessPatchImageCfg.c)
 * Callees:
 *     RtlGetHotPatchSize @ 0x1406A44AC (RtlGetHotPatchSize.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall RtlEnumerateHotPatchPatches(_DWORD *a1, int *a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  int *v7; // rdx
  int v8; // ebx
  __int64 v9; // r14
  int v10; // ebx

  result = RtlGetHotPatchSize(a1);
  v8 = *v7;
  v9 = (unsigned int)result;
  while ( v8 )
  {
    v10 = v8 & 0xFFF;
    ++a2;
    while ( v10 )
    {
      result = guard_dispatch_icall_no_overrides(a4, a2);
      if ( (_BYTE)result )
        return result;
      a2 += v9;
      --v10;
    }
    v8 = *a2;
  }
  return result;
}
