/*
 * XREFs of ??0TraceDxgkSignalSynchronizationObjectArrays@@QEAA@IQEBQEBU_VIDSCH_SYNC_OBJECT@@PEB_K@Z @ 0x14000D960
 * Callers:
 *     VidSchiCompleteSignalCommmand @ 0x14000DCD0 (VidSchiCompleteSignalCommmand.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x140013C80 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 * Callees:
 *     memset @ 0x140056340 (memset.c)
 */

TraceDxgkSignalSynchronizationObjectArrays *__fastcall TraceDxgkSignalSynchronizationObjectArrays::TraceDxgkSignalSynchronizationObjectArrays(
        TraceDxgkSignalSynchronizationObjectArrays *this,
        unsigned int a2,
        const struct _VIDSCH_SYNC_OBJECT *const *a3,
        char *a4)
{
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rsi
  char *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  bool v13; // zf
  __int64 v15; // r9
  const struct _VIDSCH_SYNC_OBJECT *const *v16; // rdx
  signed __int64 v17; // r10
  __int64 v18; // rcx

  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 6) = 0;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 14) = 0;
  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 24) = 0;
  v7 = a2;
  if ( a2 <= 2 )
  {
    v9 = (char *)this + 8;
    *(_QWORD *)this = v9;
    if ( a2 )
      memset(v9, 0, 8LL * a2);
    goto LABEL_6;
  }
  v8 = a2;
  if ( 0xFFFFFFFFFFFFFFFFuLL / a2 >= 8 )
  {
    *(_QWORD *)this = ExAllocatePool2(64LL, 8LL * a2, 945908054LL);
LABEL_6:
    v10 = *(_QWORD *)this;
    v8 = v7;
    *((_DWORD *)this + 6) = v7;
    goto LABEL_7;
  }
  v10 = 0LL;
LABEL_7:
  *((_QWORD *)this + 4) = v10;
  if ( (unsigned int)v7 <= 2 )
  {
    *((_QWORD *)this + 5) = (char *)this + 48;
    if ( (_DWORD)v7 )
      memset((char *)this + 48, 0, 4 * v8);
    goto LABEL_10;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / v8 >= 4 )
  {
    *((_QWORD *)this + 5) = ExAllocatePool2(64LL, 4 * v8, 945908054LL);
LABEL_10:
    v11 = *((_QWORD *)this + 5);
    *((_DWORD *)this + 14) = v7;
    goto LABEL_11;
  }
  v11 = 0LL;
LABEL_11:
  *((_QWORD *)this + 8) = v11;
  if ( (unsigned int)v7 > 2 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v8 < 8 )
    {
      v12 = 0LL;
      goto LABEL_15;
    }
    *((_QWORD *)this + 9) = ExAllocatePool2(64LL, 8 * v8, 945908054LL);
  }
  else
  {
    *((_QWORD *)this + 9) = (char *)this + 80;
    if ( (_DWORD)v7 )
      memset((char *)this + 80, 0, 8 * v8);
  }
  v12 = *((_QWORD *)this + 9);
  *((_DWORD *)this + 24) = v7;
LABEL_15:
  v13 = *((_QWORD *)this + 4) == 0LL;
  *((_QWORD *)this + 13) = v12;
  if ( !v13 && *((_QWORD *)this + 8) && v12 && (_DWORD)v7 )
  {
    v15 = 0LL;
    v16 = a3;
    do
    {
      v17 = (char *)v16 - (char *)a3;
      *(_QWORD *)((char *)v16 - (char *)a3 + *((_QWORD *)this + 4)) = *((_QWORD *)*v16 + 2);
      *(_DWORD *)(v15 + *((_QWORD *)this + 8)) = *((unsigned __int8 *)*v16 + 29);
      if ( a4 )
        v18 = *(__int64 *)((char *)v16 + a4 - (char *)a3);
      else
        v18 = 0LL;
      v15 += 4LL;
      ++v16;
      *(_QWORD *)(v17 + *((_QWORD *)this + 13)) = v18;
      --v8;
    }
    while ( v8 );
  }
  return this;
}
