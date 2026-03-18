/*
 * XREFs of ?bPushMergeScrScan@STACKOBJ@@QEAAHXZ @ 0x14015C304
 * Callers:
 *     ?bExtendScanline@FLOODBM@@QEAAHAEAVSTACKOBJ@@0JPEAE1@Z @ 0x14015C07C (-bExtendScanline@FLOODBM@@QEAAHAEAVSTACKOBJ@@0JPEAE1@Z.c)
 * Callees:
 *     ?bExpandScanline@STACKOBJ@@QEAAHKK@Z @ 0x14015C704 (-bExpandScanline@STACKOBJ@@QEAAHKK@Z.c)
 *     ?bExpand@STACKOBJ@@QEAAHK@Z @ 0x14033C604 (-bExpand@STACKOBJ@@QEAAHK@Z.c)
 *     ?vMergeSpans@@YAXPEAU_SPAN@@0000@Z @ 0x14033C6B8 (-vMergeSpans@@YAXPEAU_SPAN@@0000@Z.c)
 *     memmove @ 0x140340480 (memmove.c)
 */

__int64 __fastcall STACKOBJ::bPushMergeScrScan(STACKOBJ *this)
{
  char *v1; // rsi
  unsigned int *v3; // r14
  unsigned int v4; // edi
  unsigned int v6; // edi
  unsigned int v7; // edx
  unsigned int v8; // r15d
  void **v9; // r11
  __int64 v10; // r8
  char *v11; // r8

  v1 = (char *)this + 16;
  v3 = (unsigned int *)*((_QWORD *)this + 2);
  v4 = v3[4];
  if ( !v4 )
    return 1LL;
  v6 = 8 * v4 + 28;
  v7 = v6 + *((_DWORD *)this + 1);
  v8 = v6;
  if ( v7 > *(_DWORD *)this )
  {
    if ( !(unsigned int)STACKOBJ::bExpand(this, v7) )
      return 0LL;
    v1 = (char *)this + 16;
  }
  v9 = (void **)((char *)this + 8);
  *((_QWORD *)v3 + 1) = *((_QWORD *)this + 1);
  if ( !*((_DWORD *)this + 1) )
  {
LABEL_5:
    *((_DWORD *)this + 1) += v8;
    *v3 = v6;
    memmove(*v9, v3, v6);
    return 1LL;
  }
  v10 = *(unsigned int *)*v9;
  if ( *((_DWORD *)*v9 + 5) != *(_DWORD *)(*(_QWORD *)v1 + 20LL) )
  {
    *v9 = (char *)*v9 + v10;
    goto LABEL_5;
  }
  v6 += v10 - 28;
  v8 -= 28;
  v11 = v1;
  if ( v6 <= **((_DWORD **)this + 3) )
  {
LABEL_12:
    *(_DWORD *)(*((_QWORD *)this + 3) + 20LL) = *(_DWORD *)(*(_QWORD *)v1 + 20LL);
    *(_QWORD *)(*((_QWORD *)this + 3) + 8LL) = *((_QWORD *)*v9 + 1);
    *(_DWORD *)(*((_QWORD *)this + 3) + 16LL) = *((_DWORD *)*v9 + 4) + *(_DWORD *)(*(_QWORD *)v11 + 16LL);
    vMergeSpans(
      (struct _SPAN *)((char *)*v9 + 28),
      (struct _SPAN *)((char *)*v9 + 8 * *((unsigned int *)*v9 + 4) + 28),
      (struct _SPAN *)(*(_QWORD *)v11 + 28LL),
      (struct _SPAN *)(*(_QWORD *)v11 + 8LL * *(unsigned int *)(*(_QWORD *)v11 + 16LL) + 28),
      (struct _SPAN *)(*((_QWORD *)this + 3) + 28LL));
    v3 = (unsigned int *)*((_QWORD *)this + 3);
    goto LABEL_5;
  }
  if ( (unsigned int)STACKOBJ::bExpandScanline(this, v6, 1u) )
  {
    v9 = (void **)((char *)this + 8);
    v11 = (char *)this + 16;
    goto LABEL_12;
  }
  return 0LL;
}
