/*
 * XREFs of ?ndisCloseHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@_N@Z @ 0x14009BB88
 * Callers:
 *     ?ndisCloseIrpHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x140054440 (-ndisCloseIrpHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     NdisWdfCloseIrpHandler @ 0x14005EAB0 (NdisWdfCloseIrpHandler.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     ?ndisDummyHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_OBJECT_HEADER@@PEAU_IRP@@@Z @ 0x14004BA10 (-ndisDummyHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_OBJECT_HEADER@@PEAU_IRP@@@Z.c)
 *     ?ndisCleanupUserOpenContext@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_USER_OPEN_CONTEXT@@@Z @ 0x14007B350 (-ndisCleanupUserOpenContext@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_USER_OPEN_CONTEXT@@@Z.c)
 *     Feature_NDPQualityWinter26__private_IsEnabledDeviceUsageNoInline @ 0x140092F04 (Feature_NDPQualityWinter26__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall ndisCloseHandler(
        struct _DEVICE_OBJECT *a1,
        struct _NDIS_MINIPORT_BLOCK *a2,
        struct _IRP *a3,
        char a4)
{
  int v8; // edx
  int v9; // r9d
  _IO_STACK_LOCATION *CurrentStackLocation; // r12
  KSPIN_LOCK *FsContext; // r13
  KIRQL v13; // al
  char v14; // bl
  int v15; // edx
  int v16; // edx
  int v17; // r9d
  _IO_STACK_LOCATION *v18; // rdi
  _FILE_OBJECT *FileObject; // rax
  char *v20; // rdx

  if ( (unsigned int)Feature_NDPQualityWinter26__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( !a4 && a2->Header.Type != 17 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return ndisDummyHandler(a1, &a2->Header, a3);
      v9 = 24;
LABEL_6:
      LOBYTE(v8) = 4;
      WPP_RECORDER_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v8,
        11,
        v9,
        (struct _GUID *)&WPP_cb6db8c6f99e3ae11a098d09772ad370_Traceguids,
        (char)a2,
        (char)a3);
      return ndisDummyHandler(a1, &a2->Header, a3);
    }
    CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
    FsContext = (KSPIN_LOCK *)CurrentStackLocation->FileObject->FsContext;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = 4;
      WPP_RECORDER_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v8,
        11,
        25,
        (struct _GUID *)&WPP_cb6db8c6f99e3ae11a098d09772ad370_Traceguids,
        (char)a2,
        (char)a3);
    }
    v13 = KeAcquireSpinLockRaiseToDpc(FsContext + 4);
    v14 = *((_BYTE *)FsContext + 40);
    *((_BYTE *)FsContext + 41) = 1;
    KeReleaseSpinLock(FsContext + 4, v13);
    if ( v14 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v15) = 4;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v15,
          13,
          26,
          (struct _GUID *)&WPP_cb6db8c6f99e3ae11a098d09772ad370_Traceguids,
          (char)FsContext);
      }
      KeWaitForSingleObject(FsContext + 6, Executive, 0, 0, 0LL);
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v15) = 4;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v15,
          13,
          27,
          (struct _GUID *)&WPP_cb6db8c6f99e3ae11a098d09772ad370_Traceguids,
          (char)FsContext);
      }
      ndisCleanupUserOpenContext(a2, (char *)FsContext);
    }
    ExFreePoolWithTag(FsContext, 0);
    CurrentStackLocation->FileObject->FsContext = 0LL;
    a3->IoStatus.Status = 0;
    IofCompleteRequest(a3, 2);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v17 = 28;
LABEL_26:
      LOBYTE(v16) = 4;
      WPP_RECORDER_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v16,
        11,
        v17,
        (struct _GUID *)&WPP_cb6db8c6f99e3ae11a098d09772ad370_Traceguids,
        (char)a2,
        (char)a3);
    }
  }
  else
  {
    v18 = a3->Tail.Overlay.CurrentStackLocation;
    if ( a2->Header.Type != 17 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return ndisDummyHandler(a1, &a2->Header, a3);
      v9 = 29;
      goto LABEL_6;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = 4;
      WPP_RECORDER_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v8,
        11,
        30,
        (struct _GUID *)&WPP_cb6db8c6f99e3ae11a098d09772ad370_Traceguids,
        (char)a2,
        (char)a3);
    }
    FileObject = v18->FileObject;
    v20 = (char *)FileObject->FsContext;
    FileObject->FsContext = 0LL;
    ndisCleanupUserOpenContext(a2, v20);
    a3->IoStatus.Status = 0;
    IofCompleteRequest(a3, 2);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v17 = 31;
      goto LABEL_26;
    }
  }
  return 0LL;
}
