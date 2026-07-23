/*
 * XREFs of RtlFindHotPatchBaseMachine @ 0x14082F88C
 * Callers:
 *     MiApplyDriverHotPatch @ 0x1407F122C (MiApplyDriverHotPatch.c)
 *     MiCaptureHotPatchInfo @ 0x1407F28D8 (MiCaptureHotPatchInfo.c)
 *     MiPrepareToHotPatchImage @ 0x1407F5C30 (MiPrepareToHotPatchImage.c)
 * Callees:
 *     RtlFindHotPatchBase @ 0x14082F854 (RtlFindHotPatchBase.c)
 *     RtlGetHotPatchBaseMachine @ 0x14082FB38 (RtlGetHotPatchBaseMachine.c)
 */

__int64 __fastcall RtlFindHotPatchBaseMachine(unsigned int *a1, __int16 a2)
{
  unsigned int v2; // ebx
  unsigned int v3; // r10d
  unsigned int *v5; // r11
  char *HotPatchBase; // rcx
  __int16 HotPatchBaseMachine; // ax
  __int64 v8; // rcx
  int v9; // r10d

  v2 = a1[4];
  v3 = 0;
  v5 = a1;
  while ( v3 < v2 )
  {
    HotPatchBase = RtlFindHotPatchBase(v5, v3);
    if ( !HotPatchBase )
      break;
    HotPatchBaseMachine = RtlGetHotPatchBaseMachine(HotPatchBase);
    if ( !HotPatchBaseMachine || HotPatchBaseMachine == a2 )
      return v8;
    v3 = v9 + 1;
  }
  return 0LL;
}
