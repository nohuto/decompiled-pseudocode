/*
 * XREFs of ?ndisInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@PEAX@Z @ 0x14004EA00
 * Callers:
 *     ?ndisPnPStartDevice@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x14004E810 (-ndisPnPStartDevice@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     ?ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x140016910 (-ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14002B910 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisCloseULongRef@@YAEPEAU_ULONG_REFERENCE@@@Z @ 0x14004EBE0 (-ndisCloseULongRef@@YAEPEAU_ULONG_REFERENCE@@@Z.c)
 *     ?ndisMCleanupMiniportBlockOnStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14004EC40 (-ndisMCleanupMiniportBlockOnStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_qZddD @ 0x14007E430 (WPP_RECORDER_SF_qZddD.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x140186B80 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 */

__int64 __fastcall ndisInitializeAdapter(
        struct _NDIS_M_DRIVER_BLOCK *a1,
        struct _NDIS_MINIPORT_BLOCK *a2,
        const struct _UNICODE_STRING *a3,
        void *a4)
{
  struct _NDIS_MINIPORT_BLOCK *v5; // rdi
  __int64 v7; // rbx
  unsigned int v8; // esi
  int v9; // r8d
  int v10; // r9d
  __int64 v11; // rdx
  int v12; // edx
  int v14; // [rsp+20h] [rbp-48h]
  char v15; // [rsp+28h] [rbp-40h]

  v5 = a2;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v15 = (char)a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      13,
      35,
      (struct _GUID *)&WPP_901e3e1acd0b36a9ab86c452924f7c21_Traceguids,
      v15);
  }
  ndisReferencePackage((struct _PKG_REF *)dword_140124018);
  v7 = MEMORY[0xFFFFF78000000014];
  v8 = ndisMInitializeAdapter(
         a1,
         v5,
         (struct _NDIS_WRAPPER_CONFIGURATION_HANDLE *)v5->ConfigurationHandle,
         &v5->ExportName.__ptr_.__value_->_UNICODE_STRING,
         a4);
  v11 = (MEMORY[0xFFFFF78000000014] - v7) / 10000;
  v5->InitTimeMs = v11;
  if ( (ndisFlags & 1) != 0 )
    DbgPrint("NDIS: Init time (%wZ) %ld ms\n", v5->pAdapterInstanceName, (unsigned int)v11);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qZddD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v11,
      v9,
      v10,
      v14,
      (char)v5,
      (__int64)v5->pAdapterInstanceName,
      v5->MajorNdisVersion,
      v5->MinorNdisVersion,
      v8);
  if ( v8 )
  {
    ndisCloseULongRef(&v5->Ref.SpinLock);
    ndisMCleanupMiniportBlockOnStop(v5);
  }
  else
  {
    ndisLogMiniportEvent(v5, NdisMEvent_MiniportInitialized);
  }
  MmUnlockPagableImageSection(qword_140124028);
  _InterlockedDecrement(dword_140124018);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v12) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v12,
      13,
      37,
      (struct _GUID *)&WPP_901e3e1acd0b36a9ab86c452924f7c21_Traceguids,
      (char)v5);
  }
  return v8;
}
