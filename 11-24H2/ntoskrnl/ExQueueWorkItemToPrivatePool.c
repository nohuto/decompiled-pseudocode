/*
 * XREFs of ExQueueWorkItemToPrivatePool @ 0x14027B744
 * Callers:
 *     ?SmAsyncReadQueueInsert@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_ASYNC_READ_QUEUE@1@PEAU_SM_ASYNC_DIRECT_READ_CTX@1@K@Z @ 0x14027D21C (-SmAsyncReadQueueInsert@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_ASYNC_READ_QUEUE@1@PEAU_.c)
 * Callees:
 *     ExpValidateWorkItem @ 0x14027AA20 (ExpValidateWorkItem.c)
 *     ExpQueueWorkItem @ 0x1402CD0A0 (ExpQueueWorkItem.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall ExQueueWorkItemToPrivatePool(_QWORD *BugCheckParameter2, int a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v5; // esi
  __int64 result; // rax

  v5 = a4;
  if ( (unsigned __int64)(a4 - 1) > 6
    || (ExpValidateWorkItem(BugCheckParameter2, a2 + 32),
        result = ExpQueueWorkItem(*(_QWORD *)(a5 + 16), (_DWORD)BugCheckParameter2, a2, -1, v5),
        !(_BYTE)result) )
  {
    KeBugCheckEx(0xE4u, 5uLL, (ULONG_PTR)BugCheckParameter2, a2 + 32, 0xFFFFFFFFuLL);
  }
  return result;
}
