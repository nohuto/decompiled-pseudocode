/*
 * XREFs of RtlGetCompressionWorkSpaceSize @ 0x140376230
 * Callers:
 *     ?StStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_CREATE_PARAMS@@@Z @ 0x1403767E4 (-StStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_CREATE_PARAMS@@@Z.c)
 *     ?SmCompressCtxStart@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@W4_ST_COMPRESSION_FORMAT@@@Z @ 0x140608610 (-SmCompressCtxStart@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@W4_ST_COMPRESSI.c)
 *     PopHiberInitializeResources @ 0x1407507DC (PopHiberInitializeResources.c)
 *     EtwpInitializeCompressedWriter @ 0x1407AFCCC (EtwpInitializeCompressedWriter.c)
 *     sub_140BE30B0 @ 0x140BE30B0 (sub_140BE30B0.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     RtlCompressWorkSpaceSizeLZNT1 @ 0x140B6AEA0 (RtlCompressWorkSpaceSizeLZNT1.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall RtlGetCompressionWorkSpaceSize(
        USHORT CompressionFormatAndEngine,
        PULONG CompressBufferWorkSpaceSize,
        PULONG CompressFragmentWorkSpaceSize)
{
  unsigned __int16 v3; // ax

  v3 = (unsigned __int8)CompressionFormatAndEngine;
  if ( (unsigned __int8)CompressionFormatAndEngine < 2u )
    return -1073741811;
  if ( (unsigned __int8)CompressionFormatAndEngine > 8u )
    return -1073741217;
  CompressionFormatAndEngine &= 0xFF00u;
  if ( (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))RtlWorkSpaceProcs[v3] == RtlCompressWorkSpaceSizeLZNT1 )
    return RtlCompressWorkSpaceSizeLZNT1(
             CompressionFormatAndEngine,
             CompressBufferWorkSpaceSize,
             CompressFragmentWorkSpaceSize);
  else
    return guard_dispatch_icall_no_overrides(CompressionFormatAndEngine, CompressBufferWorkSpaceSize);
}
