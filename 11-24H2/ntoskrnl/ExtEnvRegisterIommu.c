/*
 * XREFs of ExtEnvRegisterIommu @ 0x140C12D0C
 * Callers:
 *     HalpIommuProcessIvhdEntry @ 0x14056F048 (HalpIommuProcessIvhdEntry.c)
 *     HalpIvtLegacyProcessDrhdEntry @ 0x140574DF8 (HalpIvtLegacyProcessDrhdEntry.c)
 *     HalpIvtProcessDrhdEntry @ 0x140575658 (HalpIvtProcessDrhdEntry.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x1403FA370 (RtlCopyUnicodeString.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     HalpMmAllocateMemoryInternal @ 0x140540620 (HalpMmAllocateMemoryInternal.c)
 *     HalpExtBuildResourceIdString @ 0x14054A624 (HalpExtBuildResourceIdString.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall ExtEnvRegisterIommu(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v5; // ecx
  unsigned int v6; // ebx
  _QWORD *v7; // rdx
  _QWORD *v8; // rax
  bool v9; // bp
  unsigned int v10; // ecx
  unsigned __int16 Length; // r15
  unsigned int v12; // r14d
  void *MemoryInternal; // rax
  __int64 v14; // rsi
  unsigned __int64 v15; // rcx
  void *v16; // r9
  __int64 v17; // rax
  _OWORD *v18; // rax
  __int128 v19; // xmm1
  _OWORD *v20; // rax
  unsigned int v21; // eax
  const void *v22; // rdx
  int v23; // eax
  __int64 *v24; // rax
  size_t SizeInWords; // [rsp+38h] [rbp-110h]
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-F8h] BYREF
  WCHAR SourceString[80]; // [rsp+60h] [rbp-E8h] BYREF

  DestinationString = 0LL;
  if ( *(_DWORD *)a1 == 1
    && *(_DWORD *)(a1 + 4) == 104
    && (v5 = *(_DWORD *)(a1 + 20), (v5 & 0xF8000000) == 0)
    && (v6 = 0, *(_DWORD *)(a1 + 72))
    && (v7 = *(_QWORD **)(a1 + 56), v7[1])
    && ((v5 & 2) == 0 || *(_QWORD *)(*(_QWORD *)(a1 + 64) + 72LL))
    && ((v5 & 0x40) == 0 || v7[15] && v7[16] && v7[17])
    && ((v5 & 0xA0) == 0
     || (v8 = *(_QWORD **)(a1 + 64), v8[1])
     && v8[2]
     && v8[3]
     && v8[4]
     && v8[5]
     && ((v5 & 0x20) == 0 || v8[7] && v8[8] && v8[10] && v8[11] && v8[12])) )
  {
    v9 = 0;
    if ( !*(_DWORD *)(a1 + 16) )
      v9 = *(_QWORD *)(a1 + 8) != 0LL;
    LODWORD(SizeInWords) = 75;
    HalpExtBuildResourceIdString(
      1413894989,
      0,
      0x4300u,
      *(_WORD *)(a1 + 72),
      1u,
      0,
      *(_DWORD *)(a1 + 96),
      SizeInWords,
      SourceString);
    RtlInitUnicodeString(&DestinationString, SourceString);
    v10 = 544;
    if ( !v9 )
      v10 = (*(_DWORD *)(a1 + 16) + 551) & 0xFFFFFFF8;
    Length = DestinationString.Length;
    v12 = (v10 + DestinationString.Length + 9) & 0xFFFFFFF8;
    MemoryInternal = (void *)HalpMmAllocateMemoryInternal(v12, 1u);
    v14 = (__int64)MemoryInternal;
    if ( MemoryInternal )
    {
      memset_0(MemoryInternal, 0, v12);
      v15 = (v14 + 551) & 0xFFFFFFFFFFFFFFF8uLL;
      v16 = (void *)v15;
      if ( v9 )
      {
        v16 = *(void **)(a1 + 8);
        *(_QWORD *)(v14 + 16) = v16;
      }
      else
      {
        *(_QWORD *)(v14 + 16) = v15;
        v15 = (*(unsigned int *)(a1 + 16) + 7LL + v15) & 0xFFFFFFFFFFFFFFF8uLL;
      }
      *(_QWORD *)(v14 + 528) = v15;
      *(_BYTE *)(v14 + 40) = 12;
      v17 = *(_QWORD *)(a1 + 56);
      *(_OWORD *)(v14 + 56) = *(_OWORD *)v17;
      *(_OWORD *)(v14 + 72) = *(_OWORD *)(v17 + 16);
      *(_OWORD *)(v14 + 88) = *(_OWORD *)(v17 + 32);
      *(_OWORD *)(v14 + 104) = *(_OWORD *)(v17 + 48);
      *(_OWORD *)(v14 + 120) = *(_OWORD *)(v17 + 64);
      *(_OWORD *)(v14 + 136) = *(_OWORD *)(v17 + 80);
      *(_OWORD *)(v14 + 152) = *(_OWORD *)(v17 + 96);
      *(_OWORD *)(v14 + 168) = *(_OWORD *)(v17 + 112);
      *(_OWORD *)(v14 + 184) = *(_OWORD *)(v17 + 128);
      *(_QWORD *)(v14 + 200) = *(_QWORD *)(v17 + 144);
      v18 = *(_OWORD **)(a1 + 64);
      if ( v18 )
      {
        *(_OWORD *)(v14 + 208) = *v18;
        *(_OWORD *)(v14 + 224) = v18[1];
        *(_OWORD *)(v14 + 240) = v18[2];
        *(_OWORD *)(v14 + 256) = v18[3];
        *(_OWORD *)(v14 + 272) = v18[4];
        *(_OWORD *)(v14 + 288) = v18[5];
        *(_OWORD *)(v14 + 304) = v18[6];
        v19 = v18[7];
        v20 = v18 + 8;
        *(_OWORD *)(v14 + 320) = v19;
        *(_OWORD *)(v14 + 336) = *v20;
        *(_OWORD *)(v14 + 352) = v20[1];
        *(_OWORD *)(v14 + 368) = v20[2];
        *(_QWORD *)(v14 + 384) = *((_QWORD *)v20 + 6);
      }
      *(_DWORD *)(v14 + 24) = *(_DWORD *)(a1 + 16);
      *(_DWORD *)(v14 + 472) = *(_DWORD *)(a1 + 20);
      *(_DWORD *)(v14 + 44) = *(_DWORD *)(a1 + 40);
      *(_DWORD *)(v14 + 52) = *(_DWORD *)(a1 + 48);
      *(_DWORD *)(v14 + 48) = *(_DWORD *)(a1 + 44);
      *(_DWORD *)(v14 + 476) = *(_DWORD *)(a1 + 72);
      *(_DWORD *)(v14 + 480) = *(_DWORD *)(a1 + 76);
      *(_DWORD *)(v14 + 484) = *(_DWORD *)(a1 + 80);
      *(_DWORD *)(v14 + 488) = *(_DWORD *)(a1 + 84);
      *(_DWORD *)(v14 + 512) = *(_DWORD *)(a1 + 88);
      *(_DWORD *)(v14 + 440) = *(_DWORD *)(a1 + 92);
      *(_QWORD *)(v14 + 424) = *(_QWORD *)(v14 + 272);
      *(_QWORD *)(v14 + 432) = *(_QWORD *)(v14 + 264);
      *(_QWORD *)(v14 + 408) = 0LL;
      *(_QWORD *)(v14 + 400) = 0LL;
      *(_DWORD *)(v14 + 416) = 0;
      v21 = *(_DWORD *)(a1 + 16);
      if ( v21 )
      {
        v22 = *(const void **)(a1 + 8);
        if ( v22 )
          memmove(v16, v22, v21);
      }
      v23 = *(_DWORD *)(a1 + 96);
      *(_WORD *)(v14 + 520) = 0;
      *(_WORD *)(v14 + 522) = Length + 2;
      *(_DWORD *)(v14 + 516) = v23;
      RtlCopyUnicodeString((PUNICODE_STRING)(v14 + 520), &DestinationString);
      v24 = (__int64 *)qword_140FC0BB8;
      if ( *(ULONG_PTR **)qword_140FC0BB8 != &HalpIommuList )
        __fastfail(3u);
      ++HalpIommuCount;
      *(_QWORD *)v14 = &HalpIommuList;
      *(_QWORD *)(v14 + 8) = v24;
      *v24 = v14;
      qword_140FC0BB8 = v14;
      if ( a3 )
        *a3 = *(_QWORD *)(v14 + 16);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v6;
}
