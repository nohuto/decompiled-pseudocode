/*
 * XREFs of ??1PDOBaseEnum@@QEAA@XZ @ 0x1401B9188
 * Callers:
 *     ?FinalizeCSAccountingAndSendETW@DXGGLOBAL@@QEAAXXZ @ 0x1401B91BC (-FinalizeCSAccountingAndSendETW@DXGGLOBAL@@QEAAXXZ.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 */

void __fastcall PDOBaseEnum::~PDOBaseEnum(PDOBaseEnum *this)
{
  void *v1; // rcx

  v1 = (void *)*((_QWORD *)this + 1);
  if ( v1 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v1);
}
