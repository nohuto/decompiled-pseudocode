/*
 * XREFs of VidSchiBlockContextOnPendingFlips @ 0x140024ED0
 * Callers:
 *     VidSchiSwitchContextWithCheck @ 0x140024800 (VidSchiSwitchContextWithCheck.c)
 *     VidSchiSubmitQueueCommandDirect @ 0x1400504CC (VidSchiSubmitQueueCommandDirect.c)
 * Callees:
 *     ?VidMmCheckPrimaryAllocationReferences@@YAJPEBVVIDMM_GLOBAL@@PEBUVIDMM_PRIMARIES_REFERENCES@@_N@Z @ 0x140036320 (-VidMmCheckPrimaryAllocationReferences@@YAJPEBVVIDMM_GLOBAL@@PEBUVIDMM_PRIMARIES_REFERENCES@@_N@.c)
 *     McTemplateK0pp_EtwWriteTransfer @ 0x140036410 (McTemplateK0pp_EtwWriteTransfer.c)
 */

bool __fastcall VidSchiBlockContextOnPendingFlips(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  __int64 v3; // rdi
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rax

  v1 = *(_QWORD *)(a1 + 88);
  v2 = *(_QWORD *)(v1 + 104);
  v3 = *(_QWORD *)(*(_QWORD *)(v1 + 96) + 24LL);
  if ( *(_BYTE *)(v2 + 204)
    || _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 200), 0, 0)
    || *(_DWORD *)(v3 + 3244)
    || *(_DWORD *)(a1 + 48)
    || (*(_DWORD *)(a1 + 64) & 8) != 0 )
  {
    return 0;
  }
  v4 = VidMmCheckPrimaryAllocationReferences(
         *(const struct VIDMM_GLOBAL **)(*(_QWORD *)(v3 + 8) + 768LL),
         (const struct VIDMM_PRIMARIES_REFERENCES *)(a1 + 952),
         *(_DWORD *)(v2 + 1832) == 0);
  if ( v4 != -1071775486 )
    return v4 == -2147483643 && *(_DWORD *)(v3 + 860);
  if ( *(_BYTE *)(*(_QWORD *)(v2 + 40) + 2632LL) && !*(_DWORD *)(v2 + 1832) )
  {
    if ( (byte_140081241 & 1) != 0 )
    {
      v7 = *(_QWORD *)(v2 + 8);
      if ( !v7 )
        v7 = v2;
      McTemplateK0pp_EtwWriteTransfer(v5, &EventFrontBufferRenderingAllowed, v6, *(_QWORD *)(v3 + 16), v7);
    }
    ++*(_QWORD *)(v3 + 7072);
    return 0;
  }
  return 1;
}
