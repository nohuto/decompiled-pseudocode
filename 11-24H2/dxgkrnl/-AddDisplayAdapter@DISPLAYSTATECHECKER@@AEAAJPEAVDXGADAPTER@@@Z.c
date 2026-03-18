/*
 * XREFs of ?AddDisplayAdapter@DISPLAYSTATECHECKER@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1401BE7DC
 * Callers:
 *     ?CollectDisplayAdaptersCallback@DISPLAYSTATECHECKER@@CAJPEAVDXGADAPTER@@PEAX@Z @ 0x1401BF840 (-CollectDisplayAdaptersCallback@DISPLAYSTATECHECKER@@CAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14000C9A0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14000F940 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002DF18 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?GetDisplayAdapterDiagData@DISPLAYSTATECHECKER@@AEAAPEAVDISPLAYDIAGNOSTICADAPTERDATA@@I@Z @ 0x14006D18C (-GetDisplayAdapterDiagData@DISPLAYSTATECHECKER@@AEAAPEAVDISPLAYDIAGNOSTICADAPTERDATA@@I@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?CollectDisplayAdapterDiagData@DISPLAYDIAGNOSTICADAPTERDATA@@QEAAJPEAVDXGADAPTER@@@Z @ 0x1401BF658 (-CollectDisplayAdapterDiagData@DISPLAYDIAGNOSTICADAPTERDATA@@QEAAJPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DISPLAYSTATECHECKER::AddDisplayAdapter(DISPLAYSTATECHECKER *this, struct DXGADAPTER *a2)
{
  struct DISPLAYDIAGNOSTICADAPTERDATA *DisplayAdapterDiagData; // rax
  int v5; // r8d
  __int128 v6; // xmm0
  int v7; // ecx
  _BYTE v9[144]; // [rsp+20h] [rbp-A8h] BYREF

  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v9, a2, 0LL);
  if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v9, 0LL) >= 0 )
  {
    DisplayAdapterDiagData = DISPLAYSTATECHECKER::GetDisplayAdapterDiagData(this, *((_DWORD *)this + 3522));
    if ( DisplayAdapterDiagData )
    {
      v5 = *(_DWORD *)this;
      v6 = *(_OWORD *)((char *)this + 20);
      v7 = *(_DWORD *)this;
      *(_QWORD *)DisplayAdapterDiagData = a2;
      *((_BYTE *)DisplayAdapterDiagData + 21) = BYTE1(v7) & 1;
      *((_DWORD *)DisplayAdapterDiagData + 6) = (unsigned __int8)v5;
      *(_OWORD *)((char *)DisplayAdapterDiagData + 28) = v6;
      DISPLAYDIAGNOSTICADAPTERDATA::CollectDisplayAdapterDiagData(DisplayAdapterDiagData, a2);
      ++*((_DWORD *)this + 3522);
    }
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v9);
  return 0LL;
}
