/*
 * XREFs of ?ReportSegmentState@VIDMM_SEGMENT@@QEAAXXZ @ 0x1400C1C80
 * Callers:
 *     ?ReportVidMmStateWorker@VIDMM_GLOBAL@@QEAAXXZ @ 0x1400C05B0 (-ReportVidMmStateWorker@VIDMM_GLOBAL@@QEAAXXZ.c)
 * Callees:
 *     McTemplateK0pqx_EtwWriteTransfer @ 0x140005BFC (McTemplateK0pqx_EtwWriteTransfer.c)
 *     McTemplateK0pppttxqx_EtwWriteTransfer @ 0x140042B20 (McTemplateK0pppttxqx_EtwWriteTransfer.c)
 *     LogLockAllocationBackingStoreToEtw @ 0x1400C2944 (LogLockAllocationBackingStoreToEtw.c)
 */

void __fastcall VIDMM_SEGMENT::ReportSegmentState(VIDMM_SEGMENT *this)
{
  char *v1; // r12
  char *v3; // rsi
  char *v4; // r13
  _QWORD **v5; // r13
  _QWORD *v6; // r14
  _QWORD **v7; // rbp
  _QWORD *i; // rbx
  _QWORD *v9; // rbx
  _QWORD **v10; // rbx
  _QWORD *v11; // r15
  _QWORD *v12; // r9
  _QWORD *v13; // r8
  VIDMM_SEGMENT **v14; // rcx
  BOOL v15; // r10d
  __int64 v16; // rcx
  __int64 v17; // [rsp+30h] [rbp-68h]
  __int64 v18; // [rsp+38h] [rbp-60h]
  __int64 v19; // [rsp+48h] [rbp-50h]
  _QWORD **v20; // [rsp+A8h] [rbp+10h]
  _QWORD *v21; // [rsp+B0h] [rbp+18h]

  v1 = (char *)this + 192;
  v3 = (char *)*((_QWORD *)this + 24);
  while ( v3 != v1 )
  {
    v4 = v3;
    v3 = *(char **)v3;
    v5 = (_QWORD **)(v4 + 16);
    v6 = *v5;
    while ( v6 != v5 )
    {
      v9 = v6;
      v6 = (_QWORD *)*v6;
      v10 = (_QWORD **)(v9 + 2);
      v20 = v10;
      v11 = *v10;
      while ( v11 != v10 )
      {
        v12 = v11 - 7;
        v11 = (_QWORD *)*v11;
        v13 = *(_QWORD **)*v12;
        v21 = v13;
        v14 = (VIDMM_SEGMENT **)(*v13 + 144LL);
        if ( (*(VIDMM_SEGMENT **)(*v13 + 64LL) == this || *v14 == this) && (byte_140081241 & 1) != 0 )
        {
          v15 = *v14 == this;
          LODWORD(v19) = (unsigned __int16)(*((_WORD *)this + 20) + 1);
          v16 = *(unsigned int *)(v13[47] + 16LL);
          LODWORD(v18) = v15;
          LODWORD(v17) = v16 != 0;
          McTemplateK0pppttxqx_EtwWriteTransfer(
            v16,
            v12[1],
            (_DWORD)v16 != 0,
            *(_QWORD *)(*(_QWORD *)(*v12 + 8LL) + 8LL),
            *(_QWORD *)(v12[1] + 24LL),
            v12,
            v17,
            v18,
            *(_QWORD *)(*v13 + 16LL),
            v19,
            *(_QWORD *)(*v13 + 72LL));
          v13 = v21;
          v10 = v20;
        }
        if ( (*((_DWORD *)this + 26) & 0x1001) != 0 )
          LogLockAllocationBackingStoreToEtw(v13);
      }
    }
  }
  v7 = (_QWORD **)((char *)this + 216);
  for ( i = *v7; i != v7; i = (_QWORD *)*i )
  {
    if ( (byte_140081241 & 1) != 0 )
      McTemplateK0pqx_EtwWriteTransfer();
  }
}
