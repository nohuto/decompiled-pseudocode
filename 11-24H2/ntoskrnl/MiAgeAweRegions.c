/*
 * XREFs of MiAgeAweRegions @ 0x14043DAC0
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x1402F35B0 (MiTrimOrAgeWorkingSet.c)
 * Callees:
 *     MiReleaseSpinLockShared @ 0x14020CFC0 (MiReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x1402C2D30 (ExAcquireSpinLockShared.c)
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 */

struct _KTHREAD *MiAgeAweRegions()
{
  struct _KTHREAD *result; // rax
  _KPROCESS *Process; // rdi
  volatile _KAFFINITY_EX *ActiveProcessors; // rbx
  int v3; // ebp
  KIRQL v4; // al
  unsigned __int64 v5; // r8
  __int64 v6; // r9
  _QWORD *v7; // rcx
  unsigned __int64 j; // rdx
  unsigned __int8 i; // r14
  char v10; // al
  _QWORD **v11; // rax
  unsigned __int64 v12; // rcx
  _QWORD *v13; // rcx
  unsigned __int8 v14; // al
  unsigned __int64 v15; // rax
  __int64 *v16; // rcx
  char v17; // r11
  __int64 *v18; // r10
  bool v19; // zf
  bool k; // zf

  result = KeGetCurrentThread();
  Process = result->ApcState.Process;
  ActiveProcessors = Process[2].ActiveProcessors;
  if ( ActiveProcessors[4].StaticBitmap[5] )
  {
    v3 = 0;
    v4 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)&ActiveProcessors[4].StaticBitmap[8]);
    v7 = (_QWORD *)ActiveProcessors[4].StaticBitmap[5];
    j = 0LL;
    for ( i = v4; v7; v7 = (_QWORD *)*v7 )
      j = (unsigned __int64)v7;
    if ( j )
    {
      while ( 1 )
      {
        v5 = *(_QWORD *)(j + 48);
        if ( !v5 )
          goto LABEL_7;
        v10 = *(_BYTE *)(j + 64);
        if ( v10 == -1 )
          goto LABEL_7;
        v14 = v10 + 1;
        *(_BYTE *)(j + 64) = v14;
        if ( v3 || v14 < 0x3Fu )
          goto LABEL_7;
        v15 = *(_QWORD *)(j + 48);
        if ( !v15 )
          goto LABEL_22;
        if ( v5 > 1 )
          break;
        if ( _bittest64(*(const signed __int64 **)(j + 56), 0) )
          goto LABEL_22;
LABEL_7:
        v11 = *(_QWORD ***)(j + 8);
        v12 = j;
        if ( v11 )
        {
          v13 = *v11;
          for ( j = *(_QWORD *)(j + 8); v13; v13 = (_QWORD *)*v13 )
            j = (unsigned __int64)v13;
        }
        else
        {
          for ( j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL; j; j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL )
          {
            if ( *(_QWORD *)j == v12 )
              break;
            v12 = j;
          }
        }
        if ( !j )
        {
          if ( v3 )
          {
            if ( !ActiveProcessors[4].StaticBitmap[11] )
            {
              ObfReferenceObjectWithTag(Process, 0x68506D4Du);
              ActiveProcessors[4].StaticBitmap[12] = (unsigned __int64)Process;
              ActiveProcessors[4].StaticBitmap[11] = (unsigned __int64)MiDeleteAwePageTables;
              ActiveProcessors[4].StaticBitmap[9] = 0LL;
              ExQueueWorkItem((PWORK_QUEUE_ITEM)&ActiveProcessors[4].StaticBitmap[9], BackgroundWorkQueue);
            }
          }
          return (struct _KTHREAD *)MiReleaseSpinLockShared(
                                      (volatile signed __int32 *)&ActiveProcessors[4].StaticBitmap[8],
                                      i,
                                      v5,
                                      v6);
        }
      }
      if ( v15 >= v5 )
      {
        v16 = *(__int64 **)(j + 56);
        v17 = v5 - 1;
        v6 = *v16;
        v18 = &v16[(v5 - 1) >> 6];
        if ( v16 == v18 )
        {
          v19 = (v6 & (0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v5))) == 0;
LABEL_26:
          if ( v19 )
            goto LABEL_7;
        }
        else
        {
          for ( k = v6 == 0; k; k = v5 == 0 )
          {
            v5 = v16[1];
            if ( ++v16 == v18 )
            {
              v19 = (v5 & (0xFFFFFFFFFFFFFFFFuLL >> ~v17)) == 0;
              goto LABEL_26;
            }
          }
        }
      }
LABEL_22:
      v3 = 1;
      goto LABEL_7;
    }
    return (struct _KTHREAD *)MiReleaseSpinLockShared(
                                (volatile signed __int32 *)&ActiveProcessors[4].StaticBitmap[8],
                                i,
                                v5,
                                v6);
  }
  return result;
}
