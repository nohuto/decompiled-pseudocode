/*
 * XREFs of MiMapViewOfSectionExCommon @ 0x1408FBCB8
 * Callers:
 *     MmMapViewOfSectionEx @ 0x140482368 (MmMapViewOfSectionEx.c)
 *     PspMapView @ 0x1404BD834 (PspMapView.c)
 *     NtMapViewOfSectionEx @ 0x1408F9CB0 (NtMapViewOfSectionEx.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     MiCaptureAllocateMapExtendedParameters @ 0x1408FB640 (MiCaptureAllocateMapExtendedParameters.c)
 *     MiMapExParametersInitialize @ 0x1408FB954 (MiMapExParametersInitialize.c)
 *     MiMapParametersInitialize @ 0x1408FBB20 (MiMapParametersInitialize.c)
 *     MiMapViewOfSectionCommon @ 0x1408FC770 (MiMapViewOfSectionCommon.c)
 *     MiMapViewOfSection @ 0x1408FC9F0 (MiMapViewOfSection.c)
 *     DbgkMapViewOfSection @ 0x1408FD08C (DbgkMapViewOfSection.c)
 *     EtwTiLogMapExecView @ 0x140A42770 (EtwTiLogMapExecView.c)
 */

__int64 __fastcall MiMapViewOfSectionExCommon(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        _QWORD *a4,
        _QWORD *a5,
        _QWORD *a6,
        int a7,
        int a8,
        unsigned __int64 *Address,
        unsigned int a10,
        int a11,
        __int64 a12,
        char a13,
        int a14)
{
  __int64 result; // rax
  int MapExtendedParameters; // ebx
  int v19; // edx
  __int128 v20; // [rsp+50h] [rbp-138h] BYREF
  __int128 v21; // [rsp+60h] [rbp-128h] BYREF
  PVOID Object[2]; // [rsp+70h] [rbp-118h]
  int v23; // [rsp+80h] [rbp-108h]
  _BYTE v24[24]; // [rsp+90h] [rbp-F8h] BYREF
  __int64 v25; // [rsp+A8h] [rbp-E0h]
  char v26; // [rsp+CCh] [rbp-BCh]
  int v27; // [rsp+D4h] [rbp-B4h]
  __int64 v28; // [rsp+D8h] [rbp-B0h]
  _QWORD v29[15]; // [rsp+110h] [rbp-78h] BYREF

  memset_0(v24, 0, 0x80uLL);
  v20 = 0LL;
  v21 = 0LL;
  *(_OWORD *)Object = 0LL;
  memset_0(v29, 0, 0x48uLL);
  result = MiMapViewOfSectionCommon(a2, a1, a3, a4, a6, a5, a8, 0LL, a13, &v20);
  if ( (int)result < 0 )
  {
    if ( (_QWORD)v20 )
      ++dword_140E2FF64;
    else
      ++dword_140E2FF60;
    return result;
  }
  MapExtendedParameters = MiCaptureAllocateMapExtendedParameters(Address, a10, a13, 102, v29);
  if ( MapExtendedParameters < 0 )
  {
LABEL_12:
    if ( MapExtendedParameters >= 0 )
      goto LABEL_13;
    goto LABEL_22;
  }
  if ( (v29[7] & 0xFFFFFFFFFFFFFD9FuLL) == 0 )
  {
    MapExtendedParameters = MiMapParametersInitialize(
                              (__int64)v24,
                              (__int64)Object[0],
                              (__int64)Object[1],
                              v20,
                              *((__int64 *)&v20 + 1),
                              a7,
                              a8,
                              0LL,
                              a14);
    if ( MapExtendedParameters >= 0 )
    {
      MapExtendedParameters = MiMapExParametersInitialize((__int64)v24, (__int64)&v20, (__int64)v29);
      if ( MapExtendedParameters >= 0 )
      {
        v27 = a11;
        v28 = a12;
        MapExtendedParameters = MiMapViewOfSection(
                                  Object[0],
                                  (unsigned int)v24,
                                  (unsigned int)&v20,
                                  0,
                                  (__int64)&v21,
                                  1,
                                  0);
        v23 = MapExtendedParameters;
        if ( MapExtendedParameters >= 0 )
        {
          if ( (v26 & 4) != 0 )
            DbgkMapViewOfSection(Object[1]);
          if ( (*((_DWORD *)Object[0] + 14) & 0x20) == 0 && (BYTE8(v21) & 2) != 0 )
          {
            LOBYTE(v19) = a13;
            EtwTiLogMapExecView(Object[1], v19, v20, v25, a7, a8);
          }
          *a4 = v20;
          *a6 = v25;
          if ( a5 )
            *a5 = v21;
        }
      }
    }
    goto LABEL_12;
  }
  MapExtendedParameters = -1073741811;
LABEL_22:
  if ( (_QWORD)v20 )
    ++dword_140E2FF64;
  else
    ++dword_140E2FF60;
LABEL_13:
  if ( !a3 )
  {
    ObfDereferenceObjectWithTag(Object[0], 0x77566D4Du);
    ObfDereferenceObjectWithTag(Object[1], 0x77566D4Du);
  }
  return (unsigned int)MapExtendedParameters;
}
