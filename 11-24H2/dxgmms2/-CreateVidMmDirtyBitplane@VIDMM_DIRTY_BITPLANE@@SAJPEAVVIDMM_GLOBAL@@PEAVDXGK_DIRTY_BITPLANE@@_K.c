/*
 * XREFs of ?CreateVidMmDirtyBitplane@VIDMM_DIRTY_BITPLANE@@SAJPEAVVIDMM_GLOBAL@@PEAVDXGK_DIRTY_BITPLANE@@_KPEAPEAV1@@Z @ 0x14004E258
 * Callers:
 *     ?CreateDirtyBitplane@VIDMM_GLOBAL@@QEAAJPEAVDXGK_DIRTY_BITPLANE@@_KPEAPEAVVIDMM_DIRTY_BITPLANE@@@Z @ 0x140092ED4 (-CreateDirtyBitplane@VIDMM_GLOBAL@@QEAAJPEAVDXGK_DIRTY_BITPLANE@@_KPEAPEAVVIDMM_DIRTY_BITPLANE@@.c)
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14001C724 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x14001D2D0 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140036BA0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?DriverSegmentIdToAdapterSegmentIndex@VIDMM_GLOBAL@@QEBAIII@Z @ 0x14003C350 (-DriverSegmentIdToAdapterSegmentIndex@VIDMM_GLOBAL@@QEBAIII@Z.c)
 *     memset @ 0x140056340 (memset.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@_N6@Z @ 0x14009AF84 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z @ 0x1400A8F40 (-FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z.c)
 *     ?ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z @ 0x1400BC21C (-ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1400BC6E0 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1400BCAA4 (-QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?AdapterId@VIDMM_GLOBAL@@QEBAKXZ @ 0x1400F1A88 (-AdapterId@VIDMM_GLOBAL@@QEBAKXZ.c)
 */

__int64 __fastcall VIDMM_DIRTY_BITPLANE::CreateVidMmDirtyBitplane(
        struct VIDMM_GLOBAL *this,
        PRTL_BITMAP BitMapHeader,
        unsigned __int64 a3,
        struct VIDMM_DIRTY_BITPLANE **a4)
{
  unsigned int v7; // r15d
  CVirtualAddressAllocator *v8; // rbp
  int v9; // ebx
  __int64 v10; // rax
  char *v11; // rdi
  unsigned __int16 v12; // ax
  int *v13; // r12
  __int64 v14; // rax
  __int64 Buffer_high; // rdx
  __int64 v16; // r8
  unsigned __int64 *v17; // r13
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rsi
  __int64 v20; // rax
  _QWORD *v21; // rsi
  int v22; // ecx
  __int64 v23; // r13
  BOOLEAN v24; // al
  ULONG v25; // ecx
  PULONG Buffer; // rax
  unsigned __int64 v27; // rdx
  char *v28; // r8
  unsigned int v29; // eax
  CVirtualAddressAllocator *VirtualAddressAllocator; // rax
  unsigned __int64 v31; // r8
  __int64 v32; // rax
  __int64 v33; // rax
  __int128 v34; // xmm0
  unsigned __int64 v35; // rdx
  _QWORD v37[19]; // [rsp+90h] [rbp-98h] BYREF
  __int64 StartingRunIndex; // [rsp+140h] [rbp+18h] BYREF
  struct VIDMM_DIRTY_BITPLANE **v39; // [rsp+148h] [rbp+20h]

