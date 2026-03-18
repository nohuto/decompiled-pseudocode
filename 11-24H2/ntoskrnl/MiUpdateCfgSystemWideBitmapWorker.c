/*
 * XREFs of MiUpdateCfgSystemWideBitmapWorker @ 0x1408F6F24
 * Callers:
 *     MiUpdateCfgSystemWideBitmap @ 0x1408F6E3C (MiUpdateCfgSystemWideBitmap.c)
 * Callees:
 *     MiRemoveFromSystemSpace @ 0x14026086C (MiRemoveFromSystemSpace.c)
 *     MiSectionControlArea @ 0x1402D4800 (MiSectionControlArea.c)
 *     MiDereferenceControlArea @ 0x14036F494 (MiDereferenceControlArea.c)
 *     RtlSetBitsEx @ 0x1403A4600 (RtlSetBitsEx.c)
 *     MiLocatePagefileSubsection @ 0x1403E4EE0 (MiLocatePagefileSubsection.c)
 *     MiCheckPurgeAndUpMapCount @ 0x14040EFF0 (MiCheckPurgeAndUpMapCount.c)
 *     MiInsertInSystemSpace @ 0x140415F30 (MiInsertInSystemSpace.c)
 *     MiGetAnyMultiplexedVm @ 0x140442630 (MiGetAnyMultiplexedVm.c)
 *     RtlClearAllBitsEx @ 0x14046C570 (RtlClearAllBitsEx.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     MiChargeSegmentCommit @ 0x1408F7C78 (MiChargeSegmentCommit.c)
 *     MiEliminateZeroPages @ 0x1408F8080 (MiEliminateZeroPages.c)
 *     MiImageCfgEnumRvaListFirst @ 0x1408F8478 (MiImageCfgEnumRvaListFirst.c)
 *     MiImageCfgEnumNextImageExtensionRva @ 0x1408FA810 (MiImageCfgEnumNextImageExtensionRva.c)
 */

