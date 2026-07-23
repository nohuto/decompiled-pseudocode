/*
 * XREFs of WheapCreateRecordFromGenericErrorData @ 0x14065BEC4
 * Callers:
 *     WheapDeviceDriverCreateRecord @ 0x14065AD60 (WheapDeviceDriverCreateRecord.c)
 *     WheapDefaultErrSrcCreateRecord @ 0x14065C230 (WheapDefaultErrSrcCreateRecord.c)
 * Callees:
 *     WheaInitializeRecordHeader @ 0x140419EA0 (WheaInitializeRecordHeader.c)
 *     RtlStringCchCopyA @ 0x14044D468 (RtlStringCchCopyA.c)
 *     WheapAddRecoveryPacketToErrorRecord @ 0x14065BB6C (WheapAddRecoveryPacketToErrorRecord.c)
 *     WheapAddSectionFromGenericErrorData @ 0x14065BC88 (WheapAddSectionFromGenericErrorData.c)
 *     WheaLogInternalEvent @ 0x14065C840 (WheaLogInternalEvent.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall WheapCreateRecordFromGenericErrorData(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  size_t v6; // r13
  unsigned int v7; // ecx
  _DWORD *v8; // rbx
  unsigned int v9; // r14d
  const char *v10; // r8
  unsigned int v11; // r12d
  unsigned int v12; // eax
  int v13; // edx
  unsigned int v14; // edx
  int v15; // esi
  int v16; // eax
  int v17; // ecx
  unsigned int v18; // eax
  int v19; // eax
  __int64 v20; // r9
  int v21; // eax
  unsigned int v22; // eax
  int v23; // ecx
  bool v24; // cf
  unsigned int v25; // eax
  char v26; // al
  __int64 v27; // rcx
  int v28; // eax
  __int64 v29; // r9
  _DWORD *v30; // rbx
  unsigned int v31; // ebx
  int v32; // r10d
  size_t Size; // [rsp+20h] [rbp-81h]
  char v35; // [rsp+30h] [rbp-71h]
  int v36; // [rsp+34h] [rbp-6Dh]
  _DWORD Src[8]; // [rsp+50h] [rbp-51h] BYREF
  char pszDest[32]; // [rsp+70h] [rbp-31h] BYREF
  int v41; // [rsp+90h] [rbp-11h]
  unsigned int v42; // [rsp+94h] [rbp-Dh]

  v6 = a4;
  memset_0(Src, 0, 0x48uLL);
  v7 = *(_DWORD *)(a2 + 68);
  v8 = (_DWORD *)(a2 + *(unsigned int *)(a2 + 64));
  v35 = 0;
  v9 = 20;
  if ( v7 < 0x14 )
  {
    v10 = "Error_Packet_Lenth_Too_Small";
LABEL_50:
    v31 = -1073741811;
    RtlStringCchCopyA(pszDest, 0x20uLL, v10);
    goto LABEL_51;
  }
  v11 = v8[3] + 20;
  if ( v11 < 0x14 )
  {
    v10 = "Overflow_Finding_Structured_Len";
    goto LABEL_50;
  }
  v12 = v8[1];
  if ( v12 && (v13 = v8[2]) != 0 )
  {
    if ( v11 > v12 )
    {
      v10 = "Unstructered_Data_Too_Soon";
      goto LABEL_50;
    }
    v14 = v12 + v13;
    if ( v14 < v12 )
    {
      v10 = "Overflow_Unstructured_End";
      goto LABEL_50;
    }
    if ( v14 > v7 )
    {
      v10 = "Unstructured_Overruns_Buffer";
      goto LABEL_50;
    }
    v15 = 0;
  }
  else
  {
    v15 = 0;
    if ( v11 > v7 )
    {
      v10 = "Error_Overruns_Buffer";
      goto LABEL_50;
    }
  }
  if ( (unsigned int)v6 < 0x80 )
  {
    v10 = "Header_Overruns_Buffer";
    goto LABEL_50;
  }
  memset_0((void *)a3, 0, v6);
  WheaInitializeRecordHeader((_DWORD *)a3);
  *(_DWORD *)(a3 + 12) = *(_DWORD *)(a2 + 20);
  v16 = *(_DWORD *)(a3 + 104);
  *(_OWORD *)(a3 + 80) = *(_OWORD *)(a2 + 32);
  v17 = v16 ^ ((unsigned __int8)v16 ^ (unsigned __int8)(2 * *(_DWORD *)(a2 + 12))) & 2;
  *(_DWORD *)(a3 + 104) = v17;
  v18 = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(a3 + 20) = v6;
  *(_DWORD *)(a3 + 104) = v17 ^ ((unsigned __int8)v17 ^ (unsigned __int8)(v18 >> 1)) & 4;
  v19 = (*v8 >> 4) & 0x3FF;
  while ( 1 )
  {
    v36 = v19;
    if ( !v19 )
      break;
    if ( v9 + 64 < v9 )
    {
      v10 = "Overflow_Entry_Header_Offset";
      goto LABEL_50;
    }
    if ( v9 + 64 > v11 )
    {
      v10 = "Entry_Header_Overruns_Structure";
      goto LABEL_50;
    }
    v20 = (__int64)v8 + v9;
    v21 = *(_DWORD *)(v20 + 24);
    if ( *(_WORD *)(v20 + 20) == 768 )
    {
      v22 = v21 + 72;
      v23 = -1;
      v24 = v22 < 0x48;
    }
    else
    {
      v22 = v21 + 64;
      v23 = -1;
      v24 = v22 < 0x40;
    }
    if ( !v24 )
      v23 = v22;
    if ( v24 )
    {
      v10 = "Overflow_Entry_Length";
      goto LABEL_50;
    }
    v25 = v9 + v23;
    if ( v9 + v23 < v9 )
    {
      v10 = "Overflow_Next_Entry_Offset";
      goto LABEL_50;
    }
    v9 += v23;
    if ( v25 > v11 )
    {
      v10 = "Next_Entry_Overruns_Structure";
      goto LABEL_50;
    }
    v26 = v35;
    if ( (*(_BYTE *)(v20 + 23) & 1) != 0 )
      v26 = 1;
    LODWORD(Size) = v23;
    v35 = v26;
    v15 = WheapAddSectionFromGenericErrorData(a1, a3, v6, v20, Size, 1);
    if ( v15 < 0 )
    {
      RtlStringCchCopyA(pszDest, 0x20uLL, "Failed_Add_Section");
      *(_DWORD *)(a3 + 104) |= 0x40u;
      if ( v35 == 1 )
        break;
    }
    v19 = v36 - 1;
    ++v41;
  }
  v27 = (unsigned int)v8[1];
  if ( (_DWORD)v27 && (v28 = v8[2]) != 0 )
  {
    v29 = (__int64)v8 + v27;
    v30 = (_DWORD *)a1;
    LODWORD(Size) = v28;
    v15 = WheapAddSectionFromGenericErrorData(a1, a3, v6, v29, Size, 0);
    if ( v15 < 0 )
    {
      RtlStringCchCopyA(pszDest, 0x20uLL, "Failed_Add_Unstructured");
      *(_DWORD *)(a3 + 104) |= 0x40u;
    }
  }
  else
  {
    v30 = (_DWORD *)a1;
  }
  if ( !*(_DWORD *)(a2 + 20) )
    WheapAddRecoveryPacketToErrorRecord(v30, a3, v6);
  v31 = 0;
  if ( v15 < 0 )
  {
    v32 = 1;
LABEL_51:
    Src[3] = 0;
    Src[0] = 1733060695;
    Src[1] = v32;
    Src[2] = 72;
    Src[5] = -2147483627;
    Src[4] = 1280201291;
    Src[6] = 2;
    Src[7] = 40;
    v42 = v31;
    WheaLogInternalEvent(Src);
  }
  return v31;
}
