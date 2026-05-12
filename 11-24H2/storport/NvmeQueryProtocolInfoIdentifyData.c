/*
 * XREFs of NvmeQueryProtocolInfoIdentifyData @ 0x14012BDE4
 * Callers:
 *     NvmeProcessQueryProtocolSpecificProperty @ 0x140088490 (NvmeProcessQueryProtocolSpecificProperty.c)
 * Callees:
 *     NvmeProtocolSpecificRequestGetData @ 0x140088608 (NvmeProtocolSpecificRequestGetData.c)
 *     NvmeProtocolSpecificRequestShiftBuffer @ 0x1400886D4 (NvmeProtocolSpecificRequestShiftBuffer.c)
 *     BuildIdentifyCommandGeneric @ 0x1400BE880 (BuildIdentifyCommandGeneric.c)
 *     NvmeAllocateDmaBuffer @ 0x1400E97F4 (NvmeAllocateDmaBuffer.c)
 *     NvmeFreeDmaBuffer @ 0x1400F8B80 (NvmeFreeDmaBuffer.c)
 *     NvmeControllerGetExtendedCommand @ 0x14012949C (NvmeControllerGetExtendedCommand.c)
 *     NvmeControllerProcessCommand @ 0x140129520 (NvmeControllerProcessCommand.c)
 *     NvmeControllerReclaimExtendedCommand @ 0x140129B08 (NvmeControllerReclaimExtendedCommand.c)
 *     NvmeSetCommandUUIDIndex @ 0x14012CC10 (NvmeSetCommandUUIDIndex.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

__int64 __fastcall NvmeQueryProtocolInfoIdentifyData(union _SLIST_HEADER *a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  bool v6; // r15
  int v7; // ebx
  int v8; // r12d
  __int64 result; // rax
  _DWORD *v11; // rdi
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  PHYSICAL_ADDRESS *ExtendedCommand; // rdi
  __int64 v19; // r8
  int DmaBuffer; // r15d
  __int64 v21; // r9
  __int64 QuadPart; // rcx
  char v23; // r8
  int v24; // [rsp+20h] [rbp-50h]
  int v25; // [rsp+50h] [rbp-20h] BYREF
  int v26; // [rsp+54h] [rbp-1Ch]
  _DWORD *v27; // [rsp+58h] [rbp-18h] BYREF
  void *v28[2]; // [rsp+60h] [rbp-10h] BYREF
  char v29; // [rsp+C0h] [rbp+50h] BYREF
  _BYTE *v30; // [rsp+C8h] [rbp+58h]

  v30 = a4;
  *a4 = 1;
  *(_QWORD *)(a3 + 56) = 0LL;
  v6 = 0;
  v25 = 0;
  v7 = 0;
  v27 = 0LL;
  LOBYTE(v8) = 0;
  v29 = 0;
  *(_OWORD *)v28 = 0LL;
  result = NvmeProtocolSpecificRequestGetData(a3, 0, &v27, &v29);
  if ( (int)result < 0 )
    return result;
  v11 = v27;
  v12 = v27[2];
  v26 = v12;
  if ( v12 )
  {
    v13 = v12 - 1;
    if ( !v13 )
    {
      NvmeSetCommandUUIDIndex(a1, v27, &v25);
      goto LABEL_35;
    }
    v14 = v13 - 1;
    if ( !v14 )
    {
      if ( a2 )
        v7 = *(_DWORD *)(a2 + 56);
      else
        v7 = v27[3];
      goto LABEL_35;
    }
    v15 = v14 - 1;
    if ( v15 )
    {
      v16 = v15 - 2;
      if ( v16 )
      {
        v17 = v16 - 1;
        if ( v17 )
        {
          if ( v17 != 17 )
            return 3221225474LL;
          if ( (*(_DWORD *)(a1[37].Alignment + 96) & 0x200) == 0 )
            return 3221225488LL;
        }
        else
        {
          v8 = v27[9];
        }
        goto LABEL_35;
      }
      if ( a2 )
      {
        v7 = *(_DWORD *)(a2 + 56);
      }
      else
      {
        v7 = v27[3];
        v6 = v7 == 0;
        if ( !v7 )
          v7 = 0;
      }
      v8 = v27[9];
    }
    else if ( a2 )
    {
      v7 = *(_DWORD *)(a2 + 56);
    }
    else
    {
      v7 = v27[3];
      v6 = v7 == 0;
      if ( !v7 )
        v7 = 0;
    }
  }
  else
  {
    if ( a2 )
    {
      v7 = *(_DWORD *)(a2 + 56);
    }
    else
    {
      v7 = v27[3];
      v6 = v7 == 0;
      if ( !v7 )
        v7 = 0;
    }
    NvmeSetCommandUUIDIndex(a1, v27, &v25);
  }
  if ( v6 )
    return 3221225485LL;
LABEL_35:
  if ( v11[5] < 0x1000u )
    return 3221225485LL;
  ExtendedCommand = NvmeControllerGetExtendedCommand(a1);
  if ( ExtendedCommand )
  {
    DmaBuffer = NvmeAllocateDmaBuffer((__int64)a1, 0x1000u, v19, v28, &v28[1], 0);
    if ( DmaBuffer >= 0 )
    {
      memset_0(v28[0], 0, 0x1000uLL);
      *(_DWORD *)(ExtendedCommand->QuadPart + 4256) |= 1u;
      *(_DWORD *)(ExtendedCommand->QuadPart + 4256) |= 0x20u;
      *(_DWORD *)(ExtendedCommand->QuadPart + 4256) |= 2u;
      *(_DWORD *)(ExtendedCommand->QuadPart + 4256) &= ~0x40u;
      *(_WORD *)(ExtendedCommand->QuadPart + 4252) = 0;
      *(_QWORD *)(ExtendedCommand->QuadPart + 4184) = a3;
      *(_QWORD *)(ExtendedCommand->QuadPart + 4192) = NvmeQueryProtocolInfoCompletion;
      *(_QWORD *)(ExtendedCommand->QuadPart + 4200) = ExtendedCommand;
      QuadPart = ExtendedCommand->QuadPart;
      if ( a2 )
        *(_QWORD *)(QuadPart + 4216) = a2;
      else
        *(_QWORD *)(QuadPart + 4224) = a1[8].Alignment;
      v23 = v26;
      *(void **)(ExtendedCommand->QuadPart + 4160) = v28[0];
      *(void **)(ExtendedCommand->QuadPart + 4168) = v28[1];
      *(_DWORD *)(ExtendedCommand->QuadPart + 4248) = 4096;
      BuildIdentifyCommandGeneric(
        (__int64)a1,
        ExtendedCommand->QuadPart + 4096,
        v23,
        v21,
        v24,
        v8,
        (__int64)v28[1],
        v7,
        v25);
      if ( !v29 )
      {
LABEL_45:
        DmaBuffer = NvmeControllerProcessCommand((__int64)a1, ExtendedCommand);
        if ( DmaBuffer >= 0 )
        {
          *v30 = 0;
          return 259LL;
        }
        goto LABEL_47;
      }
      DmaBuffer = NvmeProtocolSpecificRequestShiftBuffer(a3);
      if ( DmaBuffer >= 0 )
      {
        *(_DWORD *)(ExtendedCommand->QuadPart + 4256) |= 0x400u;
        goto LABEL_45;
      }
    }
LABEL_47:
    _interlockedbittestandreset((volatile signed __int32 *)(ExtendedCommand->QuadPart + 4256), 3u);
    NvmeControllerReclaimExtendedCommand(a1, (__int64)ExtendedCommand);
    goto LABEL_48;
  }
  DmaBuffer = -1073741670;
LABEL_48:
  if ( v28[0] )
    NvmeFreeDmaBuffer((__int64)a1, 0x1000u, v19, (__int64)v28[0], (__int64)v28[1]);
  return (unsigned int)DmaBuffer;
}