  v39 = a4;
  v7 = 0;
  v8 = 0LL;
  memset(v37, 0, 0x58uLL);
  if ( a3 <= 0xFFFFF000 )
  {
    v10 = operator new(72LL, 0x32366956u, 256LL);
    v11 = (char *)v10;
    if ( !v10 )
    {
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 68;
      return (unsigned int)-1073741801;
    }
    *(_QWORD *)v10 = 0LL;
    *(_OWORD *)(v10 + 8) = 0LL;
    *(_QWORD *)(v10 + 24) = 0LL;
    *(_QWORD *)(v10 + 32) = 0LL;
    *(_QWORD *)(v10 + 40) = 0LL;
    *(_QWORD *)(v10 + 48) = 0LL;
    *(_QWORD *)(v10 + 56) = 0LL;
    *(_QWORD *)(v10 + 64) = 0LL;
    v12 = VIDMM_GLOBAL::DriverSegmentIdToAdapterSegmentIndex(this, 0, BitMapHeader[2].SizeOfBitMap);
    *(_QWORD *)v11 = this;
    v13 = (int *)(v11 + 8);
    *((_QWORD *)v11 + 3) = *(_QWORD *)(*(_QWORD *)(**((_QWORD **)this + 5029) + 1648LL) + 8LL * v12);
    v14 = **(_QWORD **)&BitMapHeader[3].SizeOfBitMap;
    *((_DWORD *)v11 + 3) = 0;
    Buffer_high = HIDWORD(BitMapHeader[4].Buffer);
    v16 = (unsigned int)(BitMapHeader->SizeOfBitMap - Buffer_high);
    StartingRunIndex = v14;
    v17 = (unsigned __int64 *)(v11 + 40);
    v18 = (__int64)BitMapHeader[1].Buffer * (unsigned int)RtlNumberOfSetBitsInRange(BitMapHeader, Buffer_high, v16);
    if ( a3 > v18 )
      a3 = v18;
    *v17 = a3;
    v19 = a3 >> 12;
    v20 = 8LL * (unsigned int)v19;
    *v13 = v19;
    if ( !is_mul_ok((unsigned int)v19, 8uLL) )
      v20 = -1LL;
    v21 = (_QWORD *)operator new[](v20, 0x31376956u, 256LL);
    if ( v21 )
    {
      v22 = *v13;
      if ( *v13 )
      {
        v23 = StartingRunIndex;
        do
        {
          v24 = RtlTestBit(BitMapHeader, HIDWORD(BitMapHeader[4].Buffer));
          v25 = HIDWORD(BitMapHeader[4].Buffer);
          if ( !v24 )
          {
            LODWORD(StartingRunIndex) = 0;
            v25 = HIDWORD(BitMapHeader[4].Buffer)
                + RtlFindNextForwardRunClear(BitMapHeader, v25, (PULONG)&StartingRunIndex);
          }
          HIDWORD(BitMapHeader[4].Buffer) = v25 + 1;
          if ( v25 + 1 == BitMapHeader->SizeOfBitMap )
          {
            HIDWORD(BitMapHeader[4].Buffer) = 0;
            v7 = 0;
          }
          else
          {
            v7 = 261;
          }
          Buffer = BitMapHeader[1].Buffer;
          v27 = v23 + (_QWORD)Buffer * v25;
          v28 = (char *)Buffer + v27;
          while ( v27 < (unsigned __int64)v28 )
          {
            v21[(_QWORD)v8] = v27 >> 12;
            v8 = (CVirtualAddressAllocator *)(unsigned int)((_DWORD)v8 + 1);
            v27 += 4096LL;
          }
          v22 = *v13;
        }
        while ( (unsigned int)v8 < *v13 );
        v17 = (unsigned __int64 *)(v11 + 40);
      }
      *((_QWORD *)v11 + 7) = *v21;
      *((_QWORD *)v11 + 8) = v21[v22 - 1];
      *((_QWORD *)v11 + 2) = v21;
      v29 = VIDMM_GLOBAL::AdapterId(this);
      VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(g_pVidMmSystemProcess, v29, 0);
      v8 = VirtualAddressAllocator;
      if ( VirtualAddressAllocator )
      {
        v9 = CVirtualAddressAllocator::ReserveVirtualAddressRangeNoAccess(
               VirtualAddressAllocator,
               *v17,
               v31,
               *((_QWORD *)this + 5118),
               *((_QWORD *)this + 5119),
               0x1000u,
               (unsigned __int64 *)v11 + 4);
        if ( v9 >= 0 )
        {
          v32 = CVirtualAddressAllocator::MapVirtualAddressRange(
                  v8,
                  v11,
                  0LL,
                  9LL,
                  *((_QWORD *)v11 + 5),
                  *((_QWORD *)v11 + 4),
                  0LL,
                  0LL,
                  4096,
                  17LL,
                  0LL,
                  0,
                  0LL,
                  0,
                  0);
          *((_QWORD *)v11 + 6) = v32;
          if ( v32 )
          {
            *(_DWORD *)(v32 + 72) |= 0x2000u;
            v33 = *((_QWORD *)v11 + 6);
            v37[0] = 113LL;
            v37[5] = v8;
            *(_QWORD *)(v33 + 48) = 0LL;
            v34 = *(_OWORD *)v13;
            v37[6] = *((_QWORD *)v11 + 6);
            *(_OWORD *)&v37[7] = v34;
            v9 = VIDMM_GLOBAL::QueueSystemCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)v37, 1);
            if ( v9 >= 0 )
            {
              operator delete(v21);
              *v39 = (struct VIDMM_DIRTY_BITPLANE *)v11;
              return v7;
            }
            WdLogSingleEntry0(3LL);
            WdLogGlobalForLineNumber = 187;
          }
          else
          {
            WdLogSingleEntry0(3LL);
            WdLogGlobalForLineNumber = 170;
            v9 = -1073741801;
          }
        }
        else
        {
          WdLogSingleEntry0(3LL);
          WdLogGlobalForLineNumber = 150;
        }
        goto LABEL_32;
      }
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 136;
    }
    else
    {
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 97;
    }
    v9 = -1073741801;
LABEL_32:
    v35 = *((_QWORD *)v11 + 4);
    if ( v35 )
    {
      CVirtualAddressAllocator::FreeVirtualAddressRange(v8, v35);
      *((_QWORD *)v11 + 4) = 0LL;
    }
    operator delete(v11);
    if ( v21 )
      operator delete(v21);
    return (unsigned int)v9;
  }
  WdLogSingleEntry1(3LL, a3);
  WdLogGlobalForLineNumber = 59;
  return (unsigned int)-1073741811;
}
