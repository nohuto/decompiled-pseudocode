/*
 * XREFs of IopMarkPagesForDpcData @ 0x14059DBD0
 * Callers:
 *     IopAddMiniDumpPagesToPartialKernelDump @ 0x14059D638 (IopAddMiniDumpPagesToPartialKernelDump.c)
 * Callees:
 *     MmIsAddressValidEx @ 0x140244560 (MmIsAddressValidEx.c)
 *     MmAddRangeToCrashDump @ 0x140678B70 (MmAddRangeToCrashDump.c)
 */

__int64 __fastcall IopMarkPagesForDpcData(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 i; // r12
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rdx
  unsigned int j; // ebp
  _QWORD *v8; // r14
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rdx
  unsigned int k; // ebp
  __int64 v17; // rdx
  _QWORD *v18; // rbx
  __int64 *v19; // r14
  int v20; // r12d
  __int64 m; // rdi
  __int64 n; // rbp
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rdx

  v1 = 0;
  for ( i = 0LL; (unsigned int)i < (unsigned int)KeNumberProcessors_0; i = (unsigned int)(i + 1) )
  {
    v4 = KiProcessorBlock[i];
    if ( v4 )
    {
      v5 = *(_QWORD *)(v4 + 36520);
      if ( v5 )
        v1 = MmAddRangeToCrashDump(a1, v5, *(unsigned int *)(v4 + 14556));
      v6 = *(_QWORD *)(v4 + 33560);
      if ( v6 )
        v1 = MmAddRangeToCrashDump(a1, v6, *(unsigned int *)(v4 + 33572));
      for ( j = 0; j < 2; ++j )
      {
        v8 = (_QWORD *)(v4 + 48 * (j + 300LL));
        result = MmAddRangeToCrashDump(a1, v8, 48LL);
        v1 = result;
        if ( (int)result < 0 )
          return result;
        if ( v8[4] && MmIsAddressValidEx(v8[4]) )
        {
          v10 = v8[4];
          v11 = 64LL;
LABEL_14:
          result = MmAddRangeToCrashDump(a1, v10, v11);
          v1 = result;
          if ( (int)result >= 0 )
            goto LABEL_15;
          return result;
        }
LABEL_15:
        while ( 1 )
        {
          v8 = (_QWORD *)*v8;
          if ( !v8 || !MmIsAddressValidEx((__int64)v8) )
            break;
          result = MmAddRangeToCrashDump(a1, v8 - 1, 64LL);
          v1 = result;
          if ( (int)result < 0 )
            return result;
          v10 = v8[6];
          if ( v10 != 1 )
          {
            v11 = 96LL;
            goto LABEL_14;
          }
        }
      }
      v12 = *(_QWORD *)(v4 + 14496);
      if ( v12 )
      {
        result = MmAddRangeToCrashDump(a1, v12 - (unsigned int)KeDpcStackSize, (unsigned int)KeDpcStackSize);
        v1 = result;
        if ( (int)result < 0 )
          return result;
      }
      v13 = *(_QWORD *)(v4 + 34664);
      if ( v13 )
      {
        result = MmAddRangeToCrashDump(a1, v13 - (unsigned int)KeExceptionStackSize, (unsigned int)KeExceptionStackSize);
        v1 = result;
        if ( (int)result < 0 )
          return result;
      }
      if ( (PartialDumpControl & 1) == 0 )
        continue;
      v14 = *(_QWORD *)(v4 + 36824);
      if ( v14 )
      {
        result = MmAddRangeToCrashDump(a1, v14 - (unsigned int)KeIsrStackSize, (unsigned int)KeIsrStackSize);
        v1 = result;
        if ( (int)result < 0 )
          return result;
      }
      v15 = *(_QWORD *)(v4 - 376);
      if ( !v15 )
        continue;
      result = MmAddRangeToCrashDump(a1, v15, 104LL);
      v1 = result;
      if ( (int)result < 0 )
        return result;
      for ( k = 1; k <= 4; ++k )
      {
        v17 = *(_QWORD *)(*(_QWORD *)(v4 - 376) + 8LL * k + 28);
        if ( v17 )
        {
          if ( KiKvaShadow )
          {
            v18 = (_QWORD *)(v17 + 8);
            if ( *(_QWORD *)(v17 + 8) )
            {
              result = MmAddRangeToCrashDump(a1, v17, 48LL);
              if ( (int)result < 0 )
                return result;
              result = MmAddRangeToCrashDump(a1, *v18, 32LL);
              if ( (int)result < 0 )
                return result;
              v17 = *v18 + 32LL;
            }
          }
          result = MmAddRangeToCrashDump(a1, v17 - (unsigned int)KeIstStackSize, (unsigned int)KeIstStackSize);
          v1 = result;
          if ( (int)result < 0 )
            return result;
        }
      }
    }
  }
  if ( KiIntTrackRootCount && (PartialDumpControl & 1) != 0 )
  {
    v19 = (__int64 *)KiIntTrackRootList;
    v20 = 0;
    while ( v19 != &KiIntTrackRootList )
    {
      if ( !MmIsAddressValidEx((__int64)v19) )
        break;
      if ( ++v20 > (unsigned int)KiIntTrackRootCount )
        break;
      result = MmAddRangeToCrashDump(a1, v19, 224LL);
      v1 = result;
      if ( (int)result < 0 )
        return result;
      for ( m = v19[2]; (__int64 *)m != v19 + 2 && MmIsAddressValidEx(m); m = *(_QWORD *)m )
      {
        if ( *(_QWORD *)(*(_QWORD *)m + 8LL) != m || **(_QWORD **)(m + 8) != m )
          return v1;
        result = MmAddRangeToCrashDump(a1, m, 152LL);
        if ( (int)result < 0 )
          return result;
        result = MmAddRangeToCrashDump(a1, *(_QWORD *)(m + 32), 8LL * *(unsigned int *)(m + 24));
        v1 = result;
        if ( (int)result < 0 )
          return result;
        for ( n = 0LL; (unsigned int)n < *(_DWORD *)(m + 24); n = (unsigned int)(n + 1) )
        {
          result = MmAddRangeToCrashDump(a1, *(_QWORD *)(*(_QWORD *)(m + 32) + 8 * n), 288LL);
          v1 = result;
          if ( (int)result < 0 )
            return result;
          v23 = *(_QWORD *)(*(_QWORD *)(m + 32) + 8 * n);
          if ( v23 && MmIsAddressValidEx(v23) )
          {
            v24 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(m + 32) + 8 * n) + 24LL);
            if ( v24 )
            {
              result = MmAddRangeToCrashDump(a1, v24, 4096LL);
              v1 = result;
              if ( (int)result < 0 )
                return result;
            }
            v25 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(m + 32) + 8 * n) + 32LL);
            if ( v25 )
            {
              result = MmAddRangeToCrashDump(a1, v25, 4096LL);
              v1 = result;
              if ( (int)result < 0 )
                return result;
            }
            v26 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(m + 32) + 8 * n) + 48LL);
            if ( v26 )
            {
              result = MmAddRangeToCrashDump(a1, v26, 4096LL);
              v1 = result;
              if ( (int)result < 0 )
                return result;
            }
          }
        }
      }
      v19 = (__int64 *)*v19;
    }
  }
  return v1;
}
