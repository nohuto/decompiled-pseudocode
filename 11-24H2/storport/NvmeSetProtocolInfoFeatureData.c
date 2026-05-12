/*
 * XREFs of NvmeSetProtocolInfoFeatureData @ 0x14012D404
 * Callers:
 *     NvmeProcessSetProtocolSpecificProperty @ 0x140088568 (NvmeProcessSetProtocolSpecificProperty.c)
 * Callees:
 *     NvmeProtocolSpecificRequestGetData @ 0x140088608 (NvmeProtocolSpecificRequestGetData.c)
 *     NvmeProtocolSpecificRequestShiftBuffer @ 0x1400886D4 (NvmeProtocolSpecificRequestShiftBuffer.c)
 *     NvmeAllocateDmaBuffer @ 0x1400E97F4 (NvmeAllocateDmaBuffer.c)
 *     NvmeFreeDmaBuffer @ 0x1400F8B80 (NvmeFreeDmaBuffer.c)
 *     NvmeControllerGetExtendedCommand @ 0x14012949C (NvmeControllerGetExtendedCommand.c)
 *     NvmeControllerProcessCommand @ 0x140129520 (NvmeControllerProcessCommand.c)
 *     NvmeControllerReclaimExtendedCommand @ 0x140129B08 (NvmeControllerReclaimExtendedCommand.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

__int64 __fastcall NvmeSetProtocolInfoFeatureData(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  __int64 result; // rax
  int v5; // ebx
  int v6; // edi
  int v7; // esi
  int v8; // r14d
  int v9; // r15d
  int v10; // r12d
  __int64 v11; // r9
  char v12; // r11
  unsigned int v13; // ecx
  int v14; // edx
  int v15; // eax
  bool v16; // zf
  int v17; // eax
  bool v18; // cf
  int v19; // eax
  __int64 v20; // r8
  PHYSICAL_ADDRESS *v21; // rdx
  __int64 v22; // r13
  int v23; // ebx
  int v24; // r8d
  int DmaBuffer; // eax
  __int64 QuadPart; // rcx
  int v27; // r10d
  void *v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rdx
  char v31[3]; // [rsp+31h] [rbp-37h] BYREF
  int v32; // [rsp+34h] [rbp-34h]
  size_t Size; // [rsp+38h] [rbp-30h]
  PHYSICAL_ADDRESS *ExtendedCommand; // [rsp+40h] [rbp-28h]
  _DWORD *v35; // [rsp+48h] [rbp-20h] BYREF
  void *v36[2]; // [rsp+50h] [rbp-18h] BYREF

  *a4 = 1;
  *(_QWORD *)(a3 + 56) = 0LL;
  v35 = 0LL;
  v32 = 0;
  v31[0] = 0;
  *(_OWORD *)v36 = 0LL;
  result = NvmeProtocolSpecificRequestGetData(a3, 0, &v35, v31);
  if ( (int)result < 0 )
    return result;
  v5 = v35[2];
  v6 = v35[3];
  v7 = v35[7];
  v8 = v35[8];
  v9 = v35[9];
  v10 = v35[10];
  if ( (v5 & 0x7FFFFF00) != 0 )
    return 3221225485LL;
  if ( !v31[0] )
  {
    if ( (unsigned __int8)v5 <= 0x80u )
    {
      if ( (unsigned __int8)v5 != 16 )
        return 3221225485LL;
      goto LABEL_10;
    }
    if ( (unsigned __int8)v5 > 0xC2u )
    {
      if ( (unsigned __int8)v5 == 195 || (unsigned __int8)v5 == 196 || (unsigned __int8)v5 == 197 )
        goto LABEL_33;
      v17 = (unsigned __int8)v5 - 198;
      v16 = (unsigned __int8)v5 == 198;
    }
    else
    {
      if ( (unsigned __int8)v5 == 194 )
        goto LABEL_33;
      if ( (unsigned __int8)v5 == 129 || (unsigned __int8)v5 == 130 || (unsigned __int8)v5 == 131 )
      {
LABEL_10:
        v11 = a1;
LABEL_11:
        v12 = 0;
        goto LABEL_12;
      }
      v17 = (unsigned __int8)v5 - 192;
      v16 = (unsigned __int8)v5 == 192;
    }
    if ( !v16 && v17 != 1 )
      return 3221225485LL;
LABEL_33:
    v11 = a1;
    if ( (*(_DWORD *)(a1 + 136) & 0x100000) == 0 )
      return 3221225485LL;
    goto LABEL_11;
  }
  if ( (unsigned __int8)v5 < 0xC0u )
    return 3221225485LL;
  v11 = a1;
  v12 = 1;
LABEL_12:
  v13 = 16;
  LODWORD(Size) = 16;
  if ( (unsigned __int8)v5 == 16 )
  {
    v32 = -1;
  }
  else
  {
    if ( (unsigned __int8)v5 == 129 )
    {
      v32 = -1;
      goto LABEL_44;
    }
    if ( (unsigned int)(unsigned __int8)v5 - 130 >= 2 )
    {
      if ( v12 )
      {
        v13 = v35[5];
        LODWORD(Size) = v13;
        goto LABEL_17;
      }
      v13 = 4096;
      v32 = 0;
      LODWORD(Size) = 4096;
      goto LABEL_45;
    }
    v32 = 0;
  }
  v13 = 0;
  LODWORD(Size) = 0;
LABEL_44:
  if ( v12 )
    goto LABEL_17;
LABEL_45:
  if ( (*(_DWORD *)(v11 + 136) & 0x100000) == 0 )
    goto LABEL_17;
  if ( (unsigned __int8)v5 == 192 )
  {
    v13 = 4096;
    v18 = *(_BYTE *)(v11 + 945) != 0;
    LODWORD(Size) = 4096;
    v32 = -v18;
    goto LABEL_18;
  }
  if ( (unsigned __int8)v5 != 193
    && (unsigned __int8)v5 != 194
    && (unsigned __int8)v5 != 195
    && (unsigned __int8)v5 != 196 )
  {
    if ( (unsigned __int8)v5 == 197 )
    {
      v13 = 4096;
      v32 = 0;
      LODWORD(Size) = 4096;
      goto LABEL_18;
    }
    if ( (unsigned int)(unsigned __int8)v5 - 198 > 1 )
    {
LABEL_17:
      if ( !v13 )
      {
LABEL_19:
        v14 = v32;
        goto LABEL_20;
      }
LABEL_18:
      if ( v35[4] < 0x40u )
        return 3221225485LL;
      goto LABEL_19;
    }
  }
  v13 = 0;
  v14 = 0;
  LODWORD(Size) = 0;
  v32 = 0;
LABEL_20:
  if ( v35[5] < v13 )
    return 3221225485LL;
  if ( v12 )
  {
    v15 = v35[11];
    v32 = v15;
    if ( !a2 )
    {
      if ( (unsigned int)(v15 - 1) > 0xFFFFFFFD )
        goto LABEL_64;
      return 3221225485LL;
    }
    if ( v15 )
      return 3221225485LL;
    v19 = *(_DWORD *)(a2 + 56);
LABEL_63:
    v32 = v19;
    goto LABEL_64;
  }
  if ( (*(_DWORD *)(v11 + 136) & 0x100000) == 0 && v14 != -1 )
  {
    if ( !a2 )
    {
      v32 = -1;
      goto LABEL_64;
    }
    v19 = *(_DWORD *)(a2 + 56);
    goto LABEL_63;
  }
LABEL_64:
  ExtendedCommand = NvmeControllerGetExtendedCommand((union _SLIST_HEADER *)v11);
  v21 = ExtendedCommand;
  if ( ExtendedCommand )
  {
    v24 = Size;
    if ( (_DWORD)Size )
    {
      DmaBuffer = NvmeAllocateDmaBuffer(a1, Size, (unsigned int)Size, v36, &v36[1], 0);
      if ( DmaBuffer < 0 )
      {
        v23 = DmaBuffer;
        goto LABEL_80;
      }
      memset_0(v36[0], 0, (unsigned int)Size);
      v21 = ExtendedCommand;
      v24 = Size;
    }
    *(_DWORD *)(v21->QuadPart + 4256) |= 1u;
    *(_DWORD *)(v21->QuadPart + 4256) |= 0x20u;
    *(_DWORD *)(v21->QuadPart + 4256) = (v24 != 0 ? 2 : 0) | *(_DWORD *)(v21->QuadPart + 4256) & 0xFFFFFFFD;
    *(_DWORD *)(v21->QuadPart + 4256) &= ~0x40u;
    if ( (unsigned __int8)v5 >= 0xC0u )
      *(_DWORD *)(v21->QuadPart + 4256) |= 0x100u;
    *(_WORD *)(v21->QuadPart + 4252) = 0;
    *(_QWORD *)(v21->QuadPart + 4184) = a3;
    *(_QWORD *)(v21->QuadPart + 4192) = NvmeSetProtocolInfoCompletion;
    *(_QWORD *)(v21->QuadPart + 4200) = v21;
    QuadPart = v21->QuadPart;
    if ( a2 )
      *(_QWORD *)(QuadPart + 4216) = a2;
    else
      *(_QWORD *)(QuadPart + 4224) = *(_QWORD *)(a1 + 128);
    v27 = v32;
    *(void **)(v21->QuadPart + 4160) = v36[0];
    *(void **)(v21->QuadPart + 4168) = v36[1];
    *(_DWORD *)(v21->QuadPart + 4248) = v24;
    v28 = v36[1];
    v29 = v21->QuadPart + 4096;
    *(_BYTE *)v29 = 9;
    *(_DWORD *)(v29 + 4) = v27;
    *(_QWORD *)(v29 + 24) = v28;
    *(_DWORD *)(v29 + 40) = v5;
    *(_DWORD *)(v29 + 44) = v6;
    *(_DWORD *)(v29 + 48) = v7;
    *(_DWORD *)(v29 + 52) = v8;
    *(_DWORD *)(v29 + 56) = v9;
    *(_DWORD *)(v29 + 60) = v10;
    if ( !v31[0] )
    {
LABEL_77:
      v23 = NvmeControllerProcessCommand(a1, v21);
      if ( v23 >= 0 )
      {
        *a4 = 0;
        return 259LL;
      }
      goto LABEL_80;
    }
    v23 = NvmeProtocolSpecificRequestShiftBuffer(a3);
    if ( v23 >= 0 )
    {
      v21 = ExtendedCommand;
      *(_DWORD *)(ExtendedCommand->QuadPart + 4256) |= 0x400u;
      goto LABEL_77;
    }
LABEL_80:
    v30 = (__int64)ExtendedCommand;
    v22 = a1;
    _interlockedbittestandreset((volatile signed __int32 *)(ExtendedCommand->QuadPart + 4256), 3u);
    NvmeControllerReclaimExtendedCommand((union _SLIST_HEADER *)a1, v30);
    goto LABEL_81;
  }
  v22 = a1;
  v23 = -1073741670;
LABEL_81:
  if ( v36[0] )
    NvmeFreeDmaBuffer(v22, Size, v20, (__int64)v36[0], (__int64)v36[1]);
  return (unsigned int)v23;
}
