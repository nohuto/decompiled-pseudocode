/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8a437ff59390a72614abce5a0545024f___::_scalar_deleting_destructor_ @ 0x18034B100
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1802D2320 (--3@YAXPEAX@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7c978eb3aa0e5fba325eaed337394fff___::_CTaskWrapper__lambda_7c978eb3aa0e5fba325eaed337394fff___ @ 0x180347750 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_7c978eb3aa0e5fba325eaed337394fff___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8a437ff59390a72614abce5a0545024f___::_scalar_deleting_destructor_(
        void *Block,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7c978eb3aa0e5fba325eaed337394fff___::_CTaskWrapper__lambda_7c978eb3aa0e5fba325eaed337394fff___((__int64)Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
