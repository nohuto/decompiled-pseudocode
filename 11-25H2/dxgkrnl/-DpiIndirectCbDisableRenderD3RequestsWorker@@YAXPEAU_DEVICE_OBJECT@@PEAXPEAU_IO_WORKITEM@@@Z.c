/*
 * XREFs of ?DpiIndirectCbDisableRenderD3RequestsWorker@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x140182920
 * Callers:
 *     <none>
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ?Release@AUTO_PNPPOWER_LOCK@@QEAAXXZ @ 0x14004DD78 (-Release@AUTO_PNPPOWER_LOCK@@QEAAXXZ.c)
 *     McTemplateK0xtq_EtwWriteTransfer @ 0x14008AA28 (McTemplateK0xtq_EtwWriteTransfer.c)
 *     DpiEnableD3Requests @ 0x1402BA7B0 (DpiEnableD3Requests.c)
 *     ?DpiIndirectGetMiniport@@YAJAEBUDXGK_MINIPORT_FILTER@@AEAVAUTO_REMOVE_LOCK@@AEAVAUTO_PNPPOWER_LOCK@@PEAPEAU_FDO_CONTEXT@@@Z @ 0x1404025DC (-DpiIndirectGetMiniport@@YAJAEBUDXGK_MINIPORT_FILTER@@AEAVAUTO_REMOVE_LOCK@@AEAVAUTO_PNPPOWER_LO.c)
 */

void __fastcall DpiIndirectCbDisableRenderD3RequestsWorker(PVOID IoObject, PVOID Context, PIO_WORKITEM IoWorkItem)
{
  char *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rax
  int Miniport; // eax
  __int64 v8; // rdx
  __int64 v9; // r8
  int v10; // edi
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-40h]
  __int64 v12; // [rsp+28h] [rbp-38h]
  __int64 v13; // [rsp+30h] [rbp-30h] BYREF
  __int16 v14; // [rsp+38h] [rbp-28h]
  char v15; // [rsp+3Ah] [rbp-26h]
  PVOID Tag; // [rsp+40h] [rbp-20h] BYREF
  char v17; // [rsp+48h] [rbp-18h]
  _QWORD v18[2]; // [rsp+50h] [rbp-10h] BYREF
  struct _FDO_CONTEXT *v19; // [rsp+98h] [rbp+38h] BYREF

  while ( 1 )
  {
    KeWaitForSingleObject(&stru_14015E318, Executive, 0, 0, 0LL);
    v4 = (char *)qword_14015E350;
    if ( qword_14015E350 == &qword_14015E350 )
      break;
    if ( *((void ***)qword_14015E350 + 1) != &qword_14015E350
      || (v5 = *(_QWORD *)qword_14015E350, *(void **)(*(_QWORD *)qword_14015E350 + 8LL) != qword_14015E350) )
    {
      __fastfail(3u);
    }
    qword_14015E350 = *(void **)qword_14015E350;
    *(_QWORD *)(v5 + 8) = &qword_14015E350;
    KeReleaseMutex(&stru_14015E318, 0);
    v6 = *(_QWORD *)(v4 + 20);
    Tag = 0LL;
    v18[0] = 0x100000001LL;
    v18[1] = v6;
    v17 = 0;
    v13 = 0LL;
    v14 = 0;
    v15 = 0;
    v19 = 0LL;
    Miniport = DpiIndirectGetMiniport(
                 (const struct DXGK_MINIPORT_FILTER *)v18,
                 (struct AUTO_REMOVE_LOCK *)&Tag,
                 (struct AUTO_PNPPOWER_LOCK *)&v13,
                 &v19);
    v10 = Miniport;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20000000000LL) != 0 )
    {
      LODWORD(v12) = Miniport;
      LODWORD(Timeout) = *((_DWORD *)v4 + 4);
      McTemplateK0xtq_EtwWriteTransfer((unsigned int)Timeout, v8, v9, *(_QWORD *)(v4 + 20), Timeout, v12);
    }
    if ( v10 >= 0 )
    {
      if ( *((_DWORD *)v4 + 4) )
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*((_QWORD *)v19 + 3) + 64LL) + 4232LL));
      else
        DpiEnableD3Requests(*((_QWORD *)v19 + 3));
    }
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v4);
    AUTO_PNPPOWER_LOCK::Release((AUTO_PNPPOWER_LOCK *)&v13);
    if ( v17 )
    {
      IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)Tag + 2, Tag, 0x20u);
      v17 = 0;
    }
  }
  byte_14015E310 = 0;
  KeReleaseMutex(&stru_14015E318, 0);
  IoFreeWorkItem(IoWorkItem);
}
