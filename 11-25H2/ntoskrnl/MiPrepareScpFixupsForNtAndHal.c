/*
 * XREFs of MiPrepareScpFixupsForNtAndHal @ 0x140C447F4
 * Callers:
 *     MiRebaseDynamicRelocationRegions @ 0x140C43D10 (MiRebaseDynamicRelocationRegions.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x140420FB0 (RtlImageNtHeaderEx.c)
 *     RtlLookupImageSectionByName @ 0x1404A9EA0 (RtlLookupImageSectionByName.c)
 *     MiApplyDynamicFixupsToKernelAndHal @ 0x140C43F7C (MiApplyDynamicFixupsToKernelAndHal.c)
 */

__int64 __fastcall MiPrepareScpFixupsForNtAndHal(__int64 a1)
{
  __int64 v1; // r8
  __int64 v2; // rax
  unsigned __int64 v4; // rsi
  const char *v5; // rax
  unsigned int v6; // edx
  void *v8; // rax
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  v2 = *(_QWORD *)(a1 + 240);
  v9 = 0LL;
  dword_140E2D4F8 = *(_DWORD *)(v2 + 3500) >> 12;
  v4 = *(_QWORD *)(v1 + 48);
  RtlImageNtHeaderEx(1, v4, 0LL, &v9);
  v5 = RtlLookupImageSectionByName(v9, "KSCP");
  v6 = ((*((_DWORD *)v5 + 2) & 0xFFF) != 0) + (*((_DWORD *)v5 + 2) >> 12);
  if ( v6 > dword_140E2D4F8 )
    return 3221225485LL;
  v8 = (void *)(v4 + *((unsigned int *)v5 + 3));
  dword_140E2D4FC = v6;
  Base = v8;
  return MiApplyDynamicFixupsToKernelAndHal(a1);
}
