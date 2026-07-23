/*
 * XREFs of MiUpdateCfgSystemWideBitmapWorker @ 0x1409417A8
 * Callers:
 *     MiUpdateCfgSystemWideBitmap @ 0x1409416C0 (MiUpdateCfgSystemWideBitmap.c)
 * Callees:
 *     MiInsertInSystemSpace @ 0x1402A4B54 (MiInsertInSystemSpace.c)
 *     MiRemoveFromSystemSpace @ 0x1402A8BCC (MiRemoveFromSystemSpace.c)
 *     MiLocatePagefileSubsection @ 0x1402BC3A0 (MiLocatePagefileSubsection.c)
 *     RtlSetBitsEx @ 0x14038E280 (RtlSetBitsEx.c)
 *     MiCheckPurgeAndUpMapCount @ 0x1403A4900 (MiCheckPurgeAndUpMapCount.c)
 *     MiSectionControlArea @ 0x1403B4FE0 (MiSectionControlArea.c)
 *     MiGetAnyMultiplexedVm @ 0x1404423A0 (MiGetAnyMultiplexedVm.c)
 *     RtlClearAllBitsEx @ 0x14046DD90 (RtlClearAllBitsEx.c)
 *     MiDereferenceControlArea @ 0x14046FD68 (MiDereferenceControlArea.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     MiImageCfgEnumNextImageExtensionRva @ 0x140906778 (MiImageCfgEnumNextImageExtensionRva.c)
 *     MiImageCfgEnumRvaListFirst @ 0x14099A318 (MiImageCfgEnumRvaListFirst.c)
 *     MiEliminateZeroPages @ 0x1409CF9E0 (MiEliminateZeroPages.c)
 *     MiChargeSegmentCommit @ 0x1409FC7C8 (MiChargeSegmentCommit.c)
 */

