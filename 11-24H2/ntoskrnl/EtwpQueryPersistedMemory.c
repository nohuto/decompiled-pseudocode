/*
 * XREFs of EtwpQueryPersistedMemory @ 0x1407B01C4
 * Callers:
 *     EtwpSavePersistedLogger @ 0x1407B02B0 (EtwpSavePersistedLogger.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpQueryPersistedMemory(__int64 a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  int v7; // eax
  int v8; // ebx
  void *Pool2; // rdi

  v7 = KsrClaimPersistedMemory(EtwpKsrGuid, a2, 0LL, 0LL);
  v8 = v7;
  if ( v7 == -1073741789 )
  {
    Pool2 = (void *)ExAllocatePool2(0x40uLL, 0LL, 0x4B777445u);
    if ( Pool2 )
    {
      v8 = KsrClaimPersistedMemory(EtwpKsrGuid, a2, Pool2, 0LL);
      if ( v8 < 0 )
      {
        ExFreePoolWithTag(Pool2, 0);
      }
      else
      {
        *a4 = 0;
        *a3 = Pool2;
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else if ( v7 >= 0 )
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v8;
}
