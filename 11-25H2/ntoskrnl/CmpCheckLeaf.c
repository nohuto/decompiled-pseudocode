/*
 * XREFs of CmpCheckLeaf @ 0x140A18B3C
 * Callers:
 *     CmpCheckKey @ 0x14088BB2C (CmpCheckKey.c)
 * Callees:
 *     SetFailureLocation @ 0x140465824 (SetFailureLocation.c)
 *     Feature_CmpHashUnicodeComponentLengthCheck__private_IsEnabledDeviceUsageNoInline @ 0x1404F0ABC (Feature_CmpHashUnicodeComponentLengthCheck__private_IsEnabledDeviceUsageNoInline.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     CmpHashCompressedComponent @ 0x140846FC0 (CmpHashCompressedComponent.c)
 *     CmpHashUnicodeComponent @ 0x140848190 (CmpHashUnicodeComponent.c)
 *     HvpMarkCellDirty @ 0x1408751B0 (HvpMarkCellDirty.c)
 *     HvpGetCellFlat @ 0x140878130 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x140878180 (HvpGetCellPaged.c)
 *     HvIsCellAllocated @ 0x140878DF0 (HvIsCellAllocated.c)
 *     HvpGetCellContextInitialize @ 0x140878FA0 (HvpGetCellContextInitialize.c)
 *     HvpReleaseCellPaged @ 0x140878FD0 (HvpReleaseCellPaged.c)
 *     HvpReleaseCellFlat @ 0x14088B670 (HvpReleaseCellFlat.c)
 *     CmpGenerateFastLeafHintForUnicodeString @ 0x140A18E20 (CmpGenerateFastLeafHintForUnicodeString.c)
 */

__int64 __fastcall CmpCheckLeaf(ULONG_PTR BugCheckParameter3, int a2, _WORD *a3, unsigned int a4, __int64 a5)
{
  _WORD *v7; // r8
  unsigned int v8; // ebx
  unsigned int i; // ecx
  __int64 v11; // rbx
  ULONG_PTR v12; // rdx
  _BYTE *v13; // r15
  __int64 CellFlat; // rax
  __int64 v15; // rcx
  unsigned int v16; // eax
  unsigned int v17; // ebx
  unsigned __int8 *v18; // r9
  __int16 v19; // ax
  int v20; // eax
  int v21; // r14d
  __int64 v22; // rcx
  int v23; // ecx
  int v24; // eax
  int v25; // eax
  unsigned int v26; // [rsp+30h] [rbp-20h]
  int v27; // [rsp+34h] [rbp-1Ch] BYREF
  __int64 v28; // [rsp+38h] [rbp-18h] BYREF
  __int128 v29; // [rsp+40h] [rbp-10h] BYREF
  char v31; // [rsp+A0h] [rbp+50h]

  v28 = 0LL;
  v31 = 0;
  v29 = 0LL;
  HvpGetCellContextInitialize(&v28);
  if ( ((*v7 - 26220) & 0xFDFF) != 0 )
    return 0;
  for ( i = 0; ; i = v26 + 1 )
  {
    v26 = i;
    if ( i >= (unsigned __int16)a3[1] )
      return v31 != 0 ? 0x8000002A : 0;
    v11 = i;
    if ( HvIsCellAllocated(BugCheckParameter3, *(unsigned int *)&a3[4 * i + 2]) )
      break;
LABEL_19:
    ;
  }
  v12 = *(unsigned int *)&a3[4 * v11 + 2];
  v13 = (_BYTE *)(BugCheckParameter3 + 140);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, v12, &v28);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3, v12, &v28);
  v15 = CellFlat;
  if ( !CellFlat )
  {
    v8 = -1073741670;
    SetFailureLocation(a5, 0, 23, -1073741670, 0);
    return v8;
  }
  v16 = -4 - *(_DWORD *)(CellFlat - 4);
  if ( v16 < 0x4C )
    goto LABEL_22;
  v17 = *(unsigned __int16 *)(v15 + 72);
  if ( v17 > v16 - 76 )
    goto LABEL_22;
  v18 = (unsigned __int8 *)(v15 + 76);
  v19 = *(_WORD *)(v15 + 2) & 0x20;
  WORD1(v29) = *(_WORD *)(v15 + 72);
  LOWORD(v29) = v17;
  *((_QWORD *)&v29 + 1) = v15 + 76;
  if ( *a3 == 26732 )
  {
    if ( v19 )
    {
      v20 = CmpHashCompressedComponent(v18, v17);
LABEL_15:
      v21 = v20;
      goto LABEL_16;
    }
    if ( !(unsigned int)Feature_CmpHashUnicodeComponentLengthCheck__private_IsEnabledDeviceUsageNoInline()
      || (v17 & 1) == 0 )
    {
      v20 = CmpHashUnicodeComponent(&v29);
      goto LABEL_15;
    }
LABEL_22:
    v22 = BugCheckParameter3;
    if ( (*v13 & 1) == 0 )
    {
LABEL_18:
      HvpReleaseCellPaged(v22, (unsigned int *)&v28);
      goto LABEL_19;
    }
    goto LABEL_37;
  }
  if ( !v19 )
  {
    v20 = CmpGenerateFastLeafHintForUnicodeString(&v29);
    goto LABEL_15;
  }
  v27 = 0;
  v21 = 0;
  if ( v17 >= 4 )
  {
    v17 = 4;
LABEL_30:
    memmove(&v27, v18, v17);
    v21 = v27;
    goto LABEL_16;
  }
  if ( v17 )
    goto LABEL_30;
LABEL_16:
  if ( *(_DWORD *)&a3[4 * v26 + 4] == v21 )
    goto LABEL_17;
  v23 = -1073741492;
  v8 = -1073741492;
  v31 = 1;
  if ( (a2 & 0x20000) != 0 || !BYTE2(NlsMbOemCodePageTag) && (CmpBootType & 6) == 0 )
  {
    v24 = 16;
    goto LABEL_42;
  }
  SetFailureLocation(a5, 1, 23, -1073741492, 32);
  v25 = HvpMarkCellDirty(BugCheckParameter3, a4, 0);
  v8 = v25;
  if ( v25 >= 0 )
  {
    *(_DWORD *)&a3[4 * v26 + 4] = v21;
    *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 4088LL) |= 4u;
LABEL_17:
    v22 = BugCheckParameter3;
    if ( (*v13 & 1) == 0 )
      goto LABEL_18;
LABEL_37:
    HvpReleaseCellFlat(v22, &v28);
    goto LABEL_19;
  }
  v23 = v25;
  v24 = 48;
LABEL_42:
  SetFailureLocation(a5, 0, 23, v23, v24);
  if ( (*v13 & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, &v28);
  else
    HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v28);
  return v8;
}
