/*
 * XREFs of ?CreateDevice@RIMDeviceCollection@@MEAAJPEAX0KKPEAPEAVRIMDevice@@@Z @ 0x1800D4050
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18009D79C (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall RIMDeviceCollection::CreateDevice(
        RIMDeviceCollection *this,
        void *a2,
        void *a3,
        int a4,
        unsigned int a5,
        struct RIMDevice **a6)
{
  _QWORD *v10; // [rsp+20h] [rbp-18h]

  v10 = operator new(0x30uLL);
  v10[4] = 0LL;
  *v10 = &RIMDevice::`vftable';
  *((_DWORD *)v10 + 10) = a5;
  v10[1] = a2;
  *((_DWORD *)v10 + 6) = a4;
  v10[2] = a3;
  *a6 = (struct RIMDevice *)v10;
  return 0LL;
}