__int64 __fastcall MiUpdateCfgSystemWideBitmapWorker(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        int a5,
        unsigned int a6)
{
  unsigned int v6; // ebx
  ULONG_PTR v8; // r14
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // r13
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rdi
  int v14; // esi
  ULONG_PTR v15; // r13
  size_t v16; // rdi
  ULONG_PTR v17; // rsi
  unsigned __int64 v18; // rax
  unsigned int *v19; // rax
  unsigned __int64 v20; // r12
  unsigned __int64 SizeOfBitMap; // r15
  unsigned int ImageExtensionRva; // r8d
  unsigned __int64 v23; // rcx
  unsigned __int8 *v24; // r9
  __int64 v25; // r10
  __int64 v26; // rcx
  int v27; // edx
  int v28; // edx
  unsigned int v29; // r9d
  unsigned int v30; // r10d
  __int64 v31; // r11
  __int64 v32; // rax
  int v33; // eax
  int *v34; // rdx
  char *AnyMultiplexedVm; // rax
  unsigned __int64 v37; // [rsp+30h] [rbp-59h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+38h] [rbp-51h] BYREF
  unsigned __int64 v39; // [rsp+40h] [rbp-49h] BYREF
  unsigned __int64 v40; // [rsp+48h] [rbp-41h]
  _RTL_BITMAP_EX BitMapHeader; // [rsp+50h] [rbp-39h] BYREF
  unsigned __int64 v42; // [rsp+60h] [rbp-29h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+68h] [rbp-21h] BYREF
  __int64 v44; // [rsp+78h] [rbp-11h]
  int v45; // [rsp+80h] [rbp-9h]

  v6 = 0;
  v42 = a4;
  BitMapHeader.SizeOfBitMap = a2;
  v44 = 0LL;
  v45 = 0;
  v8 = 0LL;
  *(_OWORD *)BugCheckParameter3 = 0LL;
  if ( a2 )
    v8 = *(_QWORD *)(a2 + 8);
  v9 = a3 >> 3;
  v37 = a3 >> 3;
  v10 = a4 >> 3;
  BugCheckParameter1 = 0LL;
  v40 = (a4 >> 15) + ((((a3 >> 3) & 0xFFF) + 4095 + ((a4 >> 3) & 0xFFF)) >> 12);
  v11 = MiSectionControlArea(a1);
  MiCheckPurgeAndUpMapCount(v11);
  if ( v10 )
  {
    v12 = (unsigned __int16)v37 + v10;
    if ( v12 < (unsigned __int16)v37 || (LODWORD(v37) = v37 & 0xFFFF0000, v13 = v12, v12 > *(_QWORD *)(a1 + 48) - v37) )
    {
      v14 = -1073741793;
LABEL_46:
      MiDereferenceControlArea(v11);
      return (unsigned int)v14;
    }
  }
  else
  {
    LODWORD(v37) = v37 & 0xFFFF0000;
    v13 = *(_QWORD *)(a1 + 48) - v37;
  }
  v14 = MiInsertInSystemSpace(v13, a1, (__int64 *)&v37, 0, 0LL, &BugCheckParameter1);
  if ( v14 < 0 )
    goto LABEL_46;
  v15 = BugCheckParameter1;
  v16 = v13 - (unsigned __int16)v9;
  v17 = BugCheckParameter1 | (unsigned __int16)v9;
  v18 = MiSectionControlArea(a1);
  v39 = v9 >> 12;
  v19 = MiLocatePagefileSubsection((unsigned int *)(v18 + 128), &v39);
  v20 = v40;
  if ( (unsigned int)MiChargeSegmentCommit(v19, *((_QWORD *)v19 + 1) + 8 * v39) )
  {
    SizeOfBitMap = BitMapHeader.SizeOfBitMap;
    if ( BitMapHeader.SizeOfBitMap && (*(_DWORD *)BitMapHeader.SizeOfBitMap & 1) != 0 && v8 )
    {
      BitMapHeader.SizeOfBitMap = v42;
      BitMapHeader.Buffer = (unsigned __int64 *)v17;
      RtlClearAllBitsEx(&BitMapHeader);
      ImageExtensionRva = MiImageCfgEnumRvaListFirst(v8, BugCheckParameter3, a6);
      if ( ImageExtensionRva )
      {
        while ( 1 )
        {
          if ( (BugCheckParameter3[0] & 0x100000000LL) != 0 )
          {
            v23 = 2 * ((unsigned __int64)ImageExtensionRva >> 4);
            if ( (ImageExtensionRva & 0xF) == *(_WORD *)(SizeOfBitMap + 4) )
            {
              if ( (BugCheckParameter3[0] & 0x400000000LL) != 0 )
                _bittestandset64((signed __int64 *)v17, v23 + 1);
              else
                _bittestandset64((signed __int64 *)v17, v23);
            }
            else
            {
              RtlSetBitsEx((__int64)&BitMapHeader, v23, 2uLL);
            }
          }
          ImageExtensionRva = BugCheckParameter3[0];
          if ( LODWORD(BugCheckParameter3[0]) >= HIDWORD(v44) && HIDWORD(v44) )
            goto LABEL_34;
          ++HIDWORD(BugCheckParameter3[1]);
          v24 = (unsigned __int8 *)((unsigned int)v44 + *(_QWORD *)(v8 + 16));
          ImageExtensionRva = BugCheckParameter3[1];
          v25 = *(_QWORD *)(v8 + 24) - (unsigned int)v44;
          if ( v25 )
            break;
LABEL_42:
          ImageExtensionRva = MiImageCfgEnumNextImageExtensionRva(BugCheckParameter3);
LABEL_37:
          LODWORD(BugCheckParameter3[0]) = ImageExtensionRva;
          if ( !ImageExtensionRva )
            goto LABEL_38;
        }
        do
        {
          if ( !v25 )
            KeBugCheckEx(0x1Au, 0x43666720uLL, v8, (ULONG_PTR)&BugCheckParameter3[1], ImageExtensionRva);
          v26 = *v24 >> 6;
          v27 = *v24++ & 0x3F;
          --v25;
          ImageExtensionRva += *((_DWORD *)RtlpRvaCompressionTableScales + v26) * v27;
        }
        while ( (_DWORD)v26 != 3 );
        LODWORD(BugCheckParameter3[1]) = ImageExtensionRva;
        v28 = 0;
        LODWORD(v44) = (_DWORD)v24 - *(_DWORD *)(v8 + 16);
        v29 = *(_DWORD *)(v8 + 8);
        if ( v29 <= 1 )
        {
          if ( v29 == 1 )
          {
            v34 = *(int **)(v8 + 48);
            if ( v34 )
              v28 = *v34;
            else
              v28 = 1;
          }
        }
        else
        {
          v30 = 0;
          v31 = 0LL;
          do
          {
            if ( _bittest64(*(const signed __int64 **)(v8 + 40), HIDWORD(BugCheckParameter3[1]) * v29 + v30) )
            {
              v32 = *(_QWORD *)(v8 + 48);
              if ( v32 )
                v33 = *(_DWORD *)(v31 + v32);
              else
                v33 = 1 << v30;
              v28 |= v33;
            }
            ++v30;
            v31 += 4LL;
          }
          while ( v30 < v29 );
          v20 = v40;
        }
        HIDWORD(BugCheckParameter3[0]) = v28;
LABEL_34:
        if ( ImageExtensionRva && (ImageExtensionRva < HIDWORD(v44) || !HIDWORD(v44)) )
          goto LABEL_37;
        goto LABEL_42;
      }
LABEL_38:
      AnyMultiplexedVm = MiGetAnyMultiplexedVm(2);
      MiEliminateZeroPages(AnyMultiplexedVm, v17 & 0xFFFFFFFFFFFFF000uLL, v20 << 12);
    }
    else
    {
      memset_0((void *)v17, 255, v16);
    }
  }
  else
  {
    v6 = -1073741523;
  }
  MiRemoveFromSystemSpace(v15, 1);
  return v6;
}
