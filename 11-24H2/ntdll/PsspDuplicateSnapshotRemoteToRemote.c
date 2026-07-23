/*
 * XREFs of PsspDuplicateSnapshotRemoteToRemote @ 0x180118A0C
 * Callers:
 *     PssNtDuplicateSnapshot @ 0x1800BC130 (PssNtDuplicateSnapshot.c)
 * Callees:
 *     PssNtFreeRemoteSnapshot @ 0x18010D9B0 (PssNtFreeRemoteSnapshot.c)
 *     Feature_3078821176__private_IsEnabledDeviceUsageNoInline @ 0x18015B304 (Feature_3078821176__private_IsEnabledDeviceUsageNoInline.c)
 *     PssValidateSnapshotDescriptor @ 0x18015B348 (PssValidateSnapshotDescriptor.c)
 *     ZwAllocateVirtualMemory @ 0x180160350 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x180160410 (ZwFreeVirtualMemory.c)
 *     NtWriteVirtualMemory @ 0x180160790 (NtWriteVirtualMemory.c)
 *     ZwDuplicateObject @ 0x1801607D0 (ZwDuplicateObject.c)
 *     ZwReadVirtualMemory @ 0x180160830 (ZwReadVirtualMemory.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall PsspDuplicateSnapshotRemoteToRemote(
        HANDLE ProcessHandle,
        PVOID BaseAddress,
        HANDLE SourceProcessHandle,
        PVOID *a4,
        char a5)
{
  unsigned int v9; // r14d
  NTSTATUS v10; // ebx
  unsigned __int64 v11; // r15
  unsigned int v12; // esi
  __int64 v13; // rdx
  _BYTE *v14; // rcx
  _OWORD *v15; // rax
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  HANDLE v23; // rdx
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int64 v30; // rax
  NTSTATUS v31; // eax
  unsigned __int64 v32; // rsi
  unsigned __int64 i; // r12
  ULONG_PTR v34; // r15
  ULONG_PTR RegionSize; // [rsp+40h] [rbp-C0h] BYREF
  PVOID BaseAddressa; // [rsp+48h] [rbp-B8h] BYREF
  PVOID v38; // [rsp+50h] [rbp-B0h] BYREF
  ULONG_PTR BufferSize; // [rsp+58h] [rbp-A8h] BYREF
  ULONG_PTR NumberOfBytesWritten; // [rsp+60h] [rbp-A0h] BYREF
  PVOID *v41; // [rsp+68h] [rbp-98h]
  PVOID v42; // [rsp+70h] [rbp-90h]
  _BYTE v43[4]; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v44; // [rsp+84h] [rbp-7Ch]
  __int16 v45; // [rsp+198h] [rbp+98h]
  char *v46; // [rsp+1A0h] [rbp+A0h]
  HANDLE TargetHandle; // [rsp+3E8h] [rbp+2E8h] BYREF
  HANDLE v48; // [rsp+400h] [rbp+300h] BYREF
  char *v49; // [rsp+408h] [rbp+308h]
  HANDLE v50; // [rsp+418h] [rbp+318h] BYREF
  HANDLE v51; // [rsp+430h] [rbp+330h] BYREF
  HANDLE v52; // [rsp+450h] [rbp+350h] BYREF
  HANDLE v53; // [rsp+470h] [rbp+370h] BYREF
  HANDLE v54; // [rsp+4E8h] [rbp+3E8h] BYREF
  _DWORD Buffer[218]; // [rsp+500h] [rbp+400h] BYREF
  HANDLE SourceHandle; // [rsp+868h] [rbp+768h]
  unsigned int v57; // [rsp+878h] [rbp+778h]
  HANDLE v58; // [rsp+880h] [rbp+780h]
  __int64 v59; // [rsp+888h] [rbp+788h]
  HANDLE v60; // [rsp+898h] [rbp+798h]
  HANDLE v61; // [rsp+8B0h] [rbp+7B0h]
  HANDLE v62; // [rsp+8D0h] [rbp+7D0h]
  HANDLE v63; // [rsp+8F0h] [rbp+7F0h]
  HANDLE v64; // [rsp+968h] [rbp+868h]

  v42 = BaseAddress;
  v41 = a4;
  BaseAddressa = 0LL;
  memset_thunk_772440563353939046(Buffer, 0, 0x478uLL);
  BufferSize = 0LL;
  NumberOfBytesWritten = 0LL;
  RegionSize = 0LL;
  v9 = 0;
  v38 = 0LL;
  *a4 = 0LL;
  memset_thunk_772440563353939046(v43, 0, 0x478uLL);
  v10 = ZwReadVirtualMemory(ProcessHandle, BaseAddress, Buffer, 0x478uLL, &BufferSize);
  if ( v10 < 0 )
    goto LABEL_47;
  if ( BufferSize == 1144 )
  {
    if ( Buffer[0] == 1146311504 )
    {
      v10 = PssValidateSnapshotDescriptor(Buffer);
      if ( v10 >= 0 )
      {
        v11 = (unsigned __int64)v57 << 6;
        if ( v11 <= 0xFFFFFFFF )
        {
          v12 = v11 + 1144;
          if ( (unsigned int)v11 < 0xFFFFFB88 )
          {
            v13 = 8LL;
            v14 = v43;
            v15 = Buffer;
            do
            {
              v16 = v15[1];
              *(_OWORD *)v14 = *v15;
              v17 = v15[2];
              *((_OWORD *)v14 + 1) = v16;
              v18 = v15[3];
              *((_OWORD *)v14 + 2) = v17;
              v19 = v15[4];
              *((_OWORD *)v14 + 3) = v18;
              v20 = v15[5];
              *((_OWORD *)v14 + 4) = v19;
              v21 = v15[6];
              *((_OWORD *)v14 + 5) = v20;
              v22 = v15[7];
              v15 += 8;
              *((_OWORD *)v14 + 6) = v21;
              v14 += 128;
              *((_OWORD *)v14 - 1) = v22;
              --v13;
            }
            while ( v13 );
            v23 = SourceHandle;
            v24 = v15[1];
            *(_OWORD *)v14 = *v15;
            v25 = v15[2];
            *((_OWORD *)v14 + 1) = v24;
            v26 = v15[3];
            *((_OWORD *)v14 + 2) = v25;
            v27 = v15[4];
            *((_OWORD *)v14 + 3) = v26;
            v28 = v15[5];
            *((_OWORD *)v14 + 4) = v27;
            v29 = v15[6];
            v30 = *((_QWORD *)v15 + 14);
            *((_OWORD *)v14 + 5) = v28;
            *((_OWORD *)v14 + 6) = v29;
            *((_QWORD *)v14 + 14) = v30;
            TargetHandle = 0LL;
            v48 = 0LL;
            v50 = 0LL;
            v51 = 0LL;
            v52 = 0LL;
            v53 = 0LL;
            v54 = 0LL;
            if ( v23 )
            {
              v10 = ZwDuplicateObject(ProcessHandle, v23, SourceProcessHandle, &TargetHandle, 0, 0, 2u);
              v9 = v11 + 1144;
              if ( v10 < 0 )
                goto LABEL_47;
            }
            if ( v58 )
            {
              v10 = ZwDuplicateObject(ProcessHandle, v58, SourceProcessHandle, &v48, 0, 0, 2u);
              v9 = v11 + 1144;
              if ( v10 < 0 )
                goto LABEL_47;
            }
            if ( v60 )
            {
              v10 = ZwDuplicateObject(ProcessHandle, v60, SourceProcessHandle, &v50, 0, 0, 2u);
              v9 = v11 + 1144;
              if ( v10 < 0 )
                goto LABEL_47;
            }
            if ( v61 )
            {
              v10 = ZwDuplicateObject(ProcessHandle, v61, SourceProcessHandle, &v51, 0, 0, 2u);
              v9 = v11 + 1144;
              if ( v10 < 0 )
                goto LABEL_47;
            }
            if ( v62 )
            {
              v10 = ZwDuplicateObject(ProcessHandle, v62, SourceProcessHandle, &v52, 0, 0, 2u);
              v9 = v11 + 1144;
              if ( v10 < 0 )
                goto LABEL_47;
            }
            if ( v63 )
            {
              v10 = ZwDuplicateObject(ProcessHandle, v63, SourceProcessHandle, &v53, 0, 0, 2u);
              v9 = v11 + 1144;
              if ( v10 < 0 )
                goto LABEL_47;
            }
            if ( v64 )
            {
              v10 = ZwDuplicateObject(ProcessHandle, v64, SourceProcessHandle, &v54, 0, 0, 2u);
              v9 = v11 + 1144;
              if ( v10 < 0 )
                goto LABEL_47;
            }
            BaseAddressa = 0LL;
            RegionSize = v12;
            v10 = ZwAllocateVirtualMemory(SourceProcessHandle, &BaseAddressa, 0LL, &RegionSize, 0x1000u, 4u);
            v9 = v11 + 1144;
            if ( v10 < 0 )
              goto LABEL_47;
            v44 = v44 & 0xFFFFFFF8 | 1;
            if ( v49 )
              v49 = (char *)BaseAddressa + 1144;
            if ( v45 )
              v46 = (char *)BaseAddressa + 296;
            v31 = (unsigned int)Feature_3078821176__private_IsEnabledDeviceUsageNoInline(BaseAddressa)
                ? NtWriteVirtualMemory(SourceProcessHandle, BaseAddressa, v43, 0x478uLL, 0LL)
                : NtWriteVirtualMemory(SourceProcessHandle, BaseAddressa, v43, v12, 0LL);
            v10 = v31;
            if ( v31 < 0 )
              goto LABEL_47;
            if ( v59 )
            {
              v38 = 0LL;
              RegionSize = 1LL;
              v10 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v38, 0LL, &RegionSize, 0x1000u, 4u);
              if ( v10 < 0 )
                goto LABEL_47;
              v32 = 0LL;
              for ( i = (unsigned int)v11; v32 < i; v32 += NumberOfBytesWritten )
              {
                v34 = i - v32;
                if ( RegionSize <= i - v32 )
                  v34 = RegionSize;
                v10 = ZwReadVirtualMemory(ProcessHandle, (PVOID)(v32 + v59), v38, v34, &BufferSize);
                if ( v10 < 0 )
                  goto LABEL_47;
                if ( BufferSize != v34 )
                  goto LABEL_46;
                v10 = NtWriteVirtualMemory(
                        SourceProcessHandle,
                        (char *)BaseAddressa + v32 + 1144,
                        v38,
                        BufferSize,
                        &NumberOfBytesWritten);
                if ( v10 < 0 )
                  goto LABEL_47;
                if ( NumberOfBytesWritten != BufferSize )
                {
LABEL_46:
                  v10 = -2147483635;
                  goto LABEL_47;
                }
              }
              ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v38, &RegionSize, 0x8000u);
              v38 = 0LL;
            }
            v10 = 0;
            *v41 = BaseAddressa;
            goto LABEL_65;
          }
          v9 = -1;
        }
        v10 = -1073741675;
      }
    }
    else
    {
      v10 = -1073741816;
    }
  }
  else
  {
    v10 = -2147483635;
  }
LABEL_47:
  if ( v38 )
  {
    RegionSize = 0LL;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v38, &RegionSize, 0x8000u);
  }
  if ( BaseAddressa )
  {
    RegionSize = v9;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, &RegionSize, 0x8000u);
  }
  if ( v53 )
    ZwDuplicateObject(SourceProcessHandle, v53, 0LL, 0LL, 0, 0, 1u);
  if ( v52 )
    ZwDuplicateObject(SourceProcessHandle, v52, 0LL, 0LL, 0, 0, 1u);
  if ( v50 )
    ZwDuplicateObject(SourceProcessHandle, v50, 0LL, 0LL, 0, 0, 1u);
  if ( v51 )
    ZwDuplicateObject(SourceProcessHandle, v51, 0LL, 0LL, 0, 0, 1u);
  if ( v48 )
    ZwDuplicateObject(SourceProcessHandle, v48, 0LL, 0LL, 0, 0, 1u);
  if ( TargetHandle )
    ZwDuplicateObject(SourceProcessHandle, TargetHandle, 0LL, 0LL, 0, 0, 1u);
  if ( v54 )
    ZwDuplicateObject(SourceProcessHandle, v54, 0LL, 0LL, 0, 0, 1u);
LABEL_65:
  if ( (a5 & 1) != 0 )
    PssNtFreeRemoteSnapshot(ProcessHandle, (PVOID *)v42);
  return (unsigned int)v10;
}
