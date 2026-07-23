/*
 * XREFs of EtwpCompressBuffer @ 0x14064F3BC
 * Callers:
 *     EtwpCompressPendingBuffers @ 0x14064F724 (EtwpCompressPendingBuffers.c)
 * Callees:
 *     RtlCompressBuffer @ 0x140383BB0 (RtlCompressBuffer.c)
 *     EtwpUpdateEventsLostCount @ 0x1403FB298 (EtwpUpdateEventsLostCount.c)
 *     EtwpGetNextEventOffsetType @ 0x1404A7234 (EtwpGetNextEventOffsetType.c)
 *     EtwpRotateCompressionTarget @ 0x14064FD9C (EtwpRotateCompressionTarget.c)
 *     EtwpRotateCompressionTargetIfNeeded @ 0x14064FE08 (EtwpRotateCompressionTargetIfNeeded.c)
 */

__int64 __fastcall EtwpCompressBuffer(__int64 a1, __int64 a2)
{
  unsigned int v4; // r15d
  ULONG v5; // ebx
  unsigned int v6; // esi
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // r12
  __int64 v11; // r13
  __int64 v12; // r8
  ULONG CompressedBufferSize; // r9d
  NTSTATUS v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // ebx
  unsigned int NextEventOffsetType; // eax
  ULONG v18; // r10d
  unsigned int v19; // r9d
  unsigned int v20; // eax
  ULONG v21; // eax
  ULONG v22; // eax
  unsigned int v24; // [rsp+40h] [rbp-10h]
  ULONG v25; // [rsp+44h] [rbp-Ch]
  ULONG FinalCompressedSize; // [rsp+98h] [rbp+48h] BYREF
  unsigned int v27; // [rsp+A0h] [rbp+50h] BYREF
  ULONG v28; // [rsp+A8h] [rbp+58h]

  FinalCompressedSize = 0;
  v27 = 0;
  if ( *(_DWORD *)(a2 + 8) <= *(_DWORD *)a2 )
    v4 = *(_DWORD *)(a2 + 8);
  else
    v4 = *(_DWORD *)(a2 + 4);
  v5 = v4 - 72;
  v6 = 72;
  if ( v4 == 72 )
  {
LABEL_5:
    LODWORD(v7) = 0;
    return (unsigned int)v7;
  }
  EtwpRotateCompressionTargetIfNeeded();
LABEL_7:
  v8 = *(_QWORD *)(a1 + 1416);
  if ( !v8 )
  {
    ++*(_DWORD *)(a1 + 252);
    return 3221225495LL;
  }
  v9 = *(unsigned int *)(v8 + 8);
  v10 = *(_QWORD *)(a1 + 1416);
  v11 = (unsigned int)v9;
  v12 = v9 + 72;
  CompressedBufferSize = *(_DWORD *)(a1 + 4) - *(_DWORD *)(v10 + 8) - 72;
  v28 = CompressedBufferSize;
  if ( *(_DWORD *)(v10 + 8) == 72 || v5 < *(_DWORD *)(a1 + 1436) * CompressedBufferSize )
  {
    v14 = RtlCompressBuffer(
            3u,
            (PUCHAR)(a2 + v6),
            v5,
            (PUCHAR)(v12 + v10),
            CompressedBufferSize,
            0,
            &FinalCompressedSize,
            *(PVOID *)(a1 + 1424));
    v7 = (unsigned int)v14;
    if ( v14 >= 0 )
    {
      *(_OWORD *)(v10 + v11) = *(_OWORD *)a2;
      *(_OWORD *)(v10 + v11 + 16) = *(_OWORD *)(a2 + 16);
      *(_OWORD *)(v10 + v11 + 32) = *(_OWORD *)(a2 + 32);
      *(_OWORD *)(v10 + v11 + 48) = *(_OWORD *)(a2 + 48);
      *(_QWORD *)(v10 + v11 + 64) = *(_QWORD *)(a2 + 64);
      v22 = FinalCompressedSize;
      *(_QWORD *)(v10 + v11 + 24) = 0LL;
      *(_DWORD *)(v10 + v11) = v22 + 72;
      *(_DWORD *)(v10 + v11 + 8) = v5 + 72;
      *(_DWORD *)(v10 + v11 + 4) = v5 + 72;
      *(_DWORD *)(v10 + v11 + 12) = 0;
      *(_DWORD *)(v10 + v11 + 44) = 3;
      *(_DWORD *)(*(_QWORD *)(a1 + 1416) + 8LL) += 72;
      *(_DWORD *)(*(_QWORD *)(a1 + 1416) + 8LL) += FinalCompressedSize;
      return (unsigned int)v7;
    }
  }
  v15 = 1;
LABEL_12:
  v24 = v15;
  while ( 1 )
  {
    if ( v15 > *(_DWORD *)(a1 + 1440) )
    {
LABEL_27:
      EtwpRotateCompressionTarget(a1, v7, v12);
LABEL_28:
      v5 = v4 - v6;
      goto LABEL_7;
    }
    v16 = v6 + (v5 >> v15);
    NextEventOffsetType = EtwpGetNextEventOffsetType((unsigned int *)a2, v6, &v27);
    v7 = NextEventOffsetType;
    if ( NextEventOffsetType )
    {
      v19 = v6;
      do
      {
        if ( v19 + v27 > v16 )
          break;
        v20 = EtwpGetNextEventOffsetType((unsigned int *)a2, v27 + v18 + v6, &v27);
        v7 = v20;
      }
      while ( v20 );
      v25 = v18;
      if ( v18 )
      {
        if ( RtlCompressBuffer(
               3u,
               (PUCHAR)(a2 + v6),
               v18,
               (PUCHAR)(v11 + v10 + 72),
               v28,
               0,
               &FinalCompressedSize,
               *(PVOID *)(a1 + 1424)) < 0 )
        {
          v15 = v24 + 1;
          v5 = v4 - v6;
          goto LABEL_12;
        }
        *(_OWORD *)(v10 + v11) = *(_OWORD *)a2;
        *(_OWORD *)(v10 + v11 + 16) = *(_OWORD *)(a2 + 16);
        *(_OWORD *)(v10 + v11 + 32) = *(_OWORD *)(a2 + 32);
        *(_OWORD *)(v10 + v11 + 48) = *(_OWORD *)(a2 + 48);
        *(_QWORD *)(v10 + v11 + 64) = *(_QWORD *)(a2 + 64);
        v21 = FinalCompressedSize;
        *(_QWORD *)(v10 + v11 + 24) = 0LL;
        *(_DWORD *)(v10 + v11) = v21 + 72;
        *(_DWORD *)(v10 + v11 + 8) = v25 + 72;
        *(_DWORD *)(v10 + v11 + 4) = v25 + 72;
        *(_DWORD *)(v10 + v11 + 12) = 0;
        *(_DWORD *)(v10 + v11 + 44) = 3;
        *(_DWORD *)(*(_QWORD *)(a1 + 1416) + 8LL) += 72;
        *(_DWORD *)(*(_QWORD *)(a1 + 1416) + 8LL) += FinalCompressedSize;
        EtwpRotateCompressionTarget(a1, v7, v12);
        v6 += v25;
        goto LABEL_28;
      }
    }
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 1416) + 8LL) != 72 )
      goto LABEL_27;
    if ( !(_DWORD)v7 )
      break;
    EtwpUpdateEventsLostCount(a1);
    v6 += v27;
    if ( v6 == v4 )
      goto LABEL_5;
    if ( v6 > v4 )
      goto LABEL_30;
    v15 = v24;
    v5 = v4 - v6;
  }
  ++*(_DWORD *)(a1 + 252);
LABEL_30:
  LODWORD(v7) = -1073741566;
  return (unsigned int)v7;
}
