/*
 * XREFs of ?DxgkCheckPairedRenderAdapterForStopCallBack@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x14018C9A0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPairedRenderAdapter@ADAPTER_DISPLAY@@QEBAXAEAVDXGADAPTER_REFERENCE@@PEAU_GUID@@@Z @ 0x14001AE50 (-GetPairedRenderAdapter@ADAPTER_DISPLAY@@QEBAXAEAVDXGADAPTER_REFERENCE@@PEAU_GUID@@@Z.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x14001C0B0 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14001C140 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x14001C1A0 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x14001E450 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ?AcquireExclusive@COREACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z @ 0x14001E938 (-AcquireExclusive@COREACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x14001F610 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ?IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x140041DBC (-IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x140051FDC (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?SetPairedRenderAdapter@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@PEBU_GUID@@@Z @ 0x140198B48 (-SetPairedRenderAdapter@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@PEBU_GUID@@@Z.c)
 *     ?Reset@BLTQUEUE@@QEAAXE@Z @ 0x14027BCF0 (-Reset@BLTQUEUE@@QEAAXE@Z.c)
 *     ?Flush@BLTQUEUE@@QEAAXXZ @ 0x1403CFA74 (-Flush@BLTQUEUE@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkCheckPairedRenderAdapterForStopCallBack(struct DXGADAPTER *a1, _BYTE *a2)
{
  __int64 v2; // rsi
  unsigned int v5; // r15d
  unsigned __int64 v6; // rdx
  unsigned int i; // ebp
  struct DXGDEVICE *VidPnSourceOwner; // rax
  __int64 v9; // rdi
  __int64 v10; // rbx
  unsigned int j; // ebx
  _QWORD v13[2]; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v14[32]; // [rsp+30h] [rbp-88h] BYREF
  _BYTE v15[64]; // [rsp+50h] [rbp-68h] BYREF

  v2 = *((_QWORD *)a1 + 390);
  v5 = *(_DWORD *)(v2 + 96);
  DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v14, a1, 1);
  if ( *((_DWORD *)a1 + 50) == 1 )
  {
    if ( a2[209] && !*((_QWORD *)a1 + 391) )
    {
      COREACCESS::COREACCESS((COREACCESS *)v15, a1);
      COREACCESS::AcquireExclusive((__int64)v15, 1u, 0);
      for ( i = 0; i < v5; ++i )
      {
        VidPnSourceOwner = ADAPTER_DISPLAY::GetVidPnSourceOwner((ADAPTER_DISPLAY *)v2, i);
        if ( VidPnSourceOwner && *(_BYTE **)(*((_QWORD *)VidPnSourceOwner + 2) + 16LL) == a2 )
        {
          v9 = *(_QWORD *)(v2 + 456);
          v10 = 2968LL * i;
          BLTQUEUE::Flush((BLTQUEUE *)(v10 + *(_QWORD *)(v9 + 8)));
          BLTQUEUE::Reset((BLTQUEUE *)(v10 + *(_QWORD *)(v9 + 8)), 0);
        }
      }
      COREACCESS::~COREACCESS((COREACCESS *)v15, v6);
    }
    v13[0] = 0LL;
    ADAPTER_DISPLAY::GetPairedRenderAdapter((ADAPTER_DISPLAY *)v2, (struct DXGADAPTER_REFERENCE *)v13, 0LL);
    if ( (_BYTE *)v13[0] == a2 )
    {
      for ( j = 0; j < v5; ++j )
      {
        if ( ADAPTER_DISPLAY::IsPartOfDesktop((ADAPTER_DISPLAY *)v2, j) )
        {
          *(_BYTE *)(v2 + 288) = 1;
          goto LABEL_17;
        }
      }
      ADAPTER_DISPLAY::SetPairedRenderAdapter((ADAPTER_DISPLAY *)v2, 0LL, 0LL);
    }
LABEL_17:
    DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v13, 0LL);
  }
  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v14);
  return 0LL;
}
