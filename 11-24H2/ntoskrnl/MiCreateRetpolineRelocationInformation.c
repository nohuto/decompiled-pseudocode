/*
 * XREFs of MiCreateRetpolineRelocationInformation @ 0x1408F3248
 * Callers:
 *     MiCaptureBootDriverRetpolineInfo @ 0x1407F06EC (MiCaptureBootDriverRetpolineInfo.c)
 *     MiParseImageLoadConfig @ 0x1408F42B8 (MiParseImageLoadConfig.c)
 * Callees:
 *     MiAllocatePool @ 0x1402ACA70 (MiAllocatePool.c)
 *     RtlCreateRetpolineRelocationInformation @ 0x1402C9744 (RtlCreateRetpolineRelocationInformation.c)
 *     MiFreeRetpolineRelocationInformation @ 0x1408F7460 (MiFreeRetpolineRelocationInformation.c)
 */

__int64 __fastcall MiCreateRetpolineRelocationInformation(__int64 a1, int a2, unsigned int a3, _QWORD *a4)
{
  unsigned int v6; // ebx
  unsigned int v9; // r14d
  _DWORD *Pool; // rdi
  unsigned int v11; // ebx
  char *v12; // rax
  int RetpolineRelocationInformation; // ebx
  __int64 v15; // [rsp+30h] [rbp-38h]

  v6 = a3 >> 12;
  v9 = 8 * (a3 >> 12);
  Pool = (_DWORD *)MiAllocatePool(0x100uLL, v9 + 64, 1918003533);
  if ( !Pool )
    return (unsigned int)-1073741670;
  v11 = 4 * (*(_DWORD *)(a1 + 4) + 3 * v6);
  v12 = (char *)MiAllocatePool(0x100uLL, v11, 1918003533);
  *((_QWORD *)Pool + 7) = v12;
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
                                     Pool + 16,
                                     v9);
  if ( RetpolineRelocationInformation < 0 )
  {
LABEL_7:
    MiFreeRetpolineRelocationInformation(Pool);
    return (unsigned int)RetpolineRelocationInformation;
  }
  Pool[1] = *(_DWORD *)a1;
  *Pool = a2;
  Pool[12] = ((a3 + 4095) & 0xFFFFF000) + ((dword_140E374B0 + 4095 + dword_140E374AC) & 0xFFFFF000);
  RetpolineRelocationInformation = 0;
  *a4 = Pool;
  return (unsigned int)RetpolineRelocationInformation;
}
