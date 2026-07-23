/*
 * XREFs of AccelDecompressBuffer @ 0x14066415C
 * Callers:
 *     SmHwAcceleratorIssueRequest @ 0x14060DA70 (SmHwAcceleratorIssueRequest.c)
 * Callees:
 *     AccelpSubmitWork @ 0x140403070 (AccelpSubmitWork.c)
 *     AccelBuildDescriptorMemoryDecompress @ 0x140663E0C (AccelBuildDescriptorMemoryDecompress.c)
 *     AccelQueryCompletionInformation @ 0x140664438 (AccelQueryCompletionInformation.c)
 */

__int64 __fastcall AccelDecompressBuffer(__int64 a1)
{
  __int64 v1; // rax
  int v3; // ecx
  __int64 v4; // rax
  __int128 v6; // [rsp+20h] [rbp-39h] BYREF
  __int128 v7; // [rsp+30h] [rbp-29h]
  __int128 v8; // [rsp+40h] [rbp-19h]
  __int64 v9; // [rsp+50h] [rbp-9h]
  _DWORD v10[2]; // [rsp+60h] [rbp+7h] BYREF
  __int64 v11; // [rsp+68h] [rbp+Fh]
  int v12; // [rsp+70h] [rbp+17h]
  int v13; // [rsp+74h] [rbp+1Bh]
  __int64 v14; // [rsp+78h] [rbp+1Fh]
  __int64 v15; // [rsp+80h] [rbp+27h]
  __int64 v16; // [rsp+88h] [rbp+2Fh]
  int v17; // [rsp+90h] [rbp+37h]
  int v18; // [rsp+94h] [rbp+3Bh]
  __int64 v19; // [rsp+98h] [rbp+3Fh]
  int v20; // [rsp+A0h] [rbp+47h]
  int v21; // [rsp+A4h] [rbp+4Bh]

  v1 = *(_QWORD *)(a1 + 8);
  v10[1] = 0;
  v18 = 0;
  v11 = v1;
  v12 = *(_DWORD *)(a1 + 16);
  v13 = *(_DWORD *)(a1 + 20);
  v14 = *(_QWORD *)(a1 + 24);
  v15 = *(_QWORD *)(a1 + 32);
  v16 = *(_QWORD *)(a1 + 56);
  v17 = *(_DWORD *)(a1 + 64);
  v19 = *(_QWORD *)(a1 + 40);
  v20 = *(_DWORD *)(a1 + 48);
  LODWORD(v1) = *(_DWORD *)(a1 + 68);
  v10[0] = 4718593;
  v21 = v1;
  v3 = AccelBuildDescriptorMemoryDecompress((__int64)v10);
  if ( v3 >= 0 )
  {
    v3 = AccelpSubmitWork(*(__int64 **)(a1 + 8), *(_QWORD *)(a1 + 32));
    if ( v3 >= 0 && (*(_BYTE *)(a1 + 32) & 4) == 0 )
    {
      v6 = 0LL;
      v9 = 0LL;
      v4 = *(_QWORD *)(a1 + 8);
      v7 = 0LL;
      *((_QWORD *)&v6 + 1) = v4;
      v8 = 0LL;
      LODWORD(v6) = 3670017;
      LODWORD(v7) = 1;
      v3 = AccelQueryCompletionInformation(&v6);
      if ( v3 >= 0 )
      {
        *(_DWORD *)(a1 + 72) = DWORD2(v7);
        *(_DWORD *)(a1 + 84) = DWORD1(v8);
        *(_BYTE *)(a1 + 80) = v8;
        *(_DWORD *)(a1 + 76) = HIDWORD(v7);
      }
    }
  }
  return (unsigned int)v3;
}
