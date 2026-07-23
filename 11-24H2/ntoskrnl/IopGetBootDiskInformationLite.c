/*
 * XREFs of IopGetBootDiskInformationLite @ 0x140C1FD74
 * Callers:
 *     IoGetBootDiskInformationLite @ 0x140711D30 (IoGetBootDiskInformationLite.c)
 * Callees:
 *     RtlInitAnsiString @ 0x14045BBA0 (RtlInitAnsiString.c)
 *     IopAddBootDiskInformation @ 0x140593D50 (IopAddBootDiskInformation.c)
 *     IopCheckDiskName @ 0x140593DE8 (IopCheckDiskName.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     VhdiGetDiskParameters @ 0x140C5F72C (VhdiGetDiskParameters.c)
 *     CimfsGetDiskParameters @ 0x140C5FDE4 (CimfsGetDiskParameters.c)
 */

__int64 __fastcall IopGetBootDiskInformationLite(unsigned int **a1)
{
  int DiskParameters; // edi
  const CHAR *v3; // rdx
  int v4; // edx
  _QWORD *v5; // r9
  _QWORD *v6; // r8
  bool v7; // zf
  int v8; // ecx
  unsigned int *Pool2; // r15
  _QWORD *v10; // rcx
  _QWORD *v11; // rbx
  unsigned int v12; // r14d
  int *v13; // r12
  __int16 *v14; // rsi
  __int128 v15; // xmm0
  int v16; // eax
  __int64 v17; // rcx
  _BYTE v19[4]; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v20; // [rsp+34h] [rbp-CCh] BYREF
  char v21; // [rsp+36h] [rbp-CAh]
  ULONG v22; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v23[24]; // [rsp+40h] [rbp-C0h] BYREF
  int v24; // [rsp+58h] [rbp-A8h]
  _OWORD *v25; // [rsp+60h] [rbp-A0h] BYREF
  STRING v26; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v27[8]; // [rsp+78h] [rbp-88h] BYREF
  _DWORD v28[36]; // [rsp+80h] [rbp-80h] BYREF
  _DWORD v29[4]; // [rsp+110h] [rbp+10h] BYREF
  STRING DestinationString; // [rsp+120h] [rbp+20h] BYREF
  STRING v31; // [rsp+130h] [rbp+30h] BYREF
  STRING v32; // [rsp+140h] [rbp+40h] BYREF

  v29[0] = 536871168;
  v20 = 0;
  v21 = 0;
  v24 = 0;
  v28[1] = 0;
  memset(v23, 0, sizeof(v23));
  v29[1] = 538968064;
  v26 = 0LL;
  v29[2] = 0x20000000;
  memset_0(v28, 0, 0x8CuLL);
  v22 = 0;
  DiskParameters = 0;
  v19[0] = 0;
  v3 = *(const CHAR **)(KeLoaderBlock_0 + 184);
  v25 = 0LL;
  RtlInitAnsiString(&DestinationString, v3);
  RtlInitAnsiString(&v31, *(PCSZ *)(KeLoaderBlock_0 + 192));
  RtlInitAnsiString(&v32, *(PCSZ *)(KeLoaderBlock_0 + 336));
  v4 = 3;
  v5 = *(_QWORD **)(KeLoaderBlock_0 + 232);
  v6 = (_QWORD *)*v5;
  while ( v6 != v5 )
  {
    v7 = v6[7] == 0LL;
    v8 = v4 + 1;
    v6 = (_QWORD *)*v6;
    if ( v7 )
      v8 = v4;
    v4 = v8;
  }
  Pool2 = (unsigned int *)ExAllocatePool2(0x40uLL, (unsigned int)(28 * v4 + 4), 0x20206F49uLL);
  if ( Pool2 )
  {
    v10 = *(_QWORD **)(KeLoaderBlock_0 + 232);
    v11 = (_QWORD *)*v10;
    if ( (_QWORD *)*v10 != v10 )
    {
      do
      {
        RtlInitAnsiString(&v26, (PCSZ)v11[3]);
        v12 = 0;
        v13 = v29;
        v14 = &v20;
        do
        {
          if ( !*(_BYTE *)v14 && IopCheckDiskName(&v26, &DestinationString + v12, &v22) )
          {
            v7 = *((_BYTE *)v11 + 38) == 0;
            *(_DWORD *)&v23[4] = v22;
            v24 = *v13;
            *(_BYTE *)v14 = 1;
            if ( v7 )
            {
              v16 = *((_DWORD *)v11 + 4);
              *(_DWORD *)v23 = 0;
              *(_OWORD *)&v23[8] = 0LL;
              *(_DWORD *)&v23[8] = v16;
            }
            else
            {
              v15 = *(_OWORD *)(v11 + 5);
              *(_DWORD *)v23 = 1;
              *(_OWORD *)&v23[8] = v15;
            }
            IopAddBootDiskInformation(Pool2, (__int64)v23);
          }
          ++v12;
          v14 = (__int16 *)((char *)v14 + 1);
          ++v13;
        }
        while ( v12 < 3 );
        v17 = v11[7];
        if ( v17 )
        {
          DiskParameters = VhdiGetDiskParameters(v17, v28, &v25, v19, v27);
          if ( DiskParameters >= 0
            || (DiskParameters = CimfsGetDiskParameters(v11[7], v28, &v25, 0LL, 0LL), DiskParameters >= 0) )
          {
            if ( !v19[0] )
            {
              *(_DWORD *)v23 = v28[0];
              *(_DWORD *)&v23[4] = v28[6];
              v24 = 0x400000;
              if ( v28[0] )
              {
                if ( v28[0] == 1 )
                  *(_OWORD *)&v23[8] = *v25;
              }
              else
              {
                *(_OWORD *)&v23[8] = 0LL;
                *(_DWORD *)&v23[8] = *(_DWORD *)v25;
              }
              IopAddBootDiskInformation(Pool2, (__int64)v23);
            }
          }
          else
          {
            DiskParameters = 0;
          }
        }
        v11 = (_QWORD *)*v11;
      }
      while ( v11 != *(_QWORD **)(KeLoaderBlock_0 + 232) );
    }
    *a1 = Pool2;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)DiskParameters;
}
