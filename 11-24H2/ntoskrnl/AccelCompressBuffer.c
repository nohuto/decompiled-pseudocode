/*
 * XREFs of AccelCompressBuffer @ 0x140663FEC
 * Callers:
 *     SmHwAcceleratorIssueRequest @ 0x14060DA70 (SmHwAcceleratorIssueRequest.c)
 * Callees:
 *     AccelpSubmitWork @ 0x140403070 (AccelpSubmitWork.c)
 *     AccelBuildDescriptorMemoryCompress @ 0x140663CD8 (AccelBuildDescriptorMemoryCompress.c)
 *     AccelQueryCompletionInformation @ 0x140664438 (AccelQueryCompletionInformation.c)
 *     AccelpBuildHuffmanEncoding @ 0x140664690 (AccelpBuildHuffmanEncoding.c)
 *     AccelpComputeHistogram @ 0x140664930 (AccelpComputeHistogram.c)
 */

__int64 __fastcall AccelCompressBuffer(__int64 a1)
{
  _QWORD *v1; // r14
  __int64 *v2; // rdi
  __int64 **v4; // rsi
  int v5; // ecx
  __int64 *v6; // rax
  _QWORD v8[2]; // [rsp+38h] [rbp-59h] BYREF
  int v9; // [rsp+48h] [rbp-49h]
  int v10; // [rsp+4Ch] [rbp-45h]
  __int64 v11; // [rsp+50h] [rbp-41h]
  __int64 v12; // [rsp+58h] [rbp-39h]
  __int64 v13; // [rsp+60h] [rbp-31h]
  int v14; // [rsp+68h] [rbp-29h]
  int v15; // [rsp+6Ch] [rbp-25h]
  __int64 v16; // [rsp+70h] [rbp-21h]
  int v17; // [rsp+78h] [rbp-19h]
  char v18; // [rsp+7Ch] [rbp-15h]
  __int16 v19; // [rsp+7Dh] [rbp-14h]
  char v20; // [rsp+7Fh] [rbp-12h]
  __int128 v21; // [rsp+88h] [rbp-9h] BYREF
  __int128 v22; // [rsp+98h] [rbp+7h]
  __int128 v23; // [rsp+A8h] [rbp+17h]
  __int64 v24; // [rsp+B8h] [rbp+27h]

  v1 = (_QWORD *)(a1 + 24);
  v2 = (__int64 *)(a1 + 32);
  v4 = (__int64 **)(a1 + 8);
  if ( *(_DWORD *)(a1 + 20) != 3
    || (v5 = AccelpComputeHistogram(
               (unsigned int)*v4,
               *(_QWORD *)(a1 + 40),
               *(_DWORD *)(a1 + 48),
               *v1,
               *v2 & 0xFFFFFFFFFFFFFFFBuLL),
        v5 >= 0)
    && (v5 = AccelpBuildHuffmanEncoding(*v1), v5 >= 0) )
  {
    v8[1] = *v4;
    v9 = *(_DWORD *)(a1 + 16);
    v10 = *(_DWORD *)(a1 + 20);
    v11 = *v1;
    v12 = *v2;
    v13 = *(_QWORD *)(a1 + 40);
    v14 = *(_DWORD *)(a1 + 48);
    v16 = *(_QWORD *)(a1 + 56);
    v17 = *(_DWORD *)(a1 + 64);
    v18 = *(_BYTE *)(a1 + 68);
    v8[0] = 4718593LL;
    v15 = 0;
    v19 = 0;
    v20 = 0;
    v5 = AccelBuildDescriptorMemoryCompress((__int64)v8);
    if ( v5 >= 0 )
    {
      v5 = AccelpSubmitWork(*v4, *v2);
      if ( v5 >= 0 && (*(_BYTE *)v2 & 4) == 0 )
      {
        v21 = 0LL;
        v24 = 0LL;
        v22 = 0LL;
        LODWORD(v21) = 3670017;
        v6 = *v4;
        LODWORD(v22) = 1;
        v23 = 0LL;
        *((_QWORD *)&v21 + 1) = v6;
        v5 = AccelQueryCompletionInformation(&v21);
        if ( v5 >= 0 )
        {
          *(_DWORD *)(a1 + 72) = DWORD2(v22);
          *(_DWORD *)(a1 + 84) = DWORD1(v23);
          *(_BYTE *)(a1 + 80) = v23;
          *(_DWORD *)(a1 + 76) = HIDWORD(v22);
        }
      }
    }
  }
  return (unsigned int)v5;
}
