/*
 * XREFs of PopRecordPepWorkorderBlackboxInformation @ 0x1405DE620
 * Callers:
 *     PopRecordPoBlackboxInformation @ 0x140765D88 (PopRecordPoBlackboxInformation.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     NtPowerInformation @ 0x1409EDB00 (NtPowerInformation.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void PopRecordPepWorkorderBlackboxInformation()
{
  unsigned int v0; // esi
  void *v1; // rbx
  KIRQL v2; // bp
  __int64 *v3; // rax
  __int64 v4; // rcx
  ULONG_PTR v5; // rdi
  _DWORD *Pool2; // rax
  _DWORD *v7; // r8
  __int64 *i; // r9
  unsigned __int64 v9; // kr00_8
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  __int128 InputBuffer; // [rsp+30h] [rbp-28h] BYREF
  __int128 v14; // [rsp+40h] [rbp-18h]

  InputBuffer = 0LL;
  v0 = 0;
  v1 = 0LL;
  v14 = 0LL;
  v2 = KeAcquireSpinLockRaiseToDpc(&PopWorkOrderLock);
  v3 = (__int64 *)PopWorkOrderList;
  if ( (__int64 *)PopWorkOrderList == &PopWorkOrderList )
    goto LABEL_13;
  do
  {
    v3 = (__int64 *)*v3;
    v4 = v0++;
  }
  while ( v3 != &PopWorkOrderList );
  if ( !v0 )
  {
LABEL_13:
    v5 = 0LL;
  }
  else
  {
    v5 = 48 * v4 + 64;
    Pool2 = (_DWORD *)ExAllocatePool2(0x40uLL, v5, 0x42424F50u);
    v1 = Pool2;
    if ( Pool2 )
    {
      *Pool2 = 1;
      v7 = Pool2 + 4;
      Pool2[1] = v5;
      Pool2[2] = v0;
      for ( i = (__int64 *)PopWorkOrderList; i != &PopWorkOrderList; v7 += 12 )
      {
        v9 = MEMORY[0xFFFFF78000000008] - i[20];
        *((_QWORD *)v7 + 1) = i;
        *v7 = v9 / 0x2710;
        *((_QWORD *)v7 + 2) = i[18];
        v10 = i[19];
        *((_QWORD *)v7 + 3) = v10;
        if ( v10 )
        {
          v7[8] = *(_DWORD *)v10;
          if ( v10 != -8 )
          {
            v11 = *(_QWORD *)(v10 + 8);
            if ( v11 )
            {
              v12 = *(_QWORD *)(v11 + 64);
              if ( v12 )
                *((_QWORD *)v7 + 5) = *(_QWORD *)(v12 + 96);
            }
          }
        }
        i = (__int64 *)*i;
      }
    }
  }
  KeReleaseSpinLock(&PopWorkOrderLock, v2);
  if ( v5 )
  {
    *(_QWORD *)&v14 = 0LL;
    *((_QWORD *)&v14 + 1) = 7LL;
    *(_QWORD *)&InputBuffer = v1;
    *((_QWORD *)&InputBuffer + 1) = (unsigned int)v5;
    NtPowerInformation(UpdateBlackBoxRecorder, &InputBuffer, 0x20u, 0LL, 0);
  }
  if ( v1 )
    ExFreePoolWithTag(v1, 0x42424F50u);
}
