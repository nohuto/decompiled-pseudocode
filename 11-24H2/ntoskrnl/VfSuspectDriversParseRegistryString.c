/*
 * XREFs of VfSuspectDriversParseRegistryString @ 0x140C3DEAC
 * Callers:
 *     VfInitBootDriversLoaded @ 0x140C3D398 (VfInitBootDriversLoaded.c)
 * Callees:
 *     VfDriverLock @ 0x140B8C4B4 (VfDriverLock.c)
 *     VfDriverUnlock @ 0x140B8C63C (VfDriverUnlock.c)
 *     VfSuspectDriversAllocateEntry @ 0x140B9C6A0 (VfSuspectDriversAllocateEntry.c)
 *     VfSuspectDriversInsert @ 0x140B9CB08 (VfSuspectDriversInsert.c)
 *     VfSuspectExcludedDriversAllocateEntry @ 0x140B9D0D4 (VfSuspectExcludedDriversAllocateEntry.c)
 */

int VfSuspectDriversParseRegistryString()
{
  __int64 *v0; // rcx
  BOOL v1; // ebp
  __int64 v2; // r8
  unsigned __int64 Entry; // rax
  __int64 *v4; // rsi
  unsigned __int64 v5; // rdx
  __int64 *v6; // rbx
  unsigned __int64 v7; // rdx
  int v8; // edx
  _QWORD *v9; // rdi
  _QWORD *v10; // rdi
  _QWORD *v11; // rax
  _OWORD v13[2]; // [rsp+20h] [rbp-28h] BYREF

  v0 = MmVerifyDriverBuffer;
  v13[0] = 0LL;
  v1 = (VfOptionFlags & 1) == 0;
  v2 = 0x100002601LL;
  Entry = ((unsigned __int64)(unsigned int)MmVerifyDriverBufferLength - 2) >> 1;
  v4 = (__int64 *)((char *)MmVerifyDriverBuffer + 2 * Entry);
  while ( v0 < v4 )
  {
    v5 = *(unsigned __int16 *)v0;
    if ( (unsigned int)v5 <= 0x20 && _bittest64(&v2, v5) || (_WORD)v5 == 12288 )
    {
      v0 = (__int64 *)((char *)v0 + 2);
    }
    else
    {
      if ( (_DWORD)v5 == 42 && v1 )
      {
        ViVerifyAllDrivers = 1;
        return Entry;
      }
      v6 = (__int64 *)((char *)v0 + 2);
      if ( (_DWORD)v5 == 34 )
      {
        v0 = (__int64 *)((char *)v0 + 2);
        while ( 1 )
        {
          v6 = (__int64 *)((char *)v6 + 2);
          if ( v6 >= v4 )
            return Entry;
          if ( *(_WORD *)v6 == 34 )
            goto LABEL_18;
        }
      }
      while ( v6 < v4 )
      {
        v7 = *(unsigned __int16 *)v6;
        if ( (unsigned int)v7 <= 0x20 )
        {
          if ( _bittest64(&v2, v7) )
            break;
        }
        if ( (_WORD)v7 == 12288 )
          break;
        v6 = (__int64 *)((char *)v6 + 2);
      }
LABEL_18:
      v8 = 2 * (((char *)v6 - (char *)v0) >> 1);
      if ( v8 )
      {
        LODWORD(Entry) = v8 + 2;
        LOWORD(v13[0]) = 2 * (((char *)v6 - (char *)v0) >> 1);
        WORD1(v13[0]) = v8 + 2;
        if ( (unsigned __int16)(v8 + 2) < (unsigned __int16)v8 )
          return Entry;
        *((_QWORD *)&v13[0] + 1) = v0;
        if ( v1 )
        {
          Entry = VfSuspectDriversAllocateEntry((const void **)v13);
          v9 = (_QWORD *)Entry;
          if ( Entry )
          {
            VfDriverLock();
            VfSuspectDriversInsert(v9);
            goto LABEL_26;
          }
        }
        else
        {
          Entry = VfSuspectExcludedDriversAllocateEntry((unsigned __int16 *)v13, 0x44456656u);
          v10 = (_QWORD *)Entry;
          if ( Entry )
          {
            VfDriverLock();
            v11 = (_QWORD *)qword_140F04238;
            if ( *(__int64 **)qword_140F04238 != &VfExcludedDriversList )
              __fastfail(3u);
            *v10 = &VfExcludedDriversList;
            v10[1] = v11;
            *v11 = v10;
            qword_140F04238 = (__int64)v10;
LABEL_26:
            LODWORD(Entry) = VfDriverUnlock();
          }
        }
        v2 = 0x100002601LL;
      }
      v0 = (__int64 *)((char *)v6 + 2);
    }
  }
  return Entry;
}
