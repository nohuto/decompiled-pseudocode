/*
 * XREFs of MiAgeAweRegions @ 0x1403797D0
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x140378F30 (MiTrimOrAgeWorkingSet.c)
 * Callees:
 *     MiReleaseSpinLockShared @ 0x140244830 (MiReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x14031A1A0 (ExAcquireSpinLockShared.c)
 *     ExQueueWorkItem @ 0x140325850 (ExQueueWorkItem.c)
 *     ObfReferenceObjectWithTag @ 0x1403403E0 (ObfReferenceObjectWithTag.c)
 */

struct _KTHREAD *MiAgeAweRegions()
{
  struct _KTHREAD *result; // rax
  _KPROCESS *Process; // rdi
  volatile _KAFFINITY_EX *ActiveProcessors; // rbx
  int v3; // ebp
  KIRQL v4; // al
  _QWORD *v5; // rcx
  unsigned __int64 j; // rdx
  unsigned __int8 i; // r14
  unsigned __int64 v8; // r8
  char v9; // al
  _QWORD **v10; // rax
  unsigned __int64 v11; // rcx
  _QWORD *v12; // rcx
  unsigned __int8 v13; // al
  unsigned __int64 v14; // rax
  __int64 *v15; // rcx
  char v16; // r11
  __int64 v17; // r9
  __int64 *v18; // r10
  bool v19; // zf
  bool k; // zf
  __int64 v21; // r8

  result = KeGetCurrentThread();
  Process = result->ApcState.Process;
  ActiveProcessors = Process[2].ActiveProcessors;
  if ( ActiveProcessors[4].StaticBitmap[5] )
  {
    v3 = 0;
    v4 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)&ActiveProcessors[4].StaticBitmap[8]);
    v5 = (_QWORD *)ActiveProcessors[4].StaticBitmap[5];
    j = 0LL;
    for ( i = v4; v5; v5 = (_QWORD *)*v5 )
      j = (unsigned __int64)v5;
    if ( j )
    {
      while ( 1 )
      {
        v8 = *(_QWORD *)(j + 48);
        if ( !v8 )
          goto LABEL_7;
        v9 = *(_BYTE *)(j + 64);
        if ( v9 == -1 )
          goto LABEL_7;
        v13 = v9 + 1;
        *(_BYTE *)(j + 64) = v13;
        if ( v3 || v13 < 0x3Fu )
          goto LABEL_7;
        v14 = *(_QWORD *)(j + 48);
        if ( !v14 )
          goto LABEL_22;
        if ( v8 > 1 )
          break;
        if ( _bittest64(*(const signed __int64 **)(j + 56), 0) )
          goto LABEL_22;
LABEL_7:
        v10 = *(_QWORD ***)(j + 8);
        v11 = j;
        if ( v10 )
        {
          v12 = *v10;
          for ( j = *(_QWORD *)(j + 8); v12; v12 = (_QWORD *)*v12 )
            j = (unsigned __int64)v12;
        }
        else
        {
          for ( j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL; j; j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL )
          {
            if ( *(_QWORD *)j == v11 )
              break;
            v11 = j;
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
                                      i);
        }
      }
      if ( v14 >= v8 )
      {
        v15 = *(__int64 **)(j + 56);
        v16 = v8 - 1;
        v17 = *v15;
        v18 = &v15[(v8 - 1) >> 6];
        if ( v15 == v18 )
        {
          v19 = (v17 & (0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v8))) == 0;
LABEL_26:
          if ( v19 )
            goto LABEL_7;
        }
        else
        {
          for ( k = v17 == 0; k; k = v21 == 0 )
          {
            v21 = v15[1];
            if ( ++v15 == v18 )
            {
              v19 = (v21 & (0xFFFFFFFFFFFFFFFFuLL >> ~v16)) == 0;
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
                                i);
  }
  return result;
}
