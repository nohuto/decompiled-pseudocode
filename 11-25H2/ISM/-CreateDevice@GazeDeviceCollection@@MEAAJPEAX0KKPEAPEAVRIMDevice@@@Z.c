/*
 * XREFs of ?CreateDevice@GazeDeviceCollection@@MEAAJPEAX0KKPEAPEAVRIMDevice@@@Z @ 0x1800D99F0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x18009D3C8 (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x18009D5CC (--2@YAPEAX_K@Z.c)
 *     ??0GazeHidParser@@QEAA@XZ @ 0x180181DC0 (--0GazeHidParser@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall GazeDeviceCollection::CreateDevice(
        GazeDeviceCollection *this,
        void *a2,
        void *a3,
        int a4,
        unsigned int a5,
        struct RIMDevice **a6)
{
  _QWORD *v10; // [rsp+20h] [rbp-18h]

  v10 = operator new(0xF0uLL);
  v10[1] = a2;
  v10[2] = a3;
  *((_DWORD *)v10 + 6) = a4;
  *((_DWORD *)v10 + 10) = a5;
  v10[4] = 0LL;
  v10[6] = 0LL;
  *((_DWORD *)v10 + 14) = 0;
  memset_0((char *)v10 + 60, 0, 0x40uLL);
  *v10 = &GazeHidDevice::`vftable';
  GazeHidParser::GazeHidParser((GazeHidParser *)(v10 + 16));
  v10[28] = 0LL;
  *a6 = (struct RIMDevice *)v10;
  return 0LL;
}
