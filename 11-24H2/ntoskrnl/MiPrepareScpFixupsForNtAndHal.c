/*
 * XREFs of MiPrepareScpFixupsForNtAndHal @ 0x140C57C64
 * Callers:
 *     MiRebaseDynamicRelocationRegions @ 0x140C57120 (MiRebaseDynamicRelocationRegions.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x140414520 (RtlImageNtHeaderEx.c)
 *     RtlLookupImageSectionByName @ 0x1404A5560 (RtlLookupImageSectionByName.c)
 *     MiApplyDynamicFixupsToKernelAndHal @ 0x140C573F4 (MiApplyDynamicFixupsToKernelAndHal.c)
 */

int __fastcall MiPrepareScpFixupsForNtAndHal(__int64 a1)
{
  __int64 v1; // r8
  __int64 v2; // rax
  char *v4; // rsi
  const char *v5; // rax
  unsigned int v6; // edx
  char *v8; // rax
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  v2 = *(_QWORD *)(a1 + 240);
  v9 = 0LL;
  dword_140E2D878 = *(_DWORD *)(v2 + 3500) >> 12;
  v4 = *(char **)(v1 + 48);
  RtlImageNtHeaderEx(1u, v4, 0LL, (PIMAGE_NT_HEADERS *)&v9);
  v5 = RtlLookupImageSectionByName(v9, "KSCP");
  v6 = ((*((_DWORD *)v5 + 2) & 0xFFF) != 0) + (*((_DWORD *)v5 + 2) >> 12);
  if ( v6 > dword_140E2D878 )
    return -1073741811;
  v8 = &v4[*((unsigned int *)v5 + 3)];
  dword_140E2D87C = v6;
  Base = v8;
  return MiApplyDynamicFixupsToKernelAndHal(a1);
}
