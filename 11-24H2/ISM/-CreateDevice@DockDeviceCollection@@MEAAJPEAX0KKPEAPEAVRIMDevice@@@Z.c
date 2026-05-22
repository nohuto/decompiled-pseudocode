/*
 * XREFs of ?CreateDevice@DockDeviceCollection@@MEAAJPEAX0KKPEAPEAVRIMDevice@@@Z @ 0x1800DD3E0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x18009D598 (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x18009D79C (--2@YAPEAX_K@Z.c)
 *     ??1?$unique_ptr@VDockDevice@@U?$default_delete@VDockDevice@@@std@@@std@@QEAA@XZ @ 0x1800DD188 (--1-$unique_ptr@VDockDevice@@U-$default_delete@VDockDevice@@@std@@@std@@QEAA@XZ.c)
 */

__int64 __fastcall DockDeviceCollection::CreateDevice(
        DockDeviceCollection *this,
        void *a2,
        void *a3,
        int a4,
        unsigned int a5,
        struct RIMDevice **a6)
{
  _QWORD *v9; // r14
  __int64 (__fastcall ***v11)(_QWORD, __int64); // [rsp+20h] [rbp-18h] BYREF

  v9 = operator new(0x80uLL);
  v9[4] = 0LL;
  v9[6] = 0LL;
  *((_DWORD *)v9 + 14) = 0;
  *((_DWORD *)v9 + 10) = a5;
  v9[1] = a2;
  v9[2] = a3;
  *((_DWORD *)v9 + 6) = a4;
  memset_0((char *)v9 + 60, 0, 0x40uLL);
  v11 = 0LL;
  *v9 = &DockDevice::`vftable';
  *a6 = (struct RIMDevice *)v9;
  std::unique_ptr<DockDevice>::~unique_ptr<DockDevice>(&v11);
  return 0LL;
}
