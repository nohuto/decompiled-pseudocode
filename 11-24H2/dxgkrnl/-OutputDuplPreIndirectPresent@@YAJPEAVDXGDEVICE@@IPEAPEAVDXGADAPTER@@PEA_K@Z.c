/*
 * XREFs of ?OutputDuplPreIndirectPresent@@YAJPEAVDXGDEVICE@@IPEAPEAVDXGADAPTER@@PEA_K@Z @ 0x14039A5A0
 * Callers:
 *     ?OutputDuplPresentToHwQueue@@YAJPEAU_D3DKMT_OUTPUTDUPLPRESENTTOHWQUEUE@@PEAVDXGPROCESS@@@Z @ 0x1402B7698 (-OutputDuplPresentToHwQueue@@YAJPEAU_D3DKMT_OUTPUTDUPLPRESENTTOHWQUEUE@@PEAVDXGPROCESS@@@Z.c)
 *     OutputDuplPresent @ 0x140399FF8 (OutputDuplPresent.c)
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x14000CBC0 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x14000EE70 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14000F550 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x140051A2C (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?GetVirtualMonitorInfo@DXGADAPTER@@QEAAJIPEAU_DXGK_IDD_VIRTUAL_MONITOR_INFO@@@Z @ 0x140188ECC (-GetVirtualMonitorInfo@DXGADAPTER@@QEAAJIPEAU_DXGK_IDD_VIRTUAL_MONITOR_INFO@@@Z.c)
 *     ?DmmGetMostImportantClientVidPnPathTargetsFromSource@@YAJQEAXIQEAI@Z @ 0x14039CF90 (-DmmGetMostImportantClientVidPnPathTargetsFromSource@@YAJQEAXIQEAI@Z.c)
 */

__int64 __fastcall OutputDuplPreIndirectPresent(
        struct DXGDEVICE *a1,
        unsigned int a2,
        struct DXGADAPTER **a3,
        unsigned __int64 *a4)
{
  __int64 v5; // rbx
  __int64 v7; // r14
  struct DXGADAPTER *v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  int v13; // esi
  struct DXGDEVICE *VidPnSourceOwner; // rax
  unsigned __int64 v15; // rdx
  unsigned int v17; // [rsp+20h] [rbp-A9h] BYREF
  __int128 v18; // [rsp+28h] [rbp-A1h] BYREF
  __int64 v19; // [rsp+38h] [rbp-91h]
  _BYTE v20[8]; // [rsp+40h] [rbp-89h] BYREF
  _BYTE v21[64]; // [rsp+48h] [rbp-81h] BYREF
  _BYTE v22[64]; // [rsp+88h] [rbp-41h] BYREF
  struct DXGDEVICE *v23; // [rsp+C8h] [rbp-1h]
  char v24; // [rsp+D0h] [rbp+7h]

  *a3 = 0LL;
  v5 = *((_QWORD *)a1 + 237);
  v7 = a2;
  COREACCESS::COREACCESS((COREACCESS *)v21, *(struct DXGADAPTER *const *)(*((_QWORD *)a1 + 2) + 16LL));
  v9 = (struct DXGADAPTER *)*((_QWORD *)a1 + 237);
  if ( !v9 )
    v9 = *(struct DXGADAPTER **)(*((_QWORD *)a1 + 2) + 16LL);
  COREACCESS::COREACCESS((COREACCESS *)v22, v9);
  v10 = *((_QWORD *)a1 + 2);
  v11 = *((_QWORD *)a1 + 237);
  v23 = a1;
  if ( v11 == *(_QWORD *)(v10 + 16) || (v24 = 1, !v11) )
    v24 = 0;
  v13 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v20, 0LL);
  if ( v13 >= 0 )
  {
    if ( (*(_DWORD *)(v5 + 444) & 0x40000) != 0
      && (v17 = 0, DmmGetMostImportantClientVidPnPathTargetsFromSource((void *const)v5, v7, &v17) >= 0)
      && (v19 = 0LL,
          v18 = 0LL,
          (int)DXGADAPTER::GetVirtualMonitorInfo((DXGADAPTER *)v5, v17, (struct _DXGK_IDD_VIRTUAL_MONITOR_INFO *)&v18) >= 0)
      && DWORD1(v18) == 1
      || (VidPnSourceOwner = ADAPTER_DISPLAY::GetVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v5 + 3120), v7)) != 0LL
      && *((_QWORD *)VidPnSourceOwner + 5) == *((_QWORD *)a1 + 5) )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(v5 + 24));
      *a4 = -1LL;
      v13 = 0;
      *a3 = (struct DXGADAPTER *)v5;
    }
    else
    {
      WdLogSingleEntry2(3LL, a1, v7);
      WdLogGlobalForLineNumber = 2689;
      v13 = -1071775744;
    }
  }
  COREACCESS::~COREACCESS((COREACCESS *)v22, v12);
  COREACCESS::~COREACCESS((COREACCESS *)v21, v15);
  return (unsigned int)v13;
}
