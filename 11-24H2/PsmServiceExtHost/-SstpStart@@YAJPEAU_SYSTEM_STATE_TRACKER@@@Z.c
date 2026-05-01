/*
 * XREFs of ?SstpStart@@YAJPEAU_SYSTEM_STATE_TRACKER@@@Z @ 0x18009CA60
 * Callers:
 *     SystemStateTrackerStart @ 0x18009CC0C (SystemStateTrackerStart.c)
 * Callees:
 *     CempLockAcquireExclusive @ 0x18002B830 (CempLockAcquireExclusive.c)
 *     ?SstpPublish@@YAXPEBU_SYSTEM_STATE_TRACKER@@@Z @ 0x180056164 (-SstpPublish@@YAXPEBU_SYSTEM_STATE_TRACKER@@@Z.c)
 */

__int64 __fastcall SstpStart(struct _SYSTEM_STATE_TRACKER *a1)
{
  unsigned int i; // edi
  __int64 v3; // rdx
  __int64 result; // rax
  unsigned int j; // edi

  for ( i = 0; i < *((_DWORD *)a1 + 54); ++i )
  {
    v3 = 32LL * i;
    if ( (*((_BYTE *)a1 + v3 + 40) & 1) != 0 )
    {
      result = RtlQueryWnfStateData(
                 (char *)a1 + v3 + 44,
                 *(_QWORD *)((char *)a1 + v3 + 24),
                 SstpStateChangeTriage,
                 a1,
                 0LL);
      if ( (int)result < 0 )
        return result;
    }
  }
  for ( j = 0; j < *((_DWORD *)a1 + 54); ++j )
  {
    result = RtlSubscribeWnfStateChangeNotification(
               (char *)a1 + 32 * j + 48,
               *((_QWORD *)a1 + 4 * j + 3),
               *((unsigned int *)a1 + 8 * j + 11),
               SstpOnStateChanged,
               a1,
               0LL,
               0,
               0);
    if ( (int)result < 0 )
      return result;
  }
  CempLockAcquireExclusive((__int64)a1);
  *((_DWORD *)a1 + 5) |= 1u;
  *((_DWORD *)a1 + 4) = 1;
  SstpPublish(a1);
  *((_DWORD *)a1 + 2) = 0;
  RtlReleaseSRWLockExclusive(a1);
  return 0LL;
}