__int64 __fastcall MiUpdateCfgSystemWideBitmapWorker(
        __int64 a1,
        __int64 a2,
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
  __int64 v12; // rdx
  __int64 v13; // r8
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rdi
  int v16; // esi
  ULONG_PTR v17; // r13
  size_t v18; // rdi
  ULONG_PTR v19; // rsi
  unsigned __int64 v20; // rax
  unsigned int *v21; // rax
  unsigned __int64 v22; // r12
  __int64 v23; // r15
  __int64 v24; // rdx
  __int64 v25; // r8
  unsigned __int8 *v26; // r9
  unsigned __int64 v27; // rcx
  __int64 v28; // r10
  __int64 v29; // rcx
  int v30; // edx
  unsigned int v31; // r10d
  __int64 v32; // r11
  __int64 v33; // rax
  int v34; // eax
  unsigned int *v35; // rdx
  char *AnyMultiplexedVm; // rax
  unsigned __int64 v38; // [rsp+30h] [rbp-59h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+38h] [rbp-51h] BYREF
  unsigned __int64 v40; // [rsp+40h] [rbp-49h] BYREF
  unsigned __int64 v41; // [rsp+48h] [rbp-41h]
  _QWORD v42[2]; // [rsp+50h] [rbp-39h] BYREF
  unsigned __int64 v43; // [rsp+60h] [rbp-29h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+68h] [rbp-21h] BYREF
  __int64 v45; // [rsp+78h] [rbp-11h]
  int v46; // [rsp+80h] [rbp-9h]

  v6 = 0;
  v43 = a4;
  v42[0] = a2;
  v45 = 0LL;
  v46 = 0;
  v8 = 0LL;
  *(_OWORD *)BugCheckParameter3 = 0LL;
  if ( a2 )
    v8 = *(_QWORD *)(a2 + 8);
  v9 = a3 >> 3;
  v38 = a3 >> 3;
  v10 = a4 >> 3;
  BugCheckParameter1 = 0LL;
  v41 = (a4 >> 15) + ((((a3 >> 3) & 0xFFF) + 4095 + ((a4 >> 3) & 0xFFF)) >> 12);
  v11 = MiSectionControlArea(a1);
  MiCheckPurgeAndUpMapCount(v11, v12, v13);
  if ( v10 )
  {
    v14 = (unsigned __int16)v38 + v10;
    if ( v14 < (unsigned __int16)v38 || (LODWORD(v38) = v38 & 0xFFFF0000, v15 = v14, v14 > *(_QWORD *)(a1 + 48) - v38) )
    {
      v16 = -1073741793;
LABEL_9:
      MiDereferenceControlArea(v11);
      return (unsigned int)v16;
    }
  }
  else
  {
    LODWORD(v38) = v38 & 0xFFFF0000;
    v15 = *(_QWORD *)(a1 + 48) - v38;
  }
  v16 = MiInsertInSystemSpace(v15, a1, &v38, 0, 0LL, &BugCheckParameter1);
  if ( v16 < 0 )
    goto LABEL_9;
  v17 = BugCheckParameter1;
  v18 = v15 - (unsigned __int16)v9;
  v19 = BugCheckParameter1 | (unsigned __int16)v9;
  v20 = MiSectionControlArea(a1);
  v40 = v9 >> 12;
  v21 = MiLocatePagefileSubsection((unsigned int *)(v20 + 128), &v40);
  v22 = v41;
  if ( (unsigned int)MiChargeSegmentCommit(v21, *((_QWORD *)v21 + 1) + 8 * v40) )
  {
    v23 = v42[0];
    if ( v42[0] && (*(_DWORD *)v42[0] & 1) != 0 && v8 )
    {
      v42[0] = v43;
      v42[1] = v19;
      RtlClearAllBitsEx((__int64)v42);
      LODWORD(v25) = MiImageCfgEnumRvaListFirst(v8, BugCheckParameter3, a6);
      if ( (_DWORD)v25 )
      {
        while ( 1 )
        {
          if ( (BugCheckParameter3[0] & 0x100000000LL) != 0 )
          {
            v27 = 2 * ((unsigned __int64)(unsigned int)v25 >> 4);
            if ( (v25 & 0xF) == *(_WORD *)(v23 + 4) )
            {
              if ( (BugCheckParameter3[0] & 0x400000000LL) != 0 )
                _bittestandset64((signed __int64 *)v19, v27 + 1);
              else
                _bittestandset64((signed __int64 *)v19, v27);
            }
            else
            {
              RtlSetBitsEx((__int64)v42, v27, 2uLL);
            }
          }
          v25 = LODWORD(BugCheckParameter3[0]);
          if ( LODWORD(BugCheckParameter3[0]) >= HIDWORD(v45) && HIDWORD(v45) )
            goto LABEL_36;
          ++HIDWORD(BugCheckParameter3[1]);
          v26 = (unsigned __int8 *)((unsigned int)v45 + *(_QWORD *)(v8 + 16));
          v25 = LODWORD(BugCheckParameter3[1]);
          v28 = *(_QWORD *)(v8 + 24) - (unsigned int)v45;
          if ( v28 )
            break;
LABEL_44:
          LODWORD(v25) = MiImageCfgEnumNextImageExtensionRva(BugCheckParameter3, v24, v25, v26);
LABEL_39:
          LODWORD(BugCheckParameter3[0]) = v25;
          if ( !(_DWORD)v25 )
            goto LABEL_40;
        }
        do
        {
          if ( !v28 )
            KeBugCheckEx(0x1Au, 0x43666720uLL, v8, (ULONG_PTR)&BugCheckParameter3[1], (unsigned int)v25);
          v29 = *v26 >> 6;
          v30 = *v26++ & 0x3F;
          --v28;
          v25 = (unsigned int)(*((_DWORD *)RtlpRvaCompressionTableScales + v29) * v30 + v25);
        }
        while ( (_DWORD)v29 != 3 );
        LODWORD(BugCheckParameter3[1]) = v25;
        v24 = 0LL;
        LODWORD(v45) = (_DWORD)v26 - *(_DWORD *)(v8 + 16);
        v26 = (unsigned __int8 *)*(unsigned int *)(v8 + 8);
        if ( (unsigned int)v26 <= 1 )
        {
          if ( (_DWORD)v26 == 1 )
          {
            v35 = *(unsigned int **)(v8 + 48);
            if ( v35 )
              v24 = *v35;
            else
              v24 = 1LL;
          }
        }
        else
        {
          v31 = 0;
          v32 = 0LL;
          do
          {
            if ( _bittest64(*(const signed __int64 **)(v8 + 40), HIDWORD(BugCheckParameter3[1]) * (_DWORD)v26 + v31) )
            {
              v33 = *(_QWORD *)(v8 + 48);
              if ( v33 )
                v34 = *(_DWORD *)(v32 + v33);
              else
                v34 = 1 << v31;
              v24 = v34 | (unsigned int)v24;
            }
            ++v31;
            v32 += 4LL;
          }
          while ( v31 < (unsigned int)v26 );
          v22 = v41;
        }
        HIDWORD(BugCheckParameter3[0]) = v24;
LABEL_36:
        if ( (_DWORD)v25 && ((unsigned int)v25 < HIDWORD(v45) || !HIDWORD(v45)) )
          goto LABEL_39;
        goto LABEL_44;
      }
LABEL_40:
      AnyMultiplexedVm = MiGetAnyMultiplexedVm(2);
      MiEliminateZeroPages(AnyMultiplexedVm, v19 & 0xFFFFFFFFFFFFF000uLL, v22 << 12);
    }
    else
    {
      memset_0((void *)v19, 255, v18);
    }
  }
  else
  {
    v6 = -1073741523;
  }
  MiRemoveFromSystemSpace(v17, 1);
  return v6;
}
