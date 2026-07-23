/*
 * XREFs of RtlUpdateImportRelocationsInImage @ 0x140697EC8
 * Callers:
 *     MiApplyDynamicFixupsToKernelAndHal @ 0x140C43F7C (MiApplyDynamicFixupsToKernelAndHal.c)
 *     MiApplyImportOptimizationToBootDriver @ 0x140C441C8 (MiApplyImportOptimizationToBootDriver.c)
 * Callees:
 *     RtlCaptureRetpolineImportRvas @ 0x140410524 (RtlCaptureRetpolineImportRvas.c)
 *     RtlpCaptureDynamicRelocationTableRva @ 0x1405E2240 (RtlpCaptureDynamicRelocationTableRva.c)
 *     RtlApplyImportRelocationToImage @ 0x1406979A4 (RtlApplyImportRelocationToImage.c)
 *     RtlpCaptureRetpolineBinaryInfoForImage @ 0x14069810C (RtlpCaptureRetpolineBinaryInfoForImage.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlUpdateImportRelocationsInImage(
        char *BaseOfImage,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        char a8)
{
  __int64 v8; // r13
  _DWORD *v10; // rdi
  int v13; // ebx
  int v14; // eax
  char *v15; // rcx
  char *v16; // rdx
  char *v17; // rbx
  unsigned __int64 v18; // r14
  unsigned __int64 v19; // r12
  unsigned int *v20; // rsi
  int v22; // [rsp+38h] [rbp-49h]
  unsigned int v23; // [rsp+48h] [rbp-39h] BYREF
  unsigned __int64 v24; // [rsp+50h] [rbp-31h] BYREF
  _DWORD *Pool2; // [rsp+58h] [rbp-29h]
  __int64 v26[2]; // [rsp+60h] [rbp-21h] BYREF
  __int128 v27; // [rsp+70h] [rbp-11h]
  __int128 v28; // [rsp+80h] [rbp-1h]
  __int64 v29; // [rsp+90h] [rbp+Fh]

  LODWORD(v24) = 0;
  v29 = 0LL;
  v8 = a3;
  v10 = 0LL;
  v23 = 0;
  Pool2 = 0LL;
  *(_OWORD *)v26 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v13 = RtlpCaptureRetpolineBinaryInfoForImage(BaseOfImage, a6, (__int64)v26);
  if ( v13 < 0 )
    return (unsigned int)v13;
  if ( a7 )
  {
    if ( !HIDWORD(v26[0]) )
      return 0;
    *(_QWORD *)&v28 = a2;
    *((_QWORD *)&v27 + 1) = &BaseOfImage[HIDWORD(v26[0])];
    *((_QWORD *)&v28 + 1) = a4;
  }
  else
  {
    v14 = RtlCaptureRetpolineImportRvas((unsigned __int64)BaseOfImage, a2, v8, a4, 0LL, &v23);
    v13 = v14;
    if ( v14 >= 0 )
      return (unsigned int)-1073741637;
    if ( v14 != -1073741789 )
      return (unsigned int)v13;
    Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL);
    v10 = Pool2;
    if ( !Pool2 )
      return (unsigned int)-1073741801;
    v13 = RtlCaptureRetpolineImportRvas((unsigned __int64)BaseOfImage, a2, v8, a4, Pool2, &v23);
    if ( v13 < 0 )
    {
LABEL_28:
      ExFreePoolWithTag(v10, 0);
      return (unsigned int)v13;
    }
    *(_QWORD *)&v27 = v10;
  }
  v13 = RtlpCaptureDynamicRelocationTableRva(BaseOfImage, (unsigned int)v8, (int *)&v24);
  if ( v13 >= 0 )
  {
    v15 = &BaseOfImage[(unsigned int)v24 + 8];
    v16 = &v15[*(unsigned int *)&BaseOfImage[(unsigned int)v24 + 4]];
    if ( *(_DWORD *)&BaseOfImage[(unsigned int)v24] == 1 )
    {
      while ( v15 < v16 )
      {
        if ( *(_QWORD *)v15 == 3LL )
        {
          v17 = v15 + 12;
          v18 = (unsigned __int64)&v15[*((unsigned int *)v15 + 2) + 12];
          v24 = v18;
          if ( (unsigned __int64)(v15 + 12) < v18 )
          {
            do
            {
              v19 = (unsigned __int64)&v17[*((unsigned int *)v17 + 1)];
              v20 = (unsigned int *)(v17 + 8);
              if ( (unsigned __int64)(v17 + 8) < v19 )
              {
                do
                {
                  if ( (*v20 & 0xFFF) == 0 && v20 != (unsigned int *)(v17 + 8) )
                    break;
                  RtlApplyImportRelocationToImage(
                    (unsigned __int64)BaseOfImage,
                    a3,
                    (__int64)v26,
                    a6,
                    *(_DWORD *)v17,
                    v20++,
                    v22,
                    a8);
                }
                while ( (unsigned __int64)v20 < v19 );
                v18 = v24;
              }
              v17 += *((unsigned int *)v17 + 1);
            }
            while ( (unsigned __int64)v17 < v18 );
            v10 = Pool2;
          }
          v13 = 0;
          goto LABEL_27;
        }
        v15 += *((unsigned int *)v15 + 2) + 12;
      }
    }
    v13 = -1073741637;
  }
LABEL_27:
  if ( v10 )
    goto LABEL_28;
  return (unsigned int)v13;
}
