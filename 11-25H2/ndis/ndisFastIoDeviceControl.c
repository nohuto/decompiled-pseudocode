/*
 * XREFs of ndisFastIoDeviceControl @ 0x14006DA20
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisKLoaderFastIoDeviceControl@@YAEPEAU_FILE_OBJECT@@EPEAXK1KKPEAU_IO_STATUS_BLOCK@@PEAU_DEVICE_OBJECT@@@Z @ 0x1400E3C14 (-ndisKLoaderFastIoDeviceControl@@YAEPEAU_FILE_OBJECT@@EPEAXK1KKPEAU_IO_STATUS_BLOCK@@PEAU_DEVICE.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1400EDF70 (RtlCopyVolatileMemory.c)
 *     ?ndisConvertIdentifier@@YAJPEAU_ETHREAD@@PEBU_NDIS_CONVERT_IDENTIFIER_IN@@PEAU_NDIS_CONVERT_IDENTIFIER_OUT@@@Z @ 0x140142290 (-ndisConvertIdentifier@@YAJPEAU_ETHREAD@@PEBU_NDIS_CONVERT_IDENTIFIER_IN@@PEAU_NDIS_CONVERT_IDEN.c)
 */

unsigned __int8 __fastcall ndisFastIoDeviceControl(
        struct _FILE_OBJECT *a1,
        unsigned __int8 a2,
        __int128 *a3,
        unsigned int a4,
        void *Src,
        unsigned int a6,
        unsigned int a7,
        struct _IO_STATUS_BLOCK *a8,
        struct _DEVICE_OBJECT *a9)
{
  __int128 *v9; // rdi
  void *v10; // rsi
  KPROCESSOR_MODE PreviousMode; // r15
  struct _NDIS_CONVERT_IDENTIFIER_OUT *v13; // r14
  int v14; // eax
  struct _DEVICE_OBJECT *v15; // [rsp+40h] [rbp-A8h]
  __int128 v16; // [rsp+58h] [rbp-90h] BYREF
  __int128 v17; // [rsp+68h] [rbp-80h]
  __int128 v18; // [rsp+78h] [rbp-70h]
  __int64 v19; // [rsp+88h] [rbp-60h]
  _OWORD v20[2]; // [rsp+90h] [rbp-58h] BYREF
  __int64 v21; // [rsp+B0h] [rbp-38h]

  v9 = a3;
  v10 = Src;
  if ( a9 == ndisLoaderDeviceObject )
    return ndisKLoaderFastIoDeviceControl(a1, a2, a3, a4, Src, a6, a7, a8, v15);
  if ( a9 != ndisDeviceObject || a7 != 1507511 )
    return 0;
  if ( a4 == 56 && a6 == 40 )
  {
    v16 = 0LL;
    v17 = 0LL;
    v18 = 0LL;
    v19 = 0LL;
    memset(v20, 0, sizeof(v20));
    v21 = 0LL;
    PreviousMode = ExGetPreviousMode();
    if ( PreviousMode )
    {
      if ( ((unsigned __int8)v9 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      v16 = *v9;
      v17 = v9[1];
      v18 = v9[2];
      v19 = *((_QWORD *)v9 + 6);
      v9 = &v16;
      v13 = (struct _NDIS_CONVERT_IDENTIFIER_OUT *)v20;
    }
    else
    {
      v13 = (struct _NDIS_CONVERT_IDENTIFIER_OUT *)Src;
    }
    v14 = ndisConvertIdentifier(KeGetCurrentThread(), (const struct _NDIS_CONVERT_IDENTIFIER_IN *)v9, v13);
    a8->Status = v14;
    if ( !v14 )
    {
      if ( PreviousMode )
      {
        if ( (unsigned __int64)Src >= MmUserProbeAddress )
          v10 = (void *)MmUserProbeAddress;
        RtlCopyVolatileMemory(v10, v13, 0x28uLL);
      }
      a8->Information = 40LL;
    }
  }
  else
  {
    a8->Status = -1073741811;
  }
  return 1;
}
