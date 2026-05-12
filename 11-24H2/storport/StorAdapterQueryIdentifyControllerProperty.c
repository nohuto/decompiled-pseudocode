/*
 * XREFs of StorAdapterQueryIdentifyControllerProperty @ 0x14018CF64
 * Callers:
 *     RaidAdapterStorageInternalQueryPropertyIoctl @ 0x140062DCC (RaidAdapterStorageInternalQueryPropertyIoctl.c)
 * Callees:
 *     memmove @ 0x140143780 (memmove.c)
 */

__int64 __fastcall StorAdapterQueryIdentifyControllerProperty(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rax
  unsigned int v4; // ebx
  const void *v7; // rdx

  v3 = *(_QWORD *)(a2 + 184);
  v4 = 0;
  *a3 = 0LL;
  if ( *(_DWORD *)(v3 + 8) >= 0x1000u )
  {
    v7 = *(const void **)(a1 + 6000);
    if ( v7 )
    {
      memmove(*(void **)(a2 + 24), v7, 0x1000uLL);
      *a3 = 4096LL;
    }
    else
    {
      return (unsigned int)-1073741637;
    }
  }
  else
  {
    return (unsigned int)-1073741789;
  }
  return v4;
}
