/*
 * XREFs of MiPageBootRegistry @ 0x140669520
 * Callers:
 *     MmFreeLoaderBlock @ 0x140C4E7EC (MmFreeLoaderBlock.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     MiWriteWsle @ 0x140232940 (MiWriteWsle.c)
 *     MiInitializeTbFlushList @ 0x140233BB0 (MiInitializeTbFlushList.c)
 *     MiReleaseProcessorFlushList @ 0x14023FFD0 (MiReleaseProcessorFlushList.c)
 *     MiInsertTbFlushEntry @ 0x1402432E0 (MiInsertTbFlushEntry.c)
 *     MiLockNestedPageTable @ 0x140285190 (MiLockNestedPageTable.c)
 *     MiGetProcessorFlushList @ 0x1402894BC (MiGetProcessorFlushList.c)
 *     MiFlushTbList @ 0x140291730 (MiFlushTbList.c)
 *     MiAllocatePool @ 0x1402ACA70 (MiAllocatePool.c)
 *     MiLockWorkingSetShared @ 0x1402DF970 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x1402E0410 (MiUnlockWorkingSetShared.c)
 *     MiGetWsleContents @ 0x1402E5390 (MiGetWsleContents.c)
 *     MiMakeTransitionPte @ 0x1402E67B0 (MiMakeTransitionPte.c)
 *     MiUnlockPageTableInternal @ 0x140321070 (MiUnlockPageTableInternal.c)
 *     MiGetAnyMultiplexedVm @ 0x140442630 (MiGetAnyMultiplexedVm.c)
 *     MmFreeBootRegistry @ 0x1407E725C (MmFreeBootRegistry.c)
 *     MiInsertRegistryPageInModifiedList @ 0x140C65450 (MiInsertRegistryPageInModifiedList.c)
 */

_QWORD *__fastcall MiPageBootRegistry(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax
  signed __int64 v5; // r15
  __int64 v6; // rbx
  __int64 *ProcessorFlushList; // rsi
  char *AnyMultiplexedVm; // r13
  unsigned __int8 v9; // al
  __int64 v10; // rdi
  __int64 v11; // rcx
  unsigned __int64 i; // rdi
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // rbp
  _QWORD *v15; // r14
  __int64 v16; // r15
  unsigned __int64 v17; // r12
  ULONG_PTR v18; // rax
  unsigned __int64 v19; // rbx
  __int64 v20; // rcx
  char WsleContents; // al
  __int64 v22; // rcx
  int v23; // r9d
  _QWORD **v24; // rax
  unsigned __int64 v25; // rcx
  _QWORD *v26; // rcx
  __int64 v27; // [rsp+30h] [rbp-68h]
  unsigned __int64 *v28; // [rsp+38h] [rbp-60h]
  unsigned __int64 v29; // [rsp+40h] [rbp-58h]
  ULONG_PTR v30; // [rsp+48h] [rbp-50h]
  _QWORD *v31; // [rsp+58h] [rbp-40h]
  unsigned __int8 v32; // [rsp+A8h] [rbp+10h]
  __int64 v33; // [rsp+B0h] [rbp+18h]
  unsigned __int64 v34; // [rsp+B8h] [rbp+20h]

  result = (_QWORD *)MiAllocatePool(0x40uLL, 8 * a2 + 8, 1649241421);
  v31 = result;
  v5 = (signed __int64)result;
  if ( result )
  {
    *result = a2;
    v6 = 0LL;
    v27 = 0LL;
    v33 = 0LL;
    v28 = result + 1;
    ProcessorFlushList = 0LL;
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
    v9 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
    v10 = a1 + 352;
    v32 = v9;
    v11 = *(_QWORD *)(v10 + 8);
    if ( (v11 & 1) != 0 )
    {
      if ( v11 == 1 )
      {
LABEL_33:
        MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v9);
        result = (_QWORD *)_InterlockedCompareExchange64(&qword_140E37508, v5, 0LL);
        if ( result )
        {
          qword_140E37508 = v5;
          return (_QWORD *)MmFreeBootRegistry();
        }
        return result;
      }
      i = v11 ^ (v10 | 1);
    }
    else
    {
      i = *(_QWORD *)(v10 + 8);
    }
    if ( i )
    {
      v13 = 0xFFFFF68000000000uLL;
      do
      {
        if ( *(_DWORD *)(i + 24) == 19 && *(_QWORD *)(i + 40) )
        {
          v34 = 0LL;
          v14 = 0LL;
          v15 = (_QWORD *)(48LL * *(_QWORD *)(i + 32) - 0x21FFFFFFFFF8LL);
          v16 = *(_QWORD *)(i + 32);
          do
          {
            v29 = *v15 | 0x8000000000000000uLL;
            v17 = (__int64)(v29 << 25) >> 16;
            *v28++ = v17;
            v18 = ((v29 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v30 = v18;
            if ( v14 != v18 )
            {
              if ( v14 )
              {
                if ( ProcessorFlushList )
                {
                  MiFlushTbList((__int64)ProcessorFlushList);
                  MiReleaseProcessorFlushList();
                  ProcessorFlushList = 0LL;
                }
                MiInsertRegistryPageInModifiedList(v27, v6, v13);
                MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v14);
                v18 = v30;
              }
              v14 = v18;
              MiLockNestedPageTable((__int64)AnyMultiplexedVm, v18);
            }
            v19 = MI_READ_PTE_LOCK_FREE(v29);
            WsleContents = MiGetWsleContents(v20, v17);
            MiWriteWsle(v22, v17, WsleContents & 0xF0 | 0xA);
            *(_QWORD *)v29 = MiMakeTransitionPte((v19 >> 12) & 0xFFFFFFFFFFLL, 4);
            if ( ProcessorFlushList )
            {
              v6 = v33 + 1;
            }
            else
            {
              ProcessorFlushList = MiGetProcessorFlushList();
              MiInitializeTbFlushList(
                (__int64)ProcessorFlushList,
                (__int64)AnyMultiplexedVm,
                *((_DWORD *)ProcessorFlushList + 3),
                0,
                1);
              v6 = (unsigned int)(v23 + 1);
              v27 = v16 + v34;
            }
            v33 = v6;
            MiInsertTbFlushEntry((__int64)ProcessorFlushList, v17, 1LL, 0);
            v15 += 6;
            ++v34;
            v13 = 0xFFFFF68000000000uLL;
          }
          while ( v34 < *(_QWORD *)(i + 40) );
          if ( ProcessorFlushList )
          {
            MiFlushTbList((__int64)ProcessorFlushList);
            MiReleaseProcessorFlushList();
            ProcessorFlushList = 0LL;
          }
          MiInsertRegistryPageInModifiedList(v27, v6, v13);
          MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v14);
          v13 = 0xFFFFF68000000000uLL;
        }
        v24 = *(_QWORD ***)(i + 8);
        v25 = i;
        if ( v24 )
        {
          v26 = *v24;
          for ( i = *(_QWORD *)(i + 8); v26; v26 = (_QWORD *)*v26 )
            i = (unsigned __int64)v26;
        }
        else
        {
          while ( 1 )
          {
            i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL;
            if ( !i || *(_QWORD *)i == v25 )
              break;
            v25 = i;
          }
        }
      }
      while ( i );
      v5 = (signed __int64)v31;
      v9 = v32;
    }
    goto LABEL_33;
  }
  return result;
}
