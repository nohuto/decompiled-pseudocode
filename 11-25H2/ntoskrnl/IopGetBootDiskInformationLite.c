/*
 * XREFs of IopGetBootDiskInformationLite @ 0x140C0CB64
 * Callers:
 *     IoGetBootDiskInformationLite @ 0x1407080A0 (IoGetBootDiskInformationLite.c)
 * Callees:
 *     RtlInitAnsiString @ 0x14046B2E0 (RtlInitAnsiString.c)
 *     IopAddBootDiskInformation @ 0x1405936C0 (IopAddBootDiskInformation.c)
 *     IopCheckDiskName @ 0x140593758 (IopCheckDiskName.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     VhdiGetDiskParameters @ 0x140C4C258 (VhdiGetDiskParameters.c)
 *     CimfsGetDiskParameters @ 0x140C4C914 (CimfsGetDiskParameters.c)
 */

__int64 __fastcall IopGetBootDiskInformationLite(unsigned int **a1)
{
  __int64 v2; // rdx
  int DiskParameters; // edi
  const CHAR *v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rax
  int v8; // edx
  _QWORD *v9; // r9
  _QWORD *v10; // r8
  bool v11; // zf
  int v12; // ecx
  unsigned int *Pool2; // r15
  __int64 v14; // rax
  _QWORD *v15; // rcx
  _QWORD *v16; // rbx
  unsigned int v17; // r14d
  int *v18; // r12
  __int16 *v19; // rsi
  __int128 v20; // xmm0
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rax
  _BYTE v25[4]; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v26; // [rsp+34h] [rbp-CCh] BYREF
  char v27; // [rsp+36h] [rbp-CAh]
  ULONG v28; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v29[24]; // [rsp+40h] [rbp-C0h] BYREF
  int v30; // [rsp+58h] [rbp-A8h]
  _OWORD *v31; // [rsp+60h] [rbp-A0h] BYREF
  STRING v32; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v33[8]; // [rsp+78h] [rbp-88h] BYREF
  _DWORD v34[36]; // [rsp+80h] [rbp-80h] BYREF
  _DWORD v35[4]; // [rsp+110h] [rbp+10h] BYREF
  STRING DestinationString; // [rsp+120h] [rbp+20h] BYREF
  STRING v37; // [rsp+130h] [rbp+30h] BYREF
  STRING v38; // [rsp+140h] [rbp+40h] BYREF

  v35[0] = 536871168;
  v26 = 0;
  v27 = 0;
  v30 = 0;
  v34[1] = 0;
  memset(v29, 0, sizeof(v29));
  v35[1] = 538968064;
  v32 = 0LL;
  v35[2] = 0x20000000;
  memset_0(v34, 0, 0x8CuLL);
  v2 = *(_QWORD *)&KeNumberProcessorsGroup0[1];
  v28 = 0;
  DiskParameters = 0;
  v25[0] = 0;
  v4 = *(const CHAR **)(v2 + 184);
  v31 = 0LL;
  RtlInitAnsiString(&DestinationString, v4);
  v5 = *(_QWORD *)&KeNumberProcessorsGroup0[1];
  RtlInitAnsiString(&v37, *(PCSZ *)(v5 + 192));
  v6 = *(_QWORD *)&KeNumberProcessorsGroup0[1];
  RtlInitAnsiString(&v38, *(PCSZ *)(v6 + 336));
  v7 = *(_QWORD *)&KeNumberProcessorsGroup0[1];
  v8 = 3;
  v9 = *(_QWORD **)(v7 + 232);
  v10 = (_QWORD *)*v9;
  while ( v10 != v9 )
  {
    v11 = v10[7] == 0LL;
    v12 = v8 + 1;
    v10 = (_QWORD *)*v10;
    if ( v11 )
      v12 = v8;
    v8 = v12;
  }
  Pool2 = (unsigned int *)ExAllocatePool2(0x40uLL, (unsigned int)(28 * v8 + 4), 0x20206F49uLL);
  if ( Pool2 )
  {
    v14 = *(_QWORD *)&KeNumberProcessorsGroup0[1];
    v15 = *(_QWORD **)(v14 + 232);
    v16 = (_QWORD *)*v15;
    if ( (_QWORD *)*v15 != v15 )
    {
      do
      {
        RtlInitAnsiString(&v32, (PCSZ)v16[3]);
        v17 = 0;
        v18 = v35;
        v19 = &v26;
        do
        {
          if ( !*(_BYTE *)v19 && IopCheckDiskName(&v32, &DestinationString + v17, &v28) )
          {
            v11 = *((_BYTE *)v16 + 38) == 0;
            *(_DWORD *)&v29[4] = v28;
            v30 = *v18;
            *(_BYTE *)v19 = 1;
            if ( v11 )
            {
              v21 = *((_DWORD *)v16 + 4);
              *(_DWORD *)v29 = 0;
              *(_OWORD *)&v29[8] = 0LL;
              *(_DWORD *)&v29[8] = v21;
            }
            else
            {
              v20 = *(_OWORD *)(v16 + 5);
              *(_DWORD *)v29 = 1;
              *(_OWORD *)&v29[8] = v20;
            }
            IopAddBootDiskInformation(Pool2, (__int64)v29);
          }
          ++v17;
          v19 = (__int16 *)((char *)v19 + 1);
          ++v18;
        }
        while ( v17 < 3 );
        v22 = v16[7];
        if ( v22 )
        {
          DiskParameters = VhdiGetDiskParameters(v22, v34, &v31, v25, v33);
          if ( DiskParameters >= 0
            || (DiskParameters = CimfsGetDiskParameters(v16[7], v34, &v31, 0LL, 0LL), DiskParameters >= 0) )
          {
            if ( !v25[0] )
            {
              *(_DWORD *)v29 = v34[0];
              *(_DWORD *)&v29[4] = v34[6];
              v30 = 0x400000;
              if ( v34[0] )
              {
                if ( v34[0] == 1 )
                  *(_OWORD *)&v29[8] = *v31;
              }
              else
              {
                *(_OWORD *)&v29[8] = 0LL;
                *(_DWORD *)&v29[8] = *(_DWORD *)v31;
              }
              IopAddBootDiskInformation(Pool2, (__int64)v29);
            }
          }
          else
          {
            DiskParameters = 0;
          }
        }
        v23 = *(_QWORD *)&KeNumberProcessorsGroup0[1];
        v16 = (_QWORD *)*v16;
      }
      while ( v16 != *(_QWORD **)(v23 + 232) );
    }
    *a1 = Pool2;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)DiskParameters;
}
