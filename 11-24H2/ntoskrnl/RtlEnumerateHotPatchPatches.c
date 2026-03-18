/*
 * XREFs of RtlEnumerateHotPatchPatches @ 0x14082EF88
 * Callers:
 *     MiPrepareToHotPatchImage @ 0x1407F5540 (MiPrepareToHotPatchImage.c)
 *     MiProcessPatchImageCfg @ 0x1407F5CBC (MiProcessPatchImageCfg.c)
 * Callees:
 *     RtlGetHotPatchSize @ 0x1406A345C (RtlGetHotPatchSize.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall RtlEnumerateHotPatchPatches(_DWORD *a1, unsigned int *a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v7; // r9
  unsigned int *v8; // rdx
  unsigned int v9; // ebx
  __int64 v10; // r14
  unsigned int v11; // esi
  unsigned int v12; // ebp
  int v13; // ebx

  result = RtlGetHotPatchSize(a1);
  v9 = *v8;
  v10 = (unsigned int)result;
  while ( v9 )
  {
    v11 = v9 >> 31;
    v12 = v9 & 0xFC000;
    v13 = v9 & 0xFFF;
    ++a2;
    while ( v13 )
    {
      LOBYTE(v7) = v11;
      result = guard_dispatch_icall_no_overrides(a4, a2, v12, v7);
      if ( (_BYTE)result )
        return result;
      a2 += v10;
      --v13;
    }
    v9 = *a2;
  }
  return result;
}
