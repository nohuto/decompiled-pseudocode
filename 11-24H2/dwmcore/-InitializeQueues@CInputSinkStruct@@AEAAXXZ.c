/*
 * XREFs of ?InitializeQueues@CInputSinkStruct@@AEAAXXZ @ 0x180096438
 * Callers:
 *     ?ReplaceInputHandle@CInputSinkStruct@@QEAAJPEAX@Z @ 0x180095CC4 (-ReplaceInputHandle@CInputSinkStruct@@QEAAJPEAX@Z.c)
 * Callees:
 *     ?InitializeQueueInfo@CInputSinkStruct@@AEAAJAEAUInputQueueInfo@1@@Z @ 0x1800964AC (-InitializeQueueInfo@CInputSinkStruct@@AEAAJAEAUInputQueueInfo@1@@Z.c)
 */

void __fastcall CInputSinkStruct::InitializeQueues(CInputSinkStruct *this)
{
  struct CInputSinkStruct::InputQueueInfo *v1; // rsi
  __int64 v3; // rcx
  bool v4; // bl
  struct CInputSinkStruct::InputQueueInfo *i; // rbx
  int v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = (CInputSinkStruct *)((char *)this + 64);
  v3 = *((_QWORD *)this + 8);
  v4 = 0;
  v6 = 0;
  if ( (int)NtQueryCompositionInputIsImplicit(v3, &v6) >= 0 )
    v4 = v6 != 0;
  *((_BYTE *)this + 104) = v4;
  for ( i = this; i != v1; i = (struct CInputSinkStruct::InputQueueInfo *)((char *)i + 16) )
    CInputSinkStruct::InitializeQueueInfo(this, i);
}
