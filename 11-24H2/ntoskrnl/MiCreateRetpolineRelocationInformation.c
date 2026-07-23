/*
 * XREFs of MiCreateRetpolineRelocationInformation @ 0x14093C258
 * Callers:
 *     MiCaptureBootDriverRetpolineInfo @ 0x1407F0CBC (MiCaptureBootDriverRetpolineInfo.c)
 *     MiParseImageLoadConfig @ 0x14093D160 (MiParseImageLoadConfig.c)
 * Callees:
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     RtlCreateRetpolineRelocationInformation @ 0x14043B354 (RtlCreateRetpolineRelocationInformation.c)
 *     MiFreeRetpolineRelocationInformation @ 0x14093B5E4 (MiFreeRetpolineRelocationInformation.c)
 */

__int64 __fastcall MiCreateRetpolineRelocationInformation(__int64 a1, int a2, unsigned int a3, __int64 *a4)
{
  unsigned int v6; // ebx
  unsigned int v9; // r14d
  __int64 Pool; // rdi
  unsigned int v11; // ebx
  char *v12; // rax
  int RetpolineRelocationInformation; // ebx
  __int64 v15; // [rsp+30h] [rbp-38h]

  v6 = a3 >> 12;
  v9 = 8 * (a3 >> 12);
  Pool = MiAllocatePool(0x100uLL, v9 + 64, 1918003533);
  if ( !Pool )
    return (unsigned int)-1073741670;
  v11 = 4 * (*(_DWORD *)(a1 + 4) + 3 * v6);
  v12 = (char *)MiAllocatePool(0x100uLL, v11, 1918003533);
  *(_QWORD *)(Pool + 56) = v12;
  if ( !v12 )
  {
    RetpolineRelocationInformation = -1073741670;
    goto LABEL_7;
  }
  LODWORD(v15) = v11;
  RetpolineRelocationInformation = RtlCreateRetpolineRelocationInformation(
                                     a3,
                                     *(_DWORD *)(a1 + 4),
                                     *(_QWORD *)(a1 + 8),
                                     *(_QWORD *)(a1 + 16),
                                     *(_QWORD *)(a1 + 24),
                                     v12,
                                     v15,
                                     (void *)(Pool + 64),
                                     v9);
  if ( RetpolineRelocationInformation < 0 )
  {
LABEL_7:
    MiFreeRetpolineRelocationInformation((_QWORD *)Pool);
    return (unsigned int)RetpolineRelocationInformation;
  }
  *(_DWORD *)(Pool + 4) = *(_DWORD *)a1;
  *(_DWORD *)Pool = a2;
  *(_DWORD *)(Pool + 48) = ((a3 + 4095) & 0xFFFFF000) + ((dword_140E375F0 + 4095 + dword_140E375EC) & 0xFFFFF000);
  RetpolineRelocationInformation = 0;
  *a4 = Pool;
  return (unsigned int)RetpolineRelocationInformation;
}
