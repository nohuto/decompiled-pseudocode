/*
 * XREFs of MiInitializeWowPeb @ 0x1408F97C8
 * Callers:
 *     MmCreatePeb @ 0x1408FA99C (MmCreatePeb.c)
 * Callees:
 *     MiSectionControlArea @ 0x1403B4FE0 (MiSectionControlArea.c)
 *     RtlImageDirectoryEntryToData @ 0x14040FE90 (RtlImageDirectoryEntryToData.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     MiCreatePebOrTeb @ 0x1408FA354 (MiCreatePebOrTeb.c)
 */

__int64 __fastcall MiInitializeWowPeb(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r13
  _WORD *v7; // r14
  char v8; // di
  __int64 v9; // rcx
  __int64 result; // rax
  __int64 v11; // rdx
  __int16 v12; // ax
  char v13; // al
  int v14; // eax
  bool v15; // zf
  char v16; // al
  char v17; // al
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rax
  __int64 v20; // rcx
  unsigned __int64 v21; // rax
  __int64 v22; // r8
  _DWORD *v23; // rax
  _DWORD *v24; // rcx
  __int64 v25; // rax
  __int16 v26; // ax
  int v27; // ecx
  unsigned int v28; // [rsp+20h] [rbp-48h]
  _DWORD *v29; // [rsp+28h] [rbp-40h]
  _QWORD v30[7]; // [rsp+30h] [rbp-38h] BYREF
  ULONG Size; // [rsp+80h] [rbp+18h] BYREF
  __int64 v32; // [rsp+88h] [rbp+20h]

  v32 = a4;
  v5 = a2;
  v30[0] = 0LL;
  v7 = (_WORD *)(a3 + 1772);
  if ( !*(_QWORD *)(a3 + 784) )
  {
    v8 = 1;
LABEL_3:
    v9 = 2LL;
    goto LABEL_4;
  }
  if ( *v7 == 332 || *v7 == 452 )
  {
    v8 = 1;
    v16 = 1;
  }
  else
  {
    v16 = 0;
    v8 = 1;
  }
  if ( !v16 )
    goto LABEL_3;
  v20 = *(_QWORD *)(a3 + 680);
  if ( !v20 )
    return 3221225477LL;
  v21 = MiSectionControlArea(v20);
  if ( (*(_DWORD *)(v21 + 56) & 0x20) == 0 )
    return 3221225477LL;
  v23 = RtlImageDirectoryEntryToData(*(PVOID *)(a3 + 688), *(_QWORD *)(v21 + 144) != v22, 0xAu, &Size);
  v24 = v23;
  v29 = v23;
  if ( v23 )
  {
    if ( ((unsigned __int8)v23 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v28 = v23[12];
    a2 = v32;
    v25 = v28;
    if ( (v28 & KeActiveProcessors.Bitmap[*(unsigned __int16 *)(v32 + 8)]) != v28 )
      v25 = 0LL;
    *(_QWORD *)v32 = v25;
    v24 = v29;
  }
  *(_DWORD *)a1 = *(unsigned __int16 *)(v5 + 92);
  *(_DWORD *)(a1 + 4) = *(unsigned __int16 *)(v5 + 72);
  *(_DWORD *)(a1 + 8) = *(unsigned __int16 *)(v5 + 74);
  if ( *(_DWORD *)(v5 + 76) )
  {
    if ( v24 )
    {
      v26 = *((_WORD *)v24 + 26);
      if ( v26 )
        *(_WORD *)(a1 + 26) = v26;
    }
    v27 = *(_DWORD *)(v5 + 76);
    *(_DWORD *)(a1 + 12) = (unsigned __int8)v27;
    *(_DWORD *)(a1 + 16) = BYTE1(v27);
    *(_WORD *)(a1 + 24) = HIWORD(v27);
    *(_DWORD *)(a1 + 20) = (v27 ^ 0xBFFFFFFF) >> 30;
  }
  v9 = 1LL;
LABEL_4:
  result = MiCreatePebOrTeb(v9, a2, v30);
  if ( (int)result >= 0 )
  {
    v11 = v30[0];
    **(_QWORD **)(a3 + 784) = v30[0];
    if ( *(_QWORD *)(a3 + 784) )
    {
      if ( *v7 == 332 || (v17 = 0, *v7 == 452) )
        v17 = 1;
      if ( v17 )
      {
        v18 = *(_QWORD *)(a1 + 32);
        if ( v18 > 0x40000000 )
        {
          v18 = 0x100000LL;
          *(_QWORD *)(a1 + 32) = 0x100000LL;
        }
        v19 = *(_QWORD *)(a1 + 40);
        if ( v19 > v18 )
          v19 = 0x2000LL;
        *(_QWORD *)(a1 + 40) = v19;
      }
    }
    if ( !*(_QWORD *)(a3 + 784) )
      goto LABEL_10;
    v12 = *(_WORD *)(a3 + 1772);
    if ( v12 == 332 || (v15 = v12 == 452, v13 = 0, v15) )
      v13 = 1;
    if ( !v13 )
LABEL_10:
      v8 = 0;
    v14 = *(_DWORD *)(a1 + 12);
    if ( v8 )
    {
      *(_DWORD *)(v11 + 164) = v14;
      *(_DWORD *)(v11 + 168) = *(_DWORD *)(a1 + 16);
      *(_WORD *)(v11 + 172) = *(_WORD *)(a1 + 24);
      *(_DWORD *)(v11 + 176) = *(_DWORD *)(a1 + 20);
      *(_WORD *)(v11 + 174) = *(_WORD *)(a1 + 26);
      *(_DWORD *)(v11 + 120) = *(_DWORD *)(a1 + 32);
      *(_DWORD *)(v11 + 124) = *(_DWORD *)(a1 + 40);
      *(_DWORD *)(v11 + 100) = KeNumberProcessors_0;
      *(_DWORD *)(v11 + 104) = NtGlobalFlag;
      *(_DWORD *)(v11 + 1144) = NtGlobalFlag2;
      *(_QWORD *)(v11 + 112) = qword_140E2D810;
      *(_DWORD *)(v11 + 520) = dword_140FC4208;
      *(_DWORD *)(v11 + 128) = qword_140FC4218;
      *(_DWORD *)(v11 + 132) = qword_140FC4210;
      *(_DWORD *)(v11 + 468) = *(_DWORD *)(a1 + 60);
      *(_DWORD *)(v11 + 180) = *(_DWORD *)a1;
      *(_DWORD *)(v11 + 184) = *(_DWORD *)(a1 + 4);
      *(_DWORD *)(v11 + 188) = *(_DWORD *)(a1 + 8);
      *(_BYTE *)v11 = *(_BYTE *)(a1 + 96);
      *(_BYTE *)(v11 + 3) = *(_BYTE *)(a1 + 97);
      *(_DWORD *)(v11 + 4) = *(_DWORD *)(a1 + 104);
      *(_DWORD *)(v11 + 8) = *(_DWORD *)(a1 + 112);
      *(_WORD *)(v11 + 552) = *(_WORD *)(a1 + 120);
      *(_WORD *)(v11 + 554) = *(_WORD *)(a1 + 122);
      *(_WORD *)(v11 + 556) = *(_WORD *)(a1 + 124);
      *(_DWORD *)(v11 + 1136) = *(_DWORD *)(a1 + 128);
      *(_DWORD *)(v11 + 1140) = *(_DWORD *)(a1 + 136);
    }
    else
    {
      *(_DWORD *)(v11 + 280) = v14;
      *(_DWORD *)(v11 + 284) = *(_DWORD *)(a1 + 16);
      *(_WORD *)(v11 + 288) = *(_WORD *)(a1 + 24);
      *(_DWORD *)(v11 + 292) = *(_DWORD *)(a1 + 20);
      *(_WORD *)(v11 + 290) = *(_WORD *)(a1 + 26);
      *(_QWORD *)(v11 + 200) = *(_QWORD *)(a1 + 32);
      *(_QWORD *)(v11 + 208) = *(_QWORD *)(a1 + 40);
      *(_DWORD *)(v11 + 184) = KeNumberProcessors_0;
      *(_DWORD *)(v11 + 188) = NtGlobalFlag;
      *(_DWORD *)(v11 + 1988) = NtGlobalFlag2;
      *(_QWORD *)(v11 + 192) = qword_140E2D810;
      *(_QWORD *)(v11 + 792) = (unsigned int)dword_140FC4208;
      *(_QWORD *)(v11 + 216) = qword_140FC4218;
      *(_QWORD *)(v11 + 224) = qword_140FC4210;
      *(_DWORD *)(v11 + 704) = *(_DWORD *)(a1 + 60);
      *(_DWORD *)(v11 + 296) = *(_DWORD *)a1;
      *(_DWORD *)(v11 + 300) = *(_DWORD *)(a1 + 4);
      *(_DWORD *)(v11 + 304) = *(_DWORD *)(a1 + 8);
      *(_BYTE *)v11 = *(_BYTE *)(a1 + 96);
      *(_BYTE *)(v11 + 3) = *(_BYTE *)(a1 + 97);
      *(_QWORD *)(v11 + 8) = *(_QWORD *)(a1 + 104);
      *(_QWORD *)(v11 + 16) = *(_QWORD *)(a1 + 112);
      *(_WORD *)(v11 + 844) = *(_WORD *)(a1 + 120);
      *(_WORD *)(v11 + 846) = *(_WORD *)(a1 + 122);
      *(_WORD *)(v11 + 848) = *(_WORD *)(a1 + 124);
      *(_QWORD *)(v11 + 1976) = *(_QWORD *)(a1 + 128);
      *(_DWORD *)(v11 + 1984) = *(_DWORD *)(a1 + 136);
    }
    return 0LL;
  }
  return result;
}
