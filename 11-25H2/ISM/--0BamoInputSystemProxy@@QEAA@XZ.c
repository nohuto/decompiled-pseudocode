/*
 * XREFs of ??0BamoInputSystemProxy@@QEAA@XZ @ 0x1801126C0
 * Callers:
 *     ?Materialize_BamoInputSystemProxy@BamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@QEAAJI@Z @ 0x18011C478 (-Materialize_BamoInputSystemProxy@BamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@QEAAJI@Z.c)
 * Callees:
 *     ??$?0U?$default_delete@VCSharedCircularQueueProducer@@@std@@$0A@@?$unique_ptr@VCSharedCircularQueueProducer@@U?$default_delete@VCSharedCircularQueueProducer@@@std@@@std@@QEAA@$$T@Z @ 0x18005DF90 (--$-0U-$default_delete@VCSharedCircularQueueProducer@@@std@@$0A@@-$unique_ptr@VCSharedCircularQu.c)
 */

BamoInputSystemProxy *__fastcall BamoInputSystemProxy::BamoInputSystemProxy(BamoInputSystemProxy *this)
{
  BamoInputSystemProxy *v1; // rdx
  __int64 v2; // r8
  BamoInputSystemProxy *result; // rax

  *(_QWORD *)this = &BamoInputSystemProxy::`vftable'{for `Microsoft::Bamo::BamoProxy'};
  *((_QWORD *)this + 1) = &BamoInputSystemProxy::`vftable'{for `IInputSystemProxy'};
  *((_DWORD *)this + 6) = 0;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 2) = &BamoImpl::BamoInputSystemProxyImpl::`vftable';
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  std::unique_ptr<CSharedCircularQueueProducer>::unique_ptr<CSharedCircularQueueProducer>((_QWORD *)this + 15);
  *((_QWORD *)v1 + 16) = v2;
  result = v1;
  *((_QWORD *)v1 + 17) = v2;
  *((_QWORD *)v1 + 18) = v2;
  *((_QWORD *)v1 + 19) = v2;
  *((_QWORD *)v1 + 20) = v2;
  *((_QWORD *)v1 + 21) = v2;
  return result;
}
