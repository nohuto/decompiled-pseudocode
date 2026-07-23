/*
 * XREFs of PfpVolumeOpenAndVerify @ 0x140934634
 * Callers:
 *     PfpPrefetchRequestPerform @ 0x1409353B4 (PfpPrefetchRequestPerform.c)
 * Callees:
 *     PfVolumeSupportedForPrefetch @ 0x1404B7BBC (PfVolumeSupportedForPrefetch.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     NtClose @ 0x140846CC0 (NtClose.c)
 *     PfpOpenHandleClose @ 0x140954390 (PfpOpenHandleClose.c)
 *     PfpOpenHandleCreate @ 0x1409543F8 (PfpOpenHandleCreate.c)
 *     IopCreateFile @ 0x1409557C0 (IopCreateFile.c)
 *     NtQueryVolumeInformationFile @ 0x140957060 (NtQueryVolumeInformationFile.c)
 *     NtGetDevicePowerState @ 0x140A7DF70 (NtGetDevicePowerState.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfpVolumeOpenAndVerify(__int64 a1, _OWORD *a2, __int64 a3)
{
  unsigned __int16 v6; // ax
  __int64 v7; // rsi
  int File; // eax
  NTSTATUS DevicePowerState; // ebx
  void *Pool2; // rax
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  HANDLE FileHandle; // [rsp+80h] [rbp-80h] BYREF
  _DEVICE_POWER_STATE State; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int16 v18; // [rsp+90h] [rbp-70h] BYREF
  int v19; // [rsp+92h] [rbp-6Eh]
  __int16 v20; // [rsp+96h] [rbp-6Ah]
  void *Src; // [rsp+98h] [rbp-68h]
  __int64 v22; // [rsp+A0h] [rbp-60h] BYREF
  PVOID P; // [rsp+A8h] [rbp-58h]
  __m256i v24; // [rsp+B0h] [rbp-50h] BYREF
  __int64 FsInformation; // [rsp+D0h] [rbp-30h] BYREF
  __m256i v26; // [rsp+D8h] [rbp-28h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+F8h] [rbp-8h] BYREF
  int v28[2]; // [rsp+108h] [rbp+8h] BYREF
  __int64 v29; // [rsp+110h] [rbp+10h]
  unsigned __int16 *v30; // [rsp+118h] [rbp+18h]
  __int64 v31; // [rsp+120h] [rbp+20h]
  __int128 v32; // [rsp+128h] [rbp+28h]
  __int128 v33; // [rsp+138h] [rbp+38h] BYREF
  __int64 v34; // [rsp+148h] [rbp+48h]

  *(_QWORD *)v28 = 48LL;
  FsInformation = 0LL;
  v34 = 0LL;
  Src = *(void **)(a3 + 32);
  v6 = 2 * *(_WORD *)(a3 + 24);
  v20 = 0;
  v18 = v6;
  v31 = 576LL;
  v19 = (unsigned __int16)(v6 + 2);
  v22 = 0LL;
  v30 = &v18;
  v7 = 0x200000000LL;
  State = PowerDeviceUnspecified;
  v33 = 0LL;
  memset(&v24, 0, 24);
  IoStatusBlock = 0LL;
  v24.m256i_i64[3] = 0x200000000LL;
  memset(&v26, 0, 24);
  v26.m256i_i64[3] = 0x200000000LL;
  P = 0LL;
  FileHandle = 0LL;
  v29 = 0LL;
  v32 = 0LL;
  File = IopCreateFile(
           (int)&FileHandle,
           1048704,
           (int)v28,
           (int)&IoStatusBlock,
           0LL,
           0,
           7,
           1,
           32,
           0LL,
           0,
           0,
           0LL,
           0,
           32,
           0LL);
  DevicePowerState = File;
  if ( File >= 0 )
  {
    if ( File == 259 )
      KeBugCheckEx(0x191u, 0x1428uLL, 0LL, 0LL, 0LL);
    DevicePowerState = NtQueryVolumeInformationFile(
                         FileHandle,
                         &IoStatusBlock,
                         &FsInformation,
                         8u,
                         FileFsDeviceInformation);
    if ( (DevicePowerState & 0xC0000000) != 0xC0000000 )
    {
      if ( DevicePowerState == 259 )
        KeBugCheckEx(0x191u, 0x1438uLL, 0LL, 0LL, 0LL);
      if ( (unsigned int)PfVolumeSupportedForPrefetch(&FsInformation) )
      {
        DevicePowerState = -1073741637;
        goto LABEL_13;
      }
      if ( (*(_DWORD *)(a3 + 12) & 1) != 0 )
      {
        DevicePowerState = NtGetDevicePowerState(FileHandle, &State);
        if ( DevicePowerState < 0 )
          goto LABEL_13;
        if ( (unsigned int)State > PowerDeviceD0 )
        {
          DevicePowerState = -2147483633;
          goto LABEL_13;
        }
      }
      NtClose(FileHandle);
      FileHandle = 0LL;
      DevicePowerState = PfpOpenHandleCreate((unsigned int)&v24, a1, (unsigned int)&v18, 0, 1048960, 32, 0, 0LL);
      if ( DevicePowerState < 0 )
        goto LABEL_13;
      if ( !*(_QWORD *)a3 && !*(_DWORD *)(a3 + 8) )
        goto LABEL_10;
      DevicePowerState = NtQueryVolumeInformationFile(
                           (HANDLE)v24.m256i_i64[0],
                           &IoStatusBlock,
                           &v33,
                           0x18u,
                           FileFsVolumeInformation);
      if ( (DevicePowerState & 0xC0000000) == 0xC0000000 )
        goto LABEL_13;
      if ( DevicePowerState == 259 )
        KeBugCheckEx(0x191u, 0x1481uLL, 0LL, 0LL, 0LL);
      if ( (_QWORD)v33 == *(_QWORD *)a3 && DWORD2(v33) == *(_DWORD *)(a3 + 8) )
      {
LABEL_10:
        LOWORD(v22) = v18 + 2;
        WORD1(v22) = v18 + 4;
        Pool2 = (void *)ExAllocatePool2(0x100uLL, (unsigned __int16)(v18 + 4), 0x44526650u);
        P = Pool2;
        if ( Pool2 )
        {
          memmove(Pool2, Src, v18);
          *((_WORD *)P + ((unsigned __int64)v18 >> 1)) = 92;
          *((_WORD *)P + ((unsigned __int64)(unsigned __int16)v22 >> 1)) = 0;
          DevicePowerState = PfpOpenHandleCreate(
                               (unsigned int)&v26,
                               a1,
                               (unsigned int)&v22,
                               0,
                               1179785,
                               33,
                               128,
                               (__int64)&v24);
          if ( DevicePowerState >= 0 )
          {
            v12 = *(_OWORD *)v24.m256i_i8;
            v24.m256i_i64[0] = 0LL;
            DevicePowerState = 0;
            v13 = *(_OWORD *)&v24.m256i_u64[2];
            v24.m256i_i64[3] = 0x200000000LL;
            *a2 = v12;
            *(_OWORD *)&v24.m256i_u64[1] = 0LL;
            v14 = *(_OWORD *)v26.m256i_i8;
            v26.m256i_i64[0] = 0LL;
            a2[1] = v13;
            v15 = *(_OWORD *)&v26.m256i_u64[2];
            v26.m256i_i64[3] = 0x200000000LL;
            a2[2] = v14;
            *(_OWORD *)&v26.m256i_u64[1] = 0LL;
            a2[3] = v15;
          }
          else
          {
            v7 = v26.m256i_i64[3];
          }
        }
        else
        {
          DevicePowerState = -1073741670;
        }
      }
      else
      {
        DevicePowerState = -1073741735;
      }
    }
  }
LABEL_13:
  if ( FileHandle )
    NtClose(FileHandle);
  if ( (v7 & 0x400000000LL) != 0 )
    PfpOpenHandleClose(&v26, a1);
  if ( (v24.m256i_i64[3] & 0x400000000LL) != 0 )
    PfpOpenHandleClose(&v24, a1);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)DevicePowerState;
}
