/*
 * XREFs of MiMapViewOfSectionExCommon @ 0x140987880
 * Callers:
 *     MmMapViewOfSectionEx @ 0x14047E1D4 (MmMapViewOfSectionEx.c)
 *     PspMapView @ 0x1404B78A4 (PspMapView.c)
 *     NtMapViewOfSectionEx @ 0x140987800 (NtMapViewOfSectionEx.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     DbgkMapViewOfSection @ 0x1408A05A8 (DbgkMapViewOfSection.c)
 *     MiMapViewOfSectionCommon @ 0x1408A25C0 (MiMapViewOfSectionCommon.c)
 *     MiMapViewOfSection @ 0x1408A2840 (MiMapViewOfSection.c)
 *     MiMapParametersInitialize @ 0x140987B90 (MiMapParametersInitialize.c)
 *     MiMapExParametersInitialize @ 0x140987D28 (MiMapExParametersInitialize.c)
 *     MiCaptureAllocateMapExtendedParameters @ 0x140987F30 (MiCaptureAllocateMapExtendedParameters.c)
 *     EtwTiLogMapExecView @ 0x140A3C950 (EtwTiLogMapExecView.c)
 */

__int64 __fastcall MiMapViewOfSectionExCommon(
        ULONG_PTR a1,
        __int64 a2,
        int a3,
        __int64 *a4,
        _QWORD *a5,
        __int64 *a6,
        int a7,
        int a8,
        volatile void *Address,
        int a10,
        int a11,
        __int64 a12,
        char a13,
        int a14)
{
  __int64 result; // rax
  int MapExtendedParameters; // ebx
  int v19; // edx
  __int64 v20; // r9
  void *v21; // [rsp+20h] [rbp-168h]
  __int128 v22; // [rsp+50h] [rbp-138h] BYREF
  __int128 v23; // [rsp+60h] [rbp-128h] BYREF
  PVOID Object[2]; // [rsp+70h] [rbp-118h]
  int v25; // [rsp+80h] [rbp-108h]
  _BYTE v26[24]; // [rsp+90h] [rbp-F8h] BYREF
  __int64 v27; // [rsp+A8h] [rbp-E0h]
  char v28; // [rsp+CCh] [rbp-BCh]
  int v29; // [rsp+D4h] [rbp-B4h]
  __int64 v30; // [rsp+D8h] [rbp-B0h]
  _BYTE v31[56]; // [rsp+110h] [rbp-78h] BYREF
  __int64 v32; // [rsp+148h] [rbp-40h]

  memset_0(v26, 0, 0x80uLL);
  v22 = 0LL;
  v23 = 0LL;
  *(_OWORD *)Object = 0LL;
  memset_0(v31, 0, 0x48uLL);
  result = MiMapViewOfSectionCommon(a2, a1, a3, a4, a6, (unsigned __int64)a5, a8, 0, a13, (__int64 *)&v22);
  if ( (int)result < 0 )
  {
    if ( (_QWORD)v22 )
      ++dword_140E302EC;
    else
      ++dword_140E302E8;
    return result;
  }
  MapExtendedParameters = MiCaptureAllocateMapExtendedParameters(Address, v31);
  if ( MapExtendedParameters < 0 )
  {
LABEL_12:
    if ( MapExtendedParameters >= 0 )
      goto LABEL_13;
    goto LABEL_22;
  }
  if ( (v32 & 0xFFFFFFFFFFFFFD9FuLL) == 0 )
  {
    MapExtendedParameters = MiMapParametersInitialize(
                              (unsigned int)v26,
                              Object[0],
                              Object[1],
                              v22,
                              *((__int64 *)&v22 + 1),
                              a7,
                              a8,
                              0LL,
                              a14);
    if ( MapExtendedParameters >= 0 )
    {
      MapExtendedParameters = MiMapExParametersInitialize(v26, &v22, v31);
      if ( MapExtendedParameters >= 0 )
      {
        v29 = a11;
        v30 = a12;
        MapExtendedParameters = MiMapViewOfSection(
                                  (__int64)Object[0],
                                  (__int64)v26,
                                  (unsigned __int64 *)&v22,
                                  0LL,
                                  &v23,
                                  1,
                                  0);
        v25 = MapExtendedParameters;
        if ( MapExtendedParameters >= 0 )
        {
          if ( (v28 & 4) != 0 )
            DbgkMapViewOfSection((_KPROCESS *)Object[1], (__int64)Object[0], (void *)v22, v20, (__int64)v21, 0, 0);
          if ( (*((_DWORD *)Object[0] + 14) & 0x20) == 0 && (BYTE8(v23) & 2) != 0 )
          {
            LOBYTE(v19) = a13;
            EtwTiLogMapExecView(Object[1], v19, v22, v27, a7, a8);
          }
          *a4 = v22;
          *a6 = v27;
          if ( a5 )
            *a5 = v23;
        }
      }
    }
    goto LABEL_12;
  }
  MapExtendedParameters = -1073741811;
LABEL_22:
  if ( (_QWORD)v22 )
    ++dword_140E302EC;
  else
    ++dword_140E302E8;
LABEL_13:
  if ( !a3 )
  {
    ObfDereferenceObjectWithTag(Object[0], 0x77566D4Du);
    ObfDereferenceObjectWithTag(Object[1], 0x77566D4Du);
  }
  return (unsigned int)MapExtendedParameters;
}
