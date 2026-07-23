/*
 * XREFs of RtlPerformRetpolineRelocationsOnImageEx @ 0x1406A3DB0
 * Callers:
 *     MiApplyDynamicFixupsToKernelAndHal @ 0x140C573F4 (MiApplyDynamicFixupsToKernelAndHal.c)
 *     MiApplyRetpolineToBootDriver @ 0x140C5779C (MiApplyRetpolineToBootDriver.c)
 * Callees:
 *     RtlpCaptureDynamicRelocationTableRva @ 0x1405EBB60 (RtlpCaptureDynamicRelocationTableRva.c)
 *     RtlApplyImportRelocationToImage @ 0x1406A3BD4 (RtlApplyImportRelocationToImage.c)
 *     RtlApplyIndirectRelocationToImage @ 0x1406A3C78 (RtlApplyIndirectRelocationToImage.c)
 *     RtlApplySwitchJumpRelocationToImage @ 0x1406A3D14 (RtlApplySwitchJumpRelocationToImage.c)
 *     RtlpCaptureRetpolineBinaryInfoForImage @ 0x1406A433C (RtlpCaptureRetpolineBinaryInfoForImage.c)
 *     RtlpIsAddressInIgnoreRegion @ 0x1406A446C (RtlpIsAddressInIgnoreRegion.c)
 */

NTSTATUS __fastcall RtlPerformRetpolineRelocationsOnImageEx(
        char *BaseOfImage,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        __int64 a7,
        __int64 a8,
        unsigned int a9)
{
  unsigned int v9; // r12d
  char *v11; // rbx
  char *v12; // rsi
  char *v13; // r14
  NTSTATUS result; // eax
  char *v15; // rcx
  unsigned __int64 v16; // rdx
  char *v17; // rcx
  unsigned __int64 v18; // r12
  unsigned int *v19; // rbx
  unsigned __int64 v20; // rbp
  unsigned int *v21; // rdi
  unsigned int *v22; // rbx
  unsigned __int64 v23; // r15
  unsigned __int64 v24; // rsi
  __int16 *v25; // rdi
  unsigned __int64 v26; // r15
  unsigned int *v27; // rbx
  unsigned __int64 v28; // rsi
  unsigned int *v29; // rdi
  int v30; // [rsp+30h] [rbp-88h]
  unsigned __int64 i; // [rsp+48h] [rbp-70h]
  unsigned __int64 v32; // [rsp+48h] [rbp-70h]
  unsigned __int64 v33; // [rsp+48h] [rbp-70h]
  _OWORD v34[3]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v35; // [rsp+80h] [rbp-38h]

  a6 = 0;
  v9 = a3;
  memset(v34, 0, sizeof(v34));
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v35 = 0LL;
  result = RtlpCaptureRetpolineBinaryInfoForImage(BaseOfImage, a5, (__int64)v34);
  if ( result >= 0 )
  {
    result = RtlpCaptureDynamicRelocationTableRva(BaseOfImage, v9, (int *)&a6);
    if ( result >= 0 )
    {
      v15 = &BaseOfImage[a6];
      v16 = (unsigned __int64)&v15[*((unsigned int *)v15 + 1) + 8];
      v17 = v15 + 8;
      if ( (unsigned __int64)v17 >= v16 )
        return -1073741637;
      do
      {
        switch ( *(_QWORD *)v17 )
        {
          case 3LL:
            v11 = v17;
            break;
          case 4LL:
            v12 = v17;
            break;
          case 5LL:
            v13 = v17;
            break;
        }
        v17 += *((unsigned int *)v17 + 2) + 12;
      }
      while ( (unsigned __int64)v17 < v16 );
      if ( v11 )
      {
        v18 = (unsigned __int64)&v11[*((unsigned int *)v11 + 2) + 12];
        v19 = (unsigned int *)(v11 + 12);
        for ( i = v18; (unsigned __int64)v19 < v18; v19 = (unsigned int *)((char *)v19 + v19[1]) )
        {
          if ( !(unsigned __int8)RtlpIsAddressInIgnoreRegion(*v19, a7, a8, a9) )
          {
            v20 = (unsigned __int64)v19 + v19[1];
            v21 = v19 + 2;
            if ( (unsigned __int64)(v19 + 2) < v20 )
            {
              do
              {
                if ( (*v21 & 0xFFF) != 0 || v21 == v19 + 2 )
                  RtlApplyImportRelocationToImage(
                    (unsigned __int64)BaseOfImage,
                    a3,
                    (__int64)v34,
                    a5,
                    *v19,
                    v21,
                    v30,
                    0);
                ++v21;
              }
              while ( (unsigned __int64)v21 < v20 );
              v18 = i;
            }
          }
        }
        if ( !v12 )
          goto LABEL_37;
        v9 = a3;
      }
      else if ( !v12 )
      {
        if ( !v13 )
          return -1073741637;
        goto LABEL_39;
      }
      v22 = (unsigned int *)(v12 + 12);
      v23 = (unsigned __int64)&v12[*((unsigned int *)v12 + 2) + 12];
      v32 = v23;
      while ( (unsigned __int64)v22 < v23 )
      {
        if ( !(unsigned __int8)RtlpIsAddressInIgnoreRegion(*v22, a7, a8, a9) )
        {
          v24 = (unsigned __int64)v22 + v22[1];
          v25 = (__int16 *)(v22 + 2);
          if ( (unsigned __int64)(v22 + 2) < v24 )
          {
            do
            {
              if ( (*v25 & 0xFFF) != 0 || v25 == (__int16 *)(v22 + 2) )
                RtlApplyIndirectRelocationToImage((unsigned __int64)BaseOfImage, v9, v34, a5, *v22, v25);
              ++v25;
            }
            while ( (unsigned __int64)v25 < v24 );
            v23 = v32;
          }
        }
        v22 = (unsigned int *)((char *)v22 + v22[1]);
      }
LABEL_37:
      if ( !v13 )
        return 0;
      v9 = a3;
LABEL_39:
      v26 = (unsigned __int64)&v13[*((unsigned int *)v13 + 2) + 12];
      v27 = (unsigned int *)(v13 + 12);
      v33 = v26;
      while ( (unsigned __int64)v27 < v26 )
      {
        if ( !(unsigned __int8)RtlpIsAddressInIgnoreRegion(*v27, a7, a8, a9) )
        {
          v28 = (unsigned __int64)v27 + v27[1];
          v29 = v27 + 2;
          if ( (unsigned __int64)(v27 + 2) < v28 )
          {
            do
            {
              if ( (*(_WORD *)v29 & 0xFFF) != 0 || v29 == v27 + 2 )
                RtlApplySwitchJumpRelocationToImage((unsigned __int64)BaseOfImage, v9, (__int64)v34, a5, *v27, v29);
              v29 = (unsigned int *)((char *)v29 + 2);
            }
            while ( (unsigned __int64)v29 < v28 );
            v26 = v33;
          }
        }
        v27 = (unsigned int *)((char *)v27 + v27[1]);
      }
      return 0;
    }
  }
  return result;
}
