/*
 * XREFs of MiMapSecurePureReserveView @ 0x140A31ED4
 * Callers:
 *     MiCfgInitializeProcess @ 0x14091BB10 (MiCfgInitializeProcess.c)
 *     MmInitializeImageViewExtension @ 0x140C56360 (MmInitializeImageViewExtension.c)
 * Callees:
 *     MmMapViewOfSectionEx @ 0x14047E1D4 (MmMapViewOfSectionEx.c)
 */

__int64 __fastcall MiMapSecurePureReserveView(__int64 a1, __int64 a2, _QWORD *a3, unsigned __int64 *a4, _QWORD *a5)
{
  int v6; // edx
  int v7; // r10d
  unsigned __int64 v8; // rax
  __int64 result; // rax
  __int64 v10; // rax
  __int64 v11; // [rsp+58h] [rbp+7h]
  _QWORD v12[2]; // [rsp+70h] [rbp+1Fh] BYREF
  __int128 v13; // [rsp+80h] [rbp+2Fh] BYREF
  __int64 v14; // [rsp+90h] [rbp+3Fh]
  __int64 v15; // [rsp+C0h] [rbp+6Fh] BYREF
  __int64 v16; // [rsp+C8h] [rbp+77h] BYREF

  v15 = 0LL;
  v16 = 0LL;
  v12[1] = &v13;
  v6 = 0;
  v12[0] = 1LL;
  v14 = 0LL;
  v7 = 0;
  v8 = *a4;
  v13 = 0LL;
  if ( !v8 )
    v8 = *(_QWORD *)(a2 + 48);
  if ( *a3 )
  {
    v7 = 8;
  }
  else if ( v8 > 0x4000000 )
  {
    v10 = *((_QWORD *)&v13 + 1);
    v6 = 0x100000;
    if ( *(_QWORD *)(a1 + 872) <= 0x100000000uLL )
      v10 = 0x7FFFFFFEFFFFLL;
    *((_QWORD *)&v13 + 1) = v10;
  }
  result = MmMapViewOfSectionEx(
             a2,
             a1,
             (int)a3,
             (__int64)&v16,
             (__int64)a4,
             v6,
             1,
             v12,
             1,
             -2147483647,
             (__int64)&v15,
             v11,
             v7);
  if ( (int)result >= 0 )
  {
    if ( a5 )
      *a5 = v15;
  }
  return result;
}
