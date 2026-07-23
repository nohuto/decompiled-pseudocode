/*
 * XREFs of EtwpCovSampHashLookupInTable @ 0x1409C3200
 * Callers:
 *     EtwpCovSampContextAddSamples @ 0x140923570 (EtwpCovSampContextAddSamples.c)
 *     EtwpCovSampHashMakeRoomAndAcquireLock @ 0x140ADBF60 (EtwpCovSampHashMakeRoomAndAcquireLock.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpCovSampHashLookupInTable(__int64 a1, unsigned __int8 *a2, _QWORD *a3)
{
  int v4; // ebp
  __int64 v5; // r8
  int v6; // edi
  __int64 v7; // r9
  int v8; // r10d
  __int64 i; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax

  v4 = *(_DWORD *)(a1 + 20) - 1;
  v5 = *(_QWORD *)(a1 + 24);
  v6 = 0;
  v7 = *(_QWORD *)a2;
  v8 = a2[7]
     + 37 * (a2[6] + 37 * (a2[5] + 37 * (a2[4] + 37 * (a2[3] + 37 * (a2[2] + 37 * (a2[1] + 37 * (*a2 + 11623883)))))));
  for ( i = v8 & (unsigned int)v4; ; i = v4 & (unsigned int)(v6 + i) )
  {
    v10 = *(_QWORD *)(v5 + 8 * i);
    v11 = v5 + 8 * i;
    if ( v10 == v7 )
    {
      *a3 = v11;
      return 1LL;
    }
    if ( !v10 )
      break;
    if ( !v6 )
    {
      v6 = -1640531535 * v8 + 1;
      if ( ((-79 * (_BYTE)v8) & 1) != 0 )
        v6 = -1640531535 * v8;
    }
  }
  *a3 = v11;
  return 0LL;
}
