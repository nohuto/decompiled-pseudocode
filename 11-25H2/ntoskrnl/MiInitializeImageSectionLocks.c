/*
 * XREFs of MiInitializeImageSectionLocks @ 0x140A9C1AC
 * Callers:
 *     MiConstructLoaderEntry @ 0x140A8E4EC (MiConstructLoaderEntry.c)
 * Callees:
 *     MiGetPteAddress @ 0x140419EE0 (MiGetPteAddress.c)
 *     RtlImageNtHeader @ 0x14043DFA0 (RtlImageNtHeader.c)
 *     MiGetBaseLoaderPortion @ 0x1404D0B80 (MiGetBaseLoaderPortion.c)
 */

__int64 __fastcall MiInitializeImageSectionLocks(__int64 a1)
{
  __int64 BaseLoaderPortion; // rax
  __int64 v2; // rcx
  void *v3; // rdi
  __int64 v4; // rbx
  PIMAGE_NT_HEADERS v5; // rax
  _DWORD *v6; // r15
  unsigned __int16 NumberOfSections; // dx
  __int64 result; // rax
  __int64 PteAddress; // rax
  __int64 v10; // r8
  __int64 v11; // r14
  __int64 v12; // rbx
  __int64 v13; // rsi
  unsigned int v14; // edx
  __int64 v15; // rbp
  unsigned int v16; // edx
  __int64 v17; // r8
  unsigned int v18; // r9d
  __int64 v19; // r10
  __int64 v20; // r11

  BaseLoaderPortion = MiGetBaseLoaderPortion(a1);
  v3 = *(void **)(v2 + 48);
  v4 = BaseLoaderPortion;
  v5 = RtlImageNtHeader(v3);
  v6 = *(_DWORD **)(v4 + 200);
  NumberOfSections = v5->FileHeader.NumberOfSections;
  *(_QWORD *)(v4 + 288) = (char *)&v5->OptionalHeader + v5->FileHeader.SizeOfOptionalHeader;
  result = 0LL;
  if ( NumberOfSections )
  {
    PteAddress = MiGetPteAddress((unsigned __int64)v3);
    v11 = v10 + 8;
    v12 = -8 - PteAddress;
    v13 = PteAddress;
    v15 = v14;
    do
    {
      *v6 = (MiGetPteAddress((unsigned __int64)v3 + *(unsigned int *)(v11 + 4)) - v13) >> 3;
      if ( v18 < v16 )
        v18 = v16;
      v6 += 3;
      result = (v12 + MiGetPteAddress(((v20 & (v17 + v19 + v18 - 1LL)) + 4095) & 0xFFFFFFFFFFFFF000uLL)) >> 3;
      v11 += 40LL;
      *(v6 - 2) = result;
      --v15;
    }
    while ( v15 );
  }
  return result;
}
