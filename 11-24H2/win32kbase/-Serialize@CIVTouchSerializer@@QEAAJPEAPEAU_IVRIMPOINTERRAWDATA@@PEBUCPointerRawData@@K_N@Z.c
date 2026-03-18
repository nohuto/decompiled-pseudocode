/*
 * XREFs of ?Serialize@CIVTouchSerializer@@QEAAJPEAPEAU_IVRIMPOINTERRAWDATA@@PEBUCPointerRawData@@K_N@Z @ 0x14022165C
 * Callers:
 *     ?IVMeasureRimCompleteFrame@@YAJPEAURIMCOMPLETEFRAME@@PEAUCPointerInputFrame@@U_UNICODE_STRING@@AEAVCIVTouchSerializer@@@Z @ 0x1402161A4 (-IVMeasureRimCompleteFrame@@YAJPEAURIMCOMPLETEFRAME@@PEAUCPointerInputFrame@@U_UNICODE_STRING@@A.c)
 *     ?IVSerializeRimCompleteFrameForTouchInputPacket@@YAJPEAURIMCOMPLETEFRAME@@PEAUCPointerInputFrame@@U_UNICODE_STRING@@HAEAVCIVTouchSerializer@@@Z @ 0x140216490 (-IVSerializeRimCompleteFrameForTouchInputPacket@@YAJPEAURIMCOMPLETEFRAME@@PEAUCPointerInputFrame.c)
 * Callees:
 *     ?Ensure@CIVSerializer@@IEAA_NK@Z @ 0x1401453EC (-Ensure@CIVSerializer@@IEAA_NK@Z.c)
 *     ?Serialize@CIVSerializer@@IEAAJPEAPEAXQEAX_K_N@Z @ 0x140221408 (-Serialize@CIVSerializer@@IEAAJPEAPEAXQEAX_K_N@Z.c)
 */

__int64 __fastcall CIVTouchSerializer::Serialize(
        CIVTouchSerializer *this,
        struct _IVRIMPOINTERRAWDATA **a2,
        const struct CPointerRawData *a3,
        unsigned int a4,
        bool a5)
{
  int v9; // edx
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // r9
  struct _IVRIMPOINTERRAWDATA *v14; // rbp
  __int64 i; // rsi
  __int64 v16; // r14
  int v17; // eax

  v9 = 24 * a4;
  if ( a5 )
  {
    if ( a4 )
    {
      v10 = a4;
      do
      {
        v11 = *((_DWORD *)a3 + 2);
        a3 = (const struct CPointerRawData *)*((_QWORD *)a3 + 3);
        v9 += (v11 + 7) & 0xFFFFFFF8;
        --v10;
      }
      while ( v10 );
    }
    *((_DWORD *)this + 2) += (v9 + 7) & 0xFFFFFFF8;
    return 0LL;
  }
  if ( CIVSerializer::Ensure(this, v9) )
  {
    v14 = (struct _IVRIMPOINTERRAWDATA *)(v13 + *(_QWORD *)(v12 + 16));
    *a2 = v14;
    for ( i = 0LL; (unsigned int)i < a4; i = (unsigned int)(i + 1) )
    {
      v16 = 24 * i;
      *(_DWORD *)((char *)v14 + v16) = *((_DWORD *)a3 + 1);
      v17 = *((_DWORD *)a3 + 2);
      *(_QWORD *)((char *)v14 + v16 + 16) = 0LL;
      *(_DWORD *)((char *)v14 + v16 + 4) = v17;
      if ( (int)CIVSerializer::Serialize(
                  this,
                  (void **)v14 + 3 * i + 1,
                  *((void *const *)a3 + 2),
                  *((_DWORD *)a3 + 2),
                  0) < 0 )
        return 3221225495LL;
      if ( (_DWORD)i )
        *((_QWORD *)v14 + 3 * (unsigned int)(i - 1) + 2) = ((unsigned __int64)v14 + v16 - *((_QWORD *)this + 2)) | 1;
      a3 = (const struct CPointerRawData *)*((_QWORD *)a3 + 3);
    }
    *a2 = (struct _IVRIMPOINTERRAWDATA *)(((unsigned __int64)*a2 - *((_QWORD *)this + 2)) | 1);
    return 0LL;
  }
  return 3221225495LL;
}
