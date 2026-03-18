/*
 * XREFs of ?DxgkpGetDodPrimaryInfo@@YAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@PEAU_D3DKMT_KMDOD_ESCAPE@@@Z @ 0x1402F9514
 * Callers:
 *     ?UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z @ 0x1401DD13C (-UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z.c)
 *     ?SetupPresentParameters@BLTENTRY@@QEAAJPEAVBLTQUEUE@@PEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1402F8EB4 (-SetupPresentParameters@BLTENTRY@@QEAAJPEAVBLTQUEUE@@PEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_D.c)
 * Callees:
 *     memset @ 0x1400A2000 (memset.c)
 *     ?DdiEscape@DXGADAPTER@@QEAAJPEBU_DXGKARG_ESCAPE@@@Z @ 0x1402F95B0 (-DdiEscape@DXGADAPTER@@QEAAJPEBU_DXGKARG_ESCAPE@@@Z.c)
 */

void __fastcall DxgkpGetDodPrimaryInfo(struct DXGDEVICE *a1, struct DXGALLOCATION *a2, struct _D3DKMT_KMDOD_ESCAPE *a3)
{
  __int64 v6; // rcx
  _DXGKARG_ESCAPE v7; // [rsp+20h] [rbp-38h] BYREF

  *(_QWORD *)&v7.Flags.0 = 0LL;
  memset(&v7.PrivateDriverDataSize + 1, 0, 20);
  memset(a3, 0, 0x50uLL);
  *(_DWORD *)a3 = -791674879;
  *((_QWORD *)a3 + 1) = *(_QWORD *)(*((_QWORD *)a2 + 6) + 16LL);
  v6 = *((_QWORD *)a1 + 2);
  v7.hDevice = (HANDLE)*((_QWORD *)a1 + 77);
  v7.pPrivateDriverData = a3;
  v7.PrivateDriverDataSize = 80;
  v7.Flags.Value = 16;
  DXGADAPTER::DdiEscape(*(DXGADAPTER **)(v6 + 16), &v7);
}
