/*
 * XREFs of RaidSetTcgLockingObjectMetadata @ 0x14008E5CC
 * Callers:
 *     RaidAdapterStorageTcgSetLockingObjectMetadata @ 0x14007F3E0 (RaidAdapterStorageTcgSetLockingObjectMetadata.c)
 *     RaidUnitStorageTcgSetLockingObjectMetadata @ 0x140083DA0 (RaidUnitStorageTcgSetLockingObjectMetadata.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     RtlStringCbCopyA @ 0x14006FC78 (RtlStringCbCopyA.c)
 *     RaidFillTcgAuthKey @ 0x14008C178 (RaidFillTcgAuthKey.c)
 *     RaidGetTcgLockingObject @ 0x14008CA20 (RaidGetTcgLockingObject.c)
 *     TcglibCloseSession @ 0x14013BB98 (TcglibCloseSession.c)
 *     TcglibOpenSession @ 0x14013C388 (TcglibOpenSession.c)
 *     TcglibSetBandMetadata @ 0x14013CACC (TcglibSetBandMetadata.c)
 *     TcglibStartTransaction @ 0x14013D0C4 (TcglibStartTransaction.c)
 *     TcglibStopTransaction @ 0x14013D154 (TcglibStopTransaction.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     memmove @ 0x140143780 (memmove.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

__int64 __fastcall RaidSetTcgLockingObjectMetadata(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        const void *a4,
        unsigned int a5,
        const void *a6,
        char *pszDest)
{
  size_t v9; // r12
  int v10; // eax
  __int64 v11; // rdi
  __int64 v12; // rsi
  int TcgLockingObject; // ebx
  __int64 v15; // r13
  unsigned int v16; // eax
  size_t v17; // r14
  void *Pool; // rax
  void *v19; // rsi
  int v20; // r9d
  __int64 v21; // r9
  _OWORD v24[2]; // [rsp+58h] [rbp-A8h] BYREF
  int v25; // [rsp+78h] [rbp-88h]
  _BYTE v26[56]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v27; // [rsp+B8h] [rbp-48h]
  int v28; // [rsp+C8h] [rbp-38h]
  _OWORD v29[3]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v30; // [rsp+100h] [rbp+0h]

  v9 = a3;
  memset_0(v26, 0, 0x50uLL);
  v25 = 0;
  v30 = 0LL;
  v10 = *(_DWORD *)a1;
  memset(v24, 0, sizeof(v24));
  memset(v29, 0, sizeof(v29));
  if ( v10 == 1431193940 )
  {
    if ( (*(_BYTE *)(a1 + 507) & 0x40) != 0 )
      return (unsigned int)-1073741637;
    v11 = *(_QWORD *)(a1 + 3584);
    if ( !v11 )
      return (unsigned int)-1073741637;
    v12 = *(_QWORD *)(a1 + 3592);
  }
  else
  {
    if ( v10 != 1094997074 )
      return (unsigned int)-1073741637;
    if ( (*(_BYTE *)(a1 + 111) & 0x10) != 0 )
      return (unsigned int)-1073741637;
    v11 = *(_QWORD *)(a1 + 6056);
    if ( !v11 )
      return (unsigned int)-1073741637;
    v12 = *(_QWORD *)(a1 + 6064);
  }
  if ( !v12 )
    return (unsigned int)-1073741637;
  v15 = *(_QWORD *)(a1 + 8);
  TcgLockingObject = RaidGetTcgLockingObject((int *)a1, a2, (__int64)v26, pszDest);
  if ( TcgLockingObject >= 0 )
  {
    if ( (v27 || v28)
      && (v16 = *(_DWORD *)(v12 + 140) / (unsigned int)*(unsigned __int16 *)(v12 + 136),
          v17 = v16,
          (unsigned int)v9 <= v16) )
    {
      Pool = (void *)RaidAllocatePool(256LL, v16, 1129603410LL, v15);
      v19 = Pool;
      if ( Pool )
      {
        memset_0(Pool, 0, v17);
        if ( (_DWORD)v9 )
          memmove(v19, a4, v9);
        TcgLockingObject = RaidFillTcgAuthKey(v11, 0, a5, a6, (unsigned int *)v24, pszDest);
        if ( TcgLockingObject >= 0 )
        {
          TcgLockingObject = TcglibOpenSession(v11, 2LL, v29);
          if ( TcgLockingObject >= 0 )
          {
            TcgLockingObject = TcglibStartTransaction(v11, v29);
            if ( TcgLockingObject >= 0 )
            {
              TcgLockingObject = TcglibSetBandMetadata(v11, (unsigned int)v29, a2, v20, v17, (__int64)v19, (__int64)v24);
              TcglibStopTransaction(v11, v29, (unsigned int)TcgLockingObject, v21);
              if ( TcgLockingObject < 0 )
                RtlStringCbCopyA(pszDest, 0x20uLL, "TcglibSetBandMetadata");
            }
            TcglibCloseSession(v11, v29);
          }
          else
          {
            RtlStringCbCopyA(pszDest, 0x20uLL, "TcglibOpenSession");
          }
        }
        ExFreePoolWithTag(v19, 0x43546152u);
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  return (unsigned int)TcgLockingObject;
}
