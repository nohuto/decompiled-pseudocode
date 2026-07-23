/*
 * XREFs of CmpCheckLeaf @ 0x140AE4F1C
 * Callers:
 *     CmpCheckKey @ 0x140888F1C (CmpCheckKey.c)
 * Callees:
 *     SetFailureLocation @ 0x14045B110 (SetFailureLocation.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     CmpHashCompressedComponent @ 0x14083F7D0 (CmpHashCompressedComponent.c)
 *     HvpMarkCellDirty @ 0x140875930 (HvpMarkCellDirty.c)
 *     CmpHashUnicodeComponent @ 0x140877720 (CmpHashUnicodeComponent.c)
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     HvIsCellAllocated @ 0x1408798A0 (HvIsCellAllocated.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 *     CmpGenerateFastLeafHintForUnicodeString @ 0x140A3C2FC (CmpGenerateFastLeafHintForUnicodeString.c)
 *     HvpGetBinContextInitialize @ 0x140BBB8D0 (HvpGetBinContextInitialize.c)
 */

__int64 __fastcall CmpCheckLeaf(ULONG_PTR BugCheckParameter3, int a2, _WORD *a3, unsigned int a4, __int64 a5)
{
  _WORD *v7; // r8
  unsigned int v8; // ecx
  __int64 v9; // rsi
  ULONG_PTR v10; // rdx
  __int64 CellFlat; // rax
  _WORD *v12; // rcx
  unsigned int v13; // eax
  unsigned int v14; // edx
  void *v15; // r9
  __int16 v16; // ax
  int FastLeafHintForUnicodeString; // eax
  int v18; // r14d
  int v19; // ecx
  unsigned int v20; // esi
  int v21; // eax
  int v23; // eax
  unsigned int v24; // [rsp+30h] [rbp-20h]
  int v25; // [rsp+34h] [rbp-1Ch] BYREF
  __int64 v26; // [rsp+38h] [rbp-18h] BYREF
  __m128i v27; // [rsp+40h] [rbp-10h] BYREF
  char v29; // [rsp+A0h] [rbp+50h]

  v26 = 0xFFFFFFFFLL;
  v29 = 0;
  v27 = 0LL;
  HvpGetBinContextInitialize((char *)&v26 + 4);
  if ( ((*v7 - 26220) & 0xFDFF) == 0 )
  {
    v8 = 0;
    v24 = 0;
    if ( v7[1] )
    {
      while ( 1 )
      {
        v9 = v8;
        if ( HvIsCellAllocated(BugCheckParameter3, *(unsigned int *)&a3[4 * v8 + 2]) )
          break;
LABEL_33:
        v8 = v24 + 1;
        v24 = v8;
        if ( v8 >= (unsigned __int16)a3[1] )
        {
          v20 = -2147483606;
          if ( v29 )
            return v20;
          return 0;
        }
      }
      v10 = *(unsigned int *)&a3[4 * v9 + 2];
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        CellFlat = HvpGetCellFlat(BugCheckParameter3, v10, &v26);
      else
        CellFlat = HvpGetCellPaged(BugCheckParameter3, v10, &v26);
      v12 = (_WORD *)CellFlat;
      if ( !CellFlat )
      {
        v20 = -1073741670;
        SetFailureLocation(a5, 0, 23, -1073741670, 0);
        return v20;
      }
      v13 = -4 - *(_DWORD *)(CellFlat - 4);
      if ( v13 >= 0x4C )
      {
        v14 = (unsigned __int16)v12[36];
        if ( v14 <= v13 - 76 )
        {
          v15 = v12 + 38;
          v16 = v12[1] & 0x20;
          v27.m128i_i16[1] = v12[36];
          v27.m128i_i16[0] = v14;
          v27.m128i_i64[1] = (__int64)(v12 + 38);
          if ( *a3 != 26732 )
          {
            if ( v16 )
            {
              v25 = 0;
              v18 = 0;
              if ( v14 < 4 )
              {
                if ( !v14 )
                  goto LABEL_22;
              }
              else
              {
                v14 = 4;
              }
              memmove(&v25, v15, v14);
              v18 = v25;
LABEL_22:
              if ( *(_DWORD *)&a3[4 * v9 + 4] != v18 )
              {
                v19 = -1073741492;
                v20 = -1073741492;
                v29 = 1;
                if ( (a2 & 0x20000) != 0 || !BYTE2(NlsMbOemCodePageTag) && (CmpBootType & 6) == 0 )
                {
                  v23 = 16;
LABEL_39:
                  SetFailureLocation(a5, 0, 23, v19, v23);
                  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                    HvpReleaseCellFlat(BugCheckParameter3, (__int64)&v26);
                  else
                    HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v26);
                  return v20;
                }
                SetFailureLocation(a5, 1, 23, -1073741492, 32);
                v21 = HvpMarkCellDirty(BugCheckParameter3, a4, 0);
                v20 = v21;
                if ( v21 < 0 )
                {
                  v19 = v21;
                  v23 = 48;
                  goto LABEL_39;
                }
                *(_DWORD *)&a3[4 * v24 + 4] = v18;
                *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 4088LL) |= 4u;
              }
              if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0 )
              {
LABEL_32:
                HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v26);
                goto LABEL_33;
              }
              goto LABEL_31;
            }
            FastLeafHintForUnicodeString = CmpGenerateFastLeafHintForUnicodeString((unsigned __int16 *)&v27);
LABEL_21:
            v18 = FastLeafHintForUnicodeString;
            goto LABEL_22;
          }
          if ( v16 )
          {
            FastLeafHintForUnicodeString = CmpHashCompressedComponent((unsigned __int8 *)v15, v14);
            goto LABEL_21;
          }
          if ( (v14 & 1) == 0 )
          {
            FastLeafHintForUnicodeString = CmpHashUnicodeComponent(&v27);
            goto LABEL_21;
          }
        }
      }
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0 )
        goto LABEL_32;
LABEL_31:
      HvpReleaseCellFlat(BugCheckParameter3, (__int64)&v26);
      goto LABEL_33;
    }
  }
  return 0;
}
