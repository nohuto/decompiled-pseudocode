/*
 * XREFs of PnpBuildUnsafeRemovalDeviceList @ 0x140A6CA78
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x1409BBF7C (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     PnpIsBeingRemovedSafely @ 0x140A6CBC8 (PnpIsBeingRemovedSafely.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

void __fastcall PnpBuildUnsafeRemovalDeviceList(__int64 a1, unsigned int **a2, __int64 *a3)
{
  unsigned int *v5; // r11
  __int64 v6; // r9
  unsigned int v7; // r10d
  unsigned int v8; // r14d
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 Pool2; // rax
  __int64 v14; // r8
  _WORD *v15; // rbx
  __int64 v16; // r9
  unsigned int *v17; // rdx
  unsigned int v18; // ecx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  int v22; // ebp
  __int64 v23; // rdx
  __int64 v24; // rsi
  const void *v25; // rdx

  *a3 = 0LL;
  if ( a2 )
  {
    v5 = *a2;
    v6 = 0LL;
    v7 = 0;
    v8 = **a2;
    while ( v7 < v8 && v5 )
    {
      v9 = v7++;
      v10 = v5[6 * v9 + 6];
      v11 = *(_QWORD *)&v5[6 * v9 + 4];
      if ( (_DWORD)v10 )
      {
        v12 = *(_QWORD *)(*(_QWORD *)(v11 + 312) + 40LL);
        if ( !(unsigned __int8)PnpIsBeingRemovedSafely(v12, v10, a3, v6) )
        {
          if ( *(_QWORD *)(v12 + 48) )
            v6 = (unsigned int)*(unsigned __int16 *)(v12 + 40) + (_DWORD)v6 + 2;
        }
      }
    }
    if ( (_DWORD)v6 )
    {
      Pool2 = ExAllocatePool2(0x100uLL, (unsigned int)(v6 + 2), 0x4B706E50u);
      *a3 = Pool2;
      v15 = (_WORD *)Pool2;
      if ( Pool2 )
      {
        LODWORD(v16) = 0;
        while ( *((_BYTE *)a2 + 8) )
        {
          v17 = *a2;
          v18 = **a2;
          if ( (unsigned int)v16 >= v18 )
            break;
          v19 = v18 + ~(_DWORD)v16;
          if ( !v17 || (unsigned int)v19 >= v18 )
            break;
          v20 = 3 * v19;
          v21 = *(_QWORD *)&v17[6 * v19 + 4];
          v22 = v16 + 1;
          v23 = v17[2 * v20 + 6];
          v16 = (unsigned int)(v16 + 1);
          if ( (_DWORD)v23 )
          {
            v24 = *(_QWORD *)(*(_QWORD *)(v21 + 312) + 40LL);
            if ( !(unsigned __int8)PnpIsBeingRemovedSafely(v24, v23, v14, v16) )
            {
              v25 = *(const void **)(v24 + 48);
              if ( v25 )
              {
                memmove(v15, v25, *(unsigned __int16 *)(v24 + 40));
                v15 += ((unsigned __int64)*(unsigned __int16 *)(v24 + 40) >> 1) + 1;
              }
              LODWORD(v16) = v22;
            }
          }
        }
        *v15 = 0;
      }
    }
  }
}
